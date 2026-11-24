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

// Function: sub_0024AE90
// Address: 0x24ae90 - 0x24aedc
void sub_0024AE90_0x24ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE90_0x24ae90");
#endif

    ctx->pc = 0x24ae90u;

    // 0x24ae90: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24ae90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24ae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ae9c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24aea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24aea4: 0x24471100  addiu       $a3, $v0, 0x1100
    ctx->pc = 0x24aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x24aea8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x24aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x24aeac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aeb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x24aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24aeb4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D1100u));
    // 0x24aeb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AEB8u;
    {
        const bool branch_taken_0x24aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB8u;
        // 0x24aebc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb8) {
            ctx->pc = 0x24AED0u;
            goto label_24aed0;
        }
    }
    ctx->pc = 0x24AEC0u;
    // 0x24aec0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x24aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24aec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aec8: 0x8092b68  j           func_24ADA0
    ctx->pc = 0x24AEC8u;
    ctx->pc = 0x24AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEC8u;
    // 0x24aecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADA0u;
    sub_0024ADA0_0x24ada0(rdram, ctx, runtime); return;
    ctx->pc = 0x24AED0u;
label_24aed0:
    // 0x24aed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x24AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED4u;
        // 0x24aed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AEDCu;
}
