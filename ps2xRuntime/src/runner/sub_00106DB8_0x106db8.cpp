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

// Function: sub_00106DB8
// Address: 0x106db8 - 0x106fd4
void sub_00106DB8_0x106db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106DB8_0x106db8");
#endif

    switch (ctx->pc) {
        case 0x106db8u: goto label_106db8;
        case 0x106dbcu: goto label_106dbc;
        case 0x106dc0u: goto label_106dc0;
        case 0x106dc4u: goto label_106dc4;
        case 0x106dc8u: goto label_106dc8;
        case 0x106dccu: goto label_106dcc;
        case 0x106dd0u: goto label_106dd0;
        case 0x106dd4u: goto label_106dd4;
        case 0x106dd8u: goto label_106dd8;
        case 0x106ddcu: goto label_106ddc;
        case 0x106de0u: goto label_106de0;
        case 0x106de4u: goto label_106de4;
        case 0x106de8u: goto label_106de8;
        case 0x106decu: goto label_106dec;
        case 0x106df0u: goto label_106df0;
        case 0x106df4u: goto label_106df4;
        case 0x106df8u: goto label_106df8;
        case 0x106dfcu: goto label_106dfc;
        case 0x106e00u: goto label_106e00;
        case 0x106e04u: goto label_106e04;
        case 0x106e08u: goto label_106e08;
        case 0x106e0cu: goto label_106e0c;
        case 0x106e10u: goto label_106e10;
        case 0x106e14u: goto label_106e14;
        case 0x106e18u: goto label_106e18;
        case 0x106e1cu: goto label_106e1c;
        case 0x106e20u: goto label_106e20;
        case 0x106e24u: goto label_106e24;
        case 0x106e28u: goto label_106e28;
        case 0x106e2cu: goto label_106e2c;
        case 0x106e30u: goto label_106e30;
        case 0x106e34u: goto label_106e34;
        case 0x106e38u: goto label_106e38;
        case 0x106e3cu: goto label_106e3c;
        case 0x106e40u: goto label_106e40;
        case 0x106e44u: goto label_106e44;
        case 0x106e48u: goto label_106e48;
        case 0x106e4cu: goto label_106e4c;
        case 0x106e50u: goto label_106e50;
        case 0x106e54u: goto label_106e54;
        case 0x106e58u: goto label_106e58;
        case 0x106e5cu: goto label_106e5c;
        case 0x106e60u: goto label_106e60;
        case 0x106e64u: goto label_106e64;
        case 0x106e68u: goto label_106e68;
        case 0x106e6cu: goto label_106e6c;
        case 0x106e70u: goto label_106e70;
        case 0x106e74u: goto label_106e74;
        case 0x106e78u: goto label_106e78;
        case 0x106e7cu: goto label_106e7c;
        case 0x106e80u: goto label_106e80;
        case 0x106e84u: goto label_106e84;
        case 0x106e88u: goto label_106e88;
        case 0x106e8cu: goto label_106e8c;
        case 0x106e90u: goto label_106e90;
        case 0x106e94u: goto label_106e94;
        case 0x106e98u: goto label_106e98;
        case 0x106e9cu: goto label_106e9c;
        case 0x106ea0u: goto label_106ea0;
        case 0x106ea4u: goto label_106ea4;
        case 0x106ea8u: goto label_106ea8;
        case 0x106eacu: goto label_106eac;
        case 0x106eb0u: goto label_106eb0;
        case 0x106eb4u: goto label_106eb4;
        case 0x106eb8u: goto label_106eb8;
        case 0x106ebcu: goto label_106ebc;
        case 0x106ec0u: goto label_106ec0;
        case 0x106ec4u: goto label_106ec4;
        case 0x106ec8u: goto label_106ec8;
        case 0x106eccu: goto label_106ecc;
        case 0x106ed0u: goto label_106ed0;
        case 0x106ed4u: goto label_106ed4;
        case 0x106ed8u: goto label_106ed8;
        case 0x106edcu: goto label_106edc;
        case 0x106ee0u: goto label_106ee0;
        case 0x106ee4u: goto label_106ee4;
        case 0x106ee8u: goto label_106ee8;
        case 0x106eecu: goto label_106eec;
        case 0x106ef0u: goto label_106ef0;
        case 0x106ef4u: goto label_106ef4;
        case 0x106ef8u: goto label_106ef8;
        case 0x106efcu: goto label_106efc;
        case 0x106f00u: goto label_106f00;
        case 0x106f04u: goto label_106f04;
        case 0x106f08u: goto label_106f08;
        case 0x106f0cu: goto label_106f0c;
        case 0x106f10u: goto label_106f10;
        case 0x106f14u: goto label_106f14;
        case 0x106f18u: goto label_106f18;
        case 0x106f1cu: goto label_106f1c;
        case 0x106f20u: goto label_106f20;
        case 0x106f24u: goto label_106f24;
        case 0x106f28u: goto label_106f28;
        case 0x106f2cu: goto label_106f2c;
        case 0x106f30u: goto label_106f30;
        case 0x106f34u: goto label_106f34;
        case 0x106f38u: goto label_106f38;
        case 0x106f3cu: goto label_106f3c;
        case 0x106f40u: goto label_106f40;
        case 0x106f44u: goto label_106f44;
        case 0x106f48u: goto label_106f48;
        case 0x106f4cu: goto label_106f4c;
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        case 0x106f74u: goto label_106f74;
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        default: break;
    }

    ctx->pc = 0x106db8u;

