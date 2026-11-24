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

// Function: sub_002DBE20
// Address: 0x2dbe20 - 0x2dc138
void sub_002DBE20_0x2dbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE20_0x2dbe20");
#endif

    switch (ctx->pc) {
        case 0x2dbe88u: goto label_2dbe88;
        case 0x2dbeacu: goto label_2dbeac;
        case 0x2dbeb4u: goto label_2dbeb4;
        case 0x2dbeccu: goto label_2dbecc;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbf10u: goto label_2dbf10;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf68u: goto label_2dbf68;
        case 0x2dbf94u: goto label_2dbf94;
        case 0x2dc0bcu: goto label_2dc0bc;
        case 0x2dc0f8u: goto label_2dc0f8;
        default: break;
    }

    ctx->pc = 0x2dbe20u;

    // 0x2dbe20: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2dbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2dbe24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2dbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2dbe28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dbe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2dbe2c: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2dbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2dbe30: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dbe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2dbe34: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dbe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2dbe38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dbe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dbe3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dbe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dbe40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dbe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dbe44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dbe44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dbe4c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dbe4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dbe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dbe54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbe58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbe5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dbe5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe60: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x2dbe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x2dbe64: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2dbe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe68: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x2dbe68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2dbe6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dbe74: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2dbe74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2dbe78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dbe7c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2dbe7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbe80: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DBE80u;
    SET_GPR_U32(ctx, 31, 0x2DBE88u);
    ctx->pc = 0x2DBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE80u;
    // 0x2dbe84: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DBE80u, 0x2DBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE88u;
label_2dbe88:
    // 0x2dbe88: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dbe8c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2dbe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2dbe90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbe94: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2dbe98: 0x92850004  lbu         $a1, 0x4($s4)
    ctx->pc = 0x2dbe98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2dbe9c: 0x92860005  lbu         $a2, 0x5($s4)
    ctx->pc = 0x2dbe9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x2dbea0: 0x92880011  lbu         $t0, 0x11($s4)
    ctx->pc = 0x2dbea0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x2dbea4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2DBEA4u;
    SET_GPR_U32(ctx, 31, 0x2DBEACu);
    ctx->pc = 0x2DBEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEA4u;
    // 0x2dbea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2DBEA4u, 0x2DBEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEACu;
label_2dbeac:
    // 0x2dbeac: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2DBEACu;
    SET_GPR_U32(ctx, 31, 0x2DBEB4u);
    ctx->pc = 0x2DBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEACu;
    // 0x2dbeb0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2DBEACu, 0x2DBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEB4u;
label_2dbeb4:
    // 0x2dbeb4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dbeb8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbebc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbec0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dbec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dbec4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DBEC4u;
    SET_GPR_U32(ctx, 31, 0x2DBECCu);
    ctx->pc = 0x2DBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEC4u;
    // 0x2dbec8: 0x2232021  addu        $a0, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DBEC4u, 0x2DBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBECCu;
label_2dbecc:
    // 0x2dbecc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dbed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbed4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2dbed8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2dbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dbedc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dbee0: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2DBEE0u;
    SET_GPR_U32(ctx, 31, 0x2DBEE8u);
    ctx->pc = 0x2DBEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEE0u;
    // 0x2dbee4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2DBEE0u, 0x2DBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEE8u;
label_2dbee8:
    // 0x2dbee8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dbeec: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dbeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbef0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dbef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbef4: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x2DBEF4u;
    {
        const bool branch_taken_0x2dbef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEF4u;
        // 0x2dbef8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbef4) {
            ctx->pc = 0x2DC0F0u;
            goto label_2dc0f0;
        }
    }
    ctx->pc = 0x2DBEFCu;
    // 0x2dbefc: 0x10b43c  dsll32      $s6, $s0, 16
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dbf00: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2dbf04: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x2dbf04u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x2dbf08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dbf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf0c: 0x27b7011c  addiu       $s7, $sp, 0x11C
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2dbf10:
    // 0x2dbf10: 0x92830013  lbu         $v1, 0x13($s4)
    ctx->pc = 0x2dbf10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2dbf14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dbf14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf18: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x2dbf18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dbf1c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dbf1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dbf20: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x2DBF20u;
    {
        const bool branch_taken_0x2dbf20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF20u;
        // 0x2dbf24: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf20) {
            ctx->pc = 0x2DC0D8u;
            goto label_2dc0d8;
        }
    }
    ctx->pc = 0x2DBF28u;
