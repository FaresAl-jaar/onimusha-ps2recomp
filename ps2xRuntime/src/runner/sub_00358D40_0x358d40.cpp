#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358D40
// Address: 0x358d40 - 0x3590a8
void sub_00358D40_0x358d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358D40_0x358d40");
#endif

    switch (ctx->pc) {
        case 0x358d40u: goto label_358d40;
        case 0x358d44u: goto label_358d44;
        case 0x358d48u: goto label_358d48;
        case 0x358d4cu: goto label_358d4c;
        case 0x358d50u: goto label_358d50;
        case 0x358d54u: goto label_358d54;
        case 0x358d58u: goto label_358d58;
        case 0x358d5cu: goto label_358d5c;
        case 0x358d60u: goto label_358d60;
        case 0x358d64u: goto label_358d64;
        case 0x358d68u: goto label_358d68;
        case 0x358d6cu: goto label_358d6c;
        case 0x358d70u: goto label_358d70;
        case 0x358d74u: goto label_358d74;
        case 0x358d78u: goto label_358d78;
        case 0x358d7cu: goto label_358d7c;
        case 0x358d80u: goto label_358d80;
        case 0x358d84u: goto label_358d84;
        case 0x358d88u: goto label_358d88;
        case 0x358d8cu: goto label_358d8c;
        case 0x358d90u: goto label_358d90;
        case 0x358d94u: goto label_358d94;
        case 0x358d98u: goto label_358d98;
        case 0x358d9cu: goto label_358d9c;
        case 0x358da0u: goto label_358da0;
        case 0x358da4u: goto label_358da4;
        case 0x358da8u: goto label_358da8;
        case 0x358dacu: goto label_358dac;
        case 0x358db0u: goto label_358db0;
        case 0x358db4u: goto label_358db4;
        case 0x358db8u: goto label_358db8;
        case 0x358dbcu: goto label_358dbc;
        case 0x358dc0u: goto label_358dc0;
        case 0x358dc4u: goto label_358dc4;
        case 0x358dc8u: goto label_358dc8;
        case 0x358dccu: goto label_358dcc;
        case 0x358dd0u: goto label_358dd0;
        case 0x358dd4u: goto label_358dd4;
        case 0x358dd8u: goto label_358dd8;
        case 0x358ddcu: goto label_358ddc;
        case 0x358de0u: goto label_358de0;
        case 0x358de4u: goto label_358de4;
        case 0x358de8u: goto label_358de8;
        case 0x358decu: goto label_358dec;
        case 0x358df0u: goto label_358df0;
        case 0x358df4u: goto label_358df4;
        case 0x358df8u: goto label_358df8;
        case 0x358dfcu: goto label_358dfc;
        case 0x358e00u: goto label_358e00;
        case 0x358e04u: goto label_358e04;
        case 0x358e08u: goto label_358e08;
        case 0x358e0cu: goto label_358e0c;
        case 0x358e10u: goto label_358e10;
        case 0x358e14u: goto label_358e14;
        case 0x358e18u: goto label_358e18;
        case 0x358e1cu: goto label_358e1c;
        case 0x358e20u: goto label_358e20;
        case 0x358e24u: goto label_358e24;
        case 0x358e28u: goto label_358e28;
        case 0x358e2cu: goto label_358e2c;
        case 0x358e30u: goto label_358e30;
        case 0x358e34u: goto label_358e34;
        case 0x358e38u: goto label_358e38;
        case 0x358e3cu: goto label_358e3c;
        case 0x358e40u: goto label_358e40;
        case 0x358e44u: goto label_358e44;
        case 0x358e48u: goto label_358e48;
        case 0x358e4cu: goto label_358e4c;
        case 0x358e50u: goto label_358e50;
        case 0x358e54u: goto label_358e54;
        case 0x358e58u: goto label_358e58;
        case 0x358e5cu: goto label_358e5c;
        case 0x358e60u: goto label_358e60;
        case 0x358e64u: goto label_358e64;
        case 0x358e68u: goto label_358e68;
        case 0x358e6cu: goto label_358e6c;
        case 0x358e70u: goto label_358e70;
        case 0x358e74u: goto label_358e74;
        case 0x358e78u: goto label_358e78;
        case 0x358e7cu: goto label_358e7c;
        case 0x358e80u: goto label_358e80;
        case 0x358e84u: goto label_358e84;
        case 0x358e88u: goto label_358e88;
        case 0x358e8cu: goto label_358e8c;
        case 0x358e90u: goto label_358e90;
        case 0x358e94u: goto label_358e94;
        case 0x358e98u: goto label_358e98;
        case 0x358e9cu: goto label_358e9c;
        case 0x358ea0u: goto label_358ea0;
        case 0x358ea4u: goto label_358ea4;
        case 0x358ea8u: goto label_358ea8;
        case 0x358eacu: goto label_358eac;
        case 0x358eb0u: goto label_358eb0;
        case 0x358eb4u: goto label_358eb4;
        case 0x358eb8u: goto label_358eb8;
        case 0x358ebcu: goto label_358ebc;
        case 0x358ec0u: goto label_358ec0;
        case 0x358ec4u: goto label_358ec4;
        case 0x358ec8u: goto label_358ec8;
        case 0x358eccu: goto label_358ecc;
        case 0x358ed0u: goto label_358ed0;
        case 0x358ed4u: goto label_358ed4;
        case 0x358ed8u: goto label_358ed8;
        case 0x358edcu: goto label_358edc;
        case 0x358ee0u: goto label_358ee0;
        case 0x358ee4u: goto label_358ee4;
        case 0x358ee8u: goto label_358ee8;
        case 0x358eecu: goto label_358eec;
        case 0x358ef0u: goto label_358ef0;
        case 0x358ef4u: goto label_358ef4;
        case 0x358ef8u: goto label_358ef8;
        case 0x358efcu: goto label_358efc;
        case 0x358f00u: goto label_358f00;
        case 0x358f04u: goto label_358f04;
        case 0x358f08u: goto label_358f08;
        case 0x358f0cu: goto label_358f0c;
        case 0x358f10u: goto label_358f10;
        case 0x358f14u: goto label_358f14;
        case 0x358f18u: goto label_358f18;
        case 0x358f1cu: goto label_358f1c;
        case 0x358f20u: goto label_358f20;
        case 0x358f24u: goto label_358f24;
        case 0x358f28u: goto label_358f28;
        case 0x358f2cu: goto label_358f2c;
        case 0x358f30u: goto label_358f30;
        case 0x358f34u: goto label_358f34;
        case 0x358f38u: goto label_358f38;
        case 0x358f3cu: goto label_358f3c;
        case 0x358f40u: goto label_358f40;
        case 0x358f44u: goto label_358f44;
        case 0x358f48u: goto label_358f48;
        case 0x358f4cu: goto label_358f4c;
        case 0x358f50u: goto label_358f50;
        case 0x358f54u: goto label_358f54;
        case 0x358f58u: goto label_358f58;
        case 0x358f5cu: goto label_358f5c;
        case 0x358f60u: goto label_358f60;
        case 0x358f64u: goto label_358f64;
        case 0x358f68u: goto label_358f68;
        case 0x358f6cu: goto label_358f6c;
        case 0x358f70u: goto label_358f70;
        case 0x358f74u: goto label_358f74;
        case 0x358f78u: goto label_358f78;
        case 0x358f7cu: goto label_358f7c;
        case 0x358f80u: goto label_358f80;
        case 0x358f84u: goto label_358f84;
        case 0x358f88u: goto label_358f88;
        case 0x358f8cu: goto label_358f8c;
        case 0x358f90u: goto label_358f90;
        case 0x358f94u: goto label_358f94;
        case 0x358f98u: goto label_358f98;
        case 0x358f9cu: goto label_358f9c;
        case 0x358fa0u: goto label_358fa0;
        case 0x358fa4u: goto label_358fa4;
        case 0x358fa8u: goto label_358fa8;
        case 0x358facu: goto label_358fac;
        case 0x358fb0u: goto label_358fb0;
        case 0x358fb4u: goto label_358fb4;
        case 0x358fb8u: goto label_358fb8;
        case 0x358fbcu: goto label_358fbc;
        case 0x358fc0u: goto label_358fc0;
        case 0x358fc4u: goto label_358fc4;
        case 0x358fc8u: goto label_358fc8;
        case 0x358fccu: goto label_358fcc;
        case 0x358fd0u: goto label_358fd0;
        case 0x358fd4u: goto label_358fd4;
        case 0x358fd8u: goto label_358fd8;
        case 0x358fdcu: goto label_358fdc;
        case 0x358fe0u: goto label_358fe0;
        case 0x358fe4u: goto label_358fe4;
        case 0x358fe8u: goto label_358fe8;
        case 0x358fecu: goto label_358fec;
        case 0x358ff0u: goto label_358ff0;
        case 0x358ff4u: goto label_358ff4;
        case 0x358ff8u: goto label_358ff8;
        case 0x358ffcu: goto label_358ffc;
        case 0x359000u: goto label_359000;
        case 0x359004u: goto label_359004;
        case 0x359008u: goto label_359008;
        case 0x35900cu: goto label_35900c;
        case 0x359010u: goto label_359010;
        case 0x359014u: goto label_359014;
        case 0x359018u: goto label_359018;
        case 0x35901cu: goto label_35901c;
        case 0x359020u: goto label_359020;
        case 0x359024u: goto label_359024;
        case 0x359028u: goto label_359028;
        case 0x35902cu: goto label_35902c;
        case 0x359030u: goto label_359030;
        case 0x359034u: goto label_359034;
        case 0x359038u: goto label_359038;
        case 0x35903cu: goto label_35903c;
        case 0x359040u: goto label_359040;
        case 0x359044u: goto label_359044;
        case 0x359048u: goto label_359048;
        case 0x35904cu: goto label_35904c;
        case 0x359050u: goto label_359050;
        case 0x359054u: goto label_359054;
        case 0x359058u: goto label_359058;
        case 0x35905cu: goto label_35905c;
        case 0x359060u: goto label_359060;
        case 0x359064u: goto label_359064;
        case 0x359068u: goto label_359068;
        case 0x35906cu: goto label_35906c;
        case 0x359070u: goto label_359070;
        case 0x359074u: goto label_359074;
        case 0x359078u: goto label_359078;
        case 0x35907cu: goto label_35907c;
        case 0x359080u: goto label_359080;
        case 0x359084u: goto label_359084;
        case 0x359088u: goto label_359088;
        case 0x35908cu: goto label_35908c;
        case 0x359090u: goto label_359090;
        case 0x359094u: goto label_359094;
        case 0x359098u: goto label_359098;
        case 0x35909cu: goto label_35909c;
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a4u: goto label_3590a4;
        default: break;
    }

    ctx->pc = 0x358d40u;

