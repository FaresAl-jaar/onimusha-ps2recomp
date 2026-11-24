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

// Function: sub_001224D0
// Address: 0x1224d0 - 0x122700
void sub_001224D0_0x1224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001224D0_0x1224d0");
#endif

    switch (ctx->pc) {
        case 0x122558u: goto label_122558;
        case 0x1225e4u: goto label_1225e4;
        case 0x122608u: goto label_122608;
        case 0x122624u: goto label_122624;
        case 0x1226b8u: goto label_1226b8;
        default: break;
    }

    ctx->pc = 0x1224d0u;

    // 0x1224d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1224d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1224d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1224d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1224d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1224dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1224dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1224e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1224e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1224e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1224e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1224e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1224e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1224ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1224ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1224f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1224f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1224f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1224f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1224f8: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x1224f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1224fc: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x1224fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122500: 0x1f2782a  slt         $t7, $t7, $s2
    ctx->pc = 0x122500u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x122504: 0x15e00074  bnez        $t7, . + 4 + (0x74 << 2)
    ctx->pc = 0x122504u;
    {
        const bool branch_taken_0x122504 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122504u;
        // 0x122508: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122504) {
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x12250Cu;
    // 0x12250c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12250cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x122510: 0x24a70014  addiu       $a3, $a1, 0x14
    ctx->pc = 0x122510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x122514: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x122514u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x122518: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x122518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12251c: 0xef8021  addu        $s0, $a3, $t7
    ctx->pc = 0x12251cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x122520: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x122520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x122524: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x122524u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122528: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x122528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12252c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122530: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x122530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122534: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x122534u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x122538: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x122538u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x12253c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12253Cu;
    {
        const bool branch_taken_0x12253c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12253c) {
            ctx->pc = 0x122540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12253Cu;
            // 0x122540: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122544u;
            goto label_122544;
        }
    }
    ctx->pc = 0x122544u;
label_122544:
    // 0x122544: 0x8812  mflo        $s1
    ctx->pc = 0x122544u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x122548: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x122548u;
    {
        const bool branch_taken_0x122548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122548u;
        // 0x12254c: 0xa812  mflo        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122548) {
            ctx->pc = 0x122600u;
            goto label_122600;
        }
    }
    ctx->pc = 0x122550u;
    // 0x122550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122558:
    // 0x122558: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x122558u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12255c: 0x8d0c0000  lw          $t4, 0x0($t0)
    ctx->pc = 0x12255cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x122560: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x122560u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x122564: 0xb6c02  srl         $t5, $t3, 16
    ctx->pc = 0x122564u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x122568: 0x1f17818  mult        $t7, $t7, $s1
    ctx->pc = 0x122568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12256c: 0x71b16818  mult1       $t5, $t5, $s1
    ctx->pc = 0x12256cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x122570: 0x318effff  andi        $t6, $t4, 0xFFFF
    ctx->pc = 0x122570u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x122574: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x122574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x122578: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x122578u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x12257c: 0x207502b  sltu        $t2, $s0, $a3
    ctx->pc = 0x12257cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x122580: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x122580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x122584: 0x31ebffff  andi        $t3, $t7, 0xFFFF
    ctx->pc = 0x122584u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x122588: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x122588u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12258c: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12258cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x122590: 0x1af4821  addu        $t1, $t5, $t7
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x122594: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x122598: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x122598u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12259c: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x12259cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1225a0: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x1225a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x1225a4: 0x18f6023  subu        $t4, $t4, $t7
    ctx->pc = 0x1225a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1225a8: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1225ac: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x1225acu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1225b0: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x1225b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x1225b4: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x1225b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x1225b8: 0x1140ffe7  beqz        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1225B8u;
    {
        const bool branch_taken_0x1225b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225B8u;
        // 0x1225bc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225b8) {
            ctx->pc = 0x122558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122558;
        }
    }
    ctx->pc = 0x1225C0u;
    // 0x1225c0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1225C0u;
    {
        const bool branch_taken_0x1225c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1225C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225C0u;
        // 0x1225c4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225c0) {
            ctx->pc = 0x122600u;
            goto label_122600;
        }
    }
    ctx->pc = 0x1225C8u;
    // 0x1225c8: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1225c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1225cc: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1225CCu;
    {
        const bool branch_taken_0x1225cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225cc) {
            ctx->pc = 0x1225D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225CCu;
            // 0x1225d0: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122600u;
            goto label_122600;
        }
    }
    ctx->pc = 0x1225D4u;
    // 0x1225d4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1225d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225d8: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1225D8u;
    {
        const bool branch_taken_0x1225d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225d8) {
            ctx->pc = 0x1225DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225D8u;
            // 0x1225dc: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122600u;
            goto label_122600;
        }
    }
    ctx->pc = 0x1225E0u;
    // 0x1225e0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1225e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1225e4:
    // 0x1225e4: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1225e4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1225e8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1225E8u;
    {
        const bool branch_taken_0x1225e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225E8u;
        // 0x1225ec: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225e8) {
            ctx->pc = 0x1225FCu;
            goto label_1225fc;
        }
    }
    ctx->pc = 0x1225F0u;
    // 0x1225f0: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225f4: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1225F4u;
    {
        const bool branch_taken_0x1225f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225F4u;
        // 0x1225f8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225f4) {
            ctx->pc = 0x1225E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1225e4;
        }
    }
    ctx->pc = 0x1225FCu;
