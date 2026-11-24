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

// Function: sub_0039A280
// Address: 0x39a280 - 0x39a2d8
void sub_0039A280_0x39a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A280_0x39a280");
#endif

    switch (ctx->pc) {
        case 0x39a2a0u: goto label_39a2a0;
        case 0x39a2c8u: goto label_39a2c8;
        default: break;
    }

    ctx->pc = 0x39a280u;

    // 0x39a280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a28c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x39a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x39a290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a294: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x39a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39a298: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x39A298u;
    SET_GPR_U32(ctx, 31, 0x39A2A0u);
    ctx->pc = 0x39A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A298u;
    // 0x39a29c: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x39A298u, 0x39A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A2A0u;
label_39a2a0:
    // 0x39a2a0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39a2a4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x39a2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39a2a8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39a2ac: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x39a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x39a2b0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x39a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39a2b4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x39a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x39a2b8: 0x8c640128  lw          $a0, 0x128($v1)
    ctx->pc = 0x39a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x39a2bc: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x39a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39a2c0: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x39A2C0u;
    SET_GPR_U32(ctx, 31, 0x39A2C8u);
    ctx->pc = 0x39A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A2C0u;
    // 0x39a2c4: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x39A2C0u, 0x39A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A2C8u;
label_39a2c8:
    // 0x39a2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x39A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2D0u;
        // 0x39a2d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A2D8u;
}
