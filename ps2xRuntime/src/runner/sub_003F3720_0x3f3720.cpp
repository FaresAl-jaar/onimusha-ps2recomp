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

// Function: sub_003F3720
// Address: 0x3f3720 - 0x3f37c4
void sub_003F3720_0x3f3720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3720_0x3f3720");
#endif

    switch (ctx->pc) {
        case 0x3f3738u: goto label_3f3738;
        case 0x3f3764u: goto label_3f3764;
        case 0x3f3778u: goto label_3f3778;
        case 0x3f3790u: goto label_3f3790;
        default: break;
    }

    ctx->pc = 0x3f3720u;

    // 0x3f3720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3724: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f3724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f3728: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f3728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f372c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f3730: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F3730u;
    SET_GPR_U32(ctx, 31, 0x3F3738u);
    ctx->pc = 0x3F3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3730u;
    // 0x3f3734: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F3730u, 0x3F3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3738u;
label_3f3738:
    // 0x3f3738: 0xaf828d3c  sw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f3738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
    // 0x3f373c: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x3f373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3740: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F3740u;
    {
        const bool branch_taken_0x3f3740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3740u;
        // 0x3f3744: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3740) {
            ctx->pc = 0x3F37B0u;
            goto label_3f37b0;
        }
    }
    ctx->pc = 0x3F3748u;
    // 0x3f3748: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f3748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f374c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f374cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f3750: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f3750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f3754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3758: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f3758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f375c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F375Cu;
    SET_GPR_U32(ctx, 31, 0x3F3764u);
    ctx->pc = 0x3F3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F375Cu;
    // 0x3f3760: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F375Cu, 0x3F3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3764u;
label_3f3764:
    // 0x3f3764: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f3764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f3768: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f3768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f376c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3F376Cu;
    {
        const bool branch_taken_0x3f376c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F376Cu;
        // 0x3f3770: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f376c) {
            ctx->pc = 0x3F37A8u;
            goto label_3f37a8;
        }
    }
    ctx->pc = 0x3F3774u;
    // 0x3f3774: 0x0  nop
    ctx->pc = 0x3f3774u;
    // NOP
label_3f3778:
    // 0x3f3778: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3778u;
    {
        const bool branch_taken_0x3f3778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3778u;
        // 0x3f377c: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3778) {
            ctx->pc = 0x3F3790u;
            goto label_3f3790;
        }
    }
    ctx->pc = 0x3F3780u;
    // 0x3f3780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3788: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F3788u;
    SET_GPR_U32(ctx, 31, 0x3F3790u);
    ctx->pc = 0x3F378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3788u;
    // 0x3f378c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F3788u, 0x3F3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3790u;
label_3f3790:
    // 0x3f3790: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f3790u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f3794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f3794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f3798: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f3798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f379c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3F379Cu;
    {
        const bool branch_taken_0x3f379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f379c) {
            ctx->pc = 0x3F3778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3778;
        }
    }
    ctx->pc = 0x3F37A4u;
    // 0x3f37a4: 0x0  nop
    ctx->pc = 0x3f37a4u;
    // NOP
label_3f37a8:
    // 0x3f37a8: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x3f37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f37ac: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f37acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f37b0:
    // 0x3f37b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f37b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f37b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f37b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f37b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f37b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f37bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F37BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37BCu;
        // 0x3f37c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F37BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F37C4u;
}
