import struct,capstone,sys,csv,bisect
d=open('/root/oni/SLUS_211.80','rb').read(); base=0x100000; off=0x100
W=lambda a: struct.unpack_from('<I',d,a-base+off)[0]
md=capstone.Cs(capstone.CS_ARCH_MIPS, capstone.CS_MODE_MIPS64+capstone.CS_MODE_LITTLE_ENDIAN)
import re
stubs={int(a,16):n for n,a in re.findall(r'"([A-Za-z_0-9]+)@0x([0-9A-F]+)"',open('/root/oni/config.toml').read())}
def dis(a,n):
    for k in range(n):
        x=W(a+k*4); ins=list(md.disasm(struct.pack('<I',x),a+k*4)); t=(ins[0].mnemonic+' '+ins[0].op_str) if ins else '??'
        if ins and ins[0].mnemonic in ('jal','j'):
            tg=int(ins[0].op_str,16)
            if tg in stubs: t+='   <'+stubs[tg]+'>'
        print('  ',hex(a+k*4),t)
dis(int(sys.argv[1],16),int(sys.argv[2]))