label_358d40:
    // 0x358d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x358d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_358d44:
    // 0x358d44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x358d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_358d48:
    // 0x358d48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x358d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_358d4c:
    // 0x358d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x358d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_358d50:
    // 0x358d50: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x358d50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358d54:
    // 0x358d54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x358d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_358d58:
    // 0x358d58: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358d5c:
    // 0x358d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x358d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_358d60:
    // 0x358d60: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x358d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_358d64:
    // 0x358d64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x358d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_358d68:
    // 0x358d68: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x358d68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_358d6c:
    // 0x358d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x358d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_358d70:
    // 0x358d70: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x358d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_358d74:
    // 0x358d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x358d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_358d78:
    // 0x358d78: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x358d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_358d7c:
    // 0x358d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_358d80:
    // 0x358d80: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x358d80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_358d84:
    // 0x358d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_358d88:
    // 0x358d88: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x358d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_358d8c:
    // 0x358d8c: 0xc09d4d4  jal         func_275350
label_358d90:
    if (ctx->pc == 0x358D90u) {
        ctx->pc = 0x358D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D8Cu;
        // 0x358d90: 0xafa600a4  sw          $a2, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358D94u;
        goto label_358d94;
    }
    ctx->pc = 0x358D8Cu;
    SET_GPR_U32(ctx, 31, 0x358D94u);
    ctx->pc = 0x358D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D8Cu;
    // 0x358d90: 0xafa600a4  sw          $a2, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x358D8Cu, 0x358D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D94u;