label_1225fc:
    // 0x1225fc: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x1225fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_122600:
    // 0x122600: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x122600u;
    SET_GPR_U32(ctx, 31, 0x122608u);
    ctx->pc = 0x122604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122600u;
    // 0x122604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x122600u, 0x122608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122608u;
label_122608:
    // 0x122608: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x122608u;
    {
        const bool branch_taken_0x122608 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122608u;
        // 0x12260c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122608) {
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x122610u;
    // 0x122610: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x122614: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x122614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12261c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12261cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122620: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x122620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_122624:
    // 0x122624: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x122624u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x122628: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x122628u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12262c: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x122630: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x122634: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x122634u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x122638: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x122638u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x12263c: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x12263cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x122640: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x122640u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x122644: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x122644u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x122648: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x122648u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x12264c: 0x16f4821  addu        $t1, $t3, $t7
    ctx->pc = 0x12264cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x122650: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x122650u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x122654: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x122654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x122658: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x122658u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12265c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x12265cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x122660: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x122660u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x122664: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x122664u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x122668: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12266c: 0x1a66021  addu        $t4, $t5, $a2
    ctx->pc = 0x12266cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x122670: 0x207782b  sltu        $t7, $s0, $a3
    ctx->pc = 0x122670u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x122674: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x122674u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x122678: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x122678u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x12267c: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12267Cu;
    {
        const bool branch_taken_0x12267c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12267Cu;
        // 0x122680: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12267c) {
            ctx->pc = 0x122624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122624;
        }
    }
    ctx->pc = 0x122684u;
    // 0x122684: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x122688: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x12268c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12268cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122690: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x122690u;
    {
        const bool branch_taken_0x122690 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x122694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122690u;
        // 0x122694: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122690) {
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x122698u;
    // 0x122698: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x122698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x12269c: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x12269cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1226a0: 0x51e0000d  beql        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1226A0u;
    {
        const bool branch_taken_0x1226a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226a0) {
            ctx->pc = 0x1226A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226A0u;
            // 0x1226a4: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x1226A8u;
    // 0x1226a8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1226ac: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1226ACu;
    {
        const bool branch_taken_0x1226ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1226ac) {
            ctx->pc = 0x1226B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226ACu;
            // 0x1226b0: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x1226B4u;
    // 0x1226b4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1226b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1226b8:
    // 0x1226b8: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1226b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1226bc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226BCu;
    {
        const bool branch_taken_0x1226bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226BCu;
        // 0x1226c0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226bc) {
            ctx->pc = 0x1226D0u;
            goto label_1226d0;
        }
    }
    ctx->pc = 0x1226C4u;
    // 0x1226c4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1226c8: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1226C8u;
    {
        const bool branch_taken_0x1226c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226c8) {
            ctx->pc = 0x1226CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226C8u;
            // 0x1226cc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1226b8;
        }
    }
    ctx->pc = 0x1226D0u;
label_1226d0:
    // 0x1226d0: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x1226d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x1226d4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1226d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1226d8:
    // 0x1226d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1226d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1226dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1226dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1226e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1226e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1226e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1226e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1226e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1226e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1226ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1226ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1226f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1226f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1226f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1226f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1226f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1226F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1226FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226F8u;
        // 0x1226fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1226F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122700u;
}
