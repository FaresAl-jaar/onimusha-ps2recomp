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

// Function: sub_002654C0
// Address: 0x2654c0 - 0x265688
void sub_002654C0_0x2654c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002654C0_0x2654c0");
#endif

    ctx->pc = 0x2654c0u;

    // 0x2654c0: 0x90830160  lbu         $v1, 0x160($a0)
    ctx->pc = 0x2654c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2654c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2654c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2654c8: 0x1067000b  beq         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2654C8u;
    {
        const bool branch_taken_0x2654c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2654CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654C8u;
        // 0x2654cc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654c8) {
            ctx->pc = 0x2654F8u;
            goto label_2654f8;
        }
    }
    ctx->pc = 0x2654D0u;
    // 0x2654d0: 0x90830162  lbu         $v1, 0x162($a0)
    ctx->pc = 0x2654d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 354)));
    // 0x2654d4: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2654D4u;
    {
        const bool branch_taken_0x2654d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2654d4) {
            ctx->pc = 0x2654F0u;
            goto label_2654f0;
        }
    }
    ctx->pc = 0x2654DCu;
    // 0x2654dc: 0xdc850020  ld          $a1, 0x20($a0)
    ctx->pc = 0x2654dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2654e0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2654e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2654e4: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2654e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2654e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2654e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2654ec: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x2654ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
label_2654f0:
    // 0x2654f0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2654F0u;
    {
        const bool branch_taken_0x2654f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2654f0) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x2654F8u;
label_2654f8:
    // 0x2654f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2654F8u;
    {
        const bool branch_taken_0x2654f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654F8u;
        // 0x2654fc: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654f8) {
            ctx->pc = 0x265508u;
            goto label_265508;
        }
    }
    ctx->pc = 0x265500u;
    // 0x265500: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x265500u;
    {
        const bool branch_taken_0x265500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265500u;
        // 0x265504: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265500) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265508u;
label_265508:
    // 0x265508: 0x97838858  lhu         $v1, -0x77A8($gp)
    ctx->pc = 0x265508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x26550c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26550Cu;
    {
        const bool branch_taken_0x26550c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26550c) {
            ctx->pc = 0x265538u;
            goto label_265538;
        }
    }
    ctx->pc = 0x265514u;
    // 0x265514: 0x8ca60148  lw          $a2, 0x148($a1)
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x265518: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x26551c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x26551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x265520: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265520u;
    {
        const bool branch_taken_0x265520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265520) {
            ctx->pc = 0x265538u;
            goto label_265538;
        }
    }
    ctx->pc = 0x265528u;
    // 0x265528: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x265528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26552c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26552Cu;
    {
        const bool branch_taken_0x26552c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26552c) {
            ctx->pc = 0x265548u;
            goto label_265548;
        }
    }
    ctx->pc = 0x265534u;
    // 0x265534: 0x0  nop
    ctx->pc = 0x265534u;
    // NOP