label_358d94:
    // 0x358d94: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_358d98:
    if (ctx->pc == 0x358D98u) {
        ctx->pc = 0x358D9Cu;
        goto label_358d9c;
    }
    ctx->pc = 0x358D94u;
    {
        const bool branch_taken_0x358d94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x358d94) {
            ctx->pc = 0x358DA8u;
            goto label_358da8;
        }
    }
    ctx->pc = 0x358D9Cu;
label_358d9c:
    // 0x358d9c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_358da0:
    if (ctx->pc == 0x358DA0u) {
        ctx->pc = 0x358DA4u;
        goto label_358da4;
    }
    ctx->pc = 0x358D9Cu;
    {
        const bool branch_taken_0x358d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x358d9c) {
            ctx->pc = 0x358DC0u;
            goto label_358dc0;
        }
    }
    ctx->pc = 0x358DA4u;
label_358da4:
    // 0x358da4: 0x0  nop
    ctx->pc = 0x358da4u;
    // NOP
label_358da8:
    // 0x358da8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358dac:
    // 0x358dac: 0xc09d4d8  jal         func_275360
label_358db0:
    if (ctx->pc == 0x358DB0u) {
        ctx->pc = 0x358DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DACu;
        // 0x358db0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DB4u;
        goto label_358db4;
    }
    ctx->pc = 0x358DACu;
    SET_GPR_U32(ctx, 31, 0x358DB4u);
    ctx->pc = 0x358DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DACu;
    // 0x358db0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x358DACu, 0x358DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DB4u;
label_358db4:
    // 0x358db4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_358db8:
    if (ctx->pc == 0x358DB8u) {
        ctx->pc = 0x358DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DB4u;
        // 0x358db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DBCu;
        goto label_358dbc;
    }
    ctx->pc = 0x358DB4u;
    {
        const bool branch_taken_0x358db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DB4u;
        // 0x358db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358db4) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x358DBCu;
label_358dbc:
    // 0x358dbc: 0x0  nop
    ctx->pc = 0x358dbcu;
    // NOP
label_358dc0:
    // 0x358dc0: 0xc0741a4  jal         func_1D0690
label_358dc4:
    if (ctx->pc == 0x358DC4u) {
        ctx->pc = 0x358DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DC0u;
        // 0x358dc4: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DC8u;
        goto label_358dc8;
    }
    ctx->pc = 0x358DC0u;
    SET_GPR_U32(ctx, 31, 0x358DC8u);
    ctx->pc = 0x358DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DC0u;
    // 0x358dc4: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x358DC0u, 0x358DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DC8u;
label_358dc8:
    // 0x358dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358dcc:
    // 0x358dcc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_358dd0:
    if (ctx->pc == 0x358DD0u) {
        ctx->pc = 0x358DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DCCu;
        // 0x358dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358DD4u;
        goto label_358dd4;
    }
    ctx->pc = 0x358DCCu;
    {
        const bool branch_taken_0x358dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DCCu;
        // 0x358dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358dcc) {
            ctx->pc = 0x358DF8u;
            goto label_358df8;
        }
    }
    ctx->pc = 0x358DD4u;
