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

// Function: sub_001E0E60
// Address: 0x1e0e60 - 0x1e0eb8
void sub_001E0E60_0x1e0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0E60_0x1e0e60");
#endif

    ctx->pc = 0x1e0e60u;

    // 0x1e0e60: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e0e64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e0e68: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0e6c: 0x8467000a  lh          $a3, 0xA($v1)
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1e0e70: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e0e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e0e74: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1e0e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e0e78: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e0e78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e0e7c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1e0e80: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e0e84: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e0e8c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e0e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
    // 0x1e0e90: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0e90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0e94: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1e0e98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0e98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0ea0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e0ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e0ea4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0ea8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e0ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e0eac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e0eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EB0u;
        // 0x1e0eb4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0EB8u;
}