label_265538:
    // 0x265538: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26553c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x26553Cu;
    {
        const bool branch_taken_0x26553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26553Cu;
        // 0x265540: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26553c) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265544u;
    // 0x265544: 0x0  nop
    ctx->pc = 0x265544u;
    // NOP
label_265548:
    // 0x265548: 0x90a708e8  lbu         $a3, 0x8E8($a1)
    ctx->pc = 0x265548u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x26554c: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x26554cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x265550: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x265550u;
    {
        const bool branch_taken_0x265550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x265554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265550u;
        // 0x265554: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265550) {
            ctx->pc = 0x265578u;
            goto label_265578;
        }
    }
    ctx->pc = 0x265558u;
    // 0x265558: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x26555c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x265560: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x265560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x265564: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265564u;
    {
        const bool branch_taken_0x265564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265564u;
        // 0x265568: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265564) {
            ctx->pc = 0x265578u;
            goto label_265578;
        }
    }
    ctx->pc = 0x26556Cu;
    // 0x26556c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x26556Cu;
    {
        const bool branch_taken_0x26556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26556Cu;
        // 0x265570: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26556c) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265574u;
    // 0x265574: 0x0  nop
    ctx->pc = 0x265574u;
    // NOP
label_265578:
    // 0x265578: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x265578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x26557c: 0x878880fc  lh          $t0, -0x7F04($gp)
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934780)));
    // 0x265580: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x265584: 0x938780fe  lbu         $a3, -0x7F02($gp)
    ctx->pc = 0x265584u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934782)));
    // 0x265588: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x265588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x26558c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x265590: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x265590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x265594: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x265594u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x265598: 0xa1270002  sb          $a3, 0x2($t1)
    ctx->pc = 0x265598u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x26559c: 0x90c7000c  lbu         $a3, 0xC($a2)
    ctx->pc = 0x26559cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2655a0: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x2655a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2655a4: 0xe31806  srlv        $v1, $v1, $a3
    ctx->pc = 0x2655a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x2655a8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2655a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2655ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2655ACu;
    {
        const bool branch_taken_0x2655ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655ACu;
        // 0x2655b0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655ac) {
            ctx->pc = 0x2655C0u;
            goto label_2655c0;
        }
    }
    ctx->pc = 0x2655B4u;
    // 0x2655b4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2655B4u;
    {
        const bool branch_taken_0x2655b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655B4u;
        // 0x2655b8: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655b4) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x2655BCu;
    // 0x2655bc: 0x0  nop
    ctx->pc = 0x2655bcu;
    // NOP
label_2655c0:
    // 0x2655c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2655c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2655c4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2655c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2655c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2655C8u;
    {
        const bool branch_taken_0x2655c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655C8u;
        // 0x2655cc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655c8) {
            ctx->pc = 0x2655E0u;
            goto label_2655e0;
        }
    }
    ctx->pc = 0x2655D0u;
    // 0x2655d0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2655d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2655d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2655D4u;
    {
        const bool branch_taken_0x2655d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655d4) {
            ctx->pc = 0x2655F0u;
            goto label_2655f0;
        }
    }
    ctx->pc = 0x2655DCu;
    // 0x2655dc: 0x0  nop
    ctx->pc = 0x2655dcu;
    // NOP
label_2655e0:
    // 0x2655e0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2655e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2655E4u;
    {
        const bool branch_taken_0x2655e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655E4u;
        // 0x2655e8: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655e4) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x2655ECu;
    // 0x2655ec: 0x0  nop
    ctx->pc = 0x2655ecu;
    // NOP
label_2655f0:
    // 0x2655f0: 0xdc860020  ld          $a2, 0x20($a0)
    ctx->pc = 0x2655f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2655f4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2655f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2655f8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2655f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2655fc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2655fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x265600: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x265600u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x265604: 0x90a30780  lbu         $v1, 0x780($a1)
    ctx->pc = 0x265604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x265608: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x265608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x26560c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x26560Cu;
    {
        const bool branch_taken_0x26560c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26560c) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265614u;
    // 0x265614: 0x90870161  lbu         $a3, 0x161($a0)
    ctx->pc = 0x265614u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 353)));
    // 0x265618: 0x3c053efe  lui         $a1, 0x3EFE
    ctx->pc = 0x265618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16126 << 16));
    // 0x26561c: 0x3c030fc0  lui         $v1, 0xFC0
    ctx->pc = 0x26561cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4032 << 16));
    // 0x265620: 0x34a58720  ori         $a1, $a1, 0x8720
    ctx->pc = 0x265620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34592);
    // 0x265624: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x265628: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x265628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26562c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x26562cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x265630: 0x24c6f750  addiu       $a2, $a2, -0x8B0
    ctx->pc = 0x265630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965072));
    // 0x265634: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x265634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x265638: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x265638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26563c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x26563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x265640: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x265640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x265644: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x265644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x265648: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x265648u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26564c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x265650: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x265650u;
    {
        const bool branch_taken_0x265650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265650u;
        // 0x265654: 0x30a30010  andi        $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265650) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265658u;
    // 0x265658: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x265658u;
    {
        const bool branch_taken_0x265658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265658) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x265660u;
    // 0x265660: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x265660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x265664: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265664u;
    {
        const bool branch_taken_0x265664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265664) {
            ctx->pc = 0x265680u;
            goto label_265680;
        }
    }
    ctx->pc = 0x26566Cu;
    // 0x26566c: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x26566cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x265670: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x265670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x265674: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x265674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x265678: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x265678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x26567c: 0x0  nop
    ctx->pc = 0x26567cu;
    // NOP
label_265680:
    // 0x265680: 0x3e00008  jr          $ra
    ctx->pc = 0x265680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265680u;
        // 0x265684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265688u;
}
