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

// Function: sub_0038C550
// Address: 0x38c550 - 0x38c5b8
void sub_0038C550_0x38c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C550_0x38c550");
#endif

    switch (ctx->pc) {
        case 0x38c584u: goto label_38c584;
        default: break;
    }

    ctx->pc = 0x38c550u;

    // 0x38c550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38c558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38c55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c560: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38C560u;
    {
        const bool branch_taken_0x38c560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C560u;
        // 0x38c564: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c560) {
            ctx->pc = 0x38C5A8u;
            goto label_38c5a8;
        }
    }
    ctx->pc = 0x38C568u;
    // 0x38c568: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38c568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38c56c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x38c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x38c570: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x38c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x38c574: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38c578: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x38c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x38c57c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x38C57Cu;
    SET_GPR_U32(ctx, 31, 0x38C584u);
    ctx->pc = 0x38C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C57Cu;
    // 0x38c580: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x38C57Cu, 0x38C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C584u;
label_38c584:
    // 0x38c584: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38c588: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x38c588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x38c58c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x38c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x38c590: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x38c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x38c594: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38c594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38c598: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38c598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38c59c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x38c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x38c5a0: 0x24639bb0  addiu       $v1, $v1, -0x6450
    ctx->pc = 0x38c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941616));
    // 0x38c5a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_38c5a8:
    // 0x38c5a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5B0u;
        // 0x38c5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C5B8u;
}
