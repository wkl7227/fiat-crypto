static void feopp(uint32_t out[8], const uint32_t in1[8]) {
  { const uint32_t x13 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x16; uint8_t/*bool*/ x17 = _subborrow_u32(0x0, 0x0, x2, &x16);
  { uint32_t x19; uint8_t/*bool*/ x20 = _subborrow_u32(x17, 0x0, x4, &x19);
  { uint32_t x22; uint8_t/*bool*/ x23 = _subborrow_u32(x20, 0x0, x6, &x22);
  { uint32_t x25; uint8_t/*bool*/ x26 = _subborrow_u32(x23, 0x0, x8, &x25);
  { uint32_t x28; uint8_t/*bool*/ x29 = _subborrow_u32(x26, 0x0, x10, &x28);
  { uint32_t x31; uint8_t/*bool*/ x32 = _subborrow_u32(x29, 0x0, x12, &x31);
  { uint32_t x34; uint8_t/*bool*/ x35 = _subborrow_u32(x32, 0x0, x14, &x34);
  { uint32_t x37; uint8_t/*bool*/ x38 = _subborrow_u32(x35, 0x0, x13, &x37);
  { uint32_t x39 = cmovznz32(x38, 0x0, 0xffffffff);
  { uint32_t x40 = (x39 & 0xffffffff);
  { uint32_t x42; uint8_t/*bool*/ x43 = _addcarryx_u32(0x0, x16, x40, &x42);
  { uint32_t x44 = (x39 & 0xffffffff);
  { uint32_t x46; uint8_t/*bool*/ x47 = _addcarryx_u32(x43, x19, x44, &x46);
  { uint32_t x48 = (x39 & 0xffffffff);
  { uint32_t x50; uint8_t/*bool*/ x51 = _addcarryx_u32(x47, x22, x48, &x50);
  { uint32_t x53; uint8_t/*bool*/ x54 = _addcarryx_u32(x51, x25, 0x0, &x53);
  { uint32_t x56; uint8_t/*bool*/ x57 = _addcarryx_u32(x54, x28, 0x0, &x56);
  { uint32_t x59; uint8_t/*bool*/ x60 = _addcarryx_u32(x57, x31, 0x0, &x59);
  { uint8_t/*bool*/ x61 = (1&(uint8_t/*bool*/)x39 & 0x1);
  { uint32_t x63; uint8_t/*bool*/ x64 = _addcarryx_u32(x60, x34, x61, &x63);
  { uint32_t x65 = (x39 & 0xffffffff);
  { uint32_t x67; uint8_t/*bool*/ _ = _addcarryx_u32(x64, x37, x65, &x67);
  out[0] = x42;
  out[1] = x46;
  out[2] = x50;
  out[3] = x53;
  out[4] = x56;
  out[5] = x59;
  out[6] = x63;
  out[7] = x67;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
