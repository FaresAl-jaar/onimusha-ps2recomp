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

// Function: sub_00198070
// Address: 0x198070 - 0x198aec
void sub_00198070_0x198070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198070_0x198070");
#endif

    switch (ctx->pc) {
        case 0x198148u: goto label_198148;
        case 0x198158u: goto label_198158;
        case 0x198200u: goto label_198200;
        case 0x198320u: goto label_198320;
        case 0x19837cu: goto label_19837c;
        case 0x1983ecu: goto label_1983ec;
        case 0x198448u: goto label_198448;
        case 0x198498u: goto label_198498;
        case 0x1984b4u: goto label_1984b4;
        case 0x19852cu: goto label_19852c;
        case 0x19854cu: goto label_19854c;
        case 0x19856cu: goto label_19856c;
        case 0x1985e8u: goto label_1985e8;
        case 0x198600u: goto label_198600;
        case 0x198684u: goto label_198684;
        case 0x1986d0u: goto label_1986d0;
        case 0x1986f0u: goto label_1986f0;
        case 0x198710u: goto label_198710;
        case 0x198730u: goto label_198730;
        case 0x198748u: goto label_198748;
        case 0x1988f4u: goto label_1988f4;
        case 0x198930u: goto label_198930;
        case 0x1989c8u: goto label_1989c8;
        case 0x198a30u: goto label_198a30;
        case 0x198ac0u: goto label_198ac0;
        default: break;
    }

    ctx->pc = 0x198070u;

    // 0x198070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x198074: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x198078: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x198078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19807c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x198080: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x198080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x198084: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x198084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x198088: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x198088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19808c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x198090: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19809c: 0x8c33ea28  lw          $s3, -0x15D8($at)
    ctx->pc = 0x19809cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x1980a0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1980a4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1980a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1980a8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x1980ac: 0x8c32ea24  lw          $s2, -0x15DC($at)
    ctx->pc = 0x1980acu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x1980b0: 0x10620139  beq         $v1, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1980B0u;
    {
        const bool branch_taken_0x1980b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980B0u;
        // 0x1980b4: 0x2610db60  addiu       $s0, $s0, -0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980b0) {
            ctx->pc = 0x198598u;
            goto label_198598;
        }
    }
    ctx->pc = 0x1980B8u;
    // 0x1980b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1980b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1980bc: 0x10620128  beq         $v1, $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x1980BCu;
    {
        const bool branch_taken_0x1980bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980BCu;
        // 0x1980c0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980bc) {
            ctx->pc = 0x198560u;
            goto label_198560;
        }
    }
    ctx->pc = 0x1980C4u;
    // 0x1980c4: 0x10620106  beq         $v1, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1980C4u;
    {
        const bool branch_taken_0x1980c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1980c4) {
            ctx->pc = 0x1984E0u;
            goto label_1984e0;
        }
    }
    ctx->pc = 0x1980CCu;
    // 0x1980cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1980ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1980d0: 0x106200f5  beq         $v1, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1980D0u;
    {
        const bool branch_taken_0x1980d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D0u;
        // 0x1980d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d0) {
            ctx->pc = 0x1984A8u;
            goto label_1984a8;
        }
    }
    ctx->pc = 0x1980D8u;
    // 0x1980d8: 0x106200e1  beq         $v1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1980D8u;
    {
        const bool branch_taken_0x1980d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D8u;
        // 0x1980dc: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d8) {
            ctx->pc = 0x198460u;
            goto label_198460;
        }
    }
    ctx->pc = 0x1980E0u;
    // 0x1980e0: 0x106c00c5  beq         $v1, $t4, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1980E0u;
    {
        const bool branch_taken_0x1980e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x1980E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980E0u;
        // 0x1980e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980e0) {
            ctx->pc = 0x1983F8u;
            goto label_1983f8;
        }
    }
    ctx->pc = 0x1980E8u;
    // 0x1980e8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1980E8u;
    {
        const bool branch_taken_0x1980e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1980e8) {
            ctx->pc = 0x1981E0u;
            goto label_1981e0;
        }
    }
    ctx->pc = 0x1980F0u;
    // 0x1980f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980F0u;
    {
        const bool branch_taken_0x1980f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980f0) {
            ctx->pc = 0x198100u;
            goto label_198100;
        }
    }
    ctx->pc = 0x1980F8u;
    // 0x1980f8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1980F8u;
    {
        const bool branch_taken_0x1980f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980f8) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198100u;
label_198100:
    // 0x198100: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x198100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x198104: 0x8e320044  lw          $s2, 0x44($s1)
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x198108: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x19810c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x19810cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x198110: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198114: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19811c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19811cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19812c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198130: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x198130u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198138: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x198138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x19813c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198140: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198140u;
    // 0x198144: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198140u, 0x198148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198148u;
label_198148:
    // 0x198148: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x19814c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198150: 0xc056e04  jal         func_15B810
    ctx->pc = 0x198150u;
    SET_GPR_U32(ctx, 31, 0x198158u);
    ctx->pc = 0x198154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198150u;
    // 0x198154: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x198150u, 0x198158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198158u;
