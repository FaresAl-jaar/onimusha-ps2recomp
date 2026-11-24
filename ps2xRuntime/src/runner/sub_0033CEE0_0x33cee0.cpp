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

// Function: sub_0033CEE0
// Address: 0x33cee0 - 0x33cf58
void sub_0033CEE0_0x33cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CEE0_0x33cee0");
#endif

    switch (ctx->pc) {
        case 0x33cef4u: goto label_33cef4;
        case 0x33cf28u: goto label_33cf28;
        case 0x33cf38u: goto label_33cf38;
        case 0x33cf48u: goto label_33cf48;
        default: break;
    }

    ctx->pc = 0x33cee0u;

    // 0x33cee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33cee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33cee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ceec: 0xc0a5ee4  jal         func_297B90
    ctx->pc = 0x33CEECu;
    SET_GPR_U32(ctx, 31, 0x33CEF4u);
    ctx->pc = 0x33CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEECu;
    // 0x33cef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B90u, 0x33CEECu, 0x33CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEF4u;
label_33cef4:
    // 0x33cef4: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x33cef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x33cef8: 0x240300e2  addiu       $v1, $zero, 0xE2
    ctx->pc = 0x33cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x33cefc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33CEFCu;
    {
        const bool branch_taken_0x33cefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEFCu;
        // 0x33cf00: 0x240300e1  addiu       $v1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cefc) {
            ctx->pc = 0x33CF40u;
            goto label_33cf40;
        }
    }
    ctx->pc = 0x33CF04u;
    // 0x33cf04: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33CF04u;
    {
        const bool branch_taken_0x33cf04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33cf04) {
            ctx->pc = 0x33CF30u;
            goto label_33cf30;
        }
    }
    ctx->pc = 0x33CF0Cu;
    // 0x33cf0c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x33cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33cf10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CF10u;
    {
        const bool branch_taken_0x33cf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33cf10) {
            ctx->pc = 0x33CF20u;
            goto label_33cf20;
        }
    }
    ctx->pc = 0x33CF18u;
    // 0x33cf18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33CF18u;
    {
        const bool branch_taken_0x33cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf18) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF20u;
label_33cf20:
    // 0x33cf20: 0xc0cf5e8  jal         func_33D7A0
    ctx->pc = 0x33CF20u;
    SET_GPR_U32(ctx, 31, 0x33CF28u);
    ctx->pc = 0x33CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF20u;
    // 0x33cf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D7A0u, 0x33CF20u, 0x33CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF28u;
label_33cf28:
    // 0x33cf28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33CF28u;
    {
        const bool branch_taken_0x33cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf28) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF30u;
label_33cf30:
    // 0x33cf30: 0xc0cf4e4  jal         func_33D390
    ctx->pc = 0x33CF30u;
    SET_GPR_U32(ctx, 31, 0x33CF38u);
    ctx->pc = 0x33CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF30u;
    // 0x33cf34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D390u, 0x33CF30u, 0x33CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF38u;
label_33cf38:
    // 0x33cf38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33CF38u;
    {
        const bool branch_taken_0x33cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf38) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF40u;
label_33cf40:
    // 0x33cf40: 0xc0cf434  jal         func_33D0D0
    ctx->pc = 0x33CF40u;
    SET_GPR_U32(ctx, 31, 0x33CF48u);
    ctx->pc = 0x33CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF40u;
    // 0x33cf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0D0u, 0x33CF40u, 0x33CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF48u;
label_33cf48:
    // 0x33cf48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cf4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF50u;
        // 0x33cf54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF58u;
}
