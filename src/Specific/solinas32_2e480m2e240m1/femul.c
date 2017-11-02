#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "femul.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline femul(uint64_t* out, uint64_t x32, uint64_t x33, uint64_t x31, uint64_t x29, uint64_t x27, uint64_t x25, uint64_t x23, uint64_t x21, uint64_t x19, uint64_t x17, uint64_t x15, uint64_t x13, uint64_t x11, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x62, uint64_t x63, uint64_t x61, uint64_t x59, uint64_t x57, uint64_t x55, uint64_t x53, uint64_t x51, uint64_t x49, uint64_t x47, uint64_t x45, uint64_t x43, uint64_t x41, uint64_t x39, uint64_t x37, uint64_t x35)
{  ℤ x64 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) (((((uint64_t)x19 + x32) *ℤ ((uint64_t)x49 + x62)) -ℤ ((uint64_t)x19 * x49)), ((((uint64_t)x19 * x62) +ℤ ((uint64_t)x32 * x49)) +ℤ ((uint64_t)x32 * x62)));
{  ℤ x65 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x17 + x33) *ℤ ((uint64_t)x49 + x62)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x47 + x63))) -ℤ (((uint64_t)x17 * x49) +ℤ ((uint64_t)x19 * x47))), (((((uint64_t)x17 * x62) +ℤ ((uint64_t)x19 * x63)) +ℤ (((uint64_t)x33 * x49) +ℤ ((uint64_t)x32 * x47))) +ℤ (((uint64_t)x33 * x62) +ℤ ((uint64_t)x32 * x63))));
{  ℤ x66 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x15 + x31) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x47 + x63)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x45 + x61)))) -ℤ (((uint64_t)x15 * x49) +ℤ (((uint64_t)x17 * x47) +ℤ ((uint64_t)x19 * x45)))), (((((uint64_t)x15 * x62) +ℤ (((uint64_t)x17 * x63) +ℤ ((uint64_t)x19 * x61))) +ℤ (((uint64_t)x31 * x49) +ℤ (((uint64_t)x33 * x47) +ℤ ((uint64_t)x32 * x45)))) +ℤ (((uint64_t)x31 * x62) +ℤ (((uint64_t)x33 * x63) +ℤ ((uint64_t)x32 * x61)))));
{  ℤ x67 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x13 + x29) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x45 + x61)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x43 + x59))))) -ℤ (((uint64_t)x13 * x49) +ℤ (((uint64_t)x15 * x47) +ℤ (((uint64_t)x17 * x45) +ℤ ((uint64_t)x19 * x43))))), (((((uint64_t)x13 * x62) +ℤ (((uint64_t)x15 * x63) +ℤ (((uint64_t)x17 * x61) +ℤ ((uint64_t)x19 * x59)))) +ℤ (((uint64_t)x29 * x49) +ℤ (((uint64_t)x31 * x47) +ℤ (((uint64_t)x33 * x45) +ℤ ((uint64_t)x32 * x43))))) +ℤ (((uint64_t)x29 * x62) +ℤ (((uint64_t)x31 * x63) +ℤ (((uint64_t)x33 * x61) +ℤ ((uint64_t)x32 * x59))))));
{  ℤ x68 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x11 + x27) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x43 + x59)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x41 + x57)))))) -ℤ (((uint64_t)x11 * x49) +ℤ (((uint64_t)x13 * x47) +ℤ (((uint64_t)x15 * x45) +ℤ (((uint64_t)x17 * x43) +ℤ ((uint64_t)x19 * x41)))))), (((((uint64_t)x11 * x62) +ℤ (((uint64_t)x13 * x63) +ℤ (((uint64_t)x15 * x61) +ℤ (((uint64_t)x17 * x59) +ℤ ((uint64_t)x19 * x57))))) +ℤ (((uint64_t)x27 * x49) +ℤ (((uint64_t)x29 * x47) +ℤ (((uint64_t)x31 * x45) +ℤ (((uint64_t)x33 * x43) +ℤ ((uint64_t)x32 * x41)))))) +ℤ (((uint64_t)x27 * x62) +ℤ (((uint64_t)x29 * x63) +ℤ (((uint64_t)x31 * x61) +ℤ (((uint64_t)x33 * x59) +ℤ ((uint64_t)x32 * x57)))))));
{  ℤ x69 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x9 + x25) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x41 + x57)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x39 + x55))))))) -ℤ (((uint64_t)x9 * x49) +ℤ (((uint64_t)x11 * x47) +ℤ (((uint64_t)x13 * x45) +ℤ (((uint64_t)x15 * x43) +ℤ (((uint64_t)x17 * x41) +ℤ ((uint64_t)x19 * x39))))))), (((((uint64_t)x9 * x62) +ℤ (((uint64_t)x11 * x63) +ℤ (((uint64_t)x13 * x61) +ℤ (((uint64_t)x15 * x59) +ℤ (((uint64_t)x17 * x57) +ℤ ((uint64_t)x19 * x55)))))) +ℤ (((uint64_t)x25 * x49) +ℤ (((uint64_t)x27 * x47) +ℤ (((uint64_t)x29 * x45) +ℤ (((uint64_t)x31 * x43) +ℤ (((uint64_t)x33 * x41) +ℤ ((uint64_t)x32 * x39))))))) +ℤ (((uint64_t)x25 * x62) +ℤ (((uint64_t)x27 * x63) +ℤ (((uint64_t)x29 * x61) +ℤ (((uint64_t)x31 * x59) +ℤ (((uint64_t)x33 * x57) +ℤ ((uint64_t)x32 * x55))))))));
{  ℤ x70 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x7 + x23) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x39 + x55)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x37 + x53)))))))) -ℤ (((uint64_t)x7 * x49) +ℤ (((uint64_t)x9 * x47) +ℤ (((uint64_t)x11 * x45) +ℤ (((uint64_t)x13 * x43) +ℤ (((uint64_t)x15 * x41) +ℤ (((uint64_t)x17 * x39) +ℤ ((uint64_t)x19 * x37)))))))), (((((uint64_t)x7 * x62) +ℤ (((uint64_t)x9 * x63) +ℤ (((uint64_t)x11 * x61) +ℤ (((uint64_t)x13 * x59) +ℤ (((uint64_t)x15 * x57) +ℤ (((uint64_t)x17 * x55) +ℤ ((uint64_t)x19 * x53))))))) +ℤ (((uint64_t)x23 * x49) +ℤ (((uint64_t)x25 * x47) +ℤ (((uint64_t)x27 * x45) +ℤ (((uint64_t)x29 * x43) +ℤ (((uint64_t)x31 * x41) +ℤ (((uint64_t)x33 * x39) +ℤ ((uint64_t)x32 * x37)))))))) +ℤ (((uint64_t)x23 * x62) +ℤ (((uint64_t)x25 * x63) +ℤ (((uint64_t)x27 * x61) +ℤ (((uint64_t)x29 * x59) +ℤ (((uint64_t)x31 * x57) +ℤ (((uint64_t)x33 * x55) +ℤ ((uint64_t)x32 * x53)))))))));
{  ℤ x71 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x49 + x62)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x17 + x33) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x19 + x32) *ℤ ((uint64_t)x35 + x51))))))))) -ℤ (((uint64_t)x5 * x49) +ℤ (((uint64_t)x7 * x47) +ℤ (((uint64_t)x9 * x45) +ℤ (((uint64_t)x11 * x43) +ℤ (((uint64_t)x13 * x41) +ℤ (((uint64_t)x15 * x39) +ℤ (((uint64_t)x17 * x37) +ℤ ((uint64_t)x19 * x35))))))))), (((((uint64_t)x5 * x62) +ℤ (((uint64_t)x7 * x63) +ℤ (((uint64_t)x9 * x61) +ℤ (((uint64_t)x11 * x59) +ℤ (((uint64_t)x13 * x57) +ℤ (((uint64_t)x15 * x55) +ℤ (((uint64_t)x17 * x53) +ℤ ((uint64_t)x19 * x51)))))))) +ℤ (((uint64_t)x21 * x49) +ℤ (((uint64_t)x23 * x47) +ℤ (((uint64_t)x25 * x45) +ℤ (((uint64_t)x27 * x43) +ℤ (((uint64_t)x29 * x41) +ℤ (((uint64_t)x31 * x39) +ℤ (((uint64_t)x33 * x37) +ℤ ((uint64_t)x32 * x35))))))))) +ℤ (((uint64_t)x21 * x62) +ℤ (((uint64_t)x23 * x63) +ℤ (((uint64_t)x25 * x61) +ℤ (((uint64_t)x27 * x59) +ℤ (((uint64_t)x29 * x57) +ℤ (((uint64_t)x31 * x55) +ℤ (((uint64_t)x33 * x53) +ℤ ((uint64_t)x32 * x51))))))))));
{  ℤ x72 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x47 + x63)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x15 + x31) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x17 + x33) *ℤ ((uint64_t)x35 + x51)))))))) -ℤ (((uint64_t)x5 * x47) +ℤ (((uint64_t)x7 * x45) +ℤ (((uint64_t)x9 * x43) +ℤ (((uint64_t)x11 * x41) +ℤ (((uint64_t)x13 * x39) +ℤ (((uint64_t)x15 * x37) +ℤ ((uint64_t)x17 * x35)))))))), (((((uint64_t)x5 * x63) +ℤ (((uint64_t)x7 * x61) +ℤ (((uint64_t)x9 * x59) +ℤ (((uint64_t)x11 * x57) +ℤ (((uint64_t)x13 * x55) +ℤ (((uint64_t)x15 * x53) +ℤ ((uint64_t)x17 * x51))))))) +ℤ (((uint64_t)x21 * x47) +ℤ (((uint64_t)x23 * x45) +ℤ (((uint64_t)x25 * x43) +ℤ (((uint64_t)x27 * x41) +ℤ (((uint64_t)x29 * x39) +ℤ (((uint64_t)x31 * x37) +ℤ ((uint64_t)x33 * x35)))))))) +ℤ (((uint64_t)x21 * x63) +ℤ (((uint64_t)x23 * x61) +ℤ (((uint64_t)x25 * x59) +ℤ (((uint64_t)x27 * x57) +ℤ (((uint64_t)x29 * x55) +ℤ (((uint64_t)x31 * x53) +ℤ ((uint64_t)x33 * x51)))))))));
{  ℤ x73 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x45 + x61)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x13 + x29) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x15 + x31) *ℤ ((uint64_t)x35 + x51))))))) -ℤ (((uint64_t)x5 * x45) +ℤ (((uint64_t)x7 * x43) +ℤ (((uint64_t)x9 * x41) +ℤ (((uint64_t)x11 * x39) +ℤ (((uint64_t)x13 * x37) +ℤ ((uint64_t)x15 * x35))))))), (((((uint64_t)x5 * x61) +ℤ (((uint64_t)x7 * x59) +ℤ (((uint64_t)x9 * x57) +ℤ (((uint64_t)x11 * x55) +ℤ (((uint64_t)x13 * x53) +ℤ ((uint64_t)x15 * x51)))))) +ℤ (((uint64_t)x21 * x45) +ℤ (((uint64_t)x23 * x43) +ℤ (((uint64_t)x25 * x41) +ℤ (((uint64_t)x27 * x39) +ℤ (((uint64_t)x29 * x37) +ℤ ((uint64_t)x31 * x35))))))) +ℤ (((uint64_t)x21 * x61) +ℤ (((uint64_t)x23 * x59) +ℤ (((uint64_t)x25 * x57) +ℤ (((uint64_t)x27 * x55) +ℤ (((uint64_t)x29 * x53) +ℤ ((uint64_t)x31 * x51))))))));
{  ℤ x74 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x43 + x59)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x11 + x27) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x13 + x29) *ℤ ((uint64_t)x35 + x51)))))) -ℤ (((uint64_t)x5 * x43) +ℤ (((uint64_t)x7 * x41) +ℤ (((uint64_t)x9 * x39) +ℤ (((uint64_t)x11 * x37) +ℤ ((uint64_t)x13 * x35)))))), (((((uint64_t)x5 * x59) +ℤ (((uint64_t)x7 * x57) +ℤ (((uint64_t)x9 * x55) +ℤ (((uint64_t)x11 * x53) +ℤ ((uint64_t)x13 * x51))))) +ℤ (((uint64_t)x21 * x43) +ℤ (((uint64_t)x23 * x41) +ℤ (((uint64_t)x25 * x39) +ℤ (((uint64_t)x27 * x37) +ℤ ((uint64_t)x29 * x35)))))) +ℤ (((uint64_t)x21 * x59) +ℤ (((uint64_t)x23 * x57) +ℤ (((uint64_t)x25 * x55) +ℤ (((uint64_t)x27 * x53) +ℤ ((uint64_t)x29 * x51)))))));
{  ℤ x75 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x41 + x57)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x9 + x25) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x11 + x27) *ℤ ((uint64_t)x35 + x51))))) -ℤ (((uint64_t)x5 * x41) +ℤ (((uint64_t)x7 * x39) +ℤ (((uint64_t)x9 * x37) +ℤ ((uint64_t)x11 * x35))))), (((((uint64_t)x5 * x57) +ℤ (((uint64_t)x7 * x55) +ℤ (((uint64_t)x9 * x53) +ℤ ((uint64_t)x11 * x51)))) +ℤ (((uint64_t)x21 * x41) +ℤ (((uint64_t)x23 * x39) +ℤ (((uint64_t)x25 * x37) +ℤ ((uint64_t)x27 * x35))))) +ℤ (((uint64_t)x21 * x57) +ℤ (((uint64_t)x23 * x55) +ℤ (((uint64_t)x25 * x53) +ℤ ((uint64_t)x27 * x51))))));
{  ℤ x76 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x39 + x55)) +ℤ ((((uint64_t)x7 + x23) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x9 + x25) *ℤ ((uint64_t)x35 + x51)))) -ℤ (((uint64_t)x5 * x39) +ℤ (((uint64_t)x7 * x37) +ℤ ((uint64_t)x9 * x35)))), (((((uint64_t)x5 * x55) +ℤ (((uint64_t)x7 * x53) +ℤ ((uint64_t)x9 * x51))) +ℤ (((uint64_t)x21 * x39) +ℤ (((uint64_t)x23 * x37) +ℤ ((uint64_t)x25 * x35)))) +ℤ (((uint64_t)x21 * x55) +ℤ (((uint64_t)x23 * x53) +ℤ ((uint64_t)x25 * x51)))));
{  ℤ x77 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x5 + x21) *ℤ ((uint64_t)x37 + x53)) +ℤ (((uint64_t)x7 + x23) *ℤ ((uint64_t)x35 + x51))) -ℤ (((uint64_t)x5 * x37) +ℤ ((uint64_t)x7 * x35))), (((((uint64_t)x5 * x53) +ℤ ((uint64_t)x7 * x51)) +ℤ (((uint64_t)x21 * x37) +ℤ ((uint64_t)x23 * x35))) +ℤ (((uint64_t)x21 * x53) +ℤ ((uint64_t)x23 * x51))));
{  ℤ x78 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) (((((uint64_t)x5 + x21) *ℤ ((uint64_t)x35 + x51)) -ℤ ((uint64_t)x5 * x35)), ((((uint64_t)x5 * x51) +ℤ ((uint64_t)x21 * x35)) +ℤ ((uint64_t)x21 * x51)));
{  ℤ x79 = (((((uint64_t)x19 * x49) +ℤ ((uint64_t)x32 * x62)) +ℤ x72) +ℤ x64);
{  ℤ x80 = ((((((uint64_t)x17 * x49) +ℤ ((uint64_t)x19 * x47)) +ℤ (((uint64_t)x33 * x62) +ℤ ((uint64_t)x32 * x63))) +ℤ x73) +ℤ x65);
{  ℤ x81 = ((((((uint64_t)x15 * x49) +ℤ (((uint64_t)x17 * x47) +ℤ ((uint64_t)x19 * x45))) +ℤ (((uint64_t)x31 * x62) +ℤ (((uint64_t)x33 * x63) +ℤ ((uint64_t)x32 * x61)))) +ℤ x74) +ℤ x66);
{  ℤ x82 = ((((((uint64_t)x13 * x49) +ℤ (((uint64_t)x15 * x47) +ℤ (((uint64_t)x17 * x45) +ℤ ((uint64_t)x19 * x43)))) +ℤ (((uint64_t)x29 * x62) +ℤ (((uint64_t)x31 * x63) +ℤ (((uint64_t)x33 * x61) +ℤ ((uint64_t)x32 * x59))))) +ℤ x75) +ℤ x67);
{  ℤ x83 = ((((((uint64_t)x11 * x49) +ℤ (((uint64_t)x13 * x47) +ℤ (((uint64_t)x15 * x45) +ℤ (((uint64_t)x17 * x43) +ℤ ((uint64_t)x19 * x41))))) +ℤ (((uint64_t)x27 * x62) +ℤ (((uint64_t)x29 * x63) +ℤ (((uint64_t)x31 * x61) +ℤ (((uint64_t)x33 * x59) +ℤ ((uint64_t)x32 * x57)))))) +ℤ x76) +ℤ x68);
{  ℤ x84 = ((((((uint64_t)x9 * x49) +ℤ (((uint64_t)x11 * x47) +ℤ (((uint64_t)x13 * x45) +ℤ (((uint64_t)x15 * x43) +ℤ (((uint64_t)x17 * x41) +ℤ ((uint64_t)x19 * x39)))))) +ℤ (((uint64_t)x25 * x62) +ℤ (((uint64_t)x27 * x63) +ℤ (((uint64_t)x29 * x61) +ℤ (((uint64_t)x31 * x59) +ℤ (((uint64_t)x33 * x57) +ℤ ((uint64_t)x32 * x55))))))) +ℤ x77) +ℤ x69);
{  ℤ x85 = ((((((uint64_t)x7 * x49) +ℤ (((uint64_t)x9 * x47) +ℤ (((uint64_t)x11 * x45) +ℤ (((uint64_t)x13 * x43) +ℤ (((uint64_t)x15 * x41) +ℤ (((uint64_t)x17 * x39) +ℤ ((uint64_t)x19 * x37))))))) +ℤ (((uint64_t)x23 * x62) +ℤ (((uint64_t)x25 * x63) +ℤ (((uint64_t)x27 * x61) +ℤ (((uint64_t)x29 * x59) +ℤ (((uint64_t)x31 * x57) +ℤ (((uint64_t)x33 * x55) +ℤ ((uint64_t)x32 * x53)))))))) +ℤ x78) +ℤ x70);
{  ℤ x86 = ((((uint64_t)x5 * x49) +ℤ (((uint64_t)x7 * x47) +ℤ (((uint64_t)x9 * x45) +ℤ (((uint64_t)x11 * x43) +ℤ (((uint64_t)x13 * x41) +ℤ (((uint64_t)x15 * x39) +ℤ (((uint64_t)x17 * x37) +ℤ ((uint64_t)x19 * x35)))))))) +ℤ (((uint64_t)x21 * x62) +ℤ (((uint64_t)x23 * x63) +ℤ (((uint64_t)x25 * x61) +ℤ (((uint64_t)x27 * x59) +ℤ (((uint64_t)x29 * x57) +ℤ (((uint64_t)x31 * x55) +ℤ (((uint64_t)x33 * x53) +ℤ ((uint64_t)x32 * x51)))))))));
{  ℤ x87 = (((((uint64_t)x5 * x47) +ℤ (((uint64_t)x7 * x45) +ℤ (((uint64_t)x9 * x43) +ℤ (((uint64_t)x11 * x41) +ℤ (((uint64_t)x13 * x39) +ℤ (((uint64_t)x15 * x37) +ℤ ((uint64_t)x17 * x35))))))) +ℤ (((uint64_t)x21 * x63) +ℤ (((uint64_t)x23 * x61) +ℤ (((uint64_t)x25 * x59) +ℤ (((uint64_t)x27 * x57) +ℤ (((uint64_t)x29 * x55) +ℤ (((uint64_t)x31 * x53) +ℤ ((uint64_t)x33 * x51)))))))) +ℤ x64);
{  ℤ x88 = (((((uint64_t)x5 * x45) +ℤ (((uint64_t)x7 * x43) +ℤ (((uint64_t)x9 * x41) +ℤ (((uint64_t)x11 * x39) +ℤ (((uint64_t)x13 * x37) +ℤ ((uint64_t)x15 * x35)))))) +ℤ (((uint64_t)x21 * x61) +ℤ (((uint64_t)x23 * x59) +ℤ (((uint64_t)x25 * x57) +ℤ (((uint64_t)x27 * x55) +ℤ (((uint64_t)x29 * x53) +ℤ ((uint64_t)x31 * x51))))))) +ℤ x65);
{  ℤ x89 = (((((uint64_t)x5 * x43) +ℤ (((uint64_t)x7 * x41) +ℤ (((uint64_t)x9 * x39) +ℤ (((uint64_t)x11 * x37) +ℤ ((uint64_t)x13 * x35))))) +ℤ (((uint64_t)x21 * x59) +ℤ (((uint64_t)x23 * x57) +ℤ (((uint64_t)x25 * x55) +ℤ (((uint64_t)x27 * x53) +ℤ ((uint64_t)x29 * x51)))))) +ℤ x66);
{  ℤ x90 = (((((uint64_t)x5 * x41) +ℤ (((uint64_t)x7 * x39) +ℤ (((uint64_t)x9 * x37) +ℤ ((uint64_t)x11 * x35)))) +ℤ (((uint64_t)x21 * x57) +ℤ (((uint64_t)x23 * x55) +ℤ (((uint64_t)x25 * x53) +ℤ ((uint64_t)x27 * x51))))) +ℤ x67);
{  ℤ x91 = (((((uint64_t)x5 * x39) +ℤ (((uint64_t)x7 * x37) +ℤ ((uint64_t)x9 * x35))) +ℤ (((uint64_t)x21 * x55) +ℤ (((uint64_t)x23 * x53) +ℤ ((uint64_t)x25 * x51)))) +ℤ x68);
{  ℤ x92 = (((((uint64_t)x5 * x37) +ℤ ((uint64_t)x7 * x35)) +ℤ (((uint64_t)x21 * x53) +ℤ ((uint64_t)x23 * x51))) +ℤ x69);
{  ℤ x93 = ((((uint64_t)x5 * x35) +ℤ ((uint64_t)x21 * x51)) +ℤ x70);
{  uint64_t x94 = (x86 >> 0x1e);
{  uint32_t x95 = (x86 & 0x3fffffff);
{  uint64_t x96 = (x71 >> 0x1e);
{  uint32_t x97 = (x71 & 0x3fffffff);
{  ℤ x98 = ((0x40000000 *ℤ x96) +ℤ x97);
{  uint64_t x99 = (x98 >> 0x1e);
{  uint32_t x100 = (x98 & 0x3fffffff);
{  ℤ x101 = ((x94 +ℤ x85) +ℤ x99);
{  uint64_t x102 = (x101 >> 0x1e);
{  uint32_t x103 = (x101 & 0x3fffffff);
{  ℤ x104 = (x93 +ℤ x99);
{  uint64_t x105 = (x104 >> 0x1e);
{  uint32_t x106 = (x104 & 0x3fffffff);
{  ℤ x107 = (x102 +ℤ x84);
{  uint64_t x108 = (x107 >> 0x1e);
{  uint32_t x109 = (x107 & 0x3fffffff);
{  ℤ x110 = (x105 +ℤ x92);
{  uint64_t x111 = (x110 >> 0x1e);
{  uint32_t x112 = (x110 & 0x3fffffff);
{  ℤ x113 = (x108 +ℤ x83);
{  uint64_t x114 = (x113 >> 0x1e);
{  uint32_t x115 = (x113 & 0x3fffffff);
{  ℤ x116 = (x111 +ℤ x91);
{  uint64_t x117 = (x116 >> 0x1e);
{  uint32_t x118 = (x116 & 0x3fffffff);
{  ℤ x119 = (x114 +ℤ x82);
{  uint64_t x120 = (x119 >> 0x1e);
{  uint32_t x121 = (x119 & 0x3fffffff);
{  ℤ x122 = (x117 +ℤ x90);
{  uint64_t x123 = (x122 >> 0x1e);
{  uint32_t x124 = (x122 & 0x3fffffff);
{  ℤ x125 = (x120 +ℤ x81);
{  uint64_t x126 = (x125 >> 0x1e);
{  uint32_t x127 = (x125 & 0x3fffffff);
{  ℤ x128 = (x123 +ℤ x89);
{  uint64_t x129 = (x128 >> 0x1e);
{  uint32_t x130 = (x128 & 0x3fffffff);
{  ℤ x131 = (x126 +ℤ x80);
{  uint64_t x132 = (x131 >> 0x1e);
{  uint32_t x133 = (x131 & 0x3fffffff);
{  ℤ x134 = (x129 +ℤ x88);
{  uint64_t x135 = (x134 >> 0x1e);
{  uint32_t x136 = (x134 & 0x3fffffff);
{  ℤ x137 = (x132 +ℤ x79);
{  uint64_t x138 = (x137 >> 0x1e);
{  uint32_t x139 = (x137 & 0x3fffffff);
{  ℤ x140 = (x135 +ℤ x87);
{  uint64_t x141 = (x140 >> 0x1e);
{  uint32_t x142 = (x140 & 0x3fffffff);
{  uint64_t x143 = (x138 + x100);
{  uint32_t x144 = (uint32_t) (x143 >> 0x1e);
{  uint32_t x145 = ((uint32_t)x143 & 0x3fffffff);
{  uint64_t x146 = (x141 + x95);
{  uint32_t x147 = (uint32_t) (x146 >> 0x1e);
{  uint32_t x148 = ((uint32_t)x146 & 0x3fffffff);
{  uint64_t x149 = (((uint64_t)0x40000000 * x144) + x145);
{  uint32_t x150 = (uint32_t) (x149 >> 0x1e);
{  uint32_t x151 = ((uint32_t)x149 & 0x3fffffff);
{  uint32_t x152 = ((x147 + x103) + x150);
{  uint32_t x153 = (x152 >> 0x1e);
{  uint32_t x154 = (x152 & 0x3fffffff);
{  uint32_t x155 = (x106 + x150);
{  uint32_t x156 = (x155 >> 0x1e);
{  uint32_t x157 = (x155 & 0x3fffffff);
out[0] = x151;
out[1] = x139;
out[2] = x133;
out[3] = x127;
out[4] = x121;
out[5] = x115;
out[6] = x153 + x109;
out[7] = x154;
out[8] = x148;
out[9] = x142;
out[10] = x136;
out[11] = x130;
out[12] = x124;
out[13] = x118;
out[14] = x156 + x112;
out[15] = x157;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[16];