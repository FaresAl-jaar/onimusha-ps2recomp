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

// Function: sub_00246670
// Address: 0x246670 - 0x2466a8
void sub_00246670_0x246670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246670_0x246670");
#endif

    switch (ctx->pc) {
        case 0x246684u: goto label_246684;
        default: break;
    }

    ctx->pc = 0x246670u;

    // 0x246670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24667c: 0xc091966  jal         func_246598
    ctx->pc = 0x24667Cu;
    SET_GPR_U32(ctx, 31, 0x246684u);
    ctx->pc = 0x246680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24667Cu;
    // 0x246680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246598u, 0x24667Cu, 0x246684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246684u;
label_246684:
    // 0x246684: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x246684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x246688: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24668c: 0x2442e9c8  addiu       $v0, $v0, -0x1638
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961608));
    // 0x246690: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x246690u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x246694: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x246694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x246698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24669c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24669cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2466a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2466A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466A0u;
        // 0x2466a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2466A8u;
}
