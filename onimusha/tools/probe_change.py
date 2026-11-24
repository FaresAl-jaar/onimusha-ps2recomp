#!/usr/bin/env python3
"""Log a guest memory word whenever it changes, checked before instruction <addr>:
probe_change.py <func> <addr> <label> <memaddr> [bytes=4]"""
import sys, glob, os
func = int(sys.argv[1], 16); addr = int(sys.argv[2], 16); label = sys.argv[3]
mem = int(sys.argv[4], 16); size = int(sys.argv[5]) if len(sys.argv) > 5 else 4
runner = os.path.expanduser('~/PS2Recomp/ps2xRuntime/src/runner')
p = glob.glob(f'{runner}/*_0x{func:x}.cpp')[0]; s = open(p).read()
if f'[chg {label}]' in s:
    sys.exit(0)
rd = {1: 'READ8', 2: 'READ16', 4: 'READ32'}[size]
anchor = f'    // 0x{addr:x}:'
probe = ('    { static uint64_t last=~0ull; static uint32_t n=0; const uint64_t v=(uint64_t)%s(0x%xu); ++n;'
         ' if (v!=last) { last=v; fprintf(stderr,"[chg %s] n=%%u val=0x%%llx a0=0x%%x ra=0x%%x\\n",n,(unsigned long long)v,GPR_U32(ctx,4),GPR_U32(ctx,31)); } }\n'
         % (rd, mem, label))
i = s.index(anchor); s = s[:i] + probe + s[i:]
if '#include <cstdio>' not in s: s = '#include <cstdio>\n' + s
open(p, 'w').write(s); print('probed', os.path.basename(p), hex(addr))
