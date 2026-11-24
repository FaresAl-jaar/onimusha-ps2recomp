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

// Function: sub_003BBFF0
// Address: 0x3bbff0 - 0x3bc030
void sub_003BBFF0_0x3bbff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBFF0_0x3bbff0");
#endif

    switch (ctx->pc) {
        case 0x3bc004u: goto label_3bc004;
        case 0x3bc014u: goto label_3bc014;
        default: break;
    }

    ctx->pc = 0x3bbff0u;

    // 0x3bbff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bbff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bbff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bbff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bbff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bbff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bbffc: 0xc0eef4c  jal         func_3BBD30
    ctx->pc = 0x3BBFFCu;
    SET_GPR_U32(ctx, 31, 0x3BC004u);
    ctx->pc = 0x3BC000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBFFCu;
    // 0x3bc000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD30u, 0x3BBFFCu, 0x3BC004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC004u;
label_3bc004:
    // 0x3bc004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc00c: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BC00Cu;
    SET_GPR_U32(ctx, 31, 0x3BC014u);
    ctx->pc = 0x3BC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC00Cu;
    // 0x3bc010: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BC00Cu, 0x3BC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC014u;
label_3bc014:
    // 0x3bc014: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BC014u;
    {
        const bool branch_taken_0x3bc014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC014u;
        // 0x3bc018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc014) {
            ctx->pc = 0x3BC020u;
            goto label_3bc020;
        }
    }
    ctx->pc = 0x3BC01Cu;
    // 0x3bc01c: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bc01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
label_3bc020:
    // 0x3bc020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bc020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bc024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bc028: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC028u;
        // 0x3bc02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC030u;
}