label_358dd4:
    // 0x358dd4: 0xc096b00  jal         func_25AC00
label_358dd8:
    if (ctx->pc == 0x358DD8u) {
        ctx->pc = 0x358DDCu;
        goto label_358ddc;
    }
    ctx->pc = 0x358DD4u;
    SET_GPR_U32(ctx, 31, 0x358DDCu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x358DD4u, 0x358DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DDCu;
label_358ddc:
    // 0x358ddc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x358ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_358de0:
    // 0x358de0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x358de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_358de4:
    // 0x358de4: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x358de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
label_358de8:
    // 0x358de8: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x358de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_358dec:
    // 0x358dec: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x358decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_358df0:
    // 0x358df0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x358df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_358df4:
    // 0x358df4: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x358df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_358df8:
    // 0x358df8: 0x1200009b  beqz        $s0, . + 4 + (0x9B << 2)
label_358dfc:
    if (ctx->pc == 0x358DFCu) {
        ctx->pc = 0x358E00u;
        goto label_358e00;
    }
    ctx->pc = 0x358DF8u;
    {
        const bool branch_taken_0x358df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358df8) {
            ctx->pc = 0x359068u;
            goto label_359068;
        }
    }
    ctx->pc = 0x358E00u;
label_358e00:
    // 0x358e00: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x358e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_358e04:
    // 0x358e04: 0xc09d4fc  jal         func_2753F0
label_358e08:
    if (ctx->pc == 0x358E08u) {
        ctx->pc = 0x358E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E04u;
        // 0x358e08: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E0Cu;
        goto label_358e0c;
    }
    ctx->pc = 0x358E04u;
    SET_GPR_U32(ctx, 31, 0x358E0Cu);
    ctx->pc = 0x358E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E04u;
    // 0x358e08: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x358E04u, 0x358E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E0Cu;
label_358e0c:
    // 0x358e0c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358e10:
    // 0x358e10: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x358e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_358e14:
    // 0x358e14: 0xc09d524  jal         func_275490
label_358e18:
    if (ctx->pc == 0x358E18u) {
        ctx->pc = 0x358E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E14u;
        // 0x358e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E1Cu;
        goto label_358e1c;
    }
    ctx->pc = 0x358E14u;
    SET_GPR_U32(ctx, 31, 0x358E1Cu);
    ctx->pc = 0x358E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E14u;
    // 0x358e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x358E14u, 0x358E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E1Cu;
label_358e1c:
    // 0x358e1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358e20:
    // 0x358e20: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
label_358e24:
    if (ctx->pc == 0x358E24u) {
        ctx->pc = 0x358E28u;
        goto label_358e28;
    }
    ctx->pc = 0x358E20u;
    {
        const bool branch_taken_0x358e20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x358e20) {
            ctx->pc = 0x358E60u;
            goto label_358e60;
        }
    }
    ctx->pc = 0x358E28u;
label_358e28:
    // 0x358e28: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_358e2c:
    if (ctx->pc == 0x358E2Cu) {
        ctx->pc = 0x358E30u;
        goto label_358e30;
    }
    ctx->pc = 0x358E28u;
    {
        const bool branch_taken_0x358e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e28) {
            ctx->pc = 0x358E48u;
            goto label_358e48;
        }
    }
    ctx->pc = 0x358E30u;
label_358e30:
    // 0x358e30: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x358e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_358e34:
    // 0x358e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e38:
    // 0x358e38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x358e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_358e3c:
    // 0x358e3c: 0x320f809  jalr        $t9
label_358e40:
    if (ctx->pc == 0x358E40u) {
        ctx->pc = 0x358E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E3Cu;
        // 0x358e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E44u;
        goto label_358e44;
    }
    ctx->pc = 0x358E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358E44u);
        ctx->pc = 0x358E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E3Cu;
        // 0x358e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E3Cu, 0x358E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358E44u;
label_358e44:
    // 0x358e44: 0x0  nop
    ctx->pc = 0x358e44u;
    // NOP
label_358e48:
    // 0x358e48: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358e4c:
    // 0x358e4c: 0xc09d4d8  jal         func_275360
