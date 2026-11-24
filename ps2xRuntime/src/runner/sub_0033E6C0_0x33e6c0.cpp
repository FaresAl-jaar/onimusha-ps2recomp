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

// Function: sub_0033E6C0
// Address: 0x33e6c0 - 0x33e730
void sub_0033E6C0_0x33e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E6C0_0x33e6c0");
#endif

    switch (ctx->pc) {
        case 0x33e6f4u: goto label_33e6f4;
        case 0x33e6fcu: goto label_33e6fc;
        default: break;
    }

    ctx->pc = 0x33e6c0u;

    // 0x33e6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33e6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33e6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33E6D0u;
    {
        const bool branch_taken_0x33e6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6D0u;
        // 0x33e6d4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e6d0) {
            ctx->pc = 0x33E720u;
            goto label_33e720;
        }
    }
    ctx->pc = 0x33E6D8u;
    // 0x33e6d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e6dc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33e6e0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x33e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x33e6e4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33e6e8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x33e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x33e6ec: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x33E6ECu;
    SET_GPR_U32(ctx, 31, 0x33E6F4u);
    ctx->pc = 0x33E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6ECu;
    // 0x33e6f0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x33E6ECu, 0x33E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6F4u;
label_33e6f4:
    // 0x33e6f4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33E6F4u;
    SET_GPR_U32(ctx, 31, 0x33E6FCu);
    ctx->pc = 0x33E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6F4u;
    // 0x33e6f8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33E6F4u, 0x33E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6FCu;
label_33e6fc:
    // 0x33e6fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e700: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e704: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x33e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x33e708: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33e708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33e70c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33e710: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x33e710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e714: 0x24638a20  addiu       $v1, $v1, -0x75E0
    ctx->pc = 0x33e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937120));
    // 0x33e718: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33e718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33e71c: 0x0  nop
    ctx->pc = 0x33e71cu;
    // NOP
label_33e720:
    // 0x33e720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e728: 0x3e00008  jr          $ra
    ctx->pc = 0x33E728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E728u;
        // 0x33e72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E730u;
}