label_106db8:
    // 0x106db8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x106db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_106dbc:
    // 0x106dbc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106dc0:
    // 0x106dc0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x106dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_106dc4:
    // 0x106dc4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x106dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_106dc8:
    // 0x106dc8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x106dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_106dcc:
    // 0x106dcc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x106dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_106dd0:
    // 0x106dd0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x106dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_106dd4:
    // 0x106dd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x106dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106dd8:
    // 0x106dd8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x106dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_106ddc:
    // 0x106ddc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x106ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_106de0:
    // 0x106de0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x106de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_106de4:
    // 0x106de4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x106de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_106de8:
    // 0x106de8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x106de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_106dec:
    // 0x106dec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x106decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_106df0:
    // 0x106df0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x106df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_106df4:
    // 0x106df4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x106df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_106df8:
    // 0x106df8: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x106df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_106dfc:
    // 0x106dfc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_106e00:
    if (ctx->pc == 0x106E00u) {
        ctx->pc = 0x106E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DFCu;
        // 0x106e00: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E04u;
        goto label_106e04;
    }
    ctx->pc = 0x106DFCu;
    {
        const bool branch_taken_0x106dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DFCu;
        // 0x106e00: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dfc) {
            ctx->pc = 0x106E9Cu;
            goto label_106e9c;
        }
    }
    ctx->pc = 0x106E04u;
label_106e04:
    // 0x106e04: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x106e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_106e08:
    // 0x106e08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_106e0c:
    // 0x106e0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106e10:
    // 0x106e10: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_106e14:
    if (ctx->pc == 0x106E14u) {
        ctx->pc = 0x106E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E10u;
        // 0x106e14: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E18u;
        goto label_106e18;
    }
    ctx->pc = 0x106E10u;
    {
        const bool branch_taken_0x106e10 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x106E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E10u;
        // 0x106e14: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e10) {
            ctx->pc = 0x106EACu;
            goto label_106eac;
        }
    }
    ctx->pc = 0x106E18u;
label_106e18:
    // 0x106e18: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x106e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_106e1c:
    // 0x106e1c: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x106e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_106e20:
    // 0x106e20: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_106e24:
    // 0x106e24: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x106e24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_106e28:
    // 0x106e28: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x106e28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_106e2c:
    // 0x106e2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106e30:
    // 0x106e30: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x106e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106e34:
    // 0x106e34: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x106e34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_106e38:
    // 0x106e38: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x106e38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_106e3c:
    // 0x106e3c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x106e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_106e40:
    // 0x106e40: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x106e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_106e44:
    // 0x106e44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x106e44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_106e48:
    // 0x106e48: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x106e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_106e4c:
    // 0x106e4c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x106e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_106e50:
    // 0x106e50: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x106e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_106e54:
    // 0x106e54: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x106e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_106e58:
    // 0x106e58: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x106e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_106e5c:
    // 0x106e5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106e60:
    // 0x106e60: 0x60f809  jalr        $v1
label_106e64:
    if (ctx->pc == 0x106E64u) {
        ctx->pc = 0x106E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E60u;
        // 0x106e64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E68u;
        goto label_106e68;
    }
    ctx->pc = 0x106E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106E68u);
        ctx->pc = 0x106E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E60u;
        // 0x106e64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E60u, 0x106E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106E68u;
label_106e68:
    // 0x106e68: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x106e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_106e6c:
    // 0x106e6c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x106e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_106e70:
    // 0x106e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106e74:
    // 0x106e74: 0x40f809  jalr        $v0
