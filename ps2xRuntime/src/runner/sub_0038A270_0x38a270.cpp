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

// Function: sub_0038A270
// Address: 0x38a270 - 0x38a2dc
void sub_0038A270_0x38a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A270_0x38a270");
#endif

    switch (ctx->pc) {
        case 0x38a294u: goto label_38a294;
        case 0x38a2acu: goto label_38a2ac;
        case 0x38a2ccu: goto label_38a2cc;
        default: break;
    }

    ctx->pc = 0x38a270u;

    // 0x38a270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a27c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38a284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a28c: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38A28Cu;
    SET_GPR_U32(ctx, 31, 0x38A294u);
    ctx->pc = 0x38A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A28Cu;
    // 0x38a290: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38A28Cu, 0x38A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A294u;
label_38a294:
    // 0x38a294: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x38a294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38a298: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38a298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38a29c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38a2a0: 0x24a5a2e0  addiu       $a1, $a1, -0x5D20
    ctx->pc = 0x38a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943456));
    // 0x38a2a4: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38A2A4u;
    SET_GPR_U32(ctx, 31, 0x38A2ACu);
    ctx->pc = 0x38A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2A4u;
    // 0x38a2a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38A2A4u, 0x38A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2ACu;
label_38a2ac:
    // 0x38a2ac: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38a2b0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38a2b4: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x38a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x38a2b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x38a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38a2bc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x38a2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38a2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2c4: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x38A2C4u;
    SET_GPR_U32(ctx, 31, 0x38A2CCu);
    ctx->pc = 0x38A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2C4u;
    // 0x38a2c8: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321320u, 0x38A2C4u, 0x38A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2CCu;
label_38a2cc:
    // 0x38a2cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x38A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2D4u;
        // 0x38a2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A2DCu;
}