label_358e50:
    if (ctx->pc == 0x358E50u) {
        ctx->pc = 0x358E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E4Cu;
        // 0x358e50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E54u;
        goto label_358e54;
    }
    ctx->pc = 0x358E4Cu;
    SET_GPR_U32(ctx, 31, 0x358E54u);
    ctx->pc = 0x358E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E4Cu;
    // 0x358e50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x358E4Cu, 0x358E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E54u;
label_358e54:
    // 0x358e54: 0x10000088  b           . + 4 + (0x88 << 2)
label_358e58:
    if (ctx->pc == 0x358E58u) {
        ctx->pc = 0x358E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E54u;
        // 0x358e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E5Cu;
        goto label_358e5c;
    }
    ctx->pc = 0x358E54u;
    {
        const bool branch_taken_0x358e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E54u;
        // 0x358e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e54) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x358E5Cu;
label_358e5c:
    // 0x358e5c: 0x0  nop
    ctx->pc = 0x358e5cu;
    // NOP
label_358e60:
    // 0x358e60: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x358e60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_358e64:
    // 0x358e64: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358e68:
    // 0x358e68: 0xc09d524  jal         func_275490
label_358e6c:
    if (ctx->pc == 0x358E6Cu) {
        ctx->pc = 0x358E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E68u;
        // 0x358e6c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E70u;
        goto label_358e70;
    }
    ctx->pc = 0x358E68u;
    SET_GPR_U32(ctx, 31, 0x358E70u);
    ctx->pc = 0x358E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E68u;
    // 0x358e6c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x358E68u, 0x358E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E70u;
label_358e70:
    // 0x358e70: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x358e70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358e74:
    // 0x358e74: 0x16e0000e  bnez        $s7, . + 4 + (0xE << 2)
label_358e78:
    if (ctx->pc == 0x358E78u) {
        ctx->pc = 0x358E7Cu;
        goto label_358e7c;
    }
    ctx->pc = 0x358E74u;
    {
        const bool branch_taken_0x358e74 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x358e74) {
            ctx->pc = 0x358EB0u;
            goto label_358eb0;
        }
    }
    ctx->pc = 0x358E7Cu;
label_358e7c:
    // 0x358e7c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_358e80:
    if (ctx->pc == 0x358E80u) {
        ctx->pc = 0x358E84u;
        goto label_358e84;
    }
    ctx->pc = 0x358E7Cu;
    {
        const bool branch_taken_0x358e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e7c) {
            ctx->pc = 0x358E98u;
            goto label_358e98;
        }
    }
    ctx->pc = 0x358E84u;
label_358e84:
    // 0x358e84: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_358e88:
    // 0x358e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358e8c:
    // 0x358e8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x358e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_358e90:
    // 0x358e90: 0x320f809  jalr        $t9
label_358e94:
    if (ctx->pc == 0x358E94u) {
        ctx->pc = 0x358E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E90u;
        // 0x358e94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E98u;
        goto label_358e98;
    }
    ctx->pc = 0x358E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358E98u);
        ctx->pc = 0x358E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E90u;
        // 0x358e94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E90u, 0x358E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358E98u;
label_358e98:
    // 0x358e98: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358e9c:
    // 0x358e9c: 0xc09d4d8  jal         func_275360
label_358ea0:
    if (ctx->pc == 0x358EA0u) {
        ctx->pc = 0x358EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E9Cu;
        // 0x358ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358EA4u;
        goto label_358ea4;
    }
    ctx->pc = 0x358E9Cu;
    SET_GPR_U32(ctx, 31, 0x358EA4u);
    ctx->pc = 0x358EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E9Cu;
    // 0x358ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x358E9Cu, 0x358EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EA4u;
label_358ea4:
    // 0x358ea4: 0x10000074  b           . + 4 + (0x74 << 2)
label_358ea8:
    if (ctx->pc == 0x358EA8u) {
        ctx->pc = 0x358EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EA4u;
        // 0x358ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358EACu;
        goto label_358eac;
    }
    ctx->pc = 0x358EA4u;
    {
        const bool branch_taken_0x358ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EA4u;
        // 0x358ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ea4) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x358EACu;
label_358eac:
    // 0x358eac: 0x0  nop
    ctx->pc = 0x358eacu;
    // NOP
label_358eb0:
    // 0x358eb0: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x358eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_358eb4:
    // 0x358eb4: 0x8fa900a4  lw          $t1, 0xA4($sp)
    ctx->pc = 0x358eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_358eb8:
    // 0x358eb8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x358eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_358ebc:
    // 0x358ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358ec0:
    // 0x358ec0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x358ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_358ec4:
    // 0x358ec4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x358ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_358ec8:
    // 0x358ec8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x358ec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_358ecc:
    // 0x358ecc: 0xc096b38  jal         func_25ACE0
label_358ed0:
    if (ctx->pc == 0x358ED0u) {
        ctx->pc = 0x358ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358ECCu;
        // 0x358ed0: 0x266b0020  addiu       $t3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358ED4u;
        goto label_358ed4;
    }
    ctx->pc = 0x358ECCu;
    SET_GPR_U32(ctx, 31, 0x358ED4u);
    ctx->pc = 0x358ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358ECCu;
    // 0x358ed0: 0x266b0020  addiu       $t3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x358ECCu, 0x358ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ED4u;
label_358ed4:
    // 0x358ed4: 0x92060050  lbu         $a2, 0x50($s0)
    ctx->pc = 0x358ed4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_358ed8:
    // 0x358ed8: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x358ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_358edc:
    // 0x358edc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x358edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_358ee0:
    // 0x358ee0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x358ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_358ee4:
    // 0x358ee4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x358ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_358ee8:
    // 0x358ee8: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x358ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_358eec:
    // 0x358eec: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x358eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_358ef0:
    // 0x358ef0: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x358ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_358ef4:
    // 0x358ef4: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x358ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
label_358ef8:
    // 0x358ef8: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x358ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_358efc:
    // 0x358efc: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x358efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_358f00:
    // 0x358f00: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x358f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_358f04:
    // 0x358f04: 0xa20200d2  sb          $v0, 0xD2($s0)
    ctx->pc = 0x358f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 210), (uint8_t)GPR_U32(ctx, 2));
