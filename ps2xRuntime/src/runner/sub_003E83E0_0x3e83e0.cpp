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

// Function: sub_003E83E0
// Address: 0x3e83e0 - 0x3e8428
void sub_003E83E0_0x3e83e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E83E0_0x3e83e0");
#endif

    ctx->pc = 0x3e83e0u;

    // 0x3e83e0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e83e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e83e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e83e8: 0x90246678  lbu         $a0, 0x6678($at)
    ctx->pc = 0x3e83e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x936678u));
    // 0x3e83ec: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E83ECu;
    {
        const bool branch_taken_0x3e83ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83ECu;
        // 0x3e83f0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e83ec) {
            ctx->pc = 0x3E8408u;
            goto label_3e8408;
        }
    }
    ctx->pc = 0x3E83F4u;
    // 0x3e83f4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3e83f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3e83f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3e83fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e83fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E8400u;
    {
        const bool branch_taken_0x3e8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8400u;
        // 0x3e8404: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8400) {
            ctx->pc = 0x3E8420u;
            goto label_3e8420;
        }
    }
    ctx->pc = 0x3E8408u;
label_3e8408:
    // 0x3e8408: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e840c: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x3e840cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e8410: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x3e8410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x3e8414: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e8414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e8418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e841c: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3e841cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
label_3e8420:
    // 0x3e8420: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8428u;
}
