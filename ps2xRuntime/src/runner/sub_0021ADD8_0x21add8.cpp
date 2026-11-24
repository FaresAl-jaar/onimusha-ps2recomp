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

// Function: sub_0021ADD8
// Address: 0x21add8 - 0x21b0ec
void sub_0021ADD8_0x21add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ADD8_0x21add8");
#endif

    switch (ctx->pc) {
        case 0x21ae08u: goto label_21ae08;
        case 0x21af04u: goto label_21af04;
        case 0x21af14u: goto label_21af14;
        case 0x21b018u: goto label_21b018;
        case 0x21b020u: goto label_21b020;
        case 0x21b050u: goto label_21b050;
        case 0x21b0a0u: goto label_21b0a0;
        case 0x21b0c0u: goto label_21b0c0;
        default: break;
    }

    ctx->pc = 0x21add8u;

    // 0x21add8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21addc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ade0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ade0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ade4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ade8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21adec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21adf0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21adf4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21adf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21adfc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x21adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21ae00: 0xc043808  jal         func_10E020
    ctx->pc = 0x21AE00u;
    SET_GPR_U32(ctx, 31, 0x21AE08u);
    ctx->pc = 0x21AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE00u;
    // 0x21ae04: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21AE00u, 0x21AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE08u;
label_21ae08:
    // 0x21ae08: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x21ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21ae0c: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x21ae0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21ae10: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x21ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x21ae14: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x21ae18: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x21ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x21ae1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x21ae1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x21ae20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ae24: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x21ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ae28: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21ae2c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x21ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21ae30: 0x1229023  subu        $s2, $t1, $v0
    ctx->pc = 0x21ae30u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21ae34: 0x8e0a0028  lw          $t2, 0x28($s0)
    ctx->pc = 0x21ae34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21ae38: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x21ae38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x21ae3c: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x21ae3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21ae40: 0x3096007f  andi        $s6, $a0, 0x7F
    ctx->pc = 0x21ae40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x21ae44: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x21ae44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21ae48: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21AE48u;
    {
        const bool branch_taken_0x21ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE48u;
        // 0x21ae4c: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae48) {
            ctx->pc = 0x21AEF8u;
            goto label_21aef8;
        }
    }
    ctx->pc = 0x21AE50u;
    // 0x21ae50: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x21ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ae54: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x21ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x21ae58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ae5c: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x21ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x21ae60: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x21ae60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x21ae64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ae68: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x21ae68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ae6c: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x21ae6cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x21ae70: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AE70u;
    {
        const bool branch_taken_0x21ae70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x21AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE70u;
        // 0x21ae74: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae70) {
            ctx->pc = 0x21AE84u;
            goto label_21ae84;
        }
    }
    ctx->pc = 0x21AE78u;
    // 0x21ae78: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x21ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21ae7c: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE7Cu;
    {
        const bool branch_taken_0x21ae7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE7Cu;
        // 0x21ae80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae7c) {
            ctx->pc = 0x21AE88u;
            goto label_21ae88;
        }
    }
    ctx->pc = 0x21AE84u;
label_21ae84:
    // 0x21ae84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae88:
    // 0x21ae88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21ae8c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x21ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x21ae90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ae94: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x21ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x21ae98: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x21ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21ae9c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x21ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x21aea0: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x21aea0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21aea4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x21aea8: 0x34530100  ori         $s3, $v0, 0x100
    ctx->pc = 0x21aea8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x21aeac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AEACu;
    {
        const bool branch_taken_0x21aeac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aeac) {
            ctx->pc = 0x21AEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AEACu;
            // 0x21aeb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AEB4u;
            goto label_21aeb4;
        }
    }
    ctx->pc = 0x21AEB4u;
label_21aeb4:
    // 0x21aeb4: 0x2810  mfhi        $a1
    ctx->pc = 0x21aeb4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21aeb8: 0x4a20009  bltzl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AEB8u;
    {
        const bool branch_taken_0x21aeb8 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x21aeb8) {
            ctx->pc = 0x21AEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AEB8u;
            // 0x21aebc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AEE0u;
            goto label_21aee0;
        }
    }
    ctx->pc = 0x21AEC0u;
    // 0x21aec0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AEC0u;
    {
        const bool branch_taken_0x21aec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aec0) {
            ctx->pc = 0x21AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AEC0u;
            // 0x21aec4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AEC8u;
            goto label_21aec8;
        }
    }
    ctx->pc = 0x21AEC8u;