label_358f08:
    // 0x358f08: 0xa60500d0  sh          $a1, 0xD0($s0)
    ctx->pc = 0x358f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 208), (uint16_t)GPR_U32(ctx, 5));
label_358f0c:
    // 0x358f0c: 0xae1100c0  sw          $s1, 0xC0($s0)
    ctx->pc = 0x358f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 17));
label_358f10:
    // 0x358f10: 0xae1700c4  sw          $s7, 0xC4($s0)
    ctx->pc = 0x358f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 23));
label_358f14:
    // 0x358f14: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x358f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_358f18:
    // 0x358f18: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x358f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_358f1c:
    // 0x358f1c: 0xa21200d3  sb          $s2, 0xD3($s0)
    ctx->pc = 0x358f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 18));
label_358f20:
    // 0x358f20: 0xa21600d4  sb          $s6, 0xD4($s0)
    ctx->pc = 0x358f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 22));
label_358f24:
    // 0x358f24: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x358f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_358f28:
    // 0x358f28: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x358f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
label_358f2c:
    // 0x358f2c: 0xa20000d7  sb          $zero, 0xD7($s0)
    ctx->pc = 0x358f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 0));
label_358f30:
    // 0x358f30: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x358f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_358f34:
    // 0x358f34: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x358f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_358f38:
    // 0x358f38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x358f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_358f3c:
    // 0x358f3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x358f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_358f40:
    // 0x358f40: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x358f40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_358f44:
    // 0x358f44: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_358f48:
    // 0x358f48: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x358f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_358f4c:
    // 0x358f4c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x358f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_358f50:
    // 0x358f50: 0xc07679c  jal         func_1D9E70
label_358f54:
    if (ctx->pc == 0x358F54u) {
        ctx->pc = 0x358F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F50u;
        // 0x358f54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F58u;
        goto label_358f58;
    }
    ctx->pc = 0x358F50u;
    SET_GPR_U32(ctx, 31, 0x358F58u);
    ctx->pc = 0x358F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F50u;
    // 0x358f54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x358F50u, 0x358F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F58u;
label_358f58:
    // 0x358f58: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x358f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_358f5c:
    // 0x358f5c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x358f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_358f60:
    // 0x358f60: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x358f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_358f64:
    // 0x358f64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x358f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_358f68:
    // 0x358f68: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x358f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_358f6c:
    // 0x358f6c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x358f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_358f70:
    // 0x358f70: 0xc07679c  jal         func_1D9E70
label_358f74:
    if (ctx->pc == 0x358F74u) {
        ctx->pc = 0x358F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F70u;
        // 0x358f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F78u;
        goto label_358f78;
    }
    ctx->pc = 0x358F70u;
    SET_GPR_U32(ctx, 31, 0x358F78u);
    ctx->pc = 0x358F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F70u;
    // 0x358f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x358F70u, 0x358F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F78u;
label_358f78:
    // 0x358f78: 0x93858348  lbu         $a1, -0x7CB8($gp)
    ctx->pc = 0x358f78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935368)));
label_358f7c:
    // 0x358f7c: 0x93868349  lbu         $a2, -0x7CB7($gp)
    ctx->pc = 0x358f7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935369)));
label_358f80:
    // 0x358f80: 0xc074350  jal         func_1D0D40
label_358f84:
    if (ctx->pc == 0x358F84u) {
        ctx->pc = 0x358F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F80u;
        // 0x358f84: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F88u;
        goto label_358f88;
    }
    ctx->pc = 0x358F80u;
    SET_GPR_U32(ctx, 31, 0x358F88u);
    ctx->pc = 0x358F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F80u;
    // 0x358f84: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x358F80u, 0x358F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F88u;
label_358f88:
    // 0x358f88: 0x9385834c  lbu         $a1, -0x7CB4($gp)
    ctx->pc = 0x358f88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935372)));
