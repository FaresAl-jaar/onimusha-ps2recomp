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

// Function: sub_00102320
// Address: 0x102320 - 0x102340
void sub_00102320_0x102320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102320_0x102320");
#endif

    ctx->pc = 0x102320u;

    // 0x102320: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x102324: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x102324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x102328: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x102328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x10232c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x102330: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x102330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x102334: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x102334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x102338: 0x3e00008  jr          $ra
    ctx->pc = 0x102338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102338u;
        // 0x10233c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102340u;
}