label_21aec8:
    // 0x21aec8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x21aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21aecc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x21aeccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21aed0: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x21AED0u;
    {
        const bool branch_taken_0x21aed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aed0) {
            ctx->pc = 0x21AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AED0u;
            // 0x21aed4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFE0u;
            goto label_21afe0;
        }
    }
    ctx->pc = 0x21AED8u;
    // 0x21aed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AED8u;
    {
        const bool branch_taken_0x21aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED8u;
        // 0x21aedc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed8) {
            ctx->pc = 0x21AEE4u;
            goto label_21aee4;
        }
    }
    ctx->pc = 0x21AEE0u;
label_21aee0:
    // 0x21aee0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21aee4:
    // 0x21aee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aee8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21aeec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21AEECu;
    {
        const bool branch_taken_0x21aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEECu;
        // 0x21aef0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeec) {
            ctx->pc = 0x21AFDCu;
            goto label_21afdc;
        }
    }
    ctx->pc = 0x21AEF4u;
    // 0x21aef4: 0x0  nop
    ctx->pc = 0x21aef4u;
    // NOP
label_21aef8:
    // 0x21aef8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x21aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aefc: 0xc086986  jal         func_21A618
    ctx->pc = 0x21AEFCu;
    SET_GPR_U32(ctx, 31, 0x21AF04u);
    ctx->pc = 0x21AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AEFCu;
    // 0x21af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A618u, 0x21AEFCu, 0x21AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF04u;
label_21af04:
    // 0x21af04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21af08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af0c: 0xc086986  jal         func_21A618
    ctx->pc = 0x21AF0Cu;
    SET_GPR_U32(ctx, 31, 0x21AF14u);
    ctx->pc = 0x21AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF0Cu;
    // 0x21af10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A618u, 0x21AF0Cu, 0x21AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF14u;
label_21af14:
    // 0x21af14: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x21af14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af18: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x21AF18u;
    {
        const bool branch_taken_0x21af18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x21AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF18u;
        // 0x21af1c: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af18) {
            ctx->pc = 0x21AFDCu;
            goto label_21afdc;
        }
    }
    ctx->pc = 0x21AF20u;
    // 0x21af20: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x21af20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21af24: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x21af24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21af28: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x21af28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21af2c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x21af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21af30: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x21af30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x21af34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AF34u;
    {
        const bool branch_taken_0x21af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af34) {
            ctx->pc = 0x21AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF34u;
            // 0x21af38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF3Cu;
            goto label_21af3c;
        }
    }
    ctx->pc = 0x21AF3Cu;
label_21af3c:
    // 0x21af3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21af40: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21af44: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x21af44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21af48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21af48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x21af4c: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x21af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x21af50: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x21af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x21af54: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x21af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x21af58: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x21af58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21af5c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x21af60: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21af64: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21af68: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x21af68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x21af6c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x21af70: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x21af70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21af74: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x21af74u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x21af78: 0x3010  mfhi        $a2
    ctx->pc = 0x21af78u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x21af7c: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x21af7cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21af80: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x21af80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x21af84: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x21af84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x21af88: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x21af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x21af8c: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x21af8cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x21af90: 0x3810  mfhi        $a3
    ctx->pc = 0x21af90u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x21af94: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x21af94u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21af98: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x21af98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x21af9c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x21afa0: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x21afa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x21afa4: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x21afa4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x21afa8: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x21afac: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x21afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x21afb0: 0x1010  mfhi        $v0
    ctx->pc = 0x21afb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21afb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AFB4u;
    {
        const bool branch_taken_0x21afb4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFB4u;
        // 0x21afb8: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afb4) {
            ctx->pc = 0x21AFD0u;
            goto label_21afd0;
        }
    }
    ctx->pc = 0x21AFBCu;
    // 0x21afbc: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x21afbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x21afc0: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AFC0u;
            // 0x21afc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFC8u;
            goto label_21afc8;
        }
    }
    ctx->pc = 0x21AFC8u;
label_21afc8:
    // 0x21afc8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AFC8u;
    {
        const bool branch_taken_0x21afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21afc8) {
            ctx->pc = 0x21AFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AFC8u;
            // 0x21afcc: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFE0u;
            goto label_21afe0;
        }
    }
    ctx->pc = 0x21AFD0u;
