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

// Function: sub_002C2830
// Address: 0x2c2830 - 0x2c2a30
void sub_002C2830_0x2c2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2830_0x2c2830");
#endif

    switch (ctx->pc) {
        case 0x2c28a0u: goto label_2c28a0;
        case 0x2c28d4u: goto label_2c28d4;
        case 0x2c29e4u: goto label_2c29e4;
        default: break;
    }

    ctx->pc = 0x2c2830u;

    // 0x2c2830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c2834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2838: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c2838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c283c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c2840: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c2844: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c2844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c284c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c284cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2854: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c2854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c285c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c285cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2860: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c2860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c2864: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2c2864u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2c2868: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2868u;
    {
        const bool branch_taken_0x2c2868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2868u;
        // 0x2c286c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2868) {
            ctx->pc = 0x2C28B0u;
            goto label_2c28b0;
        }
    }
    ctx->pc = 0x2C2870u;
    // 0x2c2870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2874: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2874u;
    {
        const bool branch_taken_0x2c2874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2874) {
            ctx->pc = 0x2C28A8u;
            goto label_2c28a8;
        }
    }
    ctx->pc = 0x2C287Cu;
    // 0x2c287c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C287Cu;
    {
        const bool branch_taken_0x2c287c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c287c) {
            ctx->pc = 0x2C2890u;
            goto label_2c2890;
        }
    }
    ctx->pc = 0x2C2884u;
    // 0x2c2884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C2884u;
    {
        const bool branch_taken_0x2c2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2884) {
            ctx->pc = 0x2C28C8u;
            goto label_2c28c8;
        }
    }
    ctx->pc = 0x2C288Cu;
    // 0x2c288c: 0x0  nop
    ctx->pc = 0x2c288cu;
    // NOP
label_2c2890:
    // 0x2c2890: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c2890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c2894: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c2894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c2898: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C2898u;
    SET_GPR_U32(ctx, 31, 0x2C28A0u);
    ctx->pc = 0x2C289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2898u;
    // 0x2c289c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C2898u, 0x2C28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28A0u;
label_2c28a0:
    // 0x2c28a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C28A0u;
    {
        const bool branch_taken_0x2c28a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A0u;
        // 0x2c28a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28a0) {
            ctx->pc = 0x2C28C8u;
            goto label_2c28c8;
        }
    }
    ctx->pc = 0x2C28A8u;
label_2c28a8:
    // 0x2c28a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C28A8u;
    {
        const bool branch_taken_0x2c28a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A8u;
        // 0x2c28ac: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28a8) {
            ctx->pc = 0x2C28C8u;
            goto label_2c28c8;
        }
    }
    ctx->pc = 0x2C28B0u;
label_2c28b0:
    // 0x2c28b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c28b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c28b4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c28b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c28b8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c28bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c28c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c28c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c28c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c28c8:
    // 0x2c28c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28cc: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C28CCu;
    SET_GPR_U32(ctx, 31, 0x2C28D4u);
    ctx->pc = 0x2C28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28CCu;
    // 0x2c28d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C28CCu, 0x2C28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28D4u;
label_2c28d4:
    // 0x2c28d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C28D4u;
    {
        const bool branch_taken_0x2c28d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c28d4) {
            ctx->pc = 0x2C2988u;
            goto label_2c2988;
        }
    }
    ctx->pc = 0x2C28DCu;
    // 0x2c28dc: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x2c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2c28e0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c28e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C28E4u;
    {
        const bool branch_taken_0x2c28e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28E4u;
        // 0x2c28e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28e4) {
            ctx->pc = 0x2C28F8u;
            goto label_2c28f8;
        }
    }
    ctx->pc = 0x2C28ECu;
    // 0x2c28ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C28ECu;
    {
        const bool branch_taken_0x2c28ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c28ec) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C28F4u;
    // 0x2c28f4: 0x0  nop
    ctx->pc = 0x2c28f4u;
    // NOP
label_2c28f8:
    // 0x2c28f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2c28f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c28fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C28FCu;
    {
        const bool branch_taken_0x2c28fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28FCu;
        // 0x2c2900: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28fc) {
            ctx->pc = 0x2C2910u;
            goto label_2c2910;
        }
    }
    ctx->pc = 0x2C2904u;
    // 0x2c2904: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2904u;
    {
        const bool branch_taken_0x2c2904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2904) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C290Cu;
    // 0x2c290c: 0x0  nop
    ctx->pc = 0x2c290cu;
    // NOP
label_2c2910:
    // 0x2c2910: 0x9202083b  lbu         $v0, 0x83B($s0)
    ctx->pc = 0x2c2910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2c2914: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c2914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c2918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2918u;
    {
        const bool branch_taken_0x2c2918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2918u;
        // 0x2c291c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2918) {
            ctx->pc = 0x2C2928u;
            goto label_2c2928;
        }
    }
    ctx->pc = 0x2C2920u;
    // 0x2c2920: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C2920u;
    {
        const bool branch_taken_0x2c2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2920) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C2928u;
