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

// Function: sub_00354DE0
// Address: 0x354de0 - 0x354e48
void sub_00354DE0_0x354de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354DE0_0x354de0");
#endif

    switch (ctx->pc) {
        case 0x354e14u: goto label_354e14;
        default: break;
    }

    ctx->pc = 0x354de0u;

    // 0x354de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x354dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354df0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x354DF0u;
    {
        const bool branch_taken_0x354df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354DF0u;
        // 0x354df4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354df0) {
            ctx->pc = 0x354E38u;
            goto label_354e38;
        }
    }
    ctx->pc = 0x354DF8u;
    // 0x354df8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x354df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x354dfc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x354dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x354e00: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x354e04: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x354e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x354e08: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x354e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x354e0c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x354E0Cu;
    SET_GPR_U32(ctx, 31, 0x354E14u);
    ctx->pc = 0x354E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354E0Cu;
    // 0x354e10: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x354E0Cu, 0x354E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E14u;
label_354e14:
    // 0x354e14: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x354e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x354e18: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x354e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x354e1c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x354e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x354e20: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x354e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x354e24: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x354e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x354e28: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x354e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x354e2c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x354e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x354e30: 0x24638fb0  addiu       $v1, $v1, -0x7050
    ctx->pc = 0x354e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938544));
    // 0x354e34: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x354e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_354e38:
    // 0x354e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x354e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354e40: 0x3e00008  jr          $ra
    ctx->pc = 0x354E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E40u;
        // 0x354e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354E48u;
}
