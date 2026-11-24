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

// Function: sub_001DE840
// Address: 0x1de840 - 0x1de898
void sub_001DE840_0x1de840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE840_0x1de840");
#endif

    ctx->pc = 0x1de840u;

    // 0x1de840: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1de840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de844: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1de844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1de848: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de84c: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1de84cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1de850: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1de850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1de854: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1de858: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1de858u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1de85c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1de85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1de860: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1de860u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de864: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1de864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1de868: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1de86c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1de86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
    // 0x1de870: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1de870u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1de874: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1de874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1de878: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1de87c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de880: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1de884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de888: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1de888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1de88c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1de890: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE890u;
        // 0x1de894: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE898u;
}
