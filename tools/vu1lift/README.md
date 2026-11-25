# vu1lift

Ahead of time translation of VU1 microprograms to C++.

`vu1lift.py` and `vu1dis.py` come from Gitaroo Man Native (MIT, see LICENSE.gitaroo). `lift_onimusha.py` lifts every micro image a `PS2X_VU1_CENSUS` run recorded:

    PS2X_VU1_CENSUS=/tmp/census ./ps2EntryRunner SLUS_211.80
    python3 tools/vu1lift/lift_onimusha.py --census /tmp/census

The output is `ps2xRuntime/src/lib/vu/generated/ps2_vu1_lifted_onimusha.inc`. At run time a lifted image runs whenever the loaded micro code equals it; anything else stays on the interpreter. `PS2X_VU1_VERIFY=1` runs the lifted code and the interpreter side by side and reports every difference, `PS2X_VU1_LIFT=0` turns the lifted code off.
