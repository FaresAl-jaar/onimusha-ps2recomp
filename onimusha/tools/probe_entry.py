#!/usr/bin/env python3
"""Insert a rate-limited entry log into a generated function: probe_entry.py <hexaddr> <label>"""
import sys, glob, os
addr = int(sys.argv[1], 16); label = sys.argv[2]
runner = os.path.expanduser('~/PS2Recomp/ps2xRuntime/src/runner')
f = glob.glob(f'{runner}/*_0x{addr:x}.cpp')
if not f:
    sys.exit(f'no generated function at 0x{addr:x}')
p = f[0]; s = open(p).read()
if f'[probe {label}]' in s:
    sys.exit(0)
anchor = '#endif\n'
probe = ('    { static uint32_t n=0; ++n; if (n<=5 || (n%%600)==0) fprintf(stderr,"[probe %s] call %%u a0=0x%%x ra=0x%%x\\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }\n' % label)
fs = s.index('\nvoid sub_'); i = s.index(anchor, fs) + len(anchor); s = s[:i] + probe + s[i:]
if '#include <cstdio>' not in s: s = '#include <cstdio>\n' + s
open(p, 'w').write(s); print('probed', os.path.basename(p))
