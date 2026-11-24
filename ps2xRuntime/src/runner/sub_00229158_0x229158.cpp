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

// Function: sub_00229158
// Address: 0x229158 - 0x22918c
void sub_00229158_0x229158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229158_0x229158");
#endif

    ctx->pc = 0x229158u;

    // 0x229158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22915c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229160: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x229160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x229164: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x229168: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x229168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x22916c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22916Cu;
    {
        const bool branch_taken_0x22916c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22916Cu;
        // 0x229170: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22916c) {
            ctx->pc = 0x229180u;
            goto label_229180;
        }
    }
    ctx->pc = 0x229174u;
    // 0x229174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229178: 0x808a172  j           func_2285C8
    ctx->pc = 0x229178u;
    ctx->pc = 0x22917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229178u;
    // 0x22917c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C8u;
    sub_002285C8_0x2285c8(rdram, ctx, runtime); return;
    ctx->pc = 0x229180u;
label_229180:
    // 0x229180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229184: 0x3e00008  jr          $ra
    ctx->pc = 0x229184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229184u;
        // 0x229188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22918Cu;
}
