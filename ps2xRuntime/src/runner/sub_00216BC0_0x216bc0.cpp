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

// Function: sub_00216BC0
// Address: 0x216bc0 - 0x216bfc
void sub_00216BC0_0x216bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216BC0_0x216bc0");
#endif

    switch (ctx->pc) {
        case 0x216bf0u: goto label_216bf0;
        default: break;
    }

    ctx->pc = 0x216bc0u;

    // 0x216bc0: 0x3c02055d  lui         $v0, 0x55D
    ctx->pc = 0x216bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1373 << 16));
    // 0x216bc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216bc8: 0x34424a80  ori         $v0, $v0, 0x4A80
    ctx->pc = 0x216bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19072);
    // 0x216bcc: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x216bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x216bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216bd4: 0x1812  mflo        $v1
    ctx->pc = 0x216bd4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x216bd8: 0x2010  mfhi        $a0
    ctx->pc = 0x216bd8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x216bdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x216bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x216be0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x216be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x216be4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x216be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x216be8: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x216BE8u;
    SET_GPR_U32(ctx, 31, 0x216BF0u);
    ctx->pc = 0x216BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BE8u;
    // 0x216bec: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x216BE8u, 0x216BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF0u;
label_216bf0:
    // 0x216bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x216BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF4u;
        // 0x216bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216BFCu;
}
