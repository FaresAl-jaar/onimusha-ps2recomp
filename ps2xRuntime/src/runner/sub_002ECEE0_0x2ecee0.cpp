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

// Function: sub_002ECEE0
// Address: 0x2ecee0 - 0x2ed128
void sub_002ECEE0_0x2ecee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECEE0_0x2ecee0");
#endif

    switch (ctx->pc) {
        case 0x2ecfacu: goto label_2ecfac;
        case 0x2ecfc4u: goto label_2ecfc4;
        case 0x2ecfe0u: goto label_2ecfe0;
        case 0x2ed014u: goto label_2ed014;
        case 0x2ed06cu: goto label_2ed06c;
        case 0x2ed09cu: goto label_2ed09c;
        case 0x2ed0c8u: goto label_2ed0c8;
        case 0x2ed0dcu: goto label_2ed0dc;
        case 0x2ed104u: goto label_2ed104;
        default: break;
    }

    ctx->pc = 0x2ecee0u;

    // 0x2ecee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ecee4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ecee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ecee8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ecee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2eceec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ecef0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ecef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecef4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ecef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ecef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ecef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ecefc: 0x10c00082  beqz        $a2, . + 4 + (0x82 << 2)
    ctx->pc = 0x2ECEFCu;
    {
        const bool branch_taken_0x2ecefc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEFCu;
        // 0x2ecf00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecefc) {
            ctx->pc = 0x2ED108u;
            goto label_2ed108;
        }
    }
    ctx->pc = 0x2ECF04u;
    // 0x2ecf04: 0x8e86004c  lw          $a2, 0x4C($s4)
    ctx->pc = 0x2ecf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2ecf08: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECF08u;
    {
        const bool branch_taken_0x2ecf08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf08) {
            ctx->pc = 0x2ECF88u;
            goto label_2ecf88;
        }
    }
    ctx->pc = 0x2ECF10u;
    // 0x2ecf10: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x2ecf10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ecf14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ecf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecf18: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ECF18u;
    {
        const bool branch_taken_0x2ecf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ecf18) {
            ctx->pc = 0x2ECF88u;
            goto label_2ecf88;
        }
    }
    ctx->pc = 0x2ECF20u;
    // 0x2ecf20: 0x87828298  lh          $v0, -0x7D68($gp)
    ctx->pc = 0x2ecf20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935192)));
    // 0x2ecf24: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x2ecf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2ecf28: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x2ecf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2ecf2c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2ecf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecf30: 0x8782829c  lh          $v0, -0x7D64($gp)
    ctx->pc = 0x2ecf30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935196)));
    // 0x2ecf34: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2ecf34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecf38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ecf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ecf3c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x2ecf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2ecf40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ecf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ecf44: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ecf48: 0x9063008c  lbu         $v1, 0x8C($v1)
    ctx->pc = 0x2ecf48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2ecf4c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2ecf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ecf50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecf54: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2ecf54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ecf58: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2ecf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2ecf5c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ecf5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ecf60: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x2ecf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2ecf64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ecf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ecf68: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ecf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ecf6c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ecf70: 0x90630088  lbu         $v1, 0x88($v1)
    ctx->pc = 0x2ecf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2ecf74: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2ecf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ecf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecf7c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2ecf7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ecf80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECF80u;
    {
        const bool branch_taken_0x2ecf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF80u;
        // 0x2ecf84: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf80) {
            ctx->pc = 0x2ECF98u;
            goto label_2ecf98;
        }
    }
    ctx->pc = 0x2ECF88u;
label_2ecf88:
    // 0x2ecf88: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x2ecf88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ecf8c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2ecf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2ecf90: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x2ecf90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ecf94: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2ecf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2ecf98:
    // 0x2ecf98: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x2ecf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x2ecf9c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ecf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ecfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecfa4: 0xc0c305c  jal         func_30C170
    ctx->pc = 0x2ECFA4u;
    SET_GPR_U32(ctx, 31, 0x2ECFACu);
    ctx->pc = 0x2ECFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFA4u;
    // 0x2ecfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x2ECFA4u, 0x2ECFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFACu;
