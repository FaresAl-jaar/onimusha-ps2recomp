# Lists strings and jal targets referenced by the functions given (hex addresses).
import struct, sys, csv, bisect
d = open('/root/oni/SLUS_211.80', 'rb').read(); base = 0x100000; off = 0x100
W = lambda a: struct.unpack_from('<I', d, a - base + off)[0]
starts = sorted(int(r[1],16) if r[1].startswith('0x') else int(r[1]) for r in csv.reader(open('/root/oni/funcs_current.csv')) if len(r)>1 and r[1][:2]=='0x')
def s_at(a):
    o = a - base + off
    if o < 0 or o >= len(d): return None
    e = d.find(b'\0', o, o + 120)
    t = d[o:e] if e > o else b''
    return t.decode('latin1') if len(t) >= 4 and all(32 <= c < 127 or c in (9,10) for c in t) else None
for f in sys.argv[1:]:
    a = int(f, 16); i = bisect.bisect_right(starts, a); end = starts[i] if i < len(starts) else a + 0x800
    luis = {}; strs = []; calls = []
    for p in range(a, min(end, a + 0x2000), 4):
        w = W(p); op = w >> 26
        if op == 0x0F: luis[(w >> 16) & 31] = (w & 0xFFFF) << 16; continue
        if op == 3: calls.append(hex(((w & 0x3FFFFFF) << 2) | (p & 0xF0000000)))
        if op in (0x09, 0x0D):
            rs = (w >> 21) & 31; imm = w & 0xFFFF
            if rs in luis:
                v = (luis[rs] + (imm - 0x10000 if (op == 9 and imm & 0x8000) else imm)) & 0xFFFFFFFF
                t = s_at(v)
                if t: strs.append(t[:70])
    print(hex(a), 'size', hex(end - a), 'calls', ' '.join(dict.fromkeys(calls)), '|', ' || '.join(dict.fromkeys(strs))[:600])
