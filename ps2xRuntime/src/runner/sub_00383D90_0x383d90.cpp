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

// Function: sub_00383D90
// Address: 0x383d90 - 0x383f14
void sub_00383D90_0x383d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383D90_0x383d90");
#endif

    switch (ctx->pc) {
        case 0x383da8u: goto label_383da8;
        case 0x383db0u: goto label_383db0;
        case 0x383de0u: goto label_383de0;
        case 0x383df0u: goto label_383df0;
        case 0x383e00u: goto label_383e00;
        case 0x383e10u: goto label_383e10;
        case 0x383e20u: goto label_383e20;
        case 0x383e30u: goto label_383e30;
        case 0x383e40u: goto label_383e40;
        case 0x383e70u: goto label_383e70;
        case 0x383e80u: goto label_383e80;
        case 0x383e98u: goto label_383e98;
        case 0x383eccu: goto label_383ecc;
        case 0x383eecu: goto label_383eec;
        case 0x383f00u: goto label_383f00;
        default: break;
    }

    ctx->pc = 0x383d90u;

    // 0x383d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x383d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x383d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x383d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x383da0: 0xc0e13c4  jal         func_384F10
    ctx->pc = 0x383DA0u;
    SET_GPR_U32(ctx, 31, 0x383DA8u);
    ctx->pc = 0x383DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DA0u;
    // 0x383da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384F10u, 0x383DA0u, 0x383DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DA8u;
label_383da8:
    // 0x383da8: 0xc09c3b4  jal         func_270ED0
    ctx->pc = 0x383DA8u;
    SET_GPR_U32(ctx, 31, 0x383DB0u);
    ctx->pc = 0x270ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270ED0u, 0x383DA8u, 0x383DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DB0u;
label_383db0:
    // 0x383db0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x383db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x383db4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x383db4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x383db8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x383DB8u;
    {
        const bool branch_taken_0x383db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x383DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DB8u;
        // 0x383dbc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383db8) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383DC0u;
    // 0x383dc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x383dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x383dc4: 0x24841e90  addiu       $a0, $a0, 0x1E90
    ctx->pc = 0x383dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    // 0x383dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x383dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383dcc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x383dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383dd0: 0x600008  jr          $v1
    ctx->pc = 0x383DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x383DD8u: goto label_383dd8;
            case 0x383DE8u: goto label_383de8;
            case 0x383DF8u: goto label_383df8;
            case 0x383E08u: goto label_383e08;
            case 0x383E18u: goto label_383e18;
            case 0x383E28u: goto label_383e28;
            case 0x383E38u: goto label_383e38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383DD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x383DD8u;
label_383dd8:
    // 0x383dd8: 0xc0e0fe8  jal         func_383FA0
    ctx->pc = 0x383DD8u;
    SET_GPR_U32(ctx, 31, 0x383DE0u);
    ctx->pc = 0x383DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DD8u;
    // 0x383ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383FA0u, 0x383DD8u, 0x383DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DE0u;
label_383de0:
    // 0x383de0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x383DE0u;
    {
        const bool branch_taken_0x383de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383de0) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383DE8u;
label_383de8:
    // 0x383de8: 0xc0e1018  jal         func_384060
    ctx->pc = 0x383DE8u;
    SET_GPR_U32(ctx, 31, 0x383DF0u);
    ctx->pc = 0x383DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DE8u;
    // 0x383dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384060u, 0x383DE8u, 0x383DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DF0u;
label_383df0:
    // 0x383df0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x383DF0u;
    {
        const bool branch_taken_0x383df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383df0) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383DF8u;
label_383df8:
    // 0x383df8: 0xc0e10dc  jal         func_384370
    ctx->pc = 0x383DF8u;
    SET_GPR_U32(ctx, 31, 0x383E00u);
    ctx->pc = 0x383DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DF8u;
    // 0x383dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384370u, 0x383DF8u, 0x383E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E00u;
label_383e00:
    // 0x383e00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x383E00u;
    {
        const bool branch_taken_0x383e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e00) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383E08u;
label_383e08:
    // 0x383e08: 0xc0e1168  jal         func_3845A0
    ctx->pc = 0x383E08u;
    SET_GPR_U32(ctx, 31, 0x383E10u);
    ctx->pc = 0x383E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E08u;
    // 0x383e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3845A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3845A0u, 0x383E08u, 0x383E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E10u;
label_383e10:
    // 0x383e10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x383E10u;
    {
        const bool branch_taken_0x383e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e10) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383E18u;
label_383e18:
    // 0x383e18: 0xc0e1264  jal         func_384990
    ctx->pc = 0x383E18u;
    SET_GPR_U32(ctx, 31, 0x383E20u);
    ctx->pc = 0x383E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E18u;
    // 0x383e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384990u, 0x383E18u, 0x383E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E20u;
label_383e20:
    // 0x383e20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383E20u;
    {
        const bool branch_taken_0x383e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e20) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383E28u;
label_383e28:
    // 0x383e28: 0xc0e131c  jal         func_384C70
    ctx->pc = 0x383E28u;
    SET_GPR_U32(ctx, 31, 0x383E30u);
    ctx->pc = 0x383E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E28u;
    // 0x383e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C70u, 0x383E28u, 0x383E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E30u;
label_383e30:
    // 0x383e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x383E30u;
    {
        const bool branch_taken_0x383e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383e30) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383E38u;
label_383e38:
    // 0x383e38: 0xc0e13b4  jal         func_384ED0
    ctx->pc = 0x383E38u;
    SET_GPR_U32(ctx, 31, 0x383E40u);
    ctx->pc = 0x383E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E38u;
    // 0x383e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384ED0u, 0x383E38u, 0x383E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E40u;
label_383e40:
    // 0x383e40: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x383e40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x383e44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x383e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x383e48: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x383E48u;
    {
        const bool branch_taken_0x383e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x383E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E48u;
        // 0x383e4c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e48) {
            ctx->pc = 0x383E68u;
            goto label_383e68;
        }
    }
    ctx->pc = 0x383E50u;
    // 0x383e50: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x383e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
    // 0x383e54: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x383e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x383e58: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x383e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x383e5c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x383E5Cu;
    {
        const bool branch_taken_0x383e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E5Cu;
        // 0x383e60: 0xa023feea  sb          $v1, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e5c) {
            ctx->pc = 0x383F00u;
            goto label_383f00;
        }
    }
    ctx->pc = 0x383E64u;
    // 0x383e64: 0x0  nop
    ctx->pc = 0x383e64u;
    // NOP
