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

// Function: sub_0018F660
// Address: 0x18f660 - 0x18f6c4
void sub_0018F660_0x18f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F660_0x18f660");
#endif

    switch (ctx->pc) {
        case 0x18f684u: goto label_18f684;
        default: break;
    }

    ctx->pc = 0x18f660u;

    // 0x18f660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f664: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F664u;
    {
        const bool branch_taken_0x18f664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F664u;
        // 0x18f668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f664) {
            ctx->pc = 0x18F690u;
            goto label_18f690;
        }
    }
    ctx->pc = 0x18F66Cu;
    // 0x18f66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f670: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x18f670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x18f674: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x18f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x18f678: 0xa38286dc  sb          $v0, -0x7924($gp)
    ctx->pc = 0x18f678u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936284), (uint8_t)GPR_U32(ctx, 2));
    // 0x18f67c: 0xc056e04  jal         func_15B810
    ctx->pc = 0x18F67Cu;
    SET_GPR_U32(ctx, 31, 0x18F684u);
    ctx->pc = 0x18F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F67Cu;
    // 0x18f680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x18F67Cu, 0x18F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F684u;
label_18f684:
    // 0x18f684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18F684u;
    {
        const bool branch_taken_0x18f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f684) {
            ctx->pc = 0x18F6B0u;
            goto label_18f6b0;
        }
    }
    ctx->pc = 0x18F68Cu;
    // 0x18f68c: 0x0  nop
    ctx->pc = 0x18f68cu;
    // NOP
label_18f690:
    // 0x18f690: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x18f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x18f694: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x18f694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FE0u));
    // 0x18f698: 0xa38086dc  sb          $zero, -0x7924($gp)
    ctx->pc = 0x18f698u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936284), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f69c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x18f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x18f6a0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x18f6a4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x18f6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x18f6a8: 0xac230fe0  sw          $v1, 0xFE0($at)
    ctx->pc = 0x18f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
    // 0x18f6ac: 0x0  nop
    ctx->pc = 0x18f6acu;
    // NOP
label_18f6b0:
    // 0x18f6b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18f6b4: 0xa38386e0  sb          $v1, -0x7920($gp)
    ctx->pc = 0x18f6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936288), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18F6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6BCu;
        // 0x18f6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F6C4u;
}