label_198158:
    // 0x198158: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x198158u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x19815c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198160: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198164: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x198168: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19816c: 0xa226004f  sb          $a2, 0x4F($s1)
    ctx->pc = 0x19816cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 6));
    // 0x198170: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x198170u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x198174: 0xa2260050  sb          $a2, 0x50($s1)
    ctx->pc = 0x198174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x198178: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x198178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19817c: 0xa2260051  sb          $a2, 0x51($s1)
    ctx->pc = 0x19817cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 6));
    // 0x198180: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x198180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x198184: 0xa2260052  sb          $a2, 0x52($s1)
    ctx->pc = 0x198184u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 82), (uint8_t)GPR_U32(ctx, 6));
    // 0x198188: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x198188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x19818c: 0xa2260053  sb          $a2, 0x53($s1)
    ctx->pc = 0x19818cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 6));
    // 0x198190: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x198190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x198194: 0xa2260054  sb          $a2, 0x54($s1)
    ctx->pc = 0x198194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 6));
    // 0x198198: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x198198u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19819c: 0xa2260055  sb          $a2, 0x55($s1)
    ctx->pc = 0x19819cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 6));
    // 0x1981a0: 0x92460009  lbu         $a2, 0x9($s2)
    ctx->pc = 0x1981a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1981a4: 0xa2260056  sb          $a2, 0x56($s1)
    ctx->pc = 0x1981a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 6));
    // 0x1981a8: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x1981a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1981ac: 0xa620000e  sh          $zero, 0xE($s1)
    ctx->pc = 0x1981acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1981b0: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x1981b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1981b4: 0xa220004a  sb          $zero, 0x4A($s1)
    ctx->pc = 0x1981b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981b8: 0xa220004b  sb          $zero, 0x4B($s1)
    ctx->pc = 0x1981b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981bc: 0xa225004c  sb          $a1, 0x4C($s1)
    ctx->pc = 0x1981bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 5));
    // 0x1981c0: 0xa224004d  sb          $a0, 0x4D($s1)
    ctx->pc = 0x1981c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981c4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x1981c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1981c8: 0xa2240048  sb          $a0, 0x48($s1)
    ctx->pc = 0x1981c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981cc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x1981ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x1981d0: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x1981d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1981d4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1981D4u;
    {
        const bool branch_taken_0x1981d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D4u;
        // 0x1981d8: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d4) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1981DCu;
    // 0x1981dc: 0x0  nop
    ctx->pc = 0x1981dcu;
    // NOP
label_1981e0:
    // 0x1981e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1981e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1981e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1981e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1981ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1981ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1981f0: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1981F0u;
    {
        const bool branch_taken_0x1981f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981F0u;
        // 0x1981f4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981f0) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1981F8u;
    // 0x1981f8: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1981F8u;
    SET_GPR_U32(ctx, 31, 0x198200u);
    ctx->pc = 0x1981FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1981F8u;
    // 0x1981fc: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x1981F8u, 0x198200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198200u;
label_198200:
    // 0x198200: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x198200u;
    {
        const bool branch_taken_0x198200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198200) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198208u;
    // 0x198208: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x19820c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19820Cu;
    {
        const bool branch_taken_0x19820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19820Cu;
        // 0x198210: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19820c) {
            ctx->pc = 0x198220u;
            goto label_198220;
        }
    }
    ctx->pc = 0x198214u;
    // 0x198214: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x198214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x198218: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x198218u;
    {
        const bool branch_taken_0x198218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198218) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198220u;
label_198220:
    // 0x198220: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x198220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x198224: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x198224u;
    {
        const bool branch_taken_0x198224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198224u;
        // 0x198228: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198224) {
            ctx->pc = 0x198328u;
            goto label_198328;
        }
    }
    ctx->pc = 0x19822Cu;
    // 0x19822c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19822cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198230: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x198230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x198234: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198238: 0x8e2c009c  lw          $t4, 0x9C($s1)
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19823c: 0x3c023206  lui         $v0, 0x3206
    ctx->pc = 0x19823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12806 << 16));
    // 0x198240: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x198240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x198244: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19824c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19824cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198258: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19825c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198260: 0x35820001  ori         $v0, $t4, 0x1
    ctx->pc = 0x198260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x198264: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x198264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x198268: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19826c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198270: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x198270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x198274: 0x822e004c  lb          $t6, 0x4C($s1)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x198278: 0x8222004b  lb          $v0, 0x4B($s1)
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x19827c: 0x822d004a  lb          $t5, 0x4A($s1)
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198280: 0x4e6018  mult        $t4, $v0, $t6
    ctx->pc = 0x198280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x198284: 0x1b16821  addu        $t5, $t5, $s1
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x198288: 0x25ad004f  addiu       $t5, $t5, 0x4F
    ctx->pc = 0x198288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 79));
    // 0x19828c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198290: 0x704e1018  mult1       $v0, $v0, $t6
    ctx->pc = 0x198290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198294: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x198298: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x19829c: 0x804c0000  lb          $t4, 0x0($v0)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1982a0: 0x81a20000  lb          $v0, 0x0($t5)
    ctx->pc = 0x1982a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1982a4: 0xa1ac0000  sb          $t4, 0x0($t5)
    ctx->pc = 0x1982a4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x1982a8: 0x822e004b  lb          $t6, 0x4B($s1)
    ctx->pc = 0x1982a8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x1982ac: 0x822d004c  lb          $t5, 0x4C($s1)
    ctx->pc = 0x1982acu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1982b0: 0x822c004a  lb          $t4, 0x4A($s1)
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1982b4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1982b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1982b8: 0x1cd6818  mult        $t5, $t6, $t5
    ctx->pc = 0x1982b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1982bc: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1982c0: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1982c4: 0x81ac0050  lb          $t4, 0x50($t5)
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x1982c8: 0xa1ac004f  sb          $t4, 0x4F($t5)
    ctx->pc = 0x1982c8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 79), (uint8_t)GPR_U32(ctx, 12));
    // 0x1982cc: 0x822e004a  lb          $t6, 0x4A($s1)
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1982d0: 0x822f004c  lb          $t7, 0x4C($s1)
    ctx->pc = 0x1982d0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1982d4: 0x822c004b  lb          $t4, 0x4B($s1)
    ctx->pc = 0x1982d4u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x1982d8: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x1982dc: 0x25ce0050  addiu       $t6, $t6, 0x50
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 80));
    // 0x1982e0: 0x718f6818  mult1       $t5, $t4, $t7
    ctx->pc = 0x1982e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1982e4: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1982e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1982e8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1982ec: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1982ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1982f0: 0x81ad0000  lb          $t5, 0x0($t5)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1982f4: 0x1cc6021  addu        $t4, $t6, $t4
    ctx->pc = 0x1982f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1982f8: 0xa18d0000  sb          $t5, 0x0($t4)
    ctx->pc = 0x1982f8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x1982fc: 0x822e004a  lb          $t6, 0x4A($s1)
    ctx->pc = 0x1982fcu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198300: 0x822d004b  lb          $t5, 0x4B($s1)
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x198304: 0x822c004c  lb          $t4, 0x4C($s1)
    ctx->pc = 0x198304u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x198308: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x198308u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x19830c: 0x71ac6018  mult1       $t4, $t5, $t4
    ctx->pc = 0x19830cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x198310: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x198314: 0xa1820050  sb          $v0, 0x50($t4)
    ctx->pc = 0x198314u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x198318: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198318u;
    SET_GPR_U32(ctx, 31, 0x198320u);
    ctx->pc = 0x19831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198318u;
    // 0x19831c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198318u, 0x198320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198320u;
