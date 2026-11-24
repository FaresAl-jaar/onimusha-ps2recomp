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

// Function: sub_0039BA40
// Address: 0x39ba40 - 0x39bb60
void sub_0039BA40_0x39ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA40_0x39ba40");
#endif

    switch (ctx->pc) {
        case 0x39ba54u: goto label_39ba54;
        case 0x39ba6cu: goto label_39ba6c;
        case 0x39baa8u: goto label_39baa8;
        case 0x39bac0u: goto label_39bac0;
        case 0x39bad8u: goto label_39bad8;
        case 0x39baf0u: goto label_39baf0;
        case 0x39bb00u: goto label_39bb00;
        case 0x39bb10u: goto label_39bb10;
        case 0x39bb20u: goto label_39bb20;
        case 0x39bb30u: goto label_39bb30;
        case 0x39bb40u: goto label_39bb40;
        case 0x39bb48u: goto label_39bb48;
        case 0x39bb50u: goto label_39bb50;
        default: break;
    }

    ctx->pc = 0x39ba40u;

    // 0x39ba40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ba44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39ba48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39ba4c: 0xc0e6e0c  jal         func_39B830
    ctx->pc = 0x39BA4Cu;
    SET_GPR_U32(ctx, 31, 0x39BA54u);
    ctx->pc = 0x39BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA4Cu;
    // 0x39ba50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B830u, 0x39BA4Cu, 0x39BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA54u;
label_39ba54:
    // 0x39ba54: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x39ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x39ba58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x39ba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x39ba5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BA5Cu;
    {
        const bool branch_taken_0x39ba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA5Cu;
        // 0x39ba60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba5c) {
            ctx->pc = 0x39BA70u;
            goto label_39ba70;
        }
    }
    ctx->pc = 0x39BA64u;
    // 0x39ba64: 0xc0e6e30  jal         func_39B8C0
    ctx->pc = 0x39BA64u;
    SET_GPR_U32(ctx, 31, 0x39BA6Cu);
    ctx->pc = 0x39B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8C0u, 0x39BA64u, 0x39BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA6Cu;
label_39ba6c:
    // 0x39ba6c: 0x0  nop
    ctx->pc = 0x39ba6cu;
    // NOP
label_39ba70:
    // 0x39ba70: 0x96022b20  lhu         $v0, 0x2B20($s0)
    ctx->pc = 0x39ba70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x39ba74: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x39ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x39ba78: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x39ba78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x39ba7c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x39BA7Cu;
    {
        const bool branch_taken_0x39ba7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA7Cu;
        // 0x39ba80: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba7c) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BA84u;
    // 0x39ba84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39ba88: 0x246323b0  addiu       $v1, $v1, 0x23B0
    ctx->pc = 0x39ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9136));
    // 0x39ba8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ba90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ba94: 0x400008  jr          $v0
    ctx->pc = 0x39BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39BAA0u: goto label_39baa0;
            case 0x39BAB0u: goto label_39bab0;
            case 0x39BAC8u: goto label_39bac8;
            case 0x39BAE0u: goto label_39bae0;
            case 0x39BAF8u: goto label_39baf8;
            case 0x39BB08u: goto label_39bb08;
            case 0x39BB18u: goto label_39bb18;
            case 0x39BB28u: goto label_39bb28;
            case 0x39BB38u: goto label_39bb38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39BA9Cu;
    // 0x39ba9c: 0x0  nop
    ctx->pc = 0x39ba9cu;
    // NOP
label_39baa0:
    // 0x39baa0: 0xc0e6978  jal         func_39A5E0
    ctx->pc = 0x39BAA0u;
    SET_GPR_U32(ctx, 31, 0x39BAA8u);
    ctx->pc = 0x39BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAA0u;
    // 0x39baa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A5E0u, 0x39BAA0u, 0x39BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAA8u;
label_39baa8:
    // 0x39baa8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x39BAA8u;
    {
        const bool branch_taken_0x39baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39baa8) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BAB0u;
label_39bab0:
    // 0x39bab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bab8: 0xc0e69cc  jal         func_39A730
    ctx->pc = 0x39BAB8u;
    SET_GPR_U32(ctx, 31, 0x39BAC0u);
    ctx->pc = 0x39BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAB8u;
    // 0x39babc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A730u, 0x39BAB8u, 0x39BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAC0u;
