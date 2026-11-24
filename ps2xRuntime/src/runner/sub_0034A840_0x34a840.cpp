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

// Function: sub_0034A840
// Address: 0x34a840 - 0x34a8a8
void sub_0034A840_0x34a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A840_0x34a840");
#endif

    switch (ctx->pc) {
        case 0x34a874u: goto label_34a874;
        default: break;
    }

    ctx->pc = 0x34a840u;

    // 0x34a840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34a844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34a848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a850: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34A850u;
    {
        const bool branch_taken_0x34a850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A850u;
        // 0x34a854: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a850) {
            ctx->pc = 0x34A898u;
            goto label_34a898;
        }
    }
    ctx->pc = 0x34A858u;
    // 0x34a858: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34a85c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x34a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x34a860: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x34a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x34a864: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34a864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34a868: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x34a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x34a86c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x34A86Cu;
    SET_GPR_U32(ctx, 31, 0x34A874u);
    ctx->pc = 0x34A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A86Cu;
    // 0x34a870: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x34A86Cu, 0x34A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A874u;
label_34a874:
    // 0x34a874: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34a874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34a878: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x34a87c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x34a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x34a880: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x34a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x34a884: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34a884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34a888: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34a888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34a88c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x34a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x34a890: 0x24638d20  addiu       $v1, $v1, -0x72E0
    ctx->pc = 0x34a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937888));
    // 0x34a894: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_34a898:
    // 0x34a898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8A0u;
        // 0x34a8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A8A8u;
}
