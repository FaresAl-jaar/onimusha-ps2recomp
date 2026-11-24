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

// Function: sub_001438B0
// Address: 0x1438b0 - 0x143a98
void sub_001438B0_0x1438b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001438B0_0x1438b0");
#endif

    ctx->pc = 0x1438b0u;

    // 0x1438b0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1438b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1438b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1438b8: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
    // 0x1438bc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1438bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1438c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1438c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40AA20u));
    // 0x1438c4: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x1438c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1438c8: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1438cc: 0x10e2006c  beq         $a3, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1438CCu;
    {
        const bool branch_taken_0x1438cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1438D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438CCu;
        // 0x1438d0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438cc) {
            ctx->pc = 0x143A80u;
            goto label_143a80;
        }
    }
    ctx->pc = 0x1438D4u;
    // 0x1438d4: 0x240200c5  addiu       $v0, $zero, 0xC5
    ctx->pc = 0x1438d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x1438d8: 0x10e20059  beq         $a3, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1438D8u;
    {
        const bool branch_taken_0x1438d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1438DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D8u;
        // 0x1438dc: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438d8) {
            ctx->pc = 0x143A40u;
            goto label_143a40;
        }
    }
    ctx->pc = 0x1438E0u;
    // 0x1438e0: 0x10e2004b  beq         $a3, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1438E0u;
    {
        const bool branch_taken_0x1438e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1438e0) {
            ctx->pc = 0x143A10u;
            goto label_143a10;
        }
    }
    ctx->pc = 0x1438E8u;
    // 0x1438e8: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1438e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1438ec: 0x10e20030  beq         $a3, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1438ECu;
    {
        const bool branch_taken_0x1438ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1438F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ECu;
        // 0x1438f0: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438ec) {
            ctx->pc = 0x1439B0u;
            goto label_1439b0;
        }
    }
    ctx->pc = 0x1438F4u;
    // 0x1438f4: 0x10e2002e  beq         $a3, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1438F4u;
    {
        const bool branch_taken_0x1438f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1438f4) {
            ctx->pc = 0x1439B0u;
            goto label_1439b0;
        }
    }
    ctx->pc = 0x1438FCu;
    // 0x1438fc: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x1438fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x143900: 0x10e2002b  beq         $a3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x143900u;
    {
        const bool branch_taken_0x143900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x143904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143900u;
        // 0x143904: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143900) {
            ctx->pc = 0x1439B0u;
            goto label_1439b0;
        }
    }
    ctx->pc = 0x143908u;
    // 0x143908: 0x10e20029  beq         $a3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x143908u;
    {
        const bool branch_taken_0x143908 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x143908) {
            ctx->pc = 0x1439B0u;
            goto label_1439b0;
        }
    }
    ctx->pc = 0x143910u;
    // 0x143910: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x143914: 0x10e20026  beq         $a3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x143914u;
    {
        const bool branch_taken_0x143914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x143918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143914u;
        // 0x143918: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143914) {
            ctx->pc = 0x1439B0u;
            goto label_1439b0;
        }
    }
    ctx->pc = 0x14391Cu;
    // 0x14391c: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14391Cu;
    {
        const bool branch_taken_0x14391c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x14391c) {
            ctx->pc = 0x143970u;
            goto label_143970;
        }
    }
    ctx->pc = 0x143924u;
    // 0x143924: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x143924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x143928: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143928u;
    {
        const bool branch_taken_0x143928 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x143928) {
            ctx->pc = 0x143938u;
            goto label_143938;
        }
    }
    ctx->pc = 0x143930u;
    // 0x143930: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x143930u;
    {
        const bool branch_taken_0x143930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143930) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x143938u;
label_143938:
    // 0x143938: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14393c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143940u;
    {
        const bool branch_taken_0x143940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143940u;
        // 0x143944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143940) {
            ctx->pc = 0x143950u;
            goto label_143950;
        }
    }
    ctx->pc = 0x143948u;
    // 0x143948: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x143948u;
    {
        const bool branch_taken_0x143948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143948) {
            ctx->pc = 0x143A90u;
            goto label_143a90;
        }
    }
    ctx->pc = 0x143950u;
label_143950:
    // 0x143950: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x143950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x143954: 0xa0a80024  sb          $t0, 0x24($a1)
    ctx->pc = 0x143954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 8));
    // 0x143958: 0xa0a90025  sb          $t1, 0x25($a1)
    ctx->pc = 0x143958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 9));
    // 0x14395c: 0xa0aa0026  sb          $t2, 0x26($a1)
    ctx->pc = 0x14395cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 10));
    // 0x143960: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143964: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x143964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x143968: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x143968u;
    {
        const bool branch_taken_0x143968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143968u;
        // 0x14396c: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143968) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x143970u;
label_143970:
    // 0x143970: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143974: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143978u;
    {
        const bool branch_taken_0x143978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143978u;
        // 0x14397c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143978) {
            ctx->pc = 0x143988u;
            goto label_143988;
        }
    }
    ctx->pc = 0x143980u;
    // 0x143980: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x143980u;
    {
        const bool branch_taken_0x143980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143980) {
            ctx->pc = 0x143A90u;
            goto label_143a90;
        }
    }
    ctx->pc = 0x143988u;
