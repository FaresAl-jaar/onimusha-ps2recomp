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

// Function: sub_00114C90
// Address: 0x114c90 - 0x114df4
void sub_00114C90_0x114c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114C90_0x114c90");
#endif

    switch (ctx->pc) {
        case 0x114cb8u: goto label_114cb8;
        case 0x114cc4u: goto label_114cc4;
        case 0x114cf0u: goto label_114cf0;
        case 0x114d1cu: goto label_114d1c;
        case 0x114d6cu: goto label_114d6c;
        case 0x114d7cu: goto label_114d7c;
        case 0x114d84u: goto label_114d84;
        case 0x114d9cu: goto label_114d9c;
        case 0x114dacu: goto label_114dac;
        case 0x114dbcu: goto label_114dbc;
        case 0x114dc4u: goto label_114dc4;
        default: break;
    }

    ctx->pc = 0x114c90u;

    // 0x114c90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x114c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x114c94: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114c98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114c9c: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x114c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x114ca0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114ca4: 0x2692ec80  addiu       $s2, $s4, -0x1380
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962304));
    // 0x114ca8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x114ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x114cac: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114cb0: 0xc044a30  jal         func_1128C0
    ctx->pc = 0x114CB0u;
    SET_GPR_U32(ctx, 31, 0x114CB8u);
    ctx->pc = 0x114CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CB0u;
    // 0x114cb4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128C0u, 0x114CB0u, 0x114CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CB8u;
label_114cb8:
    // 0x114cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cbc: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114CBCu;
    SET_GPR_U32(ctx, 31, 0x114CC4u);
    ctx->pc = 0x114CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CBCu;
    // 0x114cc0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114CBCu, 0x114CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CC4u;
label_114cc4:
    // 0x114cc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x114cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x114cc8: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x114cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114ccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114CCCu;
    {
        const bool branch_taken_0x114ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114ccc) {
            ctx->pc = 0x114CE8u;
            goto label_114ce8;
        }
    }
    ctx->pc = 0x114CD4u;
    // 0x114cd4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114CD4u;
    {
        const bool branch_taken_0x114cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cd4) {
            ctx->pc = 0x114CE8u;
            goto label_114ce8;
        }
    }
    ctx->pc = 0x114CDCu;
    // 0x114cdc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x114cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114ce0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114CE0u;
    {
        const bool branch_taken_0x114ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114ce0) {
            ctx->pc = 0x114CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114CE0u;
            // 0x114ce4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114CF8u;
            goto label_114cf8;
        }
    }
    ctx->pc = 0x114CE8u;
label_114ce8:
    // 0x114ce8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114CE8u;
    SET_GPR_U32(ctx, 31, 0x114CF0u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114CE8u, 0x114CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CF0u;
label_114cf0:
    // 0x114cf0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x114CF0u;
    {
        const bool branch_taken_0x114cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF0u;
        // 0x114cf4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cf0) {
            ctx->pc = 0x114DD4u;
            goto label_114dd4;
        }
    }
    ctx->pc = 0x114CF8u;
label_114cf8:
    // 0x114cf8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x114cfc: 0x24422828  addiu       $v0, $v0, 0x2828
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x114d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114d04: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x114d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x114d08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114d0c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x114d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x114d10: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x114d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114d14: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x114D14u;
    SET_GPR_U32(ctx, 31, 0x114D1Cu);
    ctx->pc = 0x114D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D14u;
    // 0x114d18: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x114D14u, 0x114D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D1Cu;
label_114d1c:
    // 0x114d1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d20: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x114d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114d24: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114d28: 0xae91ec80  sw          $s1, -0x1380($s4)
    ctx->pc = 0x114d28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962304), GPR_U32(ctx, 17));
    // 0x114d2c: 0x2453f8c0  addiu       $s3, $v0, -0x740
    ctx->pc = 0x114d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x114d30: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x114d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x114d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114d38: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x114d3c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x114d40: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x114d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x114d44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x114d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d48: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x114d4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114d58: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114d5c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x114d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d60: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114d60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114d64: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x114D64u;
    SET_GPR_U32(ctx, 31, 0x114D6Cu);
    ctx->pc = 0x114D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D64u;
    // 0x114d68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x114D64u, 0x114D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D6Cu;
label_114d6c:
    // 0x114d6c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114D6Cu;
    {
        const bool branch_taken_0x114d6c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x114d6c) {
            ctx->pc = 0x114D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D6Cu;
            // 0x114d70: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D8Cu;
            goto label_114d8c;
        }
    }
    ctx->pc = 0x114D74u;
    // 0x114d74: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114D74u;
    SET_GPR_U32(ctx, 31, 0x114D7Cu);
    ctx->pc = 0x114D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D74u;
    // 0x114d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114D74u, 0x114D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D7Cu;
label_114d7c:
    // 0x114d7c: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114D7Cu;
    SET_GPR_U32(ctx, 31, 0x114D84u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114D7Cu, 0x114D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D84u;
label_114d84:
    // 0x114d84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x114D84u;
    {
        const bool branch_taken_0x114d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D84u;
        // 0x114d88: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d84) {
            ctx->pc = 0x114DD4u;
            goto label_114dd4;
        }
    }
    ctx->pc = 0x114D8Cu;
label_114d8c:
    // 0x114d8c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x114d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x114d90: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x114d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x114d94: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114D94u;
    SET_GPR_U32(ctx, 31, 0x114D9Cu);
    ctx->pc = 0x114D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D94u;
    // 0x114d98: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114D94u, 0x114D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D9Cu;
label_114d9c:
    // 0x114d9c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114D9Cu;
    {
        const bool branch_taken_0x114d9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114d9c) {
            ctx->pc = 0x114DB4u;
            goto label_114db4;
        }
    }
    ctx->pc = 0x114DA4u;
    // 0x114da4: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114DA4u;
    SET_GPR_U32(ctx, 31, 0x114DACu);
    ctx->pc = 0x114DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DA4u;
    // 0x114da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114DA4u, 0x114DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DACu;
label_114dac:
    // 0x114dac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114DACu;
    {
        const bool branch_taken_0x114dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dac) {
            ctx->pc = 0x114DD4u;
            goto label_114dd4;
        }
    }
    ctx->pc = 0x114DB4u;
label_114db4:
    // 0x114db4: 0xc043808  jal         func_10E020
    ctx->pc = 0x114DB4u;
    SET_GPR_U32(ctx, 31, 0x114DBCu);
    ctx->pc = 0x114DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DB4u;
    // 0x114db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114DB4u, 0x114DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DBCu;
label_114dbc:
    // 0x114dbc: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114DBCu;
    SET_GPR_U32(ctx, 31, 0x114DC4u);
    ctx->pc = 0x114DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DBCu;
    // 0x114dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114DBCu, 0x114DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DC4u;
label_114dc4:
    // 0x114dc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114dc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114dcc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x114dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x114dd0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x114dd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_114dd4:
    // 0x114dd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x114dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114dd8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114ddc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114de0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114de4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114de8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114dec: 0x3e00008  jr          $ra
    ctx->pc = 0x114DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DECu;
        // 0x114df0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114DF4u;
}
