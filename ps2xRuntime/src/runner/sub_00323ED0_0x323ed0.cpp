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

// Function: sub_00323ED0
// Address: 0x323ed0 - 0x323f3c
void sub_00323ED0_0x323ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323ED0_0x323ed0");
#endif

    switch (ctx->pc) {
        case 0x323ef8u: goto label_323ef8;
        case 0x323f10u: goto label_323f10;
        default: break;
    }

    ctx->pc = 0x323ed0u;

    // 0x323ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x323ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x323ed4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x323ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x323ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x323ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x323edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x323edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323ee0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x323ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323eec: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x323eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x323ef0: 0xdcb20020  ld          $s2, 0x20($a1)
    ctx->pc = 0x323ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x323ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x323ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323ef8:
    // 0x323ef8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x323EF8u;
    {
        const bool branch_taken_0x323ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x323EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EF8u;
        // 0x323efc: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ef8) {
            ctx->pc = 0x323F20u;
            goto label_323f20;
        }
    }
    ctx->pc = 0x323F00u;
    // 0x323f00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x323F00u;
    {
        const bool branch_taken_0x323f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F00u;
        // 0x323f04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f00) {
            ctx->pc = 0x323F10u;
            goto label_323f10;
        }
    }
    ctx->pc = 0x323F08u;
    // 0x323f08: 0xc0c8f5c  jal         func_323D70
    ctx->pc = 0x323F08u;
    SET_GPR_U32(ctx, 31, 0x323F10u);
    ctx->pc = 0x323F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F08u;
    // 0x323f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D70u, 0x323F08u, 0x323F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F10u;
label_323f10:
    // 0x323f10: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x323f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x323f14: 0x12907a  dsrl        $s2, $s2, 1
    ctx->pc = 0x323f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 1);
    // 0x323f18: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x323F18u;
    {
        const bool branch_taken_0x323f18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x323F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F18u;
        // 0x323f1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f18) {
            ctx->pc = 0x323EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323ef8;
        }
    }
    ctx->pc = 0x323F20u;
label_323f20:
    // 0x323f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x323f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f34: 0x3e00008  jr          $ra
    ctx->pc = 0x323F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F34u;
        // 0x323f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F3Cu;
}