label_383e68:
    // 0x383e68: 0xc040274  jal         func_1009D0
    ctx->pc = 0x383E68u;
    SET_GPR_U32(ctx, 31, 0x383E70u);
    ctx->pc = 0x383E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E68u;
    // 0x383e6c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x383E68u, 0x383E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E70u;
label_383e70:
    // 0x383e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383E70u;
    {
        const bool branch_taken_0x383e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E70u;
        // 0x383e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e70) {
            ctx->pc = 0x383E80u;
            goto label_383e80;
        }
    }
    ctx->pc = 0x383E78u;
    // 0x383e78: 0xc040250  jal         func_100940
    ctx->pc = 0x383E78u;
    SET_GPR_U32(ctx, 31, 0x383E80u);
    ctx->pc = 0x383E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E78u;
    // 0x383e7c: 0x26190010  addiu       $t9, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x383E78u, 0x383E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E80u;
label_383e80:
    // 0x383e80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x383e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x383e84: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x383E84u;
    {
        const bool branch_taken_0x383e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E84u;
        // 0x383e88: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e84) {
            ctx->pc = 0x383F00u;
            goto label_383f00;
        }
    }
    ctx->pc = 0x383E8Cu;
    // 0x383e8c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x383e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x383e90: 0xc040260  jal         func_100980
    ctx->pc = 0x383E90u;
    SET_GPR_U32(ctx, 31, 0x383E98u);
    ctx->pc = 0x383E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E90u;
    // 0x383e94: 0x24a5c648  addiu       $a1, $a1, -0x39B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100980u, 0x383E90u, 0x383E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E98u;
label_383e98:
    // 0x383e98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x383E98u;
    {
        const bool branch_taken_0x383e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E98u;
        // 0x383e9c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e98) {
            ctx->pc = 0x383F00u;
            goto label_383f00;
        }
    }
    ctx->pc = 0x383EA0u;
    // 0x383ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383ea4: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x383ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x383ea8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383EA8u;
    {
        const bool branch_taken_0x383ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x383EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EA8u;
        // 0x383eac: 0x3c110066  lui         $s1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ea8) {
            ctx->pc = 0x383EBCu;
            goto label_383ebc;
        }
    }
    ctx->pc = 0x383EB0u;
    // 0x383eb0: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x383eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x383eb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x383EB4u;
    {
        const bool branch_taken_0x383eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EB4u;
        // 0x383eb8: 0x2631c51c  addiu       $s1, $s1, -0x3AE4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383eb4) {
            ctx->pc = 0x383EC0u;
            goto label_383ec0;
        }
    }
    ctx->pc = 0x383EBCu;
label_383ebc:
    // 0x383ebc: 0x2631c510  addiu       $s1, $s1, -0x3AF0
    ctx->pc = 0x383ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952208));
label_383ec0:
    // 0x383ec0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x383ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x383ec4: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x383EC4u;
    SET_GPR_U32(ctx, 31, 0x383ECCu);
    ctx->pc = 0x383EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EC4u;
    // 0x383ec8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x383EC4u, 0x383ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383ECCu;
label_383ecc:
    // 0x383ecc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x383eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x383ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x383ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383edc: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x383edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x383ee0: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x383ee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x383ee4: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x383EE4u;
    SET_GPR_U32(ctx, 31, 0x383EECu);
    ctx->pc = 0x383EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EE4u;
    // 0x383ee8: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x383EE4u, 0x383EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EECu;
label_383eec:
    // 0x383eec: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x383eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x383ef0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x383ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x383ef4: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x383ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x383ef8: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x383EF8u;
    SET_GPR_U32(ctx, 31, 0x383F00u);
    ctx->pc = 0x383EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EF8u;
    // 0x383efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x383EF8u, 0x383F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F00u;
label_383f00:
    // 0x383f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x383f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x383F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F0Cu;
        // 0x383f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383F14u;
}
