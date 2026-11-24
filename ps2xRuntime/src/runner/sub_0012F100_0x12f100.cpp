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

// Function: sub_0012F100
// Address: 0x12f100 - 0x12f15c
void sub_0012F100_0x12f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F100_0x12f100");
#endif

    switch (ctx->pc) {
        case 0x12f140u: goto label_12f140;
        case 0x12f14cu: goto label_12f14c;
        default: break;
    }

    ctx->pc = 0x12f100u;

    // 0x12f100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f104: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x12f108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f10c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f114: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x12f114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x12f118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f11c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x12f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x12f120: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x12f120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x12f124: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x12f124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x12f128: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x12f128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x12f12c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x12f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x12f130: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x12f130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x12f134: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x12f134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x12f138: 0xc04bc58  jal         func_12F160
    ctx->pc = 0x12F138u;
    SET_GPR_U32(ctx, 31, 0x12F140u);
    ctx->pc = 0x12F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F138u;
    // 0x12f13c: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F160u, 0x12F138u, 0x12F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F140u;
label_12f140:
    // 0x12f140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f144: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x12F144u;
    SET_GPR_U32(ctx, 31, 0x12F14Cu);
    ctx->pc = 0x12F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F144u;
    // 0x12f148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x12F144u, 0x12F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F14Cu;
label_12f14c:
    // 0x12f14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f154: 0x3e00008  jr          $ra
    ctx->pc = 0x12F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F154u;
        // 0x12f158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F15Cu;
}