label_358f8c:
    // 0x358f8c: 0x9386834d  lbu         $a2, -0x7CB3($gp)
    ctx->pc = 0x358f8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935373)));
label_358f90:
    // 0x358f90: 0xc074378  jal         func_1D0DE0
label_358f94:
    if (ctx->pc == 0x358F94u) {
        ctx->pc = 0x358F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F90u;
        // 0x358f94: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F98u;
        goto label_358f98;
    }
    ctx->pc = 0x358F90u;
    SET_GPR_U32(ctx, 31, 0x358F98u);
    ctx->pc = 0x358F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F90u;
    // 0x358f94: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x358F90u, 0x358F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F98u;
label_358f98:
    // 0x358f98: 0xc0741a4  jal         func_1D0690
label_358f9c:
    if (ctx->pc == 0x358F9Cu) {
        ctx->pc = 0x358F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F98u;
        // 0x358f9c: 0x24042a00  addiu       $a0, $zero, 0x2A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358FA0u;
        goto label_358fa0;
    }
    ctx->pc = 0x358F98u;
    SET_GPR_U32(ctx, 31, 0x358FA0u);
    ctx->pc = 0x358F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358F98u;
    // 0x358f9c: 0x24042a00  addiu       $a0, $zero, 0x2A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x358F98u, 0x358FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FA0u;
label_358fa0:
    // 0x358fa0: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x358fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_358fa4:
    // 0x358fa4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_358fa8:
    // 0x358fa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_358fac:
    if (ctx->pc == 0x358FACu) {
        ctx->pc = 0x358FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FA8u;
        // 0x358fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358FB0u;
        goto label_358fb0;
    }
    ctx->pc = 0x358FA8u;
    {
        const bool branch_taken_0x358fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FA8u;
        // 0x358fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358fa8) {
            ctx->pc = 0x358FD0u;
            goto label_358fd0;
        }
    }
    ctx->pc = 0x358FB0u;
label_358fb0:
    // 0x358fb0: 0xc074268  jal         func_1D09A0
label_358fb4:
    if (ctx->pc == 0x358FB4u) {
        ctx->pc = 0x358FB8u;
        goto label_358fb8;
    }
    ctx->pc = 0x358FB0u;
    SET_GPR_U32(ctx, 31, 0x358FB8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x358FB0u, 0x358FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FB8u;
label_358fb8:
    // 0x358fb8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358fbc:
    // 0x358fbc: 0xc09d4d8  jal         func_275360
label_358fc0:
    if (ctx->pc == 0x358FC0u) {
        ctx->pc = 0x358FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FBCu;
        // 0x358fc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358FC4u;
        goto label_358fc4;
    }
    ctx->pc = 0x358FBCu;
    SET_GPR_U32(ctx, 31, 0x358FC4u);
    ctx->pc = 0x358FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FBCu;
    // 0x358fc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x358FBCu, 0x358FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FC4u;
label_358fc4:
    // 0x358fc4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_358fc8:
    if (ctx->pc == 0x358FC8u) {
        ctx->pc = 0x358FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FC4u;
        // 0x358fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358FCCu;
        goto label_358fcc;
    }
    ctx->pc = 0x358FC4u;
    {
        const bool branch_taken_0x358fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FC4u;
        // 0x358fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358fc4) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x358FCCu;
label_358fcc:
    // 0x358fcc: 0x0  nop
    ctx->pc = 0x358fccu;
    // NOP
label_358fd0:
    // 0x358fd0: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x358fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_358fd4:
    // 0x358fd4: 0xa4430528  sh          $v1, 0x528($v0)
    ctx->pc = 0x358fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1320), (uint16_t)GPR_U32(ctx, 3));
label_358fd8:
    // 0x358fd8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_358fdc:
    // 0x358fdc: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_358fe0:
    // 0x358fe0: 0xa443052a  sh          $v1, 0x52A($v0)
    ctx->pc = 0x358fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1322), (uint16_t)GPR_U32(ctx, 3));
label_358fe4:
    // 0x358fe4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_358fe8:
    // 0x358fe8: 0xa4430a68  sh          $v1, 0xA68($v0)
    ctx->pc = 0x358fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2664), (uint16_t)GPR_U32(ctx, 3));
label_358fec:
    // 0x358fec: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_358ff0:
    // 0x358ff0: 0xa4430a6a  sh          $v1, 0xA6A($v0)
    ctx->pc = 0x358ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2666), (uint16_t)GPR_U32(ctx, 3));
label_358ff4:
    // 0x358ff4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_358ff8:
    // 0x358ff8: 0xa4430fa8  sh          $v1, 0xFA8($v0)
    ctx->pc = 0x358ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4008), (uint16_t)GPR_U32(ctx, 3));
label_358ffc:
    // 0x358ffc: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x358ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359000:
    // 0x359000: 0xa4430faa  sh          $v1, 0xFAA($v0)
    ctx->pc = 0x359000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4010), (uint16_t)GPR_U32(ctx, 3));
