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

// Function: sub_00338820
// Address: 0x338820 - 0x3388a8
void sub_00338820_0x338820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338820_0x338820");
#endif

    ctx->pc = 0x338820u;

    // 0x338820: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x338820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x338824: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x338824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x338828: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338828u;
    {
        const bool branch_taken_0x338828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x338828) {
            ctx->pc = 0x338838u;
            goto label_338838;
        }
    }
    ctx->pc = 0x338830u;
    // 0x338830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338834: 0x0  nop
    ctx->pc = 0x338834u;
    // NOP
label_338838:
    // 0x338838: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x338838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x33883c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x338840: 0x90420e0e  lbu         $v0, 0xE0E($v0)
    ctx->pc = 0x338840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3598)));
    // 0x338844: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x338844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x338848: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x338848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33884c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33884Cu;
    {
        const bool branch_taken_0x33884c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33884Cu;
        // 0x338850: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33884c) {
            ctx->pc = 0x338860u;
            goto label_338860;
        }
    }
    ctx->pc = 0x338854u;
    // 0x338854: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338854u;
    {
        const bool branch_taken_0x338854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x338854) {
            ctx->pc = 0x338868u;
            goto label_338868;
        }
    }
    ctx->pc = 0x33885Cu;
    // 0x33885c: 0x0  nop
    ctx->pc = 0x33885cu;
    // NOP
label_338860:
    // 0x338860: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x338860u;
    {
        const bool branch_taken_0x338860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338860u;
        // 0x338864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338860) {
            ctx->pc = 0x3388A0u;
            goto label_3388a0;
        }
    }
    ctx->pc = 0x338868u;
label_338868:
    // 0x338868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33886c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33886Cu;
    {
        const bool branch_taken_0x33886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33886c) {
            ctx->pc = 0x338880u;
            goto label_338880;
        }
    }
    ctx->pc = 0x338874u;
    // 0x338874: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x338874u;
    {
        const bool branch_taken_0x338874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338874u;
        // 0x338878: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338874) {
            ctx->pc = 0x3388A0u;
            goto label_3388a0;
        }
    }
    ctx->pc = 0x33887Cu;
    // 0x33887c: 0x0  nop
    ctx->pc = 0x33887cu;
    // NOP
label_338880:
    // 0x338880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338884: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338884u;
    {
        const bool branch_taken_0x338884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x338884) {
            ctx->pc = 0x338898u;
            goto label_338898;
        }
    }
    ctx->pc = 0x33888Cu;
    // 0x33888c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33888Cu;
    {
        const bool branch_taken_0x33888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33888c) {
            ctx->pc = 0x3388A0u;
            goto label_3388a0;
        }
    }
    ctx->pc = 0x338894u;
    // 0x338894: 0x0  nop
    ctx->pc = 0x338894u;
    // NOP
label_338898:
    // 0x338898: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x338898u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x33889c: 0x0  nop
    ctx->pc = 0x33889cu;
    // NOP
label_3388a0:
    // 0x3388a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3388A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388A8u;
}