label_198320:
    // 0x198320: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x198320u;
    {
        const bool branch_taken_0x198320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198320) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198328u;
label_198328:
    // 0x198328: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x19832c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x198330: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x198330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x198334: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x198334u;
    {
        const bool branch_taken_0x198334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198334) {
            ctx->pc = 0x198388u;
            goto label_198388;
        }
    }
    ctx->pc = 0x19833Cu;
    // 0x19833c: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198340: 0x1840009d  blez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x198340u;
    {
        const bool branch_taken_0x198340 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x198344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198340u;
        // 0x198344: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198340) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198348u;
    // 0x198348: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19834c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198350: 0xa223004a  sb          $v1, 0x4A($s1)
    ctx->pc = 0x198350u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x198354: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198358: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x198358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19835c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x19835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x198360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198368: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19836c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19836cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198370: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198374: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198374u;
    SET_GPR_U32(ctx, 31, 0x19837Cu);
    ctx->pc = 0x198378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198374u;
    // 0x198378: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198374u, 0x19837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19837Cu;
label_19837c:
    // 0x19837c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x19837Cu;
    {
        const bool branch_taken_0x19837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19837c) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198384u;
    // 0x198384: 0x0  nop
    ctx->pc = 0x198384u;
    // NOP
label_198388:
    // 0x198388: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x198388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19838c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x19838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x198390: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x198390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x198394: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x198394u;
    {
        const bool branch_taken_0x198394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198394) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x19839Cu;
    // 0x19839c: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1983a0: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x1983a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1983a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1983a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1983a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1983ac: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x1983ACu;
    {
        const bool branch_taken_0x1983ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983ac) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1983B4u;
    // 0x1983b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1983b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1983bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1983c0: 0xa223004a  sb          $v1, 0x4A($s1)
    ctx->pc = 0x1983c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x1983c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1983c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1983c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1983cc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x1983d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1983d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1983d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1983d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1983dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1983e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1983E4u;
    SET_GPR_U32(ctx, 31, 0x1983ECu);
    ctx->pc = 0x1983E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983E4u;
    // 0x1983e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1983E4u, 0x1983ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983ECu;
label_1983ec:
    // 0x1983ec: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1983F4u;
    // 0x1983f4: 0x0  nop
    ctx->pc = 0x1983f4u;
    // NOP
label_1983f8:
    // 0x1983f8: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x1983f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1983fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1983FCu;
    {
        const bool branch_taken_0x1983fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983fc) {
            ctx->pc = 0x198410u;
            goto label_198410;
        }
    }
    ctx->pc = 0x198404u;
    // 0x198404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198408: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x198408u;
    {
        const bool branch_taken_0x198408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198408u;
        // 0x19840c: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198408) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198410u;
label_198410:
    // 0x198410: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198414: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x198414u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x198418: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19841c: 0x3c023306  lui         $v0, 0x3306
    ctx->pc = 0x19841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13062 << 16));
    // 0x198420: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198424: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x198424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x198428: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x198428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x19842c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198430: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198438: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19843c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19843cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198440: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198440u;
    SET_GPR_U32(ctx, 31, 0x198448u);
    ctx->pc = 0x198444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198440u;
    // 0x198444: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198440u, 0x198448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19844c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198450: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x198450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x198454: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x198454u;
    {
        const bool branch_taken_0x198454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198454) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x19845Cu;
    // 0x19845c: 0x0  nop
    ctx->pc = 0x19845cu;
    // NOP
