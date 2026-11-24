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

// Function: sub_001DF1E0
// Address: 0x1df1e0 - 0x1df238
void sub_001DF1E0_0x1df1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF1E0_0x1df1e0");
#endif

    ctx->pc = 0x1df1e0u;

    // 0x1df1e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1df1e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1df1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df1e8: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1df1e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df1ec: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1df1ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1df1f0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1df1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1df1f4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1df1f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1df1f8: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1df1f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1df1fc: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1df1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1df200: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1df200u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1df204: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1df204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df208: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1df20c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1df20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
    // 0x1df210: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1df210u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df214: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1df214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1df218: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1df218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df21c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1df220: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1df220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1df224: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1df228: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1df228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1df22c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1df230: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF230u;
        // 0x1df234: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF238u;
}
