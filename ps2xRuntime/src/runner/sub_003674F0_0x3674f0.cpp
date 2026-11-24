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

// Function: sub_003674F0
// Address: 0x3674f0 - 0x367558
void sub_003674F0_0x3674f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003674F0_0x3674f0");
#endif

    switch (ctx->pc) {
        case 0x367520u: goto label_367520;
        case 0x367548u: goto label_367548;
        default: break;
    }

    ctx->pc = 0x3674f0u;

    // 0x3674f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3674f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3674f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3674f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3674f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3674f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3674fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3674fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367504: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x367504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367508: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x367508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x36750c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36750cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367510: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x367510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x367514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367518: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x367518u;
    SET_GPR_U32(ctx, 31, 0x367520u);
    ctx->pc = 0x36751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367518u;
    // 0x36751c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x367518u, 0x367520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367520u;
label_367520:
    // 0x367520: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x367520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x367524: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x367524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x367528: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x367528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x36752c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367530: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x367530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    // 0x367534: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x367534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367538: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36753c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x367540: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x367540u;
    SET_GPR_U32(ctx, 31, 0x367548u);
    ctx->pc = 0x367544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367540u;
    // 0x367544: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x367540u, 0x367548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367548u;
label_367548:
    // 0x367548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36754c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367550: 0x3e00008  jr          $ra
    ctx->pc = 0x367550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367550u;
        // 0x367554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367558u;
}
