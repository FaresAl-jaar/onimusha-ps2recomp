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

// Function: sub_0033C5E0
// Address: 0x33c5e0 - 0x33c630
void sub_0033C5E0_0x33c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C5E0_0x33c5e0");
#endif

    switch (ctx->pc) {
        case 0x33c614u: goto label_33c614;
        default: break;
    }

    ctx->pc = 0x33c5e0u;

    // 0x33c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33c5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5f0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x33C5F0u;
    {
        const bool branch_taken_0x33c5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5F0u;
        // 0x33c5f4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c5f0) {
            ctx->pc = 0x33C620u;
            goto label_33c620;
        }
    }
    ctx->pc = 0x33C5F8u;
    // 0x33c5f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33c5fc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33c600: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x33c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x33c604: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33c604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33c608: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x33c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x33c60c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33C60Cu;
    SET_GPR_U32(ctx, 31, 0x33C614u);
    ctx->pc = 0x33C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C60Cu;
    // 0x33c610: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33C60Cu, 0x33C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C614u;
label_33c614:
    // 0x33c614: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33c614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33c618: 0x24638960  addiu       $v1, $v1, -0x76A0
    ctx->pc = 0x33c618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936928));
    // 0x33c61c: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_33c620:
    // 0x33c620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c628: 0x3e00008  jr          $ra
    ctx->pc = 0x33C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C628u;
        // 0x33c62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C630u;
}
