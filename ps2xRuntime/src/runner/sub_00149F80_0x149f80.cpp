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

// Function: sub_00149F80
// Address: 0x149f80 - 0x14a0f4
void sub_00149F80_0x149f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F80_0x149f80");
#endif

    switch (ctx->pc) {
        case 0x149ff4u: goto label_149ff4;
        case 0x14a034u: goto label_14a034;
        case 0x14a060u: goto label_14a060;
        case 0x14a0c0u: goto label_14a0c0;
        default: break;
    }

    ctx->pc = 0x149f80u;

    // 0x149f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x149f84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x149f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x149f88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x149f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x149f8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149f90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149f98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x149f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149fa4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x149fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149fac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149fb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x149fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x149fb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149fb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x149fbc: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x149fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x149fc0: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x149fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x149fc4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149FC4u;
    {
        const bool branch_taken_0x149fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FC4u;
        // 0x149fc8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc4) {
            ctx->pc = 0x14A050u;
            goto label_14a050;
        }
    }
    ctx->pc = 0x149FCCu;
    // 0x149fcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149fd0: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149FD0u;
    {
        const bool branch_taken_0x149fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x149fd0) {
            ctx->pc = 0x14A028u;
            goto label_14a028;
        }
    }
    ctx->pc = 0x149FD8u;
    // 0x149fd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149FD8u;
    {
        const bool branch_taken_0x149fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149fd8) {
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FE0u;
    // 0x149fe0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x149FE0u;
    {
        const bool branch_taken_0x149fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149fe0) {
            ctx->pc = 0x14A0D0u;
            goto label_14a0d0;
        }
    }
    ctx->pc = 0x149FE8u;
label_149fe8:
    // 0x149fe8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x149fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x149fec: 0xc048566  jal         func_121598
    ctx->pc = 0x149FECu;
    SET_GPR_U32(ctx, 31, 0x149FF4u);
    ctx->pc = 0x149FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FECu;
    // 0x149ff0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x149FECu, 0x149FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FF4u;
label_149ff4:
    // 0x149ff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149FF4u;
    {
        const bool branch_taken_0x149ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ff4) {
            ctx->pc = 0x14A008u;
            goto label_14a008;
        }
    }
    ctx->pc = 0x149FFCu;
    // 0x149ffc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x149FFCu;
    {
        const bool branch_taken_0x149ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FFCu;
        // 0x14a000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ffc) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A004u;
    // 0x14a004: 0x0  nop
    ctx->pc = 0x14a004u;
    // NOP
label_14a008:
    // 0x14a008: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a010: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14a014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a018: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a01c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x14a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a020: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14a020u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a024: 0x0  nop
    ctx->pc = 0x14a024u;
    // NOP
label_14a028:
    // 0x14a028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a02c: 0xc0486f2  jal         func_121BC8
    ctx->pc = 0x14A02Cu;
    SET_GPR_U32(ctx, 31, 0x14A034u);
    ctx->pc = 0x14A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A02Cu;
    // 0x14a030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121BC8u, 0x14A02Cu, 0x14A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A034u;
label_14a034:
    // 0x14a034: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14A034u;
    {
        const bool branch_taken_0x14a034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a034) {
            ctx->pc = 0x14A0D0u;
            goto label_14a0d0;
        }
    }
    ctx->pc = 0x14A03Cu;
    // 0x14a03c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a044: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14A044u;
    {
        const bool branch_taken_0x14a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A044u;
        // 0x14a048: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a044) {
            ctx->pc = 0x14A0D0u;
            goto label_14a0d0;
        }
    }
    ctx->pc = 0x14A04Cu;
    // 0x14a04c: 0x0  nop
    ctx->pc = 0x14a04cu;
    // NOP
label_14a050:
    // 0x14a050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a054: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a058: 0xc048566  jal         func_121598
    ctx->pc = 0x14A058u;
    SET_GPR_U32(ctx, 31, 0x14A060u);
    ctx->pc = 0x14A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A058u;
    // 0x14a05c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A058u, 0x14A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A060u;
label_14a060:
    // 0x14a060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a064: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A064u;
    {
        const bool branch_taken_0x14a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a064) {
            ctx->pc = 0x14A0D0u;
            goto label_14a0d0;
        }
    }
    ctx->pc = 0x14A06Cu;
    // 0x14a06c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a070: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14a074: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A074u;
    {
        const bool branch_taken_0x14a074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a074) {
            ctx->pc = 0x14A0A0u;
            goto label_14a0a0;
        }
    }
    ctx->pc = 0x14A07Cu;
    // 0x14a07c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A07Cu;
    {
        const bool branch_taken_0x14a07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a07c) {
            ctx->pc = 0x14A090u;
            goto label_14a090;
        }
    }
    ctx->pc = 0x14A084u;
    // 0x14a084: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14A084u;
    {
        const bool branch_taken_0x14a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a084) {
            ctx->pc = 0x14A0A0u;
            goto label_14a0a0;
        }
    }
    ctx->pc = 0x14A08Cu;
    // 0x14a08c: 0x0  nop
    ctx->pc = 0x14a08cu;
    // NOP
label_14a090:
    // 0x14a090: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a094: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14a094u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a098: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A098u;
    {
        const bool branch_taken_0x14a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A098u;
        // 0x14a09c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a098) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A0A0u;
label_14a0a0:
    // 0x14a0a0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a0a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A0A4u;
    {
        const bool branch_taken_0x14a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0A4u;
        // 0x14a0a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0a4) {
            ctx->pc = 0x14A0C0u;
            goto label_14a0c0;
        }
    }
    ctx->pc = 0x14A0ACu;
    // 0x14a0ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a0b0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14a0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a0b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a0b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A0B8u;
    {
        const bool branch_taken_0x14a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0B8u;
        // 0x14a0bc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0b8) {
            ctx->pc = 0x14A0D0u;
            goto label_14a0d0;
        }
    }
    ctx->pc = 0x14A0C0u;
label_14a0c0:
    // 0x14a0c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a0c4: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a0c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A0C8u;
    {
        const bool branch_taken_0x14a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C8u;
        // 0x14a0cc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c8) {
            ctx->pc = 0x14A0D8u;
            goto label_14a0d8;
        }
    }
    ctx->pc = 0x14A0D0u;
label_14a0d0:
    // 0x14a0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a0d4: 0x0  nop
    ctx->pc = 0x14a0d4u;
    // NOP
label_14a0d8:
    // 0x14a0d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14a0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a0e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0ECu;
        // 0x14a0f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A0F4u;
}
