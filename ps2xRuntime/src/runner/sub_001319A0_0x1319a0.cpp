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

// Function: sub_001319A0
// Address: 0x1319a0 - 0x131a04
void sub_001319A0_0x1319a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001319A0_0x1319a0");
#endif

    switch (ctx->pc) {
        case 0x1319c4u: goto label_1319c4;
        case 0x1319f0u: goto label_1319f0;
        default: break;
    }

    ctx->pc = 0x1319a0u;

    // 0x1319a0: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x1319a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x1319a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1319a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1319a8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1319a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1319ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1319acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1319b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1319b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1319b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1319b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1319b8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1319b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1319bc: 0xc04c694  jal         func_131A50
    ctx->pc = 0x1319BCu;
    SET_GPR_U32(ctx, 31, 0x1319C4u);
    ctx->pc = 0x1319C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319BCu;
    // 0x1319c0: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A50u, 0x1319BCu, 0x1319C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319C4u;
label_1319c4:
    // 0x1319c4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1319c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1319c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1319c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1319cc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1319ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1319d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1319d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319d4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x1319d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1319d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1319d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319dc: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1319dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1319e0: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x1319e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1319e4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1319e8: 0xc04d95c  jal         func_136570
    ctx->pc = 0x1319E8u;
    SET_GPR_U32(ctx, 31, 0x1319F0u);
    ctx->pc = 0x1319ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319E8u;
    // 0x1319ec: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x1319E8u, 0x1319F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319F0u;
label_1319f0:
    // 0x1319f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1319f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1319f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1319f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1319f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1319f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1319fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1319FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319FCu;
        // 0x131a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1319FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131A04u;
}