label_39bac0:
    // 0x39bac0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x39BAC0u;
    {
        const bool branch_taken_0x39bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bac0) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BAC8u;
label_39bac8:
    // 0x39bac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bad0: 0xc0e69cc  jal         func_39A730
    ctx->pc = 0x39BAD0u;
    SET_GPR_U32(ctx, 31, 0x39BAD8u);
    ctx->pc = 0x39BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAD0u;
    // 0x39bad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A730u, 0x39BAD0u, 0x39BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAD8u;
label_39bad8:
    // 0x39bad8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x39BAD8u;
    {
        const bool branch_taken_0x39bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bad8) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BAE0u;
label_39bae0:
    // 0x39bae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bae8: 0xc0e69cc  jal         func_39A730
    ctx->pc = 0x39BAE8u;
    SET_GPR_U32(ctx, 31, 0x39BAF0u);
    ctx->pc = 0x39BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAE8u;
    // 0x39baec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A730u, 0x39BAE8u, 0x39BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BAF0u;
label_39baf0:
    // 0x39baf0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39BAF0u;
    {
        const bool branch_taken_0x39baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39baf0) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BAF8u;
label_39baf8:
    // 0x39baf8: 0xc0e6aa4  jal         func_39AA90
    ctx->pc = 0x39BAF8u;
    SET_GPR_U32(ctx, 31, 0x39BB00u);
    ctx->pc = 0x39BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BAF8u;
    // 0x39bafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA90u, 0x39BAF8u, 0x39BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB00u;
label_39bb00:
    // 0x39bb00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39BB00u;
    {
        const bool branch_taken_0x39bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb00) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BB08u;
label_39bb08:
    // 0x39bb08: 0xc0e6bc4  jal         func_39AF10
    ctx->pc = 0x39BB08u;
    SET_GPR_U32(ctx, 31, 0x39BB10u);
    ctx->pc = 0x39BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB08u;
    // 0x39bb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AF10u, 0x39BB08u, 0x39BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB10u;
label_39bb10:
    // 0x39bb10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39BB10u;
    {
        const bool branch_taken_0x39bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb10) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BB18u;
label_39bb18:
    // 0x39bb18: 0xc0e6d00  jal         func_39B400
    ctx->pc = 0x39BB18u;
    SET_GPR_U32(ctx, 31, 0x39BB20u);
    ctx->pc = 0x39BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB18u;
    // 0x39bb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B400u, 0x39BB18u, 0x39BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB20u;
label_39bb20:
    // 0x39bb20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39BB20u;
    {
        const bool branch_taken_0x39bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb20) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BB28u;
label_39bb28:
    // 0x39bb28: 0xc0e6d3c  jal         func_39B4F0
    ctx->pc = 0x39BB28u;
    SET_GPR_U32(ctx, 31, 0x39BB30u);
    ctx->pc = 0x39BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB28u;
    // 0x39bb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B4F0u, 0x39BB28u, 0x39BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB30u;
label_39bb30:
    // 0x39bb30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BB30u;
    {
        const bool branch_taken_0x39bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb30) {
            ctx->pc = 0x39BB40u;
            goto label_39bb40;
        }
    }
    ctx->pc = 0x39BB38u;
label_39bb38:
    // 0x39bb38: 0xc0e6dbc  jal         func_39B6F0
    ctx->pc = 0x39BB38u;
    SET_GPR_U32(ctx, 31, 0x39BB40u);
    ctx->pc = 0x39BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB38u;
    // 0x39bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B6F0u, 0x39BB38u, 0x39BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB40u;
label_39bb40:
    // 0x39bb40: 0xc0e68a0  jal         func_39A280
    ctx->pc = 0x39BB40u;
    SET_GPR_U32(ctx, 31, 0x39BB48u);
    ctx->pc = 0x39BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB40u;
    // 0x39bb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A280u, 0x39BB40u, 0x39BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB48u;
label_39bb48:
    // 0x39bb48: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x39BB48u;
    SET_GPR_U32(ctx, 31, 0x39BB50u);
    ctx->pc = 0x39BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB48u;
    // 0x39bb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x39BB48u, 0x39BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB50u;
label_39bb50:
    // 0x39bb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bb58: 0x3e00008  jr          $ra
    ctx->pc = 0x39BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB58u;
        // 0x39bb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BB60u;
}