label_198460:
    // 0x198460: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x198464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198464u;
    {
        const bool branch_taken_0x198464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198464) {
            ctx->pc = 0x198478u;
            goto label_198478;
        }
    }
    ctx->pc = 0x19846Cu;
    // 0x19846c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198470: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x198470u;
    {
        const bool branch_taken_0x198470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198470u;
        // 0x198474: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198470) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198478u;
label_198478:
    // 0x198478: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19847c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x198480: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19848c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19848cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198490: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x198490u;
    SET_GPR_U32(ctx, 31, 0x198498u);
    ctx->pc = 0x198494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198490u;
    // 0x198494: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x198490u, 0x198498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x198498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x19849c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1984a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1984A0u;
    {
        const bool branch_taken_0x1984a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A0u;
        // 0x1984a4: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984a0) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1984A8u;
label_1984a8:
    // 0x1984a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1984a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1984ac: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1984ACu;
    SET_GPR_U32(ctx, 31, 0x1984B4u);
    ctx->pc = 0x1984B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984ACu;
    // 0x1984b0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x1984ACu, 0x1984B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984B4u;
label_1984b4:
    // 0x1984b4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1984B4u;
    {
        const bool branch_taken_0x1984b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1984B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984B4u;
        // 0x1984b8: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984b4) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1984BCu;
    // 0x1984bc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x1984bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1984c0: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x1984c4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1984c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1984cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1984ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1984d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1984d4: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x1984D4u;
    {
        const bool branch_taken_0x1984d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984D4u;
        // 0x1984d8: 0xac230fe0  sw          $v1, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984d4) {
            ctx->pc = 0x198AC8u;
            goto label_198ac8;
        }
    }
    ctx->pc = 0x1984DCu;
    // 0x1984dc: 0x0  nop
    ctx->pc = 0x1984dcu;
    // NOP
label_1984e0:
    // 0x1984e0: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x1984e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1984e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1984E4u;
    {
        const bool branch_taken_0x1984e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1984e4) {
            ctx->pc = 0x1984F8u;
            goto label_1984f8;
        }
    }
    ctx->pc = 0x1984ECu;
    // 0x1984ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1984ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1984f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1984F0u;
    {
        const bool branch_taken_0x1984f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984F0u;
        // 0x1984f4: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984f0) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1984F8u;
label_1984f8:
    // 0x1984f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1984fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1984fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x198500: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198504: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x198504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x198508: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19850c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19850cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198510: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x198514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19851c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19851cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198524: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198524u;
    SET_GPR_U32(ctx, 31, 0x19852Cu);
    ctx->pc = 0x198528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198524u;
    // 0x198528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198524u, 0x19852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19852Cu;
label_19852c:
    // 0x19852c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19852cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198530: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198534: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x198534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x198538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19853c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19853cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198540: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198544: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x198544u;
    SET_GPR_U32(ctx, 31, 0x19854Cu);
    ctx->pc = 0x198548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198544u;
    // 0x198548: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x198544u, 0x19854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19854Cu;
label_19854c:
    // 0x19854c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x19854cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x198550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198554: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x198554u;
    {
        const bool branch_taken_0x198554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198554u;
        // 0x198558: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198554) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x19855Cu;
    // 0x19855c: 0x0  nop
    ctx->pc = 0x19855cu;
    // NOP
label_198560:
    // 0x198560: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198564: 0xc063d48  jal         func_18F520
    ctx->pc = 0x198564u;
    SET_GPR_U32(ctx, 31, 0x19856Cu);
    ctx->pc = 0x198568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198564u;
    // 0x198568: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x198564u, 0x19856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19856Cu;
label_19856c:
    // 0x19856c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19856Cu;
    {
        const bool branch_taken_0x19856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19856Cu;
        // 0x198570: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19856c) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x198574u;
    // 0x198574: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x198578: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x19857c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x19857cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x198580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x198584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198588: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x19858c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x19858Cu;
    {
        const bool branch_taken_0x19858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19858Cu;
        // 0x198590: 0xac230fe0  sw          $v1, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19858c) {
            ctx->pc = 0x198AC8u;
            goto label_198ac8;
        }
    }
    ctx->pc = 0x198594u;
    // 0x198594: 0x0  nop
    ctx->pc = 0x198594u;
    // NOP
label_198598:
    // 0x198598: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x19859c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19859Cu;
    {
        const bool branch_taken_0x19859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19859c) {
            ctx->pc = 0x1985B0u;
            goto label_1985b0;
        }
    }
    ctx->pc = 0x1985A4u;
    // 0x1985a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1985a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1985A8u;
    {
        const bool branch_taken_0x1985a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985A8u;
        // 0x1985ac: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985a8) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1985B0u;
label_1985b0:
    // 0x1985b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1985b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1985b4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1985b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1985b8:
    // 0x1985b8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1985bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1985c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1985c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1985c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1985c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1985c8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1985C8u;
    {
        const bool branch_taken_0x1985c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1985c8) {
            ctx->pc = 0x198718u;
            goto label_198718;
        }
    }
    ctx->pc = 0x1985D0u;
    // 0x1985d0: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x1985d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1985d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1985d8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1985D8u;
    {
        const bool branch_taken_0x1985d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985D8u;
        // 0x1985dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985d8) {
            ctx->pc = 0x1986B0u;
            goto label_1986b0;
        }
    }
    ctx->pc = 0x1985E0u;
    // 0x1985e0: 0x24130086  addiu       $s3, $zero, 0x86
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1985e4: 0x0  nop
    ctx->pc = 0x1985e4u;
    // NOP
label_1985e8:
    // 0x1985e8: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1985ec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1985ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1985f0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1985F0u;
    {
        const bool branch_taken_0x1985f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985F0u;
        // 0x1985f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985f0) {
            ctx->pc = 0x198698u;
            goto label_198698;
        }
    }
    ctx->pc = 0x1985F8u;
    // 0x1985f8: 0x2412004f  addiu       $s2, $zero, 0x4F
    ctx->pc = 0x1985f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1985fc: 0x0  nop
    ctx->pc = 0x1985fcu;
    // NOP