label_106e78:
    if (ctx->pc == 0x106E78u) {
        ctx->pc = 0x106E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E74u;
        // 0x106e78: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E7Cu;
        goto label_106e7c;
    }
    ctx->pc = 0x106E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106E7Cu);
        ctx->pc = 0x106E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E74u;
        // 0x106e78: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E74u, 0x106E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106E7Cu;
label_106e7c:
    // 0x106e7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x106e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_106e80:
    // 0x106e80: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x106e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_106e84:
    // 0x106e84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x106e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106e88:
    // 0x106e88: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x106e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_106e8c:
    // 0x106e8c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_106e90:
    if (ctx->pc == 0x106E90u) {
        ctx->pc = 0x106E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E8Cu;
        // 0x106e90: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E94u;
        goto label_106e94;
    }
    ctx->pc = 0x106E8Cu;
    {
        const bool branch_taken_0x106e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E8Cu;
        // 0x106e90: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e8c) {
            ctx->pc = 0x106E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106e30;
        }
    }
    ctx->pc = 0x106E94u;
label_106e94:
    // 0x106e94: 0x10000009  b           . + 4 + (0x9 << 2)
label_106e98:
    if (ctx->pc == 0x106E98u) {
        ctx->pc = 0x106E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E94u;
        // 0x106e98: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E9Cu;
        goto label_106e9c;
    }
    ctx->pc = 0x106E94u;
    {
        const bool branch_taken_0x106e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E94u;
        // 0x106e98: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e94) {
            ctx->pc = 0x106EBCu;
            goto label_106ebc;
        }
    }
    ctx->pc = 0x106E9Cu;
label_106e9c:
    // 0x106e9c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x106e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_106ea0:
    // 0x106ea0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x106ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_106ea4:
    // 0x106ea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_106ea8:
    if (ctx->pc == 0x106EA8u) {
        ctx->pc = 0x106EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EA4u;
        // 0x106ea8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EACu;
        goto label_106eac;
    }
    ctx->pc = 0x106EA4u;
    {
        const bool branch_taken_0x106ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EA4u;
        // 0x106ea8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ea4) {
            ctx->pc = 0x106EB8u;
            goto label_106eb8;
        }
    }
    ctx->pc = 0x106EACu;
label_106eac:
    // 0x106eac: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_106eb0:
    // 0x106eb0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_106eb4:
    // 0x106eb4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_106eb8:
    // 0x106eb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106ebc:
    // 0x106ebc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106ec0:
    // 0x106ec0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x106ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_106ec4:
    // 0x106ec4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x106ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_106ec8:
    // 0x106ec8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x106ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_106ecc:
    // 0x106ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_106ed0:
    // 0x106ed0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_106ed4:
    if (ctx->pc == 0x106ED4u) {
        ctx->pc = 0x106ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ED0u;
        // 0x106ed4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106ED8u;
        goto label_106ed8;
    }
    ctx->pc = 0x106ED0u;
    {
        const bool branch_taken_0x106ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ED0u;
        // 0x106ed4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ed0) {
            ctx->pc = 0x106EF0u;
            goto label_106ef0;
        }
    }
    ctx->pc = 0x106ED8u;
label_106ed8:
    // 0x106ed8: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x106ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_106edc:
    // 0x106edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_106ee0:
    if (ctx->pc == 0x106EE0u) {
        ctx->pc = 0x106EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EDCu;
        // 0x106ee0: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EE4u;
        goto label_106ee4;
    }
    ctx->pc = 0x106EDCu;
    {
        const bool branch_taken_0x106edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EDCu;
        // 0x106ee0: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106edc) {
            ctx->pc = 0x106EF0u;
            goto label_106ef0;
        }
    }
    ctx->pc = 0x106EE4u;
label_106ee4:
    // 0x106ee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x106ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106ee8:
    // 0x106ee8: 0xc043536  jal         func_10D4D8
label_106eec:
    if (ctx->pc == 0x106EECu) {
        ctx->pc = 0x106EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EE8u;
        // 0x106eec: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EF0u;
        goto label_106ef0;
    }
    ctx->pc = 0x106EE8u;
    SET_GPR_U32(ctx, 31, 0x106EF0u);
    ctx->pc = 0x106EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106EE8u;
    // 0x106eec: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x106EE8u, 0x106EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EF0u;