label_143988:
    // 0x143988: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x143988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x14398c: 0xa0ab0024  sb          $t3, 0x24($a1)
    ctx->pc = 0x14398cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 11));
    // 0x143990: 0xb1202  srl         $v0, $t3, 8
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x143994: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x143994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x143998: 0xb1402  srl         $v0, $t3, 16
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x14399c: 0xa0a20026  sb          $v0, 0x26($a1)
    ctx->pc = 0x14399cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x1439a0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1439a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1439a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1439a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1439a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1439A8u;
    {
        const bool branch_taken_0x1439a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1439ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A8u;
        // 0x1439ac: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439a8) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x1439B0u;
label_1439b0:
    // 0x1439b0: 0x24e2ff7b  addiu       $v0, $a3, -0x85
    ctx->pc = 0x1439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967163));
    // 0x1439b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1439b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1439b8: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1439b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1439bc: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1439BCu;
    {
        const bool branch_taken_0x1439bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1439bc) {
            ctx->pc = 0x1439C8u;
            goto label_1439c8;
        }
    }
    ctx->pc = 0x1439C4u;
    // 0x1439c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1439c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1439c8:
    // 0x1439c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1439c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1439cc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1439ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1439d0: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1439d4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1439d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1439d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1439d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1439dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1439dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1439e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1439E0u;
    {
        const bool branch_taken_0x1439e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1439E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439E0u;
        // 0x1439e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439e0) {
            ctx->pc = 0x1439F0u;
            goto label_1439f0;
        }
    }
    ctx->pc = 0x1439E8u;
    // 0x1439e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1439E8u;
    {
        const bool branch_taken_0x1439e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439e8) {
            ctx->pc = 0x143A90u;
            goto label_143a90;
        }
    }
    ctx->pc = 0x1439F0u;
label_1439f0:
    // 0x1439f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1439f4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1439f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1439f8: 0xac4b002c  sw          $t3, 0x2C($v0)
    ctx->pc = 0x1439f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 11));
    // 0x1439fc: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1439fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143a00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143a04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x143A04u;
    {
        const bool branch_taken_0x143a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A04u;
        // 0x143a08: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a04) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x143A0Cu;
    // 0x143a0c: 0x0  nop
    ctx->pc = 0x143a0cu;
    // NOP
label_143a10:
    // 0x143a10: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143a14: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x143a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x143a18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143A18u;
    {
        const bool branch_taken_0x143a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A18u;
        // 0x143a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a18) {
            ctx->pc = 0x143A28u;
            goto label_143a28;
        }
    }
    ctx->pc = 0x143A20u;
    // 0x143a20: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x143A20u;
    {
        const bool branch_taken_0x143a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a20) {
            ctx->pc = 0x143A90u;
            goto label_143a90;
        }
    }
    ctx->pc = 0x143A28u;
label_143a28:
    // 0x143a28: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x143a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x143a2c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143a30: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x143a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x143a34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x143A34u;
    {
        const bool branch_taken_0x143a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A34u;
        // 0x143a38: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a34) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x143A3Cu;
    // 0x143a3c: 0x0  nop
    ctx->pc = 0x143a3cu;
    // NOP
label_143a40:
    // 0x143a40: 0xb1402  srl         $v0, $t3, 16
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x143a44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x143a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143a48: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x143a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x143a4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143A4Cu;
    {
        const bool branch_taken_0x143a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A4Cu;
        // 0x143a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a4c) {
            ctx->pc = 0x143A60u;
            goto label_143a60;
        }
    }
    ctx->pc = 0x143A54u;
    // 0x143a54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x143A54u;
    {
        const bool branch_taken_0x143a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a54) {
            ctx->pc = 0x143A90u;
            goto label_143a90;
        }
    }
    ctx->pc = 0x143A5Cu;
    // 0x143a5c: 0x0  nop
    ctx->pc = 0x143a5cu;
    // NOP
label_143a60:
    // 0x143a60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143a64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x143a68: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x143a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x143a6c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x143a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x143a70: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x143a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x143a74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143A74u;
    {
        const bool branch_taken_0x143a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A74u;
        // 0x143a78: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a74) {
            ctx->pc = 0x143A88u;
            goto label_143a88;
        }
    }
    ctx->pc = 0x143A7Cu;
    // 0x143a7c: 0x0  nop
    ctx->pc = 0x143a7cu;
    // NOP
label_143a80:
    // 0x143a80: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x143a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
    // 0x143a84: 0x0  nop
    ctx->pc = 0x143a84u;
    // NOP
label_143a88:
    // 0x143a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143a8c: 0x0  nop
    ctx->pc = 0x143a8cu;
    // NOP
label_143a90:
    // 0x143a90: 0x3e00008  jr          $ra
    ctx->pc = 0x143A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A90u;
        // 0x143a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A98u;
}