label_198600:
    // 0x198600: 0x8222004b  lb          $v0, 0x4B($s1)
    ctx->pc = 0x198600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x198604: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x198604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x198608: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x198608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x19860c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198610: 0x8063004f  lb          $v1, 0x4F($v1)
    ctx->pc = 0x198610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x198614: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x198618: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19861c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19861cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198620: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x198620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x198624: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x198628: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x198628u;
    {
        const bool branch_taken_0x198628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198628u;
        // 0x19862c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198628) {
            ctx->pc = 0x198668u;
            goto label_198668;
        }
    }
    ctx->pc = 0x198630u;
    // 0x198630: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x198634: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x198634u;
    {
        const bool branch_taken_0x198634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198634) {
            ctx->pc = 0x198668u;
            goto label_198668;
        }
    }
    ctx->pc = 0x19863Cu;
    // 0x19863c: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198640: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x198640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x198644: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198648: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19864c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x19864cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x198650: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x198650u;
    {
        const bool branch_taken_0x198650 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198650u;
        // 0x198654: 0x28410002  slti        $at, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198650) {
            ctx->pc = 0x198668u;
            goto label_198668;
        }
    }
    ctx->pc = 0x198658u;
    // 0x198658: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x198658u;
    {
        const bool branch_taken_0x198658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198658u;
        // 0x19865c: 0x24620013  addiu       $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198658) {
            ctx->pc = 0x198668u;
            goto label_198668;
        }
    }
    ctx->pc = 0x198660u;
    // 0x198660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x198660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198664: 0x0  nop
    ctx->pc = 0x198664u;
    // NOP
label_198668:
    // 0x198668: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x198668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19866c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198678: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x198678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19867c: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19867Cu;
    SET_GPR_U32(ctx, 31, 0x198684u);
    ctx->pc = 0x198680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19867Cu;
    // 0x198680: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19867Cu, 0x198684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198684u;
label_198684:
    // 0x198684: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x198684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x198688: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19868c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x19868cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198690: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x198690u;
    {
        const bool branch_taken_0x198690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198690u;
        // 0x198694: 0x26520064  addiu       $s2, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198690) {
            ctx->pc = 0x198600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198600;
        }
    }
    ctx->pc = 0x198698u;
label_198698:
    // 0x198698: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x198698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19869c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19869cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1986a0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1986a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1986a4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1986A4u;
    {
        const bool branch_taken_0x1986a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x26730077  addiu       $s3, $s3, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a4) {
            ctx->pc = 0x1985E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1985e8;
        }
    }
    ctx->pc = 0x1986ACu;
    // 0x1986ac: 0x0  nop
    ctx->pc = 0x1986acu;
    // NOP