label_106ef0:
    // 0x106ef0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x106ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106ef4:
    // 0x106ef4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106ef8:
    // 0x106ef8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x106ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_106efc:
    // 0x106efc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x106efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_106f00:
    // 0x106f00: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_106f04:
    // 0x106f04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_106f08:
    // 0x106f08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_106f0c:
    if (ctx->pc == 0x106F0Cu) {
        ctx->pc = 0x106F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F08u;
        // 0x106f0c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F10u;
        goto label_106f10;
    }
    ctx->pc = 0x106F08u;
    {
        const bool branch_taken_0x106f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F08u;
        // 0x106f0c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f08) {
            ctx->pc = 0x106F50u;
            goto label_106f50;
        }
    }
    ctx->pc = 0x106F10u;
label_106f10:
    // 0x106f10: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x106f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_106f14:
    // 0x106f14: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_106f18:
    // 0x106f18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106f1c:
    // 0x106f1c: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x106f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_106f20:
    // 0x106f20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x106f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_106f24:
    // 0x106f24: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106f24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_106f28:
    // 0x106f28: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106f28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_106f2c:
    // 0x106f2c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106f2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_106f30:
    // 0x106f30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_106f34:
    // 0x106f34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_106f38:
    // 0x106f38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_106f3c:
    // 0x106f3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106f40:
    // 0x106f40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106f44:
    // 0x106f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106f48:
    // 0x106f48: 0x8042232  j           func_1088C8
label_106f4c:
    if (ctx->pc == 0x106F4Cu) {
        ctx->pc = 0x106F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F48u;
        // 0x106f4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F50u;
        goto label_106f50;
    }
    ctx->pc = 0x106F48u;
    ctx->pc = 0x106F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F48u;
    // 0x106f4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088C8u;
    sub_001088C8_0x1088c8(rdram, ctx, runtime); return;
    ctx->pc = 0x106F50u;
label_106f50:
    // 0x106f50: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_106f54:
    // 0x106f54: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_106f58:
    if (ctx->pc == 0x106F58u) {
        ctx->pc = 0x106F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F54u;
        // 0x106f58: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F5Cu;
        goto label_106f5c;
    }
    ctx->pc = 0x106F54u;
    {
        const bool branch_taken_0x106f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F54u;
        // 0x106f58: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f54) {
            ctx->pc = 0x106F94u;
            goto label_106f94;
        }
    }
    ctx->pc = 0x106F5Cu;
label_106f5c:
    // 0x106f5c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_106f60:
    // 0x106f60: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x106f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_106f64:
    // 0x106f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x106f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106f68:
    // 0x106f68: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106f68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_106f6c:
    // 0x106f6c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106f6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_106f70:
    // 0x106f70: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106f70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_106f74:
    // 0x106f74: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106f74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_106f78:
    // 0x106f78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106f78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_106f7c:
    // 0x106f7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_106f80:
    // 0x106f80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106f84:
    // 0x106f84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106f88:
    // 0x106f88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106f8c:
    // 0x106f8c: 0x8042232  j           func_1088C8
label_106f90:
    if (ctx->pc == 0x106F90u) {
        ctx->pc = 0x106F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F8Cu;
        // 0x106f90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F94u;
        goto label_106f94;
    }
    ctx->pc = 0x106F8Cu;
    ctx->pc = 0x106F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F8Cu;
    // 0x106f90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088C8u;
    sub_001088C8_0x1088c8(rdram, ctx, runtime); return;
    ctx->pc = 0x106F94u;
label_106f94:
    // 0x106f94: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x106f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_106f98:
    // 0x106f98: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x106f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_106f9c:
    // 0x106f9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x106f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106fa0:
    // 0x106fa0: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_106fa4:
    // 0x106fa4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x106fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_106fa8:
    // 0x106fa8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106fa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_106fac:
    // 0x106fac: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106facu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_106fb0:
    // 0x106fb0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106fb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_106fb4:
    // 0x106fb4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106fb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_106fb8:
    // 0x106fb8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_106fbc:
    // 0x106fbc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_106fc0:
    // 0x106fc0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106fc4:
    // 0x106fc4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106fc8:
    // 0x106fc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106fcc:
    // 0x106fcc: 0x80421f6  j           func_1087D8
label_106fd0:
    if (ctx->pc == 0x106FD0u) {
        ctx->pc = 0x106FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FCCu;
        // 0x106fd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FD4u;
        goto label_fallthrough_0x106fcc;
    }
    ctx->pc = 0x106FCCu;
    ctx->pc = 0x106FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FCCu;
    // 0x106fd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087D8u;
    sub_001087D8_0x1087d8(rdram, ctx, runtime); return;
label_fallthrough_0x106fcc:
    ctx->pc = 0x106FD4u;
}
