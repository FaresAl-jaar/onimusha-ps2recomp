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

// Function: sub_0012C260
// Address: 0x12c260 - 0x12c2ac
void sub_0012C260_0x12c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C260_0x12c260");
#endif

    ctx->pc = 0x12c260u;

    // 0x12c260: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c264: 0x5783f  dsra32      $t7, $a1, 0
    ctx->pc = 0x12c264u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12c268: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12c268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12c26c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12c26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12c270: 0x4f0018  mult        $zero, $v0, $t7
    ctx->pc = 0x12c270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c274: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12c274u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12c278: 0x70450019  multu1      $zero, $v0, $a1
    ctx->pc = 0x12c278u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c27c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12c27cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12c280: 0x70852000  madd        $a0, $a0, $a1
    ctx->pc = 0x12c280u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12c284: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12c284u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x12c288: 0x70200ba9  pcpyud      $at, $at, $zero
    ctx->pc = 0x12c288u;
    SET_GPR_VEC(ctx, 1, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 0)));
    // 0x12c28c: 0x20102d  daddu       $v0, $at, $zero
    ctx->pc = 0x12c28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c290: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x12c290u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12c294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c298: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x12c298u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x12c29c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c2a0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12c2a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12c2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2A4u;
        // 0x12c2a8: 0x4f1025  or          $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C2ACu;
}
