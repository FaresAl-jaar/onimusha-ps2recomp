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

// Function: sub_00134010
// Address: 0x134010 - 0x134138
void sub_00134010_0x134010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134010_0x134010");
#endif

    switch (ctx->pc) {
        case 0x1340fcu: goto label_1340fc;
        case 0x134110u: goto label_134110;
        default: break;
    }

    ctx->pc = 0x134010u;

    // 0x134010: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x134010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x134014: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134018: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13401c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134020: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134028: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x134028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13402c: 0x91220010  lbu         $v0, 0x10($t1)
    ctx->pc = 0x13402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x134030: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x134030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x134034: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x134034u;
    {
        const bool branch_taken_0x134034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134034) {
            ctx->pc = 0x1340A8u;
            goto label_1340a8;
        }
    }
    ctx->pc = 0x13403Cu;
    // 0x13403c: 0x9127000a  lbu         $a3, 0xA($t1)
    ctx->pc = 0x13403cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x134040: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134044: 0x9125000c  lbu         $a1, 0xC($t1)
    ctx->pc = 0x134044u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x134048: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x134048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13404c: 0x9523000e  lhu         $v1, 0xE($t1)
    ctx->pc = 0x13404cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x134050: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x134054: 0x912a000b  lbu         $t2, 0xB($t1)
    ctx->pc = 0x134054u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x134058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x134058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13405c: 0x95280008  lhu         $t0, 0x8($t1)
    ctx->pc = 0x13405cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x134060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x134060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x134064: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x134064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x134068: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x134068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x13406c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x13406cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x134070: 0x1464804  sllv        $t1, $a2, $t2
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 10) & 0x1F));
    // 0x134074: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x134078: 0xa36b8  dsll        $a2, $t2, 26
    ctx->pc = 0x134078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << 26);
    // 0x13407c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x13407cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x134080: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x134080u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x134084: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x134084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x134088: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x134088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x13408c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x13408cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x134090: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x134090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x134094: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x134094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x134098: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x134098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13409c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1340a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1340A0u;
    {
        const bool branch_taken_0x1340a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340A0u;
        // 0x1340a4: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340a0) {
            ctx->pc = 0x134128u;
            goto label_134128;
        }
    }
    ctx->pc = 0x1340A8u;
label_1340a8:
    // 0x1340a8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1340A8u;
    {
        const bool branch_taken_0x1340a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1340a8) {
            ctx->pc = 0x1340B8u;
            goto label_1340b8;
        }
    }
    ctx->pc = 0x1340B0u;
    // 0x1340b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1340B0u;
    {
        const bool branch_taken_0x1340b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340B0u;
        // 0x1340b4: 0xdd220000  ld          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340b0) {
            ctx->pc = 0x134128u;
            goto label_134128;
        }
    }
    ctx->pc = 0x1340B8u;
label_1340b8:
    // 0x1340b8: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x1340bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1340bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1340c0: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x1340c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x1340c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1340c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1340c8: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x1340c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1340cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1340ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1340d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1340d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1340d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1340d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1340d8: 0x9123000a  lbu         $v1, 0xA($t1)
    ctx->pc = 0x1340d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1340dc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1340dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1340e0: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x1340e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1340e4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1340e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1340E8u;
    {
        const bool branch_taken_0x1340e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1340e8) {
            ctx->pc = 0x134104u;
            goto label_134104;
        }
    }
    ctx->pc = 0x1340F0u;
    // 0x1340f0: 0x9524000e  lhu         $a0, 0xE($t1)
    ctx->pc = 0x1340f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1340f4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1340F4u;
    SET_GPR_U32(ctx, 31, 0x1340FCu);
    ctx->pc = 0x1340F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340F4u;
    // 0x1340f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x1340F4u, 0x1340FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340FCu;
label_1340fc:
    // 0x1340fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1340FCu;
    {
        const bool branch_taken_0x1340fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340FCu;
        // 0x134100: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340fc) {
            ctx->pc = 0x134114u;
            goto label_134114;
        }
    }
    ctx->pc = 0x134104u;
label_134104:
    // 0x134104: 0x9524000e  lhu         $a0, 0xE($t1)
    ctx->pc = 0x134104u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x134108: 0xc04d130  jal         func_1344C0
    ctx->pc = 0x134108u;
    SET_GPR_U32(ctx, 31, 0x134110u);
    ctx->pc = 0x13410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134108u;
    // 0x13410c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x134108u, 0x134110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134110u;
label_134110:
    // 0x134110: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x134110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_134114:
    // 0x134114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x134114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x134118: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x134118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13411c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x13411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x134120: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x134120u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x134124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x134124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134128:
    // 0x134128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13412c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13412cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134130: 0x3e00008  jr          $ra
    ctx->pc = 0x134130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134130u;
        // 0x134134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134138u;
}
