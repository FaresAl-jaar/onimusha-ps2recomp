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

// Function: sub_002F4770
// Address: 0x2f4770 - 0x2f47ac
void sub_002F4770_0x2f4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4770_0x2f4770");
#endif

    switch (ctx->pc) {
        case 0x2f4794u: goto label_2f4794;
        default: break;
    }

    ctx->pc = 0x2f4770u;

    // 0x2f4770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4774: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x2f4774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x2f4778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f477c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4780: 0x8c3089f4  lw          $s0, -0x760C($at)
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8889F4u));
    // 0x2f4784: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4784u;
    {
        const bool branch_taken_0x2f4784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4784u;
        // 0x2f4788: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4784) {
            ctx->pc = 0x2F479Cu;
            goto label_2f479c;
        }
    }
    ctx->pc = 0x2F478Cu;
    // 0x2f478c: 0xc0bcc2c  jal         func_2F30B0
    ctx->pc = 0x2F478Cu;
    SET_GPR_U32(ctx, 31, 0x2F4794u);
    ctx->pc = 0x2F4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F478Cu;
    // 0x2f4790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F30B0u, 0x2F478Cu, 0x2F4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4794u;
label_2f4794:
    // 0x2f4794: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f4794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f4798: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f479c:
    // 0x2f479c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f479cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f47a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f47a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f47a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F47A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A4u;
        // 0x2f47a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F47A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F47ACu;
}