label_2dbf28:
    // 0x2dbf28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dbf2c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2dbf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dbf30: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2dbf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2dbf34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2dbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dbf38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dbf3c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2dbf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dbf40: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2dbf44: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2dbf44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dbf48: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x2dbf48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dbf4c: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2DBF4Cu;
    {
        const bool branch_taken_0x2dbf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dbf4c) {
            ctx->pc = 0x2DC0C0u;
            goto label_2dc0c0;
        }
    }
    ctx->pc = 0x2DBF54u;
    // 0x2dbf54: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x2dbf54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2dbf58: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBF58u;
    {
        const bool branch_taken_0x2dbf58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF58u;
        // 0x2dbf5c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf58) {
            ctx->pc = 0x2DBF88u;
            goto label_2dbf88;
        }
    }
    ctx->pc = 0x2DBF60u;
    // 0x2dbf60: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2DBF60u;
    SET_GPR_U32(ctx, 31, 0x2DBF68u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2DBF60u, 0x2DBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF68u;
label_2dbf68:
    // 0x2dbf68: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x2dbf68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbf6c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dbf70: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x2dbf70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2dbf74: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2dbf74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2dbf78: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x2dbf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2dbf7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DBF7Cu;
    {
        const bool branch_taken_0x2dbf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF7Cu;
        // 0x2dbf80: 0xc34021  addu        $t0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf7c) {
            ctx->pc = 0x2DBFB0u;
            goto label_2dbfb0;
        }
    }
    ctx->pc = 0x2DBF84u;
    // 0x2dbf84: 0x0  nop
    ctx->pc = 0x2dbf84u;
    // NOP
label_2dbf88:
    // 0x2dbf88: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2dbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dbf8c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x2DBF8Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF94u);
    ctx->pc = 0x2DBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF8Cu;
    // 0x2dbf90: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x2DBF8Cu, 0x2DBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF94u;
label_2dbf94:
    // 0x2dbf94: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2dbf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2dbf98: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2dbf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dbf9c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2dbf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbfa0: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2dbfa4: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x2dbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2dbfa8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2dbfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbfac: 0x0  nop
    ctx->pc = 0x2dbfacu;
    // NOP
label_2dbfb0:
    // 0x2dbfb0: 0x7a840030  lq          $a0, 0x30($s4)
    ctx->pc = 0x2dbfb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2dbfb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2dbfb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dbfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbfbc: 0x7fa40110  sq          $a0, 0x110($sp)
    ctx->pc = 0x2dbfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 4));
    // 0x2dbfc0: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x2dbfc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2dbfc4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2dbfc8: 0x962018  mult        $a0, $a0, $s6
    ctx->pc = 0x2dbfc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2dbfcc: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x2dbfccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x2dbfd0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2dbfd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2dbfd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2dbfd8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2dbfd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dbfdc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2dbfdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2dbfe0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2dbfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2dbfe4: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2dbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dbfe8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2dbfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2dbfec: 0x94690012  lhu         $t1, 0x12($v1)
    ctx->pc = 0x2dbfecu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2dbff0: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBFF0u;
    {
        const bool branch_taken_0x2dbff0 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2DBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFF0u;
        // 0x2dbff4: 0x92042  srl         $a0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbff0) {
            ctx->pc = 0x2DC004u;
            goto label_2dc004;
        }
    }
    ctx->pc = 0x2DBFF8u;
    // 0x2dbff8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2dbff8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbffc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBFFCu;
    {
        const bool branch_taken_0x2dbffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFFCu;
        // 0x2dc000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbffc) {
            ctx->pc = 0x2DC01Cu;
            goto label_2dc01c;
        }
    }
    ctx->pc = 0x2DC004u;
