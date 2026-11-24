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

// Function: sub_0023A868
// Address: 0x23a868 - 0x23a8a4
void sub_0023A868_0x23a868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A868_0x23a868");
#endif

    switch (ctx->pc) {
        case 0x23a884u: goto label_23a884;
        default: break;
    }

    ctx->pc = 0x23a868u;

    // 0x23a868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a86c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x23a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23a870: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A870u;
    {
        const bool branch_taken_0x23a870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A870u;
        // 0x23a874: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a870) {
            ctx->pc = 0x23A890u;
            goto label_23a890;
        }
    }
    ctx->pc = 0x23A878u;
    // 0x23a878: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a87c: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A87Cu;
    SET_GPR_U32(ctx, 31, 0x23A884u);
    ctx->pc = 0x23A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A87Cu;
    // 0x23a880: 0x2484b248  addiu       $a0, $a0, -0x4DB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A87Cu, 0x23A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A884u;
label_23a884:
    // 0x23a884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A884u;
    {
        const bool branch_taken_0x23a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A884u;
        // 0x23a888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a884) {
            ctx->pc = 0x23A898u;
            goto label_23a898;
        }
    }
    ctx->pc = 0x23A88Cu;
    // 0x23a88c: 0x0  nop
    ctx->pc = 0x23a88cu;
    // NOP
label_23a890:
    // 0x23a890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23a894: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x23a894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_23a898:
    // 0x23a898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A89Cu;
        // 0x23a8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A8A4u;
}
