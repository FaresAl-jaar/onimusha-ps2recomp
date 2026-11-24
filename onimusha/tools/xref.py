# Finds lui/offset pairs that address a target byte range in the EE executable.
import struct, sys, capstone
d = open('/root/oni/SLUS_211.80', 'rb').read(); base = 0x100000; off = 0x100
lo = int(sys.argv[1], 16); hi = int(sys.argv[2], 16) if len(sys.argv) > 2 else lo + 1
md = capstone.Cs(capstone.CS_ARCH_MIPS, capstone.CS_MODE_MIPS64 + capstone.CS_MODE_LITTLE_ENDIAN)
n = (len(d) - off) // 4
words = struct.unpack_from('<%dI' % n, d, off)
luis = {}
for i, w in enumerate(words):
    op = w >> 26
    if op == 0x0F:  # lui
        luis[(w >> 16) & 31] = ((w & 0xFFFF) << 16, i)
        continue
    rs = (w >> 21) & 31; imm = w & 0xFFFF; simm = imm - 0x10000 if imm & 0x8000 else imm
    if op in (0x20,0x21,0x23,0x24,0x25,0x27,0x37,0x28,0x29,0x2B,0x3F,0x1E,0x1F,0x09,0x31,0x39):
        if rs in luis and i - luis[rs][1] < 24:
            addr = (luis[rs][0] + simm) & 0xFFFFFFFF
            if lo <= addr < hi:
                a = base + i * 4
                ins = list(md.disasm(struct.pack('<I', w), a))
                print(hex(a), ins[0].mnemonic + ' ' + ins[0].op_str if ins else '??', '->', hex(addr))
    # a write to rs of anything other than lui invalidates it
    rt = (w >> 16) & 31
    if op in (0x09, 0x0D, 0x0C, 0x0E, 0x19) and rt in luis and op != 0x09:
        luis.pop(rt, None)
