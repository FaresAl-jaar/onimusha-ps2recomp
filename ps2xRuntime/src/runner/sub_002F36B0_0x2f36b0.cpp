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

// Function: sub_002F36B0
// Address: 0x2f36b0 - 0x2f374c
void sub_002F36B0_0x2f36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F36B0_0x2f36b0");
#endif

    switch (ctx->pc) {
        case 0x2f36d8u: goto label_2f36d8;
        case 0x2f36e8u: goto label_2f36e8;
        case 0x2f36f4u: goto label_2f36f4;
        default: break;
    }

    ctx->pc = 0x2f36b0u;

    // 0x2f36b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f36b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f36b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f36bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2f36bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f36c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f36c4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2f36c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f36c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36cc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2f36ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2f36d0: 0xc0bcd80  jal         func_2F3600
    ctx->pc = 0x2F36D0u;
    SET_GPR_U32(ctx, 31, 0x2F36D8u);
    ctx->pc = 0x2F36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36D0u;
    // 0x2f36d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3600u, 0x2F36D0u, 0x2F36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36D8u;
label_2f36d8:
    // 0x2f36d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f36d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f36e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F36E0u;
    {
        const bool branch_taken_0x2f36e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f36e0) {
            ctx->pc = 0x2F3730u;
            goto label_2f3730;
        }
    }
    ctx->pc = 0x2F36E8u;
label_2f36e8:
    // 0x2f36e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36ec: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F36ECu;
    SET_GPR_U32(ctx, 31, 0x2F36F4u);
    ctx->pc = 0x2F36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36ECu;
    // 0x2f36f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F36ECu, 0x2F36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36F4u;
label_2f36f4:
    // 0x2f36f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F36F4u;
    {
        const bool branch_taken_0x2f36f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f36f4) {
            ctx->pc = 0x2F3708u;
            goto label_2f3708;
        }
    }
    ctx->pc = 0x2F36FCu;
    // 0x2f36fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F36FCu;
    {
        const bool branch_taken_0x2f36fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36FCu;
        // 0x2f3700: 0x97a2003c  lhu         $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36fc) {
            ctx->pc = 0x2F3738u;
            goto label_2f3738;
        }
    }
    ctx->pc = 0x2F3704u;
    // 0x2f3704: 0x0  nop
    ctx->pc = 0x2f3704u;
    // NOP
label_2f3708:
    // 0x2f3708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2f3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f370c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2f370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f3710: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f3710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f3714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3718: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2f3718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2f371c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2f371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2f3720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f3720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f3724: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F3724u;
    {
        const bool branch_taken_0x2f3724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3724u;
        // 0x2f3728: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3724) {
            ctx->pc = 0x2F36E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f36e8;
        }
    }
    ctx->pc = 0x2F372Cu;
    // 0x2f372c: 0x0  nop
    ctx->pc = 0x2f372cu;
    // NOP
label_2f3730:
    // 0x2f3730: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f3730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f3734: 0x0  nop
    ctx->pc = 0x2f3734u;
    // NOP
label_2f3738:
    // 0x2f3738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f373c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f373cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3744: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3744u;
        // 0x2f3748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F374Cu;
}
