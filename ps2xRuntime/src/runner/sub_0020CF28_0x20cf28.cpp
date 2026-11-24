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

// Function: sub_0020CF28
// Address: 0x20cf28 - 0x20cfb4
void sub_0020CF28_0x20cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF28_0x20cf28");
#endif

    switch (ctx->pc) {
        case 0x20cf28u: goto label_20cf28;
        case 0x20cf2cu: goto label_20cf2c;
        case 0x20cf30u: goto label_20cf30;
        case 0x20cf34u: goto label_20cf34;
        case 0x20cf38u: goto label_20cf38;
        case 0x20cf3cu: goto label_20cf3c;
        case 0x20cf40u: goto label_20cf40;
        case 0x20cf44u: goto label_20cf44;
        case 0x20cf48u: goto label_20cf48;
        case 0x20cf4cu: goto label_20cf4c;
        case 0x20cf50u: goto label_20cf50;
        case 0x20cf54u: goto label_20cf54;
        case 0x20cf58u: goto label_20cf58;
        case 0x20cf5cu: goto label_20cf5c;
        case 0x20cf60u: goto label_20cf60;
        case 0x20cf64u: goto label_20cf64;
        case 0x20cf68u: goto label_20cf68;
        case 0x20cf6cu: goto label_20cf6c;
        case 0x20cf70u: goto label_20cf70;
        case 0x20cf74u: goto label_20cf74;
        case 0x20cf78u: goto label_20cf78;
        case 0x20cf7cu: goto label_20cf7c;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cf84u: goto label_20cf84;
        case 0x20cf88u: goto label_20cf88;
        case 0x20cf8cu: goto label_20cf8c;
        case 0x20cf90u: goto label_20cf90;
        case 0x20cf94u: goto label_20cf94;
        case 0x20cf98u: goto label_20cf98;
        case 0x20cf9cu: goto label_20cf9c;
        case 0x20cfa0u: goto label_20cfa0;
        case 0x20cfa4u: goto label_20cfa4;
        case 0x20cfa8u: goto label_20cfa8;
        case 0x20cfacu: goto label_20cfac;
        case 0x20cfb0u: goto label_20cfb0;
        default: break;
    }

    ctx->pc = 0x20cf28u;

label_20cf28:
    // 0x20cf28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20cf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20cf2c:
    // 0x20cf2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_20cf30:
    // 0x20cf30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20cf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cf34:
    // 0x20cf34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20cf38:
    // 0x20cf38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cf3c:
    // 0x20cf3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_20cf40:
    // 0x20cf40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20cf44:
    // 0x20cf44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_20cf48:
    // 0x20cf48: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_20cf4c:
    // 0x20cf4c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x20cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_20cf50:
    // 0x20cf50: 0xc08367c  jal         func_20D9F0
label_20cf54:
    if (ctx->pc == 0x20CF54u) {
        ctx->pc = 0x20CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF50u;
        // 0x20cf54: 0x8e112004  lw          $s1, 0x2004($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF58u;
        goto label_20cf58;
    }
    ctx->pc = 0x20CF50u;
    SET_GPR_U32(ctx, 31, 0x20CF58u);
    ctx->pc = 0x20CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF50u;
    // 0x20cf54: 0x8e112004  lw          $s1, 0x2004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D9F0u, 0x20CF50u, 0x20CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF58u;
label_20cf58:
    // 0x20cf58: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x20cf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_20cf5c:
    // 0x20cf5c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_20cf60:
    if (ctx->pc == 0x20CF60u) {
        ctx->pc = 0x20CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF5Cu;
        // 0x20cf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF64u;
        goto label_20cf64;
    }
    ctx->pc = 0x20CF5Cu;
    {
        const bool branch_taken_0x20cf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF5Cu;
        // 0x20cf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf5c) {
            ctx->pc = 0x20CF9Cu;
            goto label_20cf9c;
        }
    }
    ctx->pc = 0x20CF64u;
label_20cf64:
    // 0x20cf64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20cf68:
    // 0x20cf68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20cf6c:
    // 0x20cf6c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x20cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_20cf70:
    // 0x20cf70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20cf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cf74:
    // 0x20cf74: 0x60f809  jalr        $v1
label_20cf78:
    if (ctx->pc == 0x20CF78u) {
        ctx->pc = 0x20CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF74u;
        // 0x20cf78: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF7Cu;
        goto label_20cf7c;
    }
    ctx->pc = 0x20CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CF7Cu);
        ctx->pc = 0x20CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF74u;
        // 0x20cf78: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF74u, 0x20CF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CF7Cu;
label_20cf7c:
    // 0x20cf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cf80:
    // 0x20cf80: 0xc08368e  jal         func_20DA38
label_20cf84:
    if (ctx->pc == 0x20CF84u) {
        ctx->pc = 0x20CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF80u;
        // 0x20cf84: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF88u;
        goto label_20cf88;
    }
    ctx->pc = 0x20CF80u;
    SET_GPR_U32(ctx, 31, 0x20CF88u);
    ctx->pc = 0x20CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF80u;
    // 0x20cf84: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA38u, 0x20CF80u, 0x20CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF88u;
label_20cf88:
    // 0x20cf88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20cf8c:
    if (ctx->pc == 0x20CF8Cu) {
        ctx->pc = 0x20CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF88u;
        // 0x20cf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF90u;
        goto label_20cf90;
    }
    ctx->pc = 0x20CF88u;
    {
        const bool branch_taken_0x20cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF88u;
        // 0x20cf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf88) {
            ctx->pc = 0x20CF9Cu;
            goto label_20cf9c;
        }
    }
    ctx->pc = 0x20CF90u;
label_20cf90:
    // 0x20cf90: 0xc083696  jal         func_20DA58
label_20cf94:
    if (ctx->pc == 0x20CF94u) {
        ctx->pc = 0x20CF98u;
        goto label_20cf98;
    }
    ctx->pc = 0x20CF90u;
    SET_GPR_U32(ctx, 31, 0x20CF98u);
    ctx->pc = 0x20DA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA58u, 0x20CF90u, 0x20CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF98u;
label_20cf98:
    // 0x20cf98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20cf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf9c:
    // 0x20cf9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20cf9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20cfa0:
    // 0x20cfa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20cfa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20cfa4:
    // 0x20cfa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20cfa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20cfa8:
    // 0x20cfa8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20cfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20cfac:
    // 0x20cfac: 0x3e00008  jr          $ra
label_20cfb0:
    if (ctx->pc == 0x20CFB0u) {
        ctx->pc = 0x20CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFACu;
        // 0x20cfb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFB4u;
        goto label_fallthrough_0x20cfac;
    }
    ctx->pc = 0x20CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFACu;
        // 0x20cfb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cfac:
    ctx->pc = 0x20CFB4u;
}
