COMPILER = "gcc -fno-peephole2 `#GCC BUG 81300` -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Wno-incompatible-pointer-types -fno-strict-aliasing"

# given a string representing one term or "tap" in a prime, returns a pair of
# integers representing the weight and coefficient of that tap
#    "2 ^ y" -> [1, y]
#    "x * 2 ^ y" -> [x, y]
#    "x * y" -> [x*y,0]
#    "x" -> [x,0]
def parse_term(t) :
    if "*" not in t and "^" not in t:
        return [int(t),1]
    
    if "*" in t:
        a,b = t.split("*")
        if "^" not in b:
            return [int(a) * int(b),1]
    else:
        a,b = (1,t)
    
    b,e = b.split("^")
    if int(b) != 2:
        raise Exception("Could not parse term, power with base other than 2: %s" %t)
    return [int(a),int(e)]


# expects prime to be a string and expressed as sum/difference of products of
# two with small coefficients (e.g. '2^448 - 2^224 - 1', '2^255 - 19') 
def parse_prime(prime):
    terms = prime.replace("-", "+ -1 *").split("+")
    return list(map(parse_term, terms))

# check that the parsed prime makes sense
def sanity_check(p):
    return all([
        # are there at least 2 terms?
        len(p) > 1,
        # do all terms have 2 elements?
        all(map(lambda t:len(t) == 2, p)),
        # are terms are in order (most to least significant)?
        p == list(sorted(p,reverse=True,key=lambda t:t[1])),
        # are all the exponents positive and the coefficients nonzero?
        all(map(lambda t:t[0] != 0 and t[1] > 0, p)),
        # is second-most-significant term negative?
        p[1][0] < 0,
        # are any exponents repeated?
        len(set(map(lambda t:t[1], p))) == len(p)])


def num_bits(p):
    return p[0][1]

def get_params_montgomery(prime, bitwidth):
    p = parse_prime(prime)
    if not sanity_check(p):
        raise Exception("Parsed prime %s has unexpected format (original input: %s)" %(p,prime))
    sz = num_bits(p) / bitwidth 
    return {
            "modulus" : prime,
            "base" : str(bitwidth),
            "sz" : sz,
            "montgomery" : True,
            "operations" : ["fenz", "feadd", "femul", "feopp", "fesub"],
            "compiler" : COMPILER 
            }