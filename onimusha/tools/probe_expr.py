#!/usr/bin/env python3
"""Insert a printf before instruction <addr>, logged when the printed values change (max <limit> lines):
probe_expr.py <func> <addr> <label> <limit> <fmt> <expr>...
Expressions are C++ over ctx/rdram, e.g. GPR_U32(ctx,2) or READ32(0x81ceb8u)."""
import sys, glob, os
func = int(sys.argv[1], 16); addr = int(sys.argv[2], 16); label = sys.argv[3]; limit = int(sys.argv[4])
fmt = sys.argv[5]; exprs = sys.argv[6:]
runner = os.path.expanduser('~/PS2Recomp/ps2xRuntime/src/runner')
p = glob.glob(f'{runner}/*_0x{func:x}.cpp')[0]; s = open(p).read()
if f'[px {label}]' in s:
    sys.exit(0)
vals = ''.join(f'(uint64_t)({e}),' for e in exprs)
n = len(exprs)
probe = ('    { static uint64_t last[%d]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits;'
         ' const uint64_t cur[%d]={%s}; bool chg=first; for(int i=0;i<%d;++i) chg = chg || cur[i]!=last[i];'
         ' if (chg && lines<%d) { ++lines; first=false; for(int i=0;i<%d;++i) last[i]=cur[i];'
         ' fprintf(stderr,"[px %s] hit=%%u " "%s" "\\n",hits%s); } }\n'
         % (n, n, vals, n, limit, n, label, fmt, ''.join(f',(unsigned long long)cur[{i}]' for i in range(n))))
anchor = f'    // 0x{addr:x}:'
i = s.index(anchor); s = s[:i] + probe + s[i:]
if '#include <cstdio>' not in s: s = '#include <cstdio>\n' + s
open(p, 'w').write(s); print('probed', os.path.basename(p), hex(addr))