label_2c2928:
    // 0x2c2928: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c2928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c292c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C292Cu;
    {
        const bool branch_taken_0x2c292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C292Cu;
        // 0x2c2930: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c292c) {
            ctx->pc = 0x2C2940u;
            goto label_2c2940;
        }
    }
    ctx->pc = 0x2C2934u;
    // 0x2c2934: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C2934u;
    {
        const bool branch_taken_0x2c2934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2934) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C293Cu;
    // 0x2c293c: 0x0  nop
    ctx->pc = 0x2c293cu;
    // NOP
label_2c2940:
    // 0x2c2940: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2c2940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2c2944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2944u;
    {
        const bool branch_taken_0x2c2944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2944u;
        // 0x2c2948: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2944) {
            ctx->pc = 0x2C2958u;
            goto label_2c2958;
        }
    }
    ctx->pc = 0x2C294Cu;
    // 0x2c294c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C294Cu;
    {
        const bool branch_taken_0x2c294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c294c) {
            ctx->pc = 0x2C2960u;
            goto label_2c2960;
        }
    }
    ctx->pc = 0x2C2954u;
    // 0x2c2954: 0x0  nop
    ctx->pc = 0x2c2954u;
    // NOP
label_2c2958:
    // 0x2c2958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c295c: 0x0  nop
    ctx->pc = 0x2c295cu;
    // NOP
label_2c2960:
    // 0x2c2960: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c2960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2964: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2c2964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c2968: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c2968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c296c: 0x838826  xor         $s1, $a0, $v1
    ctx->pc = 0x2c296cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2c2970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2974u;
    {
        const bool branch_taken_0x2c2974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2974u;
        // 0x2c2978: 0x2e310001  sltiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2974) {
            ctx->pc = 0x2C2988u;
            goto label_2c2988;
        }
    }
    ctx->pc = 0x2C297Cu;
    // 0x2c297c: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x2c297cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c2980: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2984: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c2984u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c2988:
    // 0x2c2988: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C2988u;
    {
        const bool branch_taken_0x2c2988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2988) {
            ctx->pc = 0x2C2A08u;
            goto label_2c2a08;
        }
    }
    ctx->pc = 0x2C2990u;
    // 0x2c2990: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2994: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2994u;
    {
        const bool branch_taken_0x2c2994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2994u;
        // 0x2c2998: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2994) {
            ctx->pc = 0x2C29F0u;
            goto label_2c29f0;
        }
    }
    ctx->pc = 0x2C299Cu;
    // 0x2c299c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C299Cu;
    {
        const bool branch_taken_0x2c299c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C299Cu;
        // 0x2c29a0: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c299c) {
            ctx->pc = 0x2C29D8u;
            goto label_2c29d8;
        }
    }
    ctx->pc = 0x2C29A4u;
    // 0x2c29a4: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c29a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c29a8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c29a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c29ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c29b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c29b4: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c29b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c29b8: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c29b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c29bc: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c29bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c29c0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c29c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c29c4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c29c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c29c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c29cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c29d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C29D0u;
    {
        const bool branch_taken_0x2c29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29D0u;
        // 0x2c29d4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29d0) {
            ctx->pc = 0x2C2A00u;
            goto label_2c2a00;
        }
    }
    ctx->pc = 0x2C29D8u;
label_2c29d8:
    // 0x2c29d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c29d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29dc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C29DCu;
    SET_GPR_U32(ctx, 31, 0x2C29E4u);
    ctx->pc = 0x2C29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29DCu;
    // 0x2c29e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C29DCu, 0x2C29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29E4u;
label_2c29e4:
    // 0x2c29e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C29E4u;
    {
        const bool branch_taken_0x2c29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c29e4) {
            ctx->pc = 0x2C29F8u;
            goto label_2c29f8;
        }
    }
    ctx->pc = 0x2C29ECu;
    // 0x2c29ec: 0x0  nop
    ctx->pc = 0x2c29ecu;
    // NOP
label_2c29f0:
    // 0x2c29f0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c29f4: 0x0  nop
    ctx->pc = 0x2c29f4u;
    // NOP
label_2c29f8:
    // 0x2c29f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c29f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29fc: 0x0  nop
    ctx->pc = 0x2c29fcu;
    // NOP
label_2c2a00:
    // 0x2c2a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2A00u;
    {
        const bool branch_taken_0x2c2a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a00) {
            ctx->pc = 0x2C2A10u;
            goto label_2c2a10;
        }
    }
    ctx->pc = 0x2C2A08u;
label_2c2a08:
    // 0x2c2a08: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c2a0c: 0x0  nop
    ctx->pc = 0x2c2a0cu;
    // NOP
label_2c2a10:
    // 0x2c2a10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c2a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2a14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c2a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c2a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2a1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A28u;
        // 0x2c2a2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2A30u;
}
