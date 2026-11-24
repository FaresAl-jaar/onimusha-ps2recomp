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

// Function: sub_003BD410
// Address: 0x3bd410 - 0x3bd470
void sub_003BD410_0x3bd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD410_0x3bd410");
#endif

    ctx->pc = 0x3bd410u;

    // 0x3bd410: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd414: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bd414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3bd418: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd41c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD420u;
    {
        const bool branch_taken_0x3bd420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD420u;
        // 0x3bd424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd420) {
            ctx->pc = 0x3BD430u;
            goto label_3bd430;
        }
    }
    ctx->pc = 0x3BD428u;
    // 0x3bd428: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BD428u;
    {
        const bool branch_taken_0x3bd428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd428) {
            ctx->pc = 0x3BD468u;
            goto label_3bd468;
        }
    }
    ctx->pc = 0x3BD430u;
label_3bd430:
    // 0x3bd430: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3bd430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3bd434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD438u;
    {
        const bool branch_taken_0x3bd438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD438u;
        // 0x3bd43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd438) {
            ctx->pc = 0x3BD448u;
            goto label_3bd448;
        }
    }
    ctx->pc = 0x3BD440u;
    // 0x3bd440: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BD440u;
    {
        const bool branch_taken_0x3bd440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd440) {
            ctx->pc = 0x3BD468u;
            goto label_3bd468;
        }
    }
    ctx->pc = 0x3BD448u;
label_3bd448:
    // 0x3bd448: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bd448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd44c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD450u;
    {
        const bool branch_taken_0x3bd450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD450u;
        // 0x3bd454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd450) {
            ctx->pc = 0x3BD460u;
            goto label_3bd460;
        }
    }
    ctx->pc = 0x3BD458u;
    // 0x3bd458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BD458u;
    {
        const bool branch_taken_0x3bd458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd458) {
            ctx->pc = 0x3BD468u;
            goto label_3bd468;
        }
    }
    ctx->pc = 0x3BD460u;
label_3bd460:
    // 0x3bd460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bd460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd464: 0x0  nop
    ctx->pc = 0x3bd464u;
    // NOP
label_3bd468:
    // 0x3bd468: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD470u;
}