label_2ecfac:
    // 0x2ecfac: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2ecfacu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecfb0: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x2ecfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x2ecfb4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ecfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ecfb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ecfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecfbc: 0xc0c3030  jal         func_30C0C0
    ctx->pc = 0x2ECFBCu;
    SET_GPR_U32(ctx, 31, 0x2ECFC4u);
    ctx->pc = 0x2ECFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFBCu;
    // 0x2ecfc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0C0u, 0x2ECFBCu, 0x2ECFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFC4u;
label_2ecfc4:
    // 0x2ecfc4: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ecfc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ecfc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ecfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecfcc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2ecfccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecfd0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECFD0u;
    {
        const bool branch_taken_0x2ecfd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ECFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFD0u;
        // 0x2ecfd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfd0) {
            ctx->pc = 0x2ECFE8u;
            goto label_2ecfe8;
        }
    }
    ctx->pc = 0x2ECFD8u;
    // 0x2ecfd8: 0xc0a6a5c  jal         func_29A970
    ctx->pc = 0x2ECFD8u;
    SET_GPR_U32(ctx, 31, 0x2ECFE0u);
    ctx->pc = 0x2ECFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFD8u;
    // 0x2ecfdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A970u, 0x2ECFD8u, 0x2ECFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFE0u;
label_2ecfe0:
    // 0x2ecfe0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ecfe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecfe4: 0x0  nop
    ctx->pc = 0x2ecfe4u;
    // NOP
label_2ecfe8:
    // 0x2ecfe8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECFE8u;
    {
        const bool branch_taken_0x2ecfe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecfe8) {
            ctx->pc = 0x2ED000u;
            goto label_2ed000;
        }
    }
    ctx->pc = 0x2ECFF0u;
    // 0x2ecff0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ecff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECFF4u;
    {
        const bool branch_taken_0x2ecff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFF4u;
        // 0x2ecff8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecff4) {
            ctx->pc = 0x2ED018u;
            goto label_2ed018;
        }
    }
    ctx->pc = 0x2ECFFCu;
    // 0x2ecffc: 0x0  nop
    ctx->pc = 0x2ecffcu;
    // NOP
label_2ed000:
    // 0x2ed000: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x2ed000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x2ed004: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ed004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ed008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed00c: 0xc0c3030  jal         func_30C0C0
    ctx->pc = 0x2ED00Cu;
    SET_GPR_U32(ctx, 31, 0x2ED014u);
    ctx->pc = 0x2ED010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED00Cu;
    // 0x2ed010: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0C0u, 0x2ED00Cu, 0x2ED014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED014u;
label_2ed014:
    // 0x2ed014: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ed014u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed018:
    // 0x2ed018: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ed018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ed01c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2ed01cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ed020: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ed020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ed024: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2ed024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2ed028: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ed028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ed02c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ed02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ed030: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ed030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed034: 0x16830002  bne         $s4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED034u;
    {
        const bool branch_taken_0x2ed034 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ED038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED034u;
        // 0x2ed038: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed034) {
            ctx->pc = 0x2ED040u;
            goto label_2ed040;
        }
    }
    ctx->pc = 0x2ED03Cu;
    // 0x2ed03c: 0x240300b8  addiu       $v1, $zero, 0xB8
    ctx->pc = 0x2ed03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_2ed040:
    // 0x2ed040: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED040u;
    {
        const bool branch_taken_0x2ed040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED040u;
        // 0x2ed044: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed040) {
            ctx->pc = 0x2ED070u;
            goto label_2ed070;
        }
    }
    ctx->pc = 0x2ED048u;
    // 0x2ed048: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2ed048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ed04c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2ed04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ed050: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2ed050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x2ed054: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ed054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ed058: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2ed058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x2ed05c: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x2ed05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2ed060: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2ed060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ed064: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x2ED064u;
    SET_GPR_U32(ctx, 31, 0x2ED06Cu);
    ctx->pc = 0x2ED068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED064u;
    // 0x2ed068: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x2ED064u, 0x2ED06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED06Cu;