label_1986b0:
    // 0x1986b0: 0x962a000c  lhu         $t2, 0xC($s1)
    ctx->pc = 0x1986b0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1986b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1986b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1986b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986bc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1986c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1986c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986c4: 0x2408009b  addiu       $t0, $zero, 0x9B
    ctx->pc = 0x1986c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1986c8: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x1986C8u;
    SET_GPR_U32(ctx, 31, 0x1986D0u);
    ctx->pc = 0x1986CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1986C8u;
    // 0x1986cc: 0x240900e0  addiu       $t1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C6E0u, 0x1986C8u, 0x1986D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986D0u;
label_1986d0:
    // 0x1986d0: 0x962a000e  lhu         $t2, 0xE($s1)
    ctx->pc = 0x1986d0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1986d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986dc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1986e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1986e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986e4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1986e8: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x1986E8u;
    SET_GPR_U32(ctx, 31, 0x1986F0u);
    ctx->pc = 0x1986ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1986E8u;
    // 0x1986ec: 0x240900e0  addiu       $t1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C6E0u, 0x1986E8u, 0x1986F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986F0u;
label_1986f0:
    // 0x1986f0: 0x962a0010  lhu         $t2, 0x10($s1)
    ctx->pc = 0x1986f0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1986f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1986f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1986f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986fc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x198700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198704: 0x24080163  addiu       $t0, $zero, 0x163
    ctx->pc = 0x198704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x198708: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x198708u;
    SET_GPR_U32(ctx, 31, 0x198710u);
    ctx->pc = 0x19870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198708u;
    // 0x19870c: 0x240900e0  addiu       $t1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C6E0u, 0x198708u, 0x198710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198710u;
label_198710:
    // 0x198710: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x198710u;
    {
        const bool branch_taken_0x198710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198710) {
            ctx->pc = 0x198AA0u;
            goto label_198aa0;
        }
    }
    ctx->pc = 0x198718u;
label_198718:
    // 0x198718: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x198718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19871c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19871cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198720: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x198720u;
    {
        const bool branch_taken_0x198720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198720u;
        // 0x198724: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198720) {
            ctx->pc = 0x198920u;
            goto label_198920;
        }
    }
    ctx->pc = 0x198728u;
    // 0x198728: 0x24150086  addiu       $s5, $zero, 0x86
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x19872c: 0x0  nop
    ctx->pc = 0x19872cu;
    // NOP
label_198730:
    // 0x198730: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x198734: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x198734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198738: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x198738u;
    {
        const bool branch_taken_0x198738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198738u;
        // 0x19873c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198738) {
            ctx->pc = 0x198908u;
            goto label_198908;
        }
    }
    ctx->pc = 0x198740u;
    // 0x198740: 0x2414004f  addiu       $s4, $zero, 0x4F
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x198744: 0x0  nop
    ctx->pc = 0x198744u;
    // NOP
