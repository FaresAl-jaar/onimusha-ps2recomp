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

// Function: sub_00233D70
// Address: 0x233d70 - 0x233df8
void sub_00233D70_0x233d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D70_0x233d70");
#endif

    switch (ctx->pc) {
        case 0x233dc4u: goto label_233dc4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233de8u: goto label_233de8;
        default: break;
    }

    ctx->pc = 0x233d70u;

    // 0x233d70: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233d74: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233d78: 0x8c477548  lw          $a3, 0x7548($v0)
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233d7c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233d80: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x233d84: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233d88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233d8c: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233d90: 0x24631540  addiu       $v1, $v1, 0x1540
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5440));
    // 0x233d94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d98: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x233d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x233d9c: 0x24a53688  addiu       $a1, $a1, 0x3688
    ctx->pc = 0x233d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13960));
    // 0x233da0: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233da4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233da8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x233da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x233dac: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x233db0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233db4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x233db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x233db8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x233db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x233dbc: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233DBCu;
    SET_GPR_U32(ctx, 31, 0x233DC4u);
    ctx->pc = 0x233DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DBCu;
    // 0x233dc0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233DBCu, 0x233DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DC4u;
label_233dc4:
    // 0x233dc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x233dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233dcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233dd0: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233DD0u;
    SET_GPR_U32(ctx, 31, 0x233DD8u);
    ctx->pc = 0x233DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DD0u;
    // 0x233dd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233DD0u, 0x233DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DD8u;
label_233dd8:
    // 0x233dd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233ddc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233de0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233DE0u;
    SET_GPR_U32(ctx, 31, 0x233DE8u);
    ctx->pc = 0x233DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DE0u;
    // 0x233de4: 0x8c45fc2c  lw          $a1, -0x3D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233DE0u, 0x233DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DE8u;
label_233de8:
    // 0x233de8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233dec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233df0: 0x3e00008  jr          $ra
    ctx->pc = 0x233DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DF0u;
        // 0x233df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DF8u;
}
