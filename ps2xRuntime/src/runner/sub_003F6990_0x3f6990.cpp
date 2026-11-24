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

// Function: sub_003F6990
// Address: 0x3f6990 - 0x3f69d8
void sub_003F6990_0x3f6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6990_0x3f6990");
#endif

    switch (ctx->pc) {
        case 0x3f69a0u: goto label_3f69a0;
        default: break;
    }

    ctx->pc = 0x3f6990u;

    // 0x3f6990: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x3f6990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x3f6994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6998: 0x8f8484ac  lw          $a0, -0x7B54($gp)
    ctx->pc = 0x3f6998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
    // 0x3f699c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3f699cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3f69a0:
    // 0x3f69a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f69a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f69a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F69A4u;
    {
        const bool branch_taken_0x3f69a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69A4u;
        // 0x3f69a8: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69a4) {
            ctx->pc = 0x3F69B8u;
            goto label_3f69b8;
        }
    }
    ctx->pc = 0x3F69ACu;
    // 0x3f69ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F69ACu;
    {
        const bool branch_taken_0x3f69ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69ACu;
        // 0x3f69b0: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69ac) {
            ctx->pc = 0x3F69D0u;
            goto label_3f69d0;
        }
    }
    ctx->pc = 0x3F69B4u;
    // 0x3f69b4: 0x0  nop
    ctx->pc = 0x3f69b4u;
    // NOP
label_3f69b8:
    // 0x3f69b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f69b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f69bc: 0x2ca20024  sltiu       $v0, $a1, 0x24
    ctx->pc = 0x3f69bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x3f69c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3F69C0u;
    {
        const bool branch_taken_0x3f69c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69C0u;
        // 0x3f69c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69c0) {
            ctx->pc = 0x3F69A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f69a0;
        }
    }
    ctx->pc = 0x3F69C8u;
    // 0x3f69c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f69c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f69cc: 0x0  nop
    ctx->pc = 0x3f69ccu;
    // NOP
label_3f69d0:
    // 0x3f69d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F69D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F69D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F69D8u;
}