label_198748:
    // 0x198748: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x19874c: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x19874cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198750: 0x8225004a  lb          $a1, 0x4A($s1)
    ctx->pc = 0x198750u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198758: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19875c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19875cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198760: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x198764: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198768: 0x1645002d  bne         $s2, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x198768u;
    {
        const bool branch_taken_0x198768 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x19876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198768u;
        // 0x19876c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198768) {
            ctx->pc = 0x198820u;
            goto label_198820;
        }
    }
    ctx->pc = 0x198770u;
    // 0x198770: 0x8225004b  lb          $a1, 0x4B($s1)
    ctx->pc = 0x198770u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x198774: 0x16650014  bne         $s3, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x198774u;
    {
        const bool branch_taken_0x198774 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        if (branch_taken_0x198774) {
            ctx->pc = 0x1987C8u;
            goto label_1987c8;
        }
    }
    ctx->pc = 0x19877Cu;
    // 0x19877c: 0x86270012  lh          $a3, 0x12($s1)
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x198780: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x198780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x198784: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x198788: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x19878c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198790: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x198794: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x198794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x198798: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x198798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x19879c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x19879cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1987a0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1987a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1987a4: 0x0  nop
    ctx->pc = 0x1987a4u;
    // NOP
    // 0x1987a8: 0x0  nop
    ctx->pc = 0x1987a8u;
    // NOP
    // 0x1987ac: 0x2810  mfhi        $a1
    ctx->pc = 0x1987acu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1987b0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1987b4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1987b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1987b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1987b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1987bc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1987BCu;
    {
        const bool branch_taken_0x1987bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987BCu;
        // 0x1987c0: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987bc) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x1987C4u;
    // 0x1987c4: 0x0  nop
    ctx->pc = 0x1987c4u;
    // NOP
label_1987c8:
    // 0x1987c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1987cc: 0x16650042  bne         $s3, $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1987CCu;
    {
        const bool branch_taken_0x1987cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        if (branch_taken_0x1987cc) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x1987D4u;
    // 0x1987d4: 0x86270012  lh          $a3, 0x12($s1)
    ctx->pc = 0x1987d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1987d8: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x1987dc: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x1987dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x1987e0: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x1987e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x1987e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1987e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1987e8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1987e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1987ec: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1987ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1987f0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1987f4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1987f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1987fc: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1987fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x198800: 0x0  nop
    ctx->pc = 0x198800u;
    // NOP
    // 0x198804: 0x0  nop
    ctx->pc = 0x198804u;
    // NOP
    // 0x198808: 0x2810  mfhi        $a1
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x19880c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x19880cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x198810: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x198814: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198818: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x198818u;
    {
        const bool branch_taken_0x198818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198818u;
        // 0x19881c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198818) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x198820u;
label_198820:
    // 0x198820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x198824: 0x1645002c  bne         $s2, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x198824u;
    {
        const bool branch_taken_0x198824 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x198824) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x19882Cu;
    // 0x19882c: 0x8225004b  lb          $a1, 0x4B($s1)
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x198830: 0x16650015  bne         $s3, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x198830u;
    {
        const bool branch_taken_0x198830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        if (branch_taken_0x198830) {
            ctx->pc = 0x198888u;
            goto label_198888;
        }
    }
    ctx->pc = 0x198838u;
    // 0x198838: 0x86270012  lh          $a3, 0x12($s1)
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x19883c: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x198840: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x198844: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x198848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19884c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x198850: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x198854: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x198854u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x198858: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19885c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x198860: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x198860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x198864: 0x0  nop
    ctx->pc = 0x198864u;
    // NOP
    // 0x198868: 0x0  nop
    ctx->pc = 0x198868u;
    // NOP
    // 0x19886c: 0x2810  mfhi        $a1
    ctx->pc = 0x19886cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x198870: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x198874: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x198878: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19887c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19887Cu;
    {
        const bool branch_taken_0x19887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19887Cu;
        // 0x198880: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19887c) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x198884u;
    // 0x198884: 0x0  nop
    ctx->pc = 0x198884u;
    // NOP
label_198888:
    // 0x198888: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19888c: 0x16650012  bne         $s3, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19888Cu;
    {
        const bool branch_taken_0x19888c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        if (branch_taken_0x19888c) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x198894u;
    // 0x198894: 0x86270012  lh          $a3, 0x12($s1)
    ctx->pc = 0x198894u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x198898: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
    // 0x19889c: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x19889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x1988a0: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x1988a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
    // 0x1988a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1988a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1988a8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1988a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1988ac: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1988b0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1988b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1988b4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1988b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1988b8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1988b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1988bc: 0x0  nop
    ctx->pc = 0x1988bcu;
    // NOP
    // 0x1988c0: 0x0  nop
    ctx->pc = 0x1988c0u;
    // NOP
    // 0x1988c4: 0x2810  mfhi        $a1
    ctx->pc = 0x1988c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1988c8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1988cc: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1988d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1988d4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1988d8:
    // 0x1988d8: 0x944021  addu        $t0, $a0, $s4
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1988dc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1988e0: 0x754821  addu        $t1, $v1, $s5
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1988e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1988e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1988e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988ec: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x1988ECu;
    SET_GPR_U32(ctx, 31, 0x1988F4u);
    ctx->pc = 0x1988F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988ECu;
    // 0x1988f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x1988ECu, 0x1988F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988F4u;
label_1988f4:
    // 0x1988f4: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1988f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1988f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1988fc: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1988fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198900: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x198900u;
    {
        const bool branch_taken_0x198900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198900u;
        // 0x198904: 0x26940064  addiu       $s4, $s4, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198900) {
            ctx->pc = 0x198748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198748;
        }
    }
    ctx->pc = 0x198908u;
label_198908:
    // 0x198908: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19890c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x198910: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198914: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x198914u;
    {
        const bool branch_taken_0x198914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198914u;
        // 0x198918: 0x26b50077  addiu       $s5, $s5, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198914) {
            ctx->pc = 0x198730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198730;
        }
    }
    ctx->pc = 0x19891Cu;
    // 0x19891c: 0x0  nop
    ctx->pc = 0x19891cu;
    // NOP
label_198920:
    // 0x198920: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198924: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x198924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198928: 0x2413009b  addiu       $s3, $zero, 0x9B
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x19892c: 0x0  nop
    ctx->pc = 0x19892cu;
    // NOP
label_198930:
    // 0x198930: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x198930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x198934: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x198934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x198938: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x198938u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x19893c: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198940: 0x16420013  bne         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x198940u;
    {
        const bool branch_taken_0x198940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x198940) {
            ctx->pc = 0x198990u;
            goto label_198990;
        }
    }
    ctx->pc = 0x198948u;
    // 0x198948: 0x86250012  lh          $a1, 0x12($s1)
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x19894c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x19894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x198950: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x198954: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x198958: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x19895c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x19895cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198960: 0x42280  sll         $a0, $a0, 10
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x198964: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x198964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x198968: 0x0  nop
    ctx->pc = 0x198968u;
    // NOP
    // 0x19896c: 0x0  nop
    ctx->pc = 0x19896cu;
    // NOP
    // 0x198970: 0x1810  mfhi        $v1
    ctx->pc = 0x198970u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x198974: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x198974u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x198978: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19897c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198988u;
    {
        const bool branch_taken_0x198988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198988u;
        // 0x19898c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198988) {
            ctx->pc = 0x198994u;
            goto label_198994;
        }
    }
    ctx->pc = 0x198990u;
label_198990:
    // 0x198990: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x198990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_198994:
    // 0x198994: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19899c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19899cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1989a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1989a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989a4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1989a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1989a8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1989ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1989acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1989b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1989b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1989b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1989b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1989b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989bc: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1989bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1989c0: 0xc0671b8  jal         func_19C6E0
    ctx->pc = 0x1989C0u;
    SET_GPR_U32(ctx, 31, 0x1989C8u);
    ctx->pc = 0x1989C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989C0u;
    // 0x1989c4: 0x240900e0  addiu       $t1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C6E0u, 0x1989C0u, 0x1989C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989C8u;
label_1989c8:
    // 0x1989c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1989cc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1989ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1989d0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1989d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1989d4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1989D4u;
    {
        const bool branch_taken_0x1989d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1989D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989D4u;
        // 0x1989d8: 0x26730064  addiu       $s3, $s3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989d4) {
            ctx->pc = 0x198930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198930;
        }
    }
    ctx->pc = 0x1989DCu;
    // 0x1989dc: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1989e0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1989E0u;
    {
        const bool branch_taken_0x1989e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989e0) {
            ctx->pc = 0x198A98u;
            goto label_198a98;
        }
    }
    ctx->pc = 0x1989E8u;
    // 0x1989e8: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x1989e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1989ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1989f0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1989f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1989f4: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1989f8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1989fc: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x1989fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x198a00: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x198a04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x198a08: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x198a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x198a0c: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x198a10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x198a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x198a14: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x198a14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x198a18: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x198a18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x198a1c: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x198a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x198a20: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x198a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198a24: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x198a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x198a28: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x198A28u;
    {
        const bool branch_taken_0x198a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A28u;
        // 0x198a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a28) {
            ctx->pc = 0x198A58u;
            goto label_198a58;
        }
    }
    ctx->pc = 0x198A30u;
