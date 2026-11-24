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

// Function: sub_002CD380
// Address: 0x2cd380 - 0x2cd3c0
void sub_002CD380_0x2cd380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD380_0x2cd380");
#endif

    switch (ctx->pc) {
        case 0x2cd39cu: goto label_2cd39c;
        case 0x2cd3b0u: goto label_2cd3b0;
        default: break;
    }

    ctx->pc = 0x2cd380u;

    // 0x2cd380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd390: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cd394: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2CD394u;
    SET_GPR_U32(ctx, 31, 0x2CD39Cu);
    ctx->pc = 0x2CD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD394u;
    // 0x2cd398: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2CD394u, 0x2CD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD39Cu;
label_2cd39c:
    // 0x2cd39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD3A0u;
    {
        const bool branch_taken_0x2cd3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3A0u;
        // 0x2cd3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3a0) {
            ctx->pc = 0x2CD3B0u;
            goto label_2cd3b0;
        }
    }
    ctx->pc = 0x2CD3A8u;
    // 0x2cd3a8: 0xc0b34f0  jal         func_2CD3C0
    ctx->pc = 0x2CD3A8u;
    SET_GPR_U32(ctx, 31, 0x2CD3B0u);
    ctx->pc = 0x2CD3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3C0u, 0x2CD3A8u, 0x2CD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3B0u;
label_2cd3b0:
    // 0x2cd3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3B8u;
        // 0x2cd3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD3C0u;
}
