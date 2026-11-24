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

// Function: sub_003942C0
// Address: 0x3942c0 - 0x394328
void sub_003942C0_0x3942c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003942C0_0x3942c0");
#endif

    switch (ctx->pc) {
        case 0x3942f0u: goto label_3942f0;
        case 0x394314u: goto label_394314;
        default: break;
    }

    ctx->pc = 0x3942c0u;

    // 0x3942c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3942c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3942c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3942c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3942c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3942c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3942cc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3942ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3942d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3942d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3942d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3942d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3942d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3942d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942dc: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x3942dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x3942e0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x3942e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3942e4: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x3942e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3942e8: 0xc0e50e8  jal         func_3943A0
    ctx->pc = 0x3942E8u;
    SET_GPR_U32(ctx, 31, 0x3942F0u);
    ctx->pc = 0x3942ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3942E8u;
    // 0x3942ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3943A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3943A0u, 0x3942E8u, 0x3942F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942F0u;
label_3942f0:
    // 0x3942f0: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x3942f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3942f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3942f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3942f8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3942f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3942fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3942fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x394308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39430c: 0xc0e50cc  jal         func_394330
    ctx->pc = 0x39430Cu;
    SET_GPR_U32(ctx, 31, 0x394314u);
    ctx->pc = 0x394310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39430Cu;
    // 0x394310: 0xac23fc90  sw          $v1, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394330u, 0x39430Cu, 0x394314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394314u;
label_394314:
    // 0x394314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39431c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39431cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394320: 0x3e00008  jr          $ra
    ctx->pc = 0x394320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394320u;
        // 0x394324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394328u;
}
