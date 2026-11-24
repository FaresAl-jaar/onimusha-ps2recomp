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

// Function: sub_0012FD80
// Address: 0x12fd80 - 0x12fde0
void sub_0012FD80_0x12fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FD80_0x12fd80");
#endif

    ctx->pc = 0x12fd80u;

    // 0x12fd80: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x12fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x12fd84: 0x24c3ffe0  addiu       $v1, $a2, -0x20
    ctx->pc = 0x12fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x12fd88: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x12fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x12fd8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fd90: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x12fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12fd94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fd98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12fd9c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fda0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fda4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fda8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12fdac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdb0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12fdb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdb8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x12fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x12fdbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdc0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x12fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x12fdc4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdc8: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x12fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x12fdcc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdd0: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x12fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x12fdd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12FDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDD8u;
        // 0x12fddc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FDE0u;
}
