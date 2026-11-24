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

// Function: sub_00398DA0
// Address: 0x398da0 - 0x398e08
void sub_00398DA0_0x398da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398DA0_0x398da0");
#endif

    switch (ctx->pc) {
        case 0x398dd4u: goto label_398dd4;
        default: break;
    }

    ctx->pc = 0x398da0u;

    // 0x398da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398db0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x398DB0u;
    {
        const bool branch_taken_0x398db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DB0u;
        // 0x398db4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398db0) {
            ctx->pc = 0x398DF8u;
            goto label_398df8;
        }
    }
    ctx->pc = 0x398DB8u;
    // 0x398db8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x398db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x398dbc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x398dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x398dc0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x398dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x398dc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x398dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x398dc8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x398dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x398dcc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x398DCCu;
    SET_GPR_U32(ctx, 31, 0x398DD4u);
    ctx->pc = 0x398DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DCCu;
    // 0x398dd0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x398DCCu, 0x398DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DD4u;
label_398dd4:
    // 0x398dd4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x398dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x398dd8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x398dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x398ddc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x398ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x398de0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x398de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x398de4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x398de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x398de8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x398de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x398dec: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x398decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x398df0: 0x24639f10  addiu       $v1, $v1, -0x60F0
    ctx->pc = 0x398df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
    // 0x398df4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x398df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_398df8:
    // 0x398df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398e00: 0x3e00008  jr          $ra
    ctx->pc = 0x398E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E00u;
        // 0x398e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398E08u;
}