label_21afd0:
    // 0x21afd0: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x21afd4: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x21afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x21afd8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x21afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_21afdc:
    // 0x21afdc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x21afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_21afe0:
    // 0x21afe0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21AFE0u;
    {
        const bool branch_taken_0x21afe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afe0) {
            ctx->pc = 0x21AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AFE0u;
            // 0x21afe4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B01Cu;
            goto label_21b01c;
        }
    }
    ctx->pc = 0x21AFE8u;
    // 0x21afe8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x21afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21afec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21AFECu;
    {
        const bool branch_taken_0x21afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFECu;
        // 0x21aff0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afec) {
            ctx->pc = 0x21B018u;
            goto label_21b018;
        }
    }
    ctx->pc = 0x21AFF4u;
    // 0x21aff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21aff8: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x21affc: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x21affcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x21b000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b000u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x21b004: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x21b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21b008: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21b008u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x21b00c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x21b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x21b010: 0xc08699a  jal         func_21A668
    ctx->pc = 0x21B010u;
    SET_GPR_U32(ctx, 31, 0x21B018u);
    ctx->pc = 0x21B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B010u;
    // 0x21b014: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A668u, 0x21B010u, 0x21B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B018u;
label_21b018:
    // 0x21b018: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_21b01c:
    // 0x21b01c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x21b01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_21b020:
    // 0x21b020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x21b024: 0x0  nop
    ctx->pc = 0x21b024u;
    // NOP
    // 0x21b028: 0x0  nop
    ctx->pc = 0x21b028u;
    // NOP
    // 0x21b02c: 0x0  nop
    ctx->pc = 0x21b02cu;
    // NOP
    // 0x21b030: 0x0  nop
    ctx->pc = 0x21b030u;
    // NOP
    // 0x21b034: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B034u;
    {
        const bool branch_taken_0x21b034 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b034) {
            ctx->pc = 0x21B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b020;
        }
    }
    ctx->pc = 0x21B03Cu;
    // 0x21b03c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21b040: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x21b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x21b044: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x21b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x21b048: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x21b048u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10002000
    // 0x21b04c: 0x0  nop
    ctx->pc = 0x21b04cu;
    // NOP
label_21b050:
    // 0x21b050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b050u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x21b054: 0x0  nop
    ctx->pc = 0x21b054u;
    // NOP
    // 0x21b058: 0x0  nop
    ctx->pc = 0x21b058u;
    // NOP
    // 0x21b05c: 0x0  nop
    ctx->pc = 0x21b05cu;
    // NOP
    // 0x21b060: 0x0  nop
    ctx->pc = 0x21b060u;
    // NOP
    // 0x21b064: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B064u;
    {
        const bool branch_taken_0x21b064 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B064u;
        // 0x21b068: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b064) {
            ctx->pc = 0x21B050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b050;
        }
    }
    ctx->pc = 0x21B06Cu;
    // 0x21b06c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21b070: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21b074: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x21b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x21b078: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x21b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x21b07c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x21b07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x21b080: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x21b080u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18)); // MMIO: 0x1000b410
    // 0x21b084: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x21b084u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 20)); // MMIO: 0x1000b430
    // 0x21b088: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x21b088u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 21)); // MMIO: 0x1000b420
    // 0x21b08c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21b090: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B090u;
    {
        const bool branch_taken_0x21b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b090) {
            ctx->pc = 0x21B094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B090u;
            // 0x21b094: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B0A4u;
            goto label_21b0a4;
        }
    }
    ctx->pc = 0x21B098u;
    // 0x21b098: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21B098u;
    SET_GPR_U32(ctx, 31, 0x21B0A0u);
    ctx->pc = 0x21B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B098u;
    // 0x21b09c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21B098u, 0x21B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0A0u;
label_21b0a0:
    // 0x21b0a0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x21b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_21b0a4:
    // 0x21b0a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21b0a8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x21b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x21b0ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b0b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21b0b0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x21b0b4: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x21b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x21b0b8: 0xc043800  jal         func_10E000
    ctx->pc = 0x21B0B8u;
    SET_GPR_U32(ctx, 31, 0x21B0C0u);
    ctx->pc = 0x21B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0B8u;
    // 0x21b0bc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x21B0B8u, 0x21B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0C0u;
label_21b0c0:
    // 0x21b0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b0c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b0cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b0d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b0d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b0d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b0d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21b0d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b0dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21b0dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b0e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0E4u;
        // 0x21b0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B0ECu;
}
