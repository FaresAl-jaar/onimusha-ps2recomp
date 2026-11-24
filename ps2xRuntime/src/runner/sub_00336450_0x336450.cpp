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

// Function: sub_00336450
// Address: 0x336450 - 0x3364a8
void sub_00336450_0x336450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336450_0x336450");
#endif

    switch (ctx->pc) {
        case 0x336484u: goto label_336484;
        case 0x33648cu: goto label_33648c;
        default: break;
    }

    ctx->pc = 0x336450u;

    // 0x336450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33645c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336460: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x336460u;
    {
        const bool branch_taken_0x336460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336460u;
        // 0x336464: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336460) {
            ctx->pc = 0x336498u;
            goto label_336498;
        }
    }
    ctx->pc = 0x336468u;
    // 0x336468: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33646c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x336470: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x336470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x336474: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x336474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x336478: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x33647c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x33647Cu;
    SET_GPR_U32(ctx, 31, 0x336484u);
    ctx->pc = 0x336480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33647Cu;
    // 0x336480: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x33647Cu, 0x336484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336484u;
label_336484:
    // 0x336484: 0xc09d694  jal         func_275A50
    ctx->pc = 0x336484u;
    SET_GPR_U32(ctx, 31, 0x33648Cu);
    ctx->pc = 0x336488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336484u;
    // 0x336488: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x336484u, 0x33648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33648Cu;
label_33648c:
    // 0x33648c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x336490: 0x246388a0  addiu       $v1, $v1, -0x7760
    ctx->pc = 0x336490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936736));
    // 0x336494: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x336494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_336498:
    // 0x336498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33649c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33649cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3364a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3364A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364A0u;
        // 0x3364a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3364A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3364A8u;
}
