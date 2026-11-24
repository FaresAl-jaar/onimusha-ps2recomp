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

// Function: sub_0033F390
// Address: 0x33f390 - 0x33f3c8
void sub_0033F390_0x33f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F390_0x33f390");
#endif

    switch (ctx->pc) {
        case 0x33f3b4u: goto label_33f3b4;
        default: break;
    }

    ctx->pc = 0x33f390u;

    // 0x33f390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f39c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f3a0: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x33f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x33f3a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F3A4u;
    {
        const bool branch_taken_0x33f3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3a4) {
            ctx->pc = 0x33F3B8u;
            goto label_33f3b8;
        }
    }
    ctx->pc = 0x33F3ACu;
    // 0x33f3ac: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x33F3ACu;
    SET_GPR_U32(ctx, 31, 0x33F3B4u);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x33F3ACu, 0x33F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3B4u;
label_33f3b4:
    // 0x33f3b4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x33f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_33f3b8:
    // 0x33f3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3C0u;
        // 0x33f3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F3C8u;
}
