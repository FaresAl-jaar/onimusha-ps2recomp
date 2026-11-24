import struct,csv,bisect,sys
d=open('/root/oni/SLUS_211.80','rb').read(); base=0x100000; off=0x100
W=lambda a: struct.unpack_from('<I',d,a-base+off)[0]
f=[(int(x['Start'],16),int(x['End'],16),x['Name']) for x in csv.DictReader(open('/root/oni/funcs_current.csv'))]; fs=[a for a,_,_ in f]
def fn(c):
    i=bisect.bisect_right(fs,c)-1; return f[i][2] if i>=0 and f[i][0]<=c<f[i][1] else '?'
t=int(sys.argv[1],16)
for a in range(base,base+0x58b880,4):
    w=W(a)
    if (w>>26) in (2,3) and (((a+4)&0xF0000000)|((w&0x3FFFFFF)<<2))==t: print('jal' if w>>26==3 else 'j',hex(a),fn(a))
    if w==t: print('ptr',hex(a),fn(a))