label_198a30:
    // 0x198a30: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x198a34: 0x8043004f  lb          $v1, 0x4F($v0)
    ctx->pc = 0x198a34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x198a38: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198a3c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198A3Cu;
    {
        const bool branch_taken_0x198a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198a3c) {
            ctx->pc = 0x198A58u;
            goto label_198a58;
        }
    }
    ctx->pc = 0x198A44u;
    // 0x198a44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198a48: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x198a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x198a4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x198A4Cu;
    {
        const bool branch_taken_0x198a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a4c) {
            ctx->pc = 0x198A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198a30;
        }
    }
    ctx->pc = 0x198A54u;
    // 0x198a54: 0x0  nop
    ctx->pc = 0x198a54u;
    // NOP
label_198a58:
    // 0x198a58: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x198A58u;
    {
        const bool branch_taken_0x198a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x198A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A58u;
        // 0x198a5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a58) {
            ctx->pc = 0x198A78u;
            goto label_198a78;
        }
    }
    ctx->pc = 0x198A60u;
    // 0x198a60: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198a64: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x198a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x198a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a6c: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x198a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x198a70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198A70u;
    {
        const bool branch_taken_0x198a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A70u;
        // 0x198a74: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a70) {
            ctx->pc = 0x198A90u;
            goto label_198a90;
        }
    }
    ctx->pc = 0x198A78u;
label_198a78:
    // 0x198a78: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x198a7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198A7Cu;
    {
        const bool branch_taken_0x198a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A7Cu;
        // 0x198a80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a7c) {
            ctx->pc = 0x198A90u;
            goto label_198a90;
        }
    }
    ctx->pc = 0x198A84u;
    // 0x198a84: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198a88: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x198a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x198a8c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x198a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_198a90:
    // 0x198a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198A90u;
    {
        const bool branch_taken_0x198a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A90u;
        // 0x198a94: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a90) {
            ctx->pc = 0x198AA0u;
            goto label_198aa0;
        }
    }
    ctx->pc = 0x198A98u;
label_198a98:
    // 0x198a98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198a9c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x198a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_198aa0:
    // 0x198aa0: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x198aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ab0: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x198ab4: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x198ab8: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x198AB8u;
    SET_GPR_U32(ctx, 31, 0x198AC0u);
    ctx->pc = 0x198ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AB8u;
    // 0x198abc: 0x24460009  addiu       $a2, $v0, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x198AB8u, 0x198AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AC0u;
label_198ac0:
    // 0x198ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ac4: 0x0  nop
    ctx->pc = 0x198ac4u;
    // NOP
label_198ac8:
    // 0x198ac8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198acc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x198accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198ad0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x198ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198ad4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x198ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198ad8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x198ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198adc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198ae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x198AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198AECu;
}
