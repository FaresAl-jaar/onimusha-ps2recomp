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

// Function: sub_00206D50
// Address: 0x206d50 - 0x206d84
void sub_00206D50_0x206d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D50_0x206d50");
#endif

    switch (ctx->pc) {
        case 0x206d74u: goto label_206d74;
        default: break;
    }

    ctx->pc = 0x206d50u;

    // 0x206d50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x206d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x206d58: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x206d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x206d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206d60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x206d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206d6c: 0xc049522  jal         func_125488
    ctx->pc = 0x206D6Cu;
    SET_GPR_U32(ctx, 31, 0x206D74u);
    ctx->pc = 0x206D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D6Cu;
    // 0x206d70: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x206D6Cu, 0x206D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D74u;
label_206d74:
    // 0x206d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x206D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D7Cu;
        // 0x206d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D84u;
}
