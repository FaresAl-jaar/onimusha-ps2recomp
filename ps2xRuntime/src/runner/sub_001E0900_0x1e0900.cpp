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

// Function: sub_001E0900
// Address: 0x1e0900 - 0x1e0958
void sub_001E0900_0x1e0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0900_0x1e0900");
#endif

    ctx->pc = 0x1e0900u;

    // 0x1e0900: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e0904: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e0904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e0908: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e090c: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1e090cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1e0910: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e0910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e0914: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1e0914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e0918: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e0918u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e091c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e091cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1e0920: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e0920u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e0924: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0928: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e092c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
    // 0x1e0930: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0930u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0934: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1e0938: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e093c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0940: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e0940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e0944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0948: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e094c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e0950: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0950u;
        // 0x1e0954: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0958u;
}