label_2ed06c:
    // 0x2ed06c: 0xa050000d  sb          $s0, 0xD($v0)
    ctx->pc = 0x2ed06cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 16));
label_2ed070:
    // 0x2ed070: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED070u;
    {
        const bool branch_taken_0x2ed070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed070) {
            ctx->pc = 0x2ED0A0u;
            goto label_2ed0a0;
        }
    }
    ctx->pc = 0x2ED078u;
    // 0x2ed078: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2ed078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ed07c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2ed07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2ed080: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2ed080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x2ed084: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ed084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ed088: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2ed088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x2ed08c: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x2ed08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2ed090: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2ed090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ed094: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x2ED094u;
    SET_GPR_U32(ctx, 31, 0x2ED09Cu);
    ctx->pc = 0x2ED098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED094u;
    // 0x2ed098: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x2ED094u, 0x2ED09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED09Cu;
label_2ed09c:
    // 0x2ed09c: 0xa050000d  sb          $s0, 0xD($v0)
    ctx->pc = 0x2ed09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 16));
label_2ed0a0:
    // 0x2ed0a0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x2ed0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed0a4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2ed0a8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2ed0a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed0ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED0ACu;
    {
        const bool branch_taken_0x2ed0ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0ACu;
        // 0x2ed0b0: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0ac) {
            ctx->pc = 0x2ED0B8u;
            goto label_2ed0b8;
        }
    }
    ctx->pc = 0x2ED0B4u;
    // 0x2ed0b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed0b8:
    // 0x2ed0b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED0B8u;
    {
        const bool branch_taken_0x2ed0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0b8) {
            ctx->pc = 0x2ED0E0u;
            goto label_2ed0e0;
        }
    }
    ctx->pc = 0x2ED0C0u;
    // 0x2ed0c0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2ED0C0u;
    SET_GPR_U32(ctx, 31, 0x2ED0C8u);
    ctx->pc = 0x2ED0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0C0u;
    // 0x2ed0c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2ED0C0u, 0x2ED0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0C8u;
label_2ed0c8:
    // 0x2ed0c8: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x2ed0c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x2ed0cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0d4: 0xc0aaa68  jal         func_2AA9A0
    ctx->pc = 0x2ED0D4u;
    SET_GPR_U32(ctx, 31, 0x2ED0DCu);
    ctx->pc = 0x2ED0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0D4u;
    // 0x2ed0d8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA9A0u, 0x2ED0D4u, 0x2ED0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0DCu;
label_2ed0dc:
    // 0x2ed0dc: 0x0  nop
    ctx->pc = 0x2ed0dcu;
    // NOP
label_2ed0e0:
    // 0x2ed0e0: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2ed0e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed0e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ed0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ed0e8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED0E8u;
    {
        const bool branch_taken_0x2ed0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed0e8) {
            ctx->pc = 0x2ED108u;
            goto label_2ed108;
        }
    }
    ctx->pc = 0x2ED0F0u;
    // 0x2ed0f0: 0x968514b0  lhu         $a1, 0x14B0($s4)
    ctx->pc = 0x2ed0f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 5296)));
    // 0x2ed0f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed0fc: 0xc0aaa68  jal         func_2AA9A0
    ctx->pc = 0x2ED0FCu;
    SET_GPR_U32(ctx, 31, 0x2ED104u);
    ctx->pc = 0x2ED100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0FCu;
    // 0x2ed100: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA9A0u, 0x2ED0FCu, 0x2ED104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED104u;
label_2ed104:
    // 0x2ed104: 0x0  nop
    ctx->pc = 0x2ed104u;
    // NOP
label_2ed108:
    // 0x2ed108: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ed108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed10c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed10cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ed110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed120: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED120u;
        // 0x2ed124: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED128u;
}
