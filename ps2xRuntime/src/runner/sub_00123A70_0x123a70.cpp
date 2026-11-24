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

// Function: sub_00123A70
// Address: 0x123a70 - 0x123acc
void sub_00123A70_0x123a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123A70_0x123a70");
#endif

    ctx->pc = 0x123a70u;

    // 0x123a70: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x123a70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x123a74: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x123a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x123a78: 0x3c0e0012  lui         $t6, 0x12
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18 << 16));
    // 0x123a7c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x123a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x123a80: 0x25ef7538  addiu       $t7, $t7, 0x7538
    ctx->pc = 0x123a80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30008));
    // 0x123a84: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x123a84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x123a88: 0x25ce7598  addiu       $t6, $t6, 0x7598
    ctx->pc = 0x123a88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 30104));
    // 0x123a8c: 0xac8f0020  sw          $t7, 0x20($a0)
    ctx->pc = 0x123a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 15));
    // 0x123a90: 0xac8e0024  sw          $t6, 0x24($a0)
    ctx->pc = 0x123a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 14));
    // 0x123a94: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x123a94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x123a98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x123a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x123a9c: 0x3c0e0012  lui         $t6, 0x12
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18 << 16));
    // 0x123aa0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x123aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x123aa4: 0x25ef7618  addiu       $t7, $t7, 0x7618
    ctx->pc = 0x123aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30232));
    // 0x123aa8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x123aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x123aac: 0x25ce7680  addiu       $t6, $t6, 0x7680
    ctx->pc = 0x123aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 30336));
    // 0x123ab0: 0xac8f0028  sw          $t7, 0x28($a0)
    ctx->pc = 0x123ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 15));
    // 0x123ab4: 0xac8e002c  sw          $t6, 0x2C($a0)
    ctx->pc = 0x123ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 14));
    // 0x123ab8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x123ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x123abc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x123abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x123ac0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x123ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x123ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x123AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC4u;
        // 0x123ac8: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123ACCu;
}
