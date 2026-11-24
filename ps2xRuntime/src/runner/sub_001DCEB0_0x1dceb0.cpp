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

// Function: sub_001DCEB0
// Address: 0x1dceb0 - 0x1dcf08
void sub_001DCEB0_0x1dceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCEB0_0x1dceb0");
#endif

    ctx->pc = 0x1dceb0u;

    // 0x1dceb0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dceb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dceb8: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dceb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcebc: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1dcebcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1dcec0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dcec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1dcec4: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dcec8: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dcec8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1dcecc: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dceccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1dced0: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dced0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dced4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dced8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dcedc: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dcedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
    // 0x1dcee0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dcee0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dcee4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dcee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1dcee8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dcee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dceec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dcef0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dcef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1dcef4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dcef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dcef8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dcef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1dcefc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dcefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dcf00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF00u;
        // 0x1dcf04: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF08u;
}
