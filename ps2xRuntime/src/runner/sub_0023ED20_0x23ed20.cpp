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

// Function: sub_0023ED20
// Address: 0x23ed20 - 0x23ede0
void sub_0023ED20_0x23ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ED20_0x23ed20");
#endif

    switch (ctx->pc) {
        case 0x23ed4cu: goto label_23ed4c;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed74u: goto label_23ed74;
        case 0x23ed88u: goto label_23ed88;
        case 0x23eda0u: goto label_23eda0;
        case 0x23edacu: goto label_23edac;
        default: break;
    }

    ctx->pc = 0x23ed20u;

    // 0x23ed20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ed24: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x23ed28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ed2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ed2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23ed34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ed38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23ed3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23ed40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23ed44: 0xc08fb00  jal         func_23EC00
    ctx->pc = 0x23ED44u;
    SET_GPR_U32(ctx, 31, 0x23ED4Cu);
    ctx->pc = 0x23ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED44u;
    // 0x23ed48: 0x8c53b998  lw          $s3, -0x4668($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC00u, 0x23ED44u, 0x23ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED4Cu;
label_23ed4c:
    // 0x23ed4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23ed50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ED50u;
    {
        const bool branch_taken_0x23ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED50u;
        // 0x23ed54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed50) {
            ctx->pc = 0x23ED64u;
            goto label_23ed64;
        }
    }
    ctx->pc = 0x23ED58u;
    // 0x23ed58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed5c: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ED5Cu;
    SET_GPR_U32(ctx, 31, 0x23ED64u);
    ctx->pc = 0x23ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED5Cu;
    // 0x23ed60: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ED5Cu, 0x23ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED64u;
label_23ed64:
    // 0x23ed64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed68: 0x3c128001  lui         $s2, 0x8001
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32769 << 16));
    // 0x23ed6c: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ED6Cu;
    SET_GPR_U32(ctx, 31, 0x23ED74u);
    ctx->pc = 0x23ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED6Cu;
    // 0x23ed70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ED6Cu, 0x23ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED74u;
label_23ed74:
    // 0x23ed74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ed74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed78: 0x24140fff  addiu       $s4, $zero, 0xFFF
    ctx->pc = 0x23ed78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x23ed7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23ED7Cu;
    {
        const bool branch_taken_0x23ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED7Cu;
        // 0x23ed80: 0x3652000c  ori         $s2, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed7c) {
            ctx->pc = 0x23EDA4u;
            goto label_23eda4;
        }
    }
    ctx->pc = 0x23ED84u;
    // 0x23ed84: 0x0  nop
    ctx->pc = 0x23ed84u;
    // NOP
label_23ed88:
    // 0x23ed88: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x23ED88u;
    {
        const bool branch_taken_0x23ed88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x23ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED88u;
        // 0x23ed8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed88) {
            ctx->pc = 0x23EDC0u;
            goto label_23edc0;
        }
    }
    ctx->pc = 0x23ED90u;
    // 0x23ed90: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x23ED90u;
    {
        const bool branch_taken_0x23ed90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED90u;
        // 0x23ed94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed90) {
            ctx->pc = 0x23EDC0u;
            goto label_23edc0;
        }
    }
    ctx->pc = 0x23ED98u;
    // 0x23ed98: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ED98u;
    SET_GPR_U32(ctx, 31, 0x23EDA0u);
    ctx->pc = 0x23ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED98u;
    // 0x23ed9c: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ED98u, 0x23EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA0u;
label_23eda0:
    // 0x23eda0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x23eda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23eda4:
    // 0x23eda4: 0xc08fb02  jal         func_23EC08
    ctx->pc = 0x23EDA4u;
    SET_GPR_U32(ctx, 31, 0x23EDACu);
    ctx->pc = 0x23EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDA4u;
    // 0x23eda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC08u, 0x23EDA4u, 0x23EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDACu;
label_23edac:
    // 0x23edac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23edb4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23EDB4u;
    {
        const bool branch_taken_0x23edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDB4u;
        // 0x23edb8: 0x2131824  and         $v1, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edb4) {
            ctx->pc = 0x23ED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ed88;
        }
    }
    ctx->pc = 0x23EDBCu;
    // 0x23edbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23edc0:
    // 0x23edc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23edc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23edc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23edc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23edc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23edcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23edccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23edd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23edd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23edd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDD8u;
        // 0x23eddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EDE0u;
}
