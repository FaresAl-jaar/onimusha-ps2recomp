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

// Function: sub_0010ECE0
// Address: 0x10ece0 - 0x10edb8
void sub_0010ECE0_0x10ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ECE0_0x10ece0");
#endif

    switch (ctx->pc) {
        case 0x10ed20u: goto label_10ed20;
        case 0x10ed28u: goto label_10ed28;
        case 0x10ed80u: goto label_10ed80;
        case 0x10ed90u: goto label_10ed90;
        case 0x10eda0u: goto label_10eda0;
        case 0x10edb0u: goto label_10edb0;
        default: break;
    }

    ctx->pc = 0x10ece0u;

    // 0x10ece0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10ece4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ece8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10ecf0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10ecf4: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x10ecf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x10ecf8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10ecfc: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x10ecfcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x10ed00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ed04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10ed04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ed08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ed0c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10ed0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ed10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ed14: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x10ed14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10ed18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10ed1c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x10ed1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_10ed20:
    // 0x10ed20: 0xc043808  jal         func_10E020
    ctx->pc = 0x10ED20u;
    SET_GPR_U32(ctx, 31, 0x10ED28u);
    ctx->pc = 0x10ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED20u;
    // 0x10ed24: 0x8ec4c880  lw          $a0, -0x3780($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294953088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x10ED20u, 0x10ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED28u;
label_10ed28:
    // 0x10ed28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ed2c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x10ed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x10ed30: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x10ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10ed34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10ed38: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x10ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x10ed3c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x10ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x10ed40: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x10ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10ed44: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10ed44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ed48: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x10ED48u;
    {
        const bool branch_taken_0x10ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x10ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED48u;
        // 0x10ed4c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed48) {
            ctx->pc = 0x10ED88u;
            goto label_10ed88;
        }
    }
    ctx->pc = 0x10ED50u;
    // 0x10ed50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ED50u;
    {
        const bool branch_taken_0x10ed50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED50u;
        // 0x10ed54: 0x26a423b0  addiu       $a0, $s5, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed50) {
            ctx->pc = 0x10ED68u;
            goto label_10ed68;
        }
    }
    ctx->pc = 0x10ED58u;
    // 0x10ed58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10ED58u;
    {
        const bool branch_taken_0x10ed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED58u;
        // 0x10ed5c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed58) {
            ctx->pc = 0x10ED78u;
            goto label_10ed78;
        }
    }
    ctx->pc = 0x10ED60u;
    // 0x10ed60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10ED60u;
    {
        const bool branch_taken_0x10ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed60) {
            ctx->pc = 0x10EDA8u;
            goto label_10eda8;
        }
    }
    ctx->pc = 0x10ED68u;
label_10ed68:
    // 0x10ed68: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x10ED68u;
    {
        const bool branch_taken_0x10ed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED68u;
        // 0x10ed6c: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed68) {
            ctx->pc = 0x10ED98u;
            goto label_10ed98;
        }
    }
    ctx->pc = 0x10ED70u;
    // 0x10ed70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10ED70u;
    {
        const bool branch_taken_0x10ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed70) {
            ctx->pc = 0x10EDA8u;
            goto label_10eda8;
        }
    }
    ctx->pc = 0x10ED78u;
label_10ed78:
    // 0x10ed78: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x10ED78u;
    SET_GPR_U32(ctx, 31, 0x10ED80u);
    ctx->pc = 0x10ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED78u;
    // 0x10ed7c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x10ED78u, 0x10ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED80u;
label_10ed80:
    // 0x10ed80: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x10ED80u;
    {
        const bool branch_taken_0x10ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed80) {
            ctx->pc = 0x10ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ed20;
        }
    }
    ctx->pc = 0x10ED88u;
label_10ed88:
    // 0x10ed88: 0xc0437a4  jal         func_10DE90
    ctx->pc = 0x10ED88u;
    SET_GPR_U32(ctx, 31, 0x10ED90u);
    ctx->pc = 0x10ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED88u;
    // 0x10ed8c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE90u, 0x10ED88u, 0x10ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED90u;
label_10ed90:
    // 0x10ed90: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x10ED90u;
    {
        const bool branch_taken_0x10ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed90) {
            ctx->pc = 0x10ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ed20;
        }
    }
    ctx->pc = 0x10ED98u;
label_10ed98:
    // 0x10ed98: 0xc0437d4  jal         func_10DF50
    ctx->pc = 0x10ED98u;
    SET_GPR_U32(ctx, 31, 0x10EDA0u);
    ctx->pc = 0x10ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED98u;
    // 0x10ed9c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF50u, 0x10ED98u, 0x10EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDA0u;
label_10eda0:
    // 0x10eda0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x10EDA0u;
    {
        const bool branch_taken_0x10eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eda0) {
            ctx->pc = 0x10ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ed20;
        }
    }
    ctx->pc = 0x10EDA8u;
label_10eda8:
    // 0x10eda8: 0xc044352  jal         func_110D48
    ctx->pc = 0x10EDA8u;
    SET_GPR_U32(ctx, 31, 0x10EDB0u);
    ctx->pc = 0x110D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D48u, 0x10EDA8u, 0x10EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDB0u;
label_10edb0:
    // 0x10edb0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x10EDB0u;
    {
        const bool branch_taken_0x10edb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10edb0) {
            ctx->pc = 0x10ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ed20;
        }
    }
    ctx->pc = 0x10EDB8u;
}