label_2dc004:
    // 0x2dc004: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x2dc004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2dc008: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dc008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dc00c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dc00cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc010: 0x0  nop
    ctx->pc = 0x2dc010u;
    // NOP
    // 0x2dc014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dc014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dc018: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dc018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dc01c:
    // 0x2dc01c: 0x844d0008  lh          $t5, 0x8($v0)
    ctx->pc = 0x2dc01cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc020: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2dc020u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc024: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x2dc024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2dc028: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2dc028u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc02c: 0x844c000a  lh          $t4, 0xA($v0)
    ctx->pc = 0x2dc02cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2dc030: 0x3c093d80  lui         $t1, 0x3D80
    ctx->pc = 0x2dc030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15744 << 16));
    // 0x2dc034: 0x844b0000  lh          $t3, 0x0($v0)
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc038: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2dc038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2dc03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc040: 0x448a3800  mtc1        $t2, $f7
    ctx->pc = 0x2dc040u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2dc044: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x2dc044u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc048: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x2dc048u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dc04c: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2dc050: 0x468009a0  cvt.s.w     $f6, $f1
    ctx->pc = 0x2dc050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2dc054: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2dc054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2dc058: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x2dc058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2dc05c: 0x46063943  div.s       $f5, $f7, $f6
    ctx->pc = 0x2dc05cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[7], ctx->f[6]); }
    // 0x2dc060: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x2dc060u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc064: 0xc631002c  lwc1        $f17, 0x2C($s1)
    ctx->pc = 0x2dc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2dc068: 0x46801220  cvt.s.w     $f8, $f2
    ctx->pc = 0x2dc068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2dc06c: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x2dc06cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2dc070: 0x46056342  mul.s       $f13, $f12, $f5
    ctx->pc = 0x2dc070u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2dc074: 0x46061942  mul.s       $f5, $f3, $f6
    ctx->pc = 0x2dc074u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2dc078: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2dc078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2dc07c: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x2dc07cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc080: 0x46053943  div.s       $f5, $f7, $f5
    ctx->pc = 0x2dc080u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[7], ctx->f[5]); }
    // 0x2dc084: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2dc084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2dc088: 0x46026102  mul.s       $f4, $f12, $f2
    ctx->pc = 0x2dc088u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2dc08c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dc08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc090: 0x460338c3  div.s       $f3, $f7, $f3
    ctx->pc = 0x2dc090u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
    // 0x2dc094: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dc094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2dc098: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc09c: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x2dc09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2dc0a0: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2dc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc0a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dc0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dc0a8: 0x46042b82  mul.s       $f14, $f5, $f4
    ctx->pc = 0x2dc0a8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2dc0ac: 0x46021bc2  mul.s       $f15, $f3, $f2
    ctx->pc = 0x2dc0acu;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2dc0b0: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x2dc0b0u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc0b4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2DC0B4u;
    SET_GPR_U32(ctx, 31, 0x2DC0BCu);
    ctx->pc = 0x2DC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0B4u;
    // 0x2dc0b8: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2DC0B4u, 0x2DC0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0BCu;
label_2dc0bc:
    // 0x2dc0bc: 0x0  nop
    ctx->pc = 0x2dc0bcu;
    // NOP
label_2dc0c0:
    // 0x2dc0c0: 0x92820013  lbu         $v0, 0x13($s4)
    ctx->pc = 0x2dc0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2dc0c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dc0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dc0c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2dc0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc0cc: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2DC0CCu;
    {
        const bool branch_taken_0x2dc0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0cc) {
            ctx->pc = 0x2DBF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf28;
        }
    }
    ctx->pc = 0x2DC0D4u;
    // 0x2dc0d4: 0x0  nop
    ctx->pc = 0x2dc0d4u;
    // NOP
label_2dc0d8:
    // 0x2dc0d8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2dc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dc0dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dc0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2dc0e0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dc0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc0e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2dc0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc0e8: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x2DC0E8u;
    {
        const bool branch_taken_0x2dc0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0E8u;
        // 0x2dc0ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0e8) {
            ctx->pc = 0x2DBF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf10;
        }
    }
    ctx->pc = 0x2DC0F0u;
label_2dc0f0:
    // 0x2dc0f0: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x2DC0F0u;
    SET_GPR_U32(ctx, 31, 0x2DC0F8u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x2DC0F0u, 0x2DC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0F8u;
label_2dc0f8:
    // 0x2dc0f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc0fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc100: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2dc100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2dc104: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dc108: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dc108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dc10c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dc10cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc110: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dc110u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc114: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dc114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc118: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dc118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc11c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc11cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc120: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc130: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC130u;
        // 0x2dc134: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC138u;
}
