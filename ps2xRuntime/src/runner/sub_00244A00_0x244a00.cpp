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

// Function: sub_00244A00
// Address: 0x244a00 - 0x244aa4
void sub_00244A00_0x244a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244A00_0x244a00");
#endif

    switch (ctx->pc) {
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        default: break;
    }

    ctx->pc = 0x244a00u;

label_244a00:
    // 0x244a00: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_244a04:
    // 0x244a04: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x244a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244a08:
    // 0x244a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244a0c:
    // 0x244a0c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x244a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244a10:
    // 0x244a10: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244a14:
    // 0x244a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244a18:
    // 0x244a18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244a1c:
    // 0x244a1c: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x244a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_244a20:
    // 0x244a20: 0xc090fbe  jal         func_243EF8
label_244a24:
    if (ctx->pc == 0x244A24u) {
        ctx->pc = 0x244A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A20u;
        // 0x244a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A28u;
        goto label_244a28;
    }
    ctx->pc = 0x244A20u;
    SET_GPR_U32(ctx, 31, 0x244A28u);
    ctx->pc = 0x244A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A20u;
    // 0x244a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244A20u, 0x244A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A28u;
label_244a28:
    // 0x244a28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244a2c:
    // 0x244a2c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244a30:
    // 0x244a30: 0x2484c1d8  addiu       $a0, $a0, -0x3E28
    ctx->pc = 0x244a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951384));
label_244a34:
    // 0x244a34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244a38:
    // 0x244a38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_244a3c:
    if (ctx->pc == 0x244A3Cu) {
        ctx->pc = 0x244A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A38u;
        // 0x244a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A40u;
        goto label_244a40;
    }
    ctx->pc = 0x244A38u;
    {
        const bool branch_taken_0x244a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A38u;
        // 0x244a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a38) {
            ctx->pc = 0x244A84u;
            goto label_244a84;
        }
    }
    ctx->pc = 0x244A40u;
label_244a40:
    // 0x244a40: 0xc090f2c  jal         func_243CB0
label_244a44:
    if (ctx->pc == 0x244A44u) {
        ctx->pc = 0x244A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A40u;
        // 0x244a44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A48u;
        goto label_244a48;
    }
    ctx->pc = 0x244A40u;
    SET_GPR_U32(ctx, 31, 0x244A48u);
    ctx->pc = 0x244A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A40u;
    // 0x244a44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x244A40u, 0x244A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A48u;
label_244a48:
    // 0x244a48: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244a4c:
    // 0x244a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244a50:
    // 0x244a50: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_244a54:
    if (ctx->pc == 0x244A54u) {
        ctx->pc = 0x244A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A50u;
        // 0x244a54: 0x2484c228  addiu       $a0, $a0, -0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A58u;
        goto label_244a58;
    }
    ctx->pc = 0x244A50u;
    {
        const bool branch_taken_0x244a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A50u;
        // 0x244a54: 0x2484c228  addiu       $a0, $a0, -0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a50) {
            ctx->pc = 0x244A60u;
            goto label_244a60;
        }
    }
    ctx->pc = 0x244A58u;
label_244a58:
    // 0x244a58: 0xc090d8a  jal         func_243628
label_244a5c:
    if (ctx->pc == 0x244A5Cu) {
        ctx->pc = 0x244A60u;
        goto label_244a60;
    }
    ctx->pc = 0x244A58u;
    SET_GPR_U32(ctx, 31, 0x244A60u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244A58u, 0x244A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A60u;
label_244a60:
    // 0x244a60: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_244a64:
    // 0x244a64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_244a68:
    if (ctx->pc == 0x244A68u) {
        ctx->pc = 0x244A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A64u;
        // 0x244a68: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A6Cu;
        goto label_244a6c;
    }
    ctx->pc = 0x244A64u;
    {
        const bool branch_taken_0x244a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a64) {
            ctx->pc = 0x244A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A64u;
            // 0x244a68: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A80u;
            goto label_244a80;
        }
    }
    ctx->pc = 0x244A6Cu;
label_244a6c:
    // 0x244a6c: 0x40f809  jalr        $v0
label_244a70:
    if (ctx->pc == 0x244A70u) {
        ctx->pc = 0x244A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A6Cu;
        // 0x244a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A74u;
        goto label_244a74;
    }
    ctx->pc = 0x244A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244A74u);
        ctx->pc = 0x244A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A6Cu;
        // 0x244a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A6Cu, 0x244A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244A74u;
label_244a74:
    // 0x244a74: 0x10000007  b           . + 4 + (0x7 << 2)
label_244a78:
    if (ctx->pc == 0x244A78u) {
        ctx->pc = 0x244A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A74u;
        // 0x244a78: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A7Cu;
        goto label_244a7c;
    }
    ctx->pc = 0x244A74u;
    {
        const bool branch_taken_0x244a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A74u;
        // 0x244a78: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a74) {
            ctx->pc = 0x244A94u;
            goto label_244a94;
        }
    }
    ctx->pc = 0x244A7Cu;
label_244a7c:
    // 0x244a7c: 0x0  nop
    ctx->pc = 0x244a7cu;
    // NOP
label_244a80:
    // 0x244a80: 0x2484c250  addiu       $a0, $a0, -0x3DB0
    ctx->pc = 0x244a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951504));
label_244a84:
    // 0x244a84: 0xc090d8a  jal         func_243628
label_244a88:
    if (ctx->pc == 0x244A88u) {
        ctx->pc = 0x244A8Cu;
        goto label_244a8c;
    }
    ctx->pc = 0x244A84u;
    SET_GPR_U32(ctx, 31, 0x244A8Cu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244A84u, 0x244A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A8Cu;
label_244a8c:
    // 0x244a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x244a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244a90:
    // 0x244a90: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x244a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_244a94:
    // 0x244a94: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x244a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_244a98:
    // 0x244a98: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x244a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_244a9c:
    // 0x244a9c: 0x3e00008  jr          $ra
label_244aa0:
    if (ctx->pc == 0x244AA0u) {
        ctx->pc = 0x244AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A9Cu;
        // 0x244aa0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AA4u;
        goto label_fallthrough_0x244a9c;
    }
    ctx->pc = 0x244A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A9Cu;
        // 0x244aa0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244a9c:
    ctx->pc = 0x244AA4u;
}