label_359004:
    // 0x359004: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x359004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359008:
    // 0x359008: 0xa44314e8  sh          $v1, 0x14E8($v0)
    ctx->pc = 0x359008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5352), (uint16_t)GPR_U32(ctx, 3));
label_35900c:
    // 0x35900c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x35900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359010:
    // 0x359010: 0xa44314ea  sh          $v1, 0x14EA($v0)
    ctx->pc = 0x359010u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5354), (uint16_t)GPR_U32(ctx, 3));
label_359014:
    // 0x359014: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x359014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359018:
    // 0x359018: 0xa4431a28  sh          $v1, 0x1A28($v0)
    ctx->pc = 0x359018u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6696), (uint16_t)GPR_U32(ctx, 3));
label_35901c:
    // 0x35901c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x35901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359020:
    // 0x359020: 0xa4431a2a  sh          $v1, 0x1A2A($v0)
    ctx->pc = 0x359020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6698), (uint16_t)GPR_U32(ctx, 3));
label_359024:
    // 0x359024: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x359024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359028:
    // 0x359028: 0xa4431f68  sh          $v1, 0x1F68($v0)
    ctx->pc = 0x359028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8040), (uint16_t)GPR_U32(ctx, 3));
label_35902c:
    // 0x35902c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x35902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359030:
    // 0x359030: 0xa4431f6a  sh          $v1, 0x1F6A($v0)
    ctx->pc = 0x359030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8042), (uint16_t)GPR_U32(ctx, 3));
label_359034:
    // 0x359034: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x359034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359038:
    // 0x359038: 0xa44324a8  sh          $v1, 0x24A8($v0)
    ctx->pc = 0x359038u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9384), (uint16_t)GPR_U32(ctx, 3));
label_35903c:
    // 0x35903c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x35903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359040:
    // 0x359040: 0xa44324aa  sh          $v1, 0x24AA($v0)
    ctx->pc = 0x359040u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9386), (uint16_t)GPR_U32(ctx, 3));
label_359044:
    // 0x359044: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x359044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359048:
    // 0x359048: 0xa44329e8  sh          $v1, 0x29E8($v0)
    ctx->pc = 0x359048u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10728), (uint16_t)GPR_U32(ctx, 3));
label_35904c:
    // 0x35904c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x35904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_359050:
    // 0x359050: 0xa44329ea  sh          $v1, 0x29EA($v0)
    ctx->pc = 0x359050u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10730), (uint16_t)GPR_U32(ctx, 3));
label_359054:
    // 0x359054: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x359054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_359058:
    // 0x359058: 0xc09d4d8  jal         func_275360
label_35905c:
    if (ctx->pc == 0x35905Cu) {
        ctx->pc = 0x35905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359058u;
        // 0x35905c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359060u;
        goto label_359060;
    }
    ctx->pc = 0x359058u;
    SET_GPR_U32(ctx, 31, 0x359060u);
    ctx->pc = 0x35905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359058u;
    // 0x35905c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x359058u, 0x359060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359060u;
label_359060:
    // 0x359060: 0x10000005  b           . + 4 + (0x5 << 2)
label_359064:
    if (ctx->pc == 0x359064u) {
        ctx->pc = 0x359064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359060u;
        // 0x359064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359068u;
        goto label_359068;
    }
    ctx->pc = 0x359060u;
    {
        const bool branch_taken_0x359060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359060u;
        // 0x359064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359060) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x359068u;
label_359068:
    // 0x359068: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x359068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_35906c:
    // 0x35906c: 0xc09d4d8  jal         func_275360
label_359070:
    if (ctx->pc == 0x359070u) {
        ctx->pc = 0x359070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35906Cu;
        // 0x359070: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359074u;
        goto label_359074;
    }
    ctx->pc = 0x35906Cu;
    SET_GPR_U32(ctx, 31, 0x359074u);
    ctx->pc = 0x359070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35906Cu;
    // 0x359070: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x35906Cu, 0x359074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359074u;
label_359074:
    // 0x359074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359078:
    // 0x359078: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x359078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_35907c:
    // 0x35907c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x35907cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_359080:
    // 0x359080: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x359080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_359084:
    // 0x359084: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x359084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_359088:
    // 0x359088: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x359088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35908c:
    // 0x35908c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35908cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_359090:
    // 0x359090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x359090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_359094:
    // 0x359094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_359098:
    // 0x359098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35909c:
    // 0x35909c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35909cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3590a0:
    // 0x3590a0: 0x3e00008  jr          $ra
label_3590a4:
    if (ctx->pc == 0x3590A4u) {
        ctx->pc = 0x3590A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590A0u;
        // 0x3590a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3590A8u;
        goto label_fallthrough_0x3590a0;
    }
    ctx->pc = 0x3590A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3590A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590A0u;
        // 0x3590a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3590A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3590a0:
    ctx->pc = 0x3590A8u;
}
