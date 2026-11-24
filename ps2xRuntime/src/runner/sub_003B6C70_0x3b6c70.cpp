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

// Function: sub_003B6C70
// Address: 0x3b6c70 - 0x3b6cd8
void sub_003B6C70_0x3b6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6C70_0x3b6c70");
#endif

    switch (ctx->pc) {
        case 0x3b6ca4u: goto label_3b6ca4;
        default: break;
    }

    ctx->pc = 0x3b6c70u;

    // 0x3b6c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b6c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b6c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b6c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6c80: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B6C80u;
    {
        const bool branch_taken_0x3b6c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C80u;
        // 0x3b6c84: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c80) {
            ctx->pc = 0x3B6CC8u;
            goto label_3b6cc8;
        }
    }
    ctx->pc = 0x3B6C88u;
    // 0x3b6c88: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b6c8c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3b6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3b6c90: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3b6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3b6c94: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b6c98: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3b6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3b6c9c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3B6C9Cu;
    SET_GPR_U32(ctx, 31, 0x3B6CA4u);
    ctx->pc = 0x3B6CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C9Cu;
    // 0x3b6ca0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3B6C9Cu, 0x3B6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6CA4u;
label_3b6ca4:
    // 0x3b6ca4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b6ca8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3b6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3b6cac: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3b6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3b6cb0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3b6cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3b6cb4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b6cb8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b6cbc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3b6cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3b6cc0: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x3b6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x3b6cc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3b6cc8:
    // 0x3b6cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CD0u;
        // 0x3b6cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6CD8u;
}
