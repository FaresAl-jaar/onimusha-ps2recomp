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

// Function: sub_0028F140
// Address: 0x28f140 - 0x28f1b0
void sub_0028F140_0x28f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F140_0x28f140");
#endif

    switch (ctx->pc) {
        case 0x28f160u: goto label_28f160;
        case 0x28f188u: goto label_28f188;
        case 0x28f198u: goto label_28f198;
        default: break;
    }

    ctx->pc = 0x28f140u;

    // 0x28f140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f150: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28f150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f154: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x28f154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x28f158: 0xc0e3684  jal         func_38DA10
    ctx->pc = 0x28F158u;
    SET_GPR_U32(ctx, 31, 0x28F160u);
    ctx->pc = 0x28F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F158u;
    // 0x28f15c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA10u, 0x28F158u, 0x28F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F160u;
label_28f160:
    // 0x28f160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F160u;
    {
        const bool branch_taken_0x28f160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f160) {
            ctx->pc = 0x28F170u;
            goto label_28f170;
        }
    }
    ctx->pc = 0x28F168u;
    // 0x28f168: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28F168u;
    {
        const bool branch_taken_0x28f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F168u;
        // 0x28f16c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f168) {
            ctx->pc = 0x28F1A0u;
            goto label_28f1a0;
        }
    }
    ctx->pc = 0x28F170u;
label_28f170:
    // 0x28f170: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x28f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28f174: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x28f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x28f178: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F178u;
    {
        const bool branch_taken_0x28f178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x28f178) {
            ctx->pc = 0x28F190u;
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F180u;
    // 0x28f180: 0xc0a866c  jal         func_2A19B0
    ctx->pc = 0x28F180u;
    SET_GPR_U32(ctx, 31, 0x28F188u);
    ctx->pc = 0x28F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F180u;
    // 0x28f184: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A19B0u, 0x28F180u, 0x28F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F188u;
label_28f188:
    // 0x28f188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28F188u;
    {
        const bool branch_taken_0x28f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f188) {
            ctx->pc = 0x28F198u;
            goto label_28f198;
        }
    }
    ctx->pc = 0x28F190u;
label_28f190:
    // 0x28f190: 0xc0a8604  jal         func_2A1810
    ctx->pc = 0x28F190u;
    SET_GPR_U32(ctx, 31, 0x28F198u);
    ctx->pc = 0x28F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F190u;
    // 0x28f194: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1810u, 0x28F190u, 0x28F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F198u;
label_28f198:
    // 0x28f198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f19c: 0x0  nop
    ctx->pc = 0x28f19cu;
    // NOP
label_28f1a0:
    // 0x28f1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1A8u;
        // 0x28f1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F1B0u;
}
