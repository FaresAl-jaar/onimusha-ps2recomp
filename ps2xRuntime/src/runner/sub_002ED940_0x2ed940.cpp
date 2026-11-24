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

// Function: sub_002ED940
// Address: 0x2ed940 - 0x2edda0
void sub_002ED940_0x2ed940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED940_0x2ed940");
#endif

    switch (ctx->pc) {
        case 0x2ed99cu: goto label_2ed99c;
        case 0x2eda9cu: goto label_2eda9c;
        case 0x2edab4u: goto label_2edab4;
        case 0x2edaccu: goto label_2edacc;
        case 0x2edae4u: goto label_2edae4;
        case 0x2edafcu: goto label_2edafc;
        case 0x2edb14u: goto label_2edb14;
        case 0x2edb2cu: goto label_2edb2c;
        case 0x2edb44u: goto label_2edb44;
        case 0x2edb5cu: goto label_2edb5c;
        case 0x2edb70u: goto label_2edb70;
        case 0x2edb84u: goto label_2edb84;
        case 0x2edb9cu: goto label_2edb9c;
        case 0x2edbb4u: goto label_2edbb4;
        case 0x2edbc8u: goto label_2edbc8;
        case 0x2edbd8u: goto label_2edbd8;
        case 0x2edc24u: goto label_2edc24;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edcecu: goto label_2edcec;
        case 0x2edd04u: goto label_2edd04;
        case 0x2edd1cu: goto label_2edd1c;
        case 0x2edd34u: goto label_2edd34;
        case 0x2edd4cu: goto label_2edd4c;
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd7cu: goto label_2edd7c;
        case 0x2edd90u: goto label_2edd90;
        default: break;
    }

    ctx->pc = 0x2ed940u;

    // 0x2ed940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed944: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2ed944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2ed948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed94c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2ed94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2ed950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed954: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x2ed954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x2ed958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed95c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ed95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ed960: 0xac8207c0  sw          $v0, 0x7C0($a0)
    ctx->pc = 0x2ed960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 2));
    // 0x2ed964: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x2ed964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2ed968: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ed96c: 0xac8206c8  sw          $v0, 0x6C8($a0)
    ctx->pc = 0x2ed96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x2ed970: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x2ed970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2ed974: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ed978: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x2ed978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x2ed97c: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x2ed97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2ed980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ed984: 0xac8206c8  sw          $v0, 0x6C8($a0)
    ctx->pc = 0x2ed984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x2ed988: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x2ed988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2ed98c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ed990: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x2ed990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x2ed994: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x2ED994u;
    SET_GPR_U32(ctx, 31, 0x2ED99Cu);
    ctx->pc = 0x2ED998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED994u;
    // 0x2ed998: 0xa0802ab0  sb          $zero, 0x2AB0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2ED994u, 0x2ED99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED99Cu;
label_2ed99c:
    // 0x2ed99c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x2ed99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9a0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2ed9a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed9a8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2ed9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ed9ac: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9b0: 0x82042b20  lb          $a0, 0x2B20($s0)
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x2ed9b4: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2ED9B4u;
    {
        const bool branch_taken_0x2ed9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed9b4) {
            ctx->pc = 0x2EDA18u;
            goto label_2eda18;
        }
    }
    ctx->pc = 0x2ED9BCu;
    // 0x2ed9bc: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9c0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2ed9c4: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2ed9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2ed9c8: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9cc: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9d0: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x2ed9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x2ed9d4: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9d8: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9dc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2ed9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2ed9e0: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9e4: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9e8: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x2ed9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x2ed9ec: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9f0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2ed9f4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2ed9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2ed9f8: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2ed9fc: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2ed9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2eda00: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2eda04: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2eda04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2eda08: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2eda08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2eda0c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2eda0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2eda10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDA10u;
    {
        const bool branch_taken_0x2eda10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA10u;
        // 0x2eda14: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda10) {
            ctx->pc = 0x2EDA30u;
            goto label_2eda30;
        }
    }
    ctx->pc = 0x2EDA18u;
label_2eda18:
    // 0x2eda18: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2eda18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2eda1c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x2eda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x2eda20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2eda20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2eda24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2eda24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2eda28: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x2eda28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x2eda2c: 0x0  nop
    ctx->pc = 0x2eda2cu;
    // NOP
label_2eda30:
    // 0x2eda30: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2eda30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2eda34: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x2eda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2eda38: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA38u;
    {
        const bool branch_taken_0x2eda38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eda38) {
            ctx->pc = 0x2EDA50u;
            goto label_2eda50;
        }
    }
    ctx->pc = 0x2EDA40u;
    // 0x2eda40: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x2eda40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2eda44: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2eda44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2eda48: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x2eda48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x2eda4c: 0x0  nop
    ctx->pc = 0x2eda4cu;
    // NOP
label_2eda50:
    // 0x2eda50: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2eda50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2eda54: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x2eda54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2eda58: 0x14830095  bne         $a0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x2EDA58u;
    {
        const bool branch_taken_0x2eda58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eda58) {
            ctx->pc = 0x2EDCB0u;
            goto label_2edcb0;
        }
    }
    ctx->pc = 0x2EDA60u;
    // 0x2eda60: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2eda60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2eda64: 0x2463ffef  addiu       $v1, $v1, -0x11
    ctx->pc = 0x2eda64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967279));
    // 0x2eda68: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x2eda68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2eda6c: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x2EDA6Cu;
    {
        const bool branch_taken_0x2eda6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA6Cu;
        // 0x2eda70: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda6c) {
            ctx->pc = 0x2EDBE0u;
            goto label_2edbe0;
        }
    }
    ctx->pc = 0x2EDA74u;
    // 0x2eda74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eda74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eda78: 0x2484c3d0  addiu       $a0, $a0, -0x3C30
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
    // 0x2eda7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eda80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2eda80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eda84: 0x600008  jr          $v1
    ctx->pc = 0x2EDA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EDA90u: goto label_2eda90;
            case 0x2EDAA8u: goto label_2edaa8;
            case 0x2EDAC0u: goto label_2edac0;
            case 0x2EDAD8u: goto label_2edad8;
            case 0x2EDAF0u: goto label_2edaf0;
            case 0x2EDB08u: goto label_2edb08;
            case 0x2EDB20u: goto label_2edb20;
            case 0x2EDB38u: goto label_2edb38;
            case 0x2EDB50u: goto label_2edb50;
            case 0x2EDB68u: goto label_2edb68;
            case 0x2EDB78u: goto label_2edb78;
            case 0x2EDB90u: goto label_2edb90;
            case 0x2EDBA8u: goto label_2edba8;
            case 0x2EDBC0u: goto label_2edbc0;
            case 0x2EDBD0u: goto label_2edbd0;
            case 0x2EDD90u: goto label_2edd90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EDA8Cu;
    // 0x2eda8c: 0x0  nop
    ctx->pc = 0x2eda8cu;
    // NOP
label_2eda90:
    // 0x2eda90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eda90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda94: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDA94u;
    SET_GPR_U32(ctx, 31, 0x2EDA9Cu);
    ctx->pc = 0x2EDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA94u;
    // 0x2eda98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDA94u, 0x2EDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA9Cu;
label_2eda9c:
    // 0x2eda9c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2EDA9Cu;
    {
        const bool branch_taken_0x2eda9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda9c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDAA4u;
    // 0x2edaa4: 0x0  nop
    ctx->pc = 0x2edaa4u;
    // NOP
label_2edaa8:
    // 0x2edaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edaac: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDAACu;
    SET_GPR_U32(ctx, 31, 0x2EDAB4u);
    ctx->pc = 0x2EDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAACu;
    // 0x2edab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDAACu, 0x2EDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAB4u;
label_2edab4:
    // 0x2edab4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2EDAB4u;
    {
        const bool branch_taken_0x2edab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edab4) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDABCu;
    // 0x2edabc: 0x0  nop
    ctx->pc = 0x2edabcu;
    // NOP
label_2edac0:
    // 0x2edac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edac4: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDAC4u;
    SET_GPR_U32(ctx, 31, 0x2EDACCu);
    ctx->pc = 0x2EDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAC4u;
    // 0x2edac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDAC4u, 0x2EDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDACCu;
label_2edacc:
    // 0x2edacc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2EDACCu;
    {
        const bool branch_taken_0x2edacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edacc) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDAD4u;
    // 0x2edad4: 0x0  nop
    ctx->pc = 0x2edad4u;
    // NOP
label_2edad8:
    // 0x2edad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edadc: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDADCu;
    SET_GPR_U32(ctx, 31, 0x2EDAE4u);
    ctx->pc = 0x2EDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDADCu;
    // 0x2edae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDADCu, 0x2EDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAE4u;
label_2edae4:
    // 0x2edae4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2EDAE4u;
    {
        const bool branch_taken_0x2edae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edae4) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDAECu;
    // 0x2edaec: 0x0  nop
    ctx->pc = 0x2edaecu;
    // NOP
label_2edaf0:
    // 0x2edaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edaf4: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDAF4u;
    SET_GPR_U32(ctx, 31, 0x2EDAFCu);
    ctx->pc = 0x2EDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAF4u;
    // 0x2edaf8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDAF4u, 0x2EDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAFCu;
label_2edafc:
    // 0x2edafc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2EDAFCu;
    {
        const bool branch_taken_0x2edafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edafc) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB04u;
    // 0x2edb04: 0x0  nop
    ctx->pc = 0x2edb04u;
    // NOP
label_2edb08:
    // 0x2edb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb0c: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDB0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB14u);
    ctx->pc = 0x2EDB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB0Cu;
    // 0x2edb10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDB0Cu, 0x2EDB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB14u;
label_2edb14:
    // 0x2edb14: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2EDB14u;
    {
        const bool branch_taken_0x2edb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb14) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB1Cu;
    // 0x2edb1c: 0x0  nop
    ctx->pc = 0x2edb1cu;
    // NOP
label_2edb20:
    // 0x2edb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb24: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDB24u;
    SET_GPR_U32(ctx, 31, 0x2EDB2Cu);
    ctx->pc = 0x2EDB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB24u;
    // 0x2edb28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDB24u, 0x2EDB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB2Cu;
label_2edb2c:
    // 0x2edb2c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2EDB2Cu;
    {
        const bool branch_taken_0x2edb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb2c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB34u;
    // 0x2edb34: 0x0  nop
    ctx->pc = 0x2edb34u;
    // NOP
label_2edb38:
    // 0x2edb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb3c: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB44u);
    ctx->pc = 0x2EDB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB3Cu;
    // 0x2edb40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDB3Cu, 0x2EDB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB44u;
label_2edb44:
    // 0x2edb44: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2EDB44u;
    {
        const bool branch_taken_0x2edb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb44) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB4Cu;
    // 0x2edb4c: 0x0  nop
    ctx->pc = 0x2edb4cu;
    // NOP
label_2edb50:
    // 0x2edb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb54: 0xc0bb948  jal         func_2EE520
    ctx->pc = 0x2EDB54u;
    SET_GPR_U32(ctx, 31, 0x2EDB5Cu);
    ctx->pc = 0x2EDB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB54u;
    // 0x2edb58: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE520u, 0x2EDB54u, 0x2EDB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB5Cu;
label_2edb5c:
    // 0x2edb5c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2EDB5Cu;
    {
        const bool branch_taken_0x2edb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb5c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB64u;
    // 0x2edb64: 0x0  nop
    ctx->pc = 0x2edb64u;
    // NOP
label_2edb68:
    // 0x2edb68: 0xc0bb83c  jal         func_2EE0F0
    ctx->pc = 0x2EDB68u;
    SET_GPR_U32(ctx, 31, 0x2EDB70u);
    ctx->pc = 0x2EDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB68u;
    // 0x2edb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE0F0u, 0x2EDB68u, 0x2EDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB70u;
label_2edb70:
    // 0x2edb70: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2EDB70u;
    {
        const bool branch_taken_0x2edb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb70) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB78u;
label_2edb78:
    // 0x2edb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb7c: 0xc0bb870  jal         func_2EE1C0
    ctx->pc = 0x2EDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB84u);
    ctx->pc = 0x2EDB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB7Cu;
    // 0x2edb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1C0u, 0x2EDB7Cu, 0x2EDB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB84u;
label_2edb84:
    // 0x2edb84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2EDB84u;
    {
        const bool branch_taken_0x2edb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb84) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDB8Cu;
    // 0x2edb8c: 0x0  nop
    ctx->pc = 0x2edb8cu;
    // NOP
label_2edb90:
    // 0x2edb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb94: 0xc0bb870  jal         func_2EE1C0
    ctx->pc = 0x2EDB94u;
    SET_GPR_U32(ctx, 31, 0x2EDB9Cu);
    ctx->pc = 0x2EDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB94u;
    // 0x2edb98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1C0u, 0x2EDB94u, 0x2EDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB9Cu;
label_2edb9c:
    // 0x2edb9c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2EDB9Cu;
    {
        const bool branch_taken_0x2edb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb9c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDBA4u;
    // 0x2edba4: 0x0  nop
    ctx->pc = 0x2edba4u;
    // NOP
label_2edba8:
    // 0x2edba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbac: 0xc0bb7c8  jal         func_2EDF20
    ctx->pc = 0x2EDBACu;
    SET_GPR_U32(ctx, 31, 0x2EDBB4u);
    ctx->pc = 0x2EDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBACu;
    // 0x2edbb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF20u, 0x2EDBACu, 0x2EDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBB4u;
label_2edbb4:
    // 0x2edbb4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2EDBB4u;
    {
        const bool branch_taken_0x2edbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edbb4) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDBBCu;
    // 0x2edbbc: 0x0  nop
    ctx->pc = 0x2edbbcu;
    // NOP
label_2edbc0:
    // 0x2edbc0: 0xc0bb76c  jal         func_2EDDB0
    ctx->pc = 0x2EDBC0u;
    SET_GPR_U32(ctx, 31, 0x2EDBC8u);
    ctx->pc = 0x2EDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBC0u;
    // 0x2edbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDB0u, 0x2EDBC0u, 0x2EDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBC8u;
label_2edbc8:
    // 0x2edbc8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2EDBC8u;
    {
        const bool branch_taken_0x2edbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edbc8) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDBD0u;
label_2edbd0:
    // 0x2edbd0: 0xc0bb838  jal         func_2EE0E0
    ctx->pc = 0x2EDBD0u;
    SET_GPR_U32(ctx, 31, 0x2EDBD8u);
    ctx->pc = 0x2EDBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBD0u;
    // 0x2edbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE0E0u, 0x2EDBD0u, 0x2EDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDBD8u;
label_2edbd8:
    // 0x2edbd8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2EDBD8u;
    {
        const bool branch_taken_0x2edbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edbd8) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDBE0u;
label_2edbe0:
    // 0x2edbe0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2edbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2edbe4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2edbe4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2edbe8: 0x24030788  addiu       $v1, $zero, 0x788
    ctx->pc = 0x2edbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1928));
    // 0x2edbec: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2EDBECu;
    {
        const bool branch_taken_0x2edbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2edbec) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDBF4u;
    // 0x2edbf4: 0x82042b20  lb          $a0, 0x2B20($s0)
    ctx->pc = 0x2edbf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x2edbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2edbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edbfc: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDBFCu;
    {
        const bool branch_taken_0x2edbfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2edbfc) {
            ctx->pc = 0x2EDC50u;
            goto label_2edc50;
        }
    }
    ctx->pc = 0x2EDC04u;
    // 0x2edc04: 0x3c034644  lui         $v1, 0x4644
    ctx->pc = 0x2edc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17988 << 16));
    // 0x2edc08: 0x3c024656  lui         $v0, 0x4656
    ctx->pc = 0x2edc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18006 << 16));
    // 0x2edc0c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x2edc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x2edc10: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2edc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2edc14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2edc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2edc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc1c: 0xc096960  jal         func_25A580
    ctx->pc = 0x2EDC1Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC24u);
    ctx->pc = 0x2EDC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC1Cu;
    // 0x2edc20: 0xc60e0020  lwc1        $f14, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x2EDC1Cu, 0x2EDC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC24u;
label_2edc24:
    // 0x2edc24: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2edc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2edc28: 0x3c024519  lui         $v0, 0x4519
    ctx->pc = 0x2edc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17689 << 16));
    // 0x2edc2c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x2edc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2edc30: 0x3c024532  lui         $v0, 0x4532
    ctx->pc = 0x2edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17714 << 16));
    // 0x2edc34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2edc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2edc38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2edc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2edc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc40: 0xc096960  jal         func_25A580
    ctx->pc = 0x2EDC40u;
    SET_GPR_U32(ctx, 31, 0x2EDC48u);
    ctx->pc = 0x2EDC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC40u;
    // 0x2edc44: 0xc60e0028  lwc1        $f14, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x2EDC40u, 0x2EDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC48u;
label_2edc48:
    // 0x2edc48: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2edc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2edc4c: 0x0  nop
    ctx->pc = 0x2edc4cu;
    // NOP
label_2edc50:
    // 0x2edc50: 0x82042b20  lb          $a0, 0x2B20($s0)
    ctx->pc = 0x2edc50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x2edc54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2edc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edc58: 0x1483004d  bne         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2EDC58u;
    {
        const bool branch_taken_0x2edc58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2edc58) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDC60u;
    // 0x2edc60: 0x3c034673  lui         $v1, 0x4673
    ctx->pc = 0x2edc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18035 << 16));
    // 0x2edc64: 0x3c024680  lui         $v0, 0x4680
    ctx->pc = 0x2edc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18048 << 16));
    // 0x2edc68: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2edc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2edc6c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2edc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2edc70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2edc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2edc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc78: 0xc096960  jal         func_25A580
    ctx->pc = 0x2EDC78u;
    SET_GPR_U32(ctx, 31, 0x2EDC80u);
    ctx->pc = 0x2EDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC78u;
    // 0x2edc7c: 0xc60e0020  lwc1        $f14, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x2EDC78u, 0x2EDC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC80u;
label_2edc80:
    // 0x2edc80: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2edc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2edc84: 0x3c024519  lui         $v0, 0x4519
    ctx->pc = 0x2edc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17689 << 16));
    // 0x2edc88: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x2edc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2edc8c: 0x3c024532  lui         $v0, 0x4532
    ctx->pc = 0x2edc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17714 << 16));
    // 0x2edc90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2edc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2edc94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2edc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edc98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2edc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2edc9c: 0xc096960  jal         func_25A580
    ctx->pc = 0x2EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDCA4u);
    ctx->pc = 0x2EDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC9Cu;
    // 0x2edca0: 0xc60e0028  lwc1        $f14, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x2EDC9Cu, 0x2EDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCA4u;
label_2edca4:
    // 0x2edca4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2EDCA4u;
    {
        const bool branch_taken_0x2edca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCA4u;
        // 0x2edca8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edca4) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDCACu;
    // 0x2edcac: 0x0  nop
    ctx->pc = 0x2edcacu;
    // NOP
label_2edcb0:
    // 0x2edcb0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2edcb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2edcb4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2edcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2edcb8: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2edcb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2edcbc: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EDCBCu;
    {
        const bool branch_taken_0x2edcbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCBCu;
        // 0x2edcc0: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edcbc) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDCC4u;
    // 0x2edcc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2edcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2edcc8: 0x2484c3b0  addiu       $a0, $a0, -0x3C50
    ctx->pc = 0x2edcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951856));
    // 0x2edccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2edcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2edcd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2edcd4: 0x600008  jr          $v1
    ctx->pc = 0x2EDCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EDCE0u: goto label_2edce0;
            case 0x2EDCF8u: goto label_2edcf8;
            case 0x2EDD10u: goto label_2edd10;
            case 0x2EDD28u: goto label_2edd28;
            case 0x2EDD40u: goto label_2edd40;
            case 0x2EDD58u: goto label_2edd58;
            case 0x2EDD70u: goto label_2edd70;
            case 0x2EDD88u: goto label_2edd88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EDCDCu;
    // 0x2edcdc: 0x0  nop
    ctx->pc = 0x2edcdcu;
    // NOP
label_2edce0:
    // 0x2edce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edce4: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDCE4u;
    SET_GPR_U32(ctx, 31, 0x2EDCECu);
    ctx->pc = 0x2EDCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCE4u;
    // 0x2edce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDCE4u, 0x2EDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCECu;
label_2edcec:
    // 0x2edcec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EDCECu;
    {
        const bool branch_taken_0x2edcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edcec) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDCF4u;
    // 0x2edcf4: 0x0  nop
    ctx->pc = 0x2edcf4u;
    // NOP
label_2edcf8:
    // 0x2edcf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edcfc: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDCFCu;
    SET_GPR_U32(ctx, 31, 0x2EDD04u);
    ctx->pc = 0x2EDD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDCFCu;
    // 0x2edd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDCFCu, 0x2EDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD04u;
label_2edd04:
    // 0x2edd04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EDD04u;
    {
        const bool branch_taken_0x2edd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd04) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD0Cu;
    // 0x2edd0c: 0x0  nop
    ctx->pc = 0x2edd0cu;
    // NOP
label_2edd10:
    // 0x2edd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd14: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDD14u;
    SET_GPR_U32(ctx, 31, 0x2EDD1Cu);
    ctx->pc = 0x2EDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD14u;
    // 0x2edd18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDD14u, 0x2EDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD1Cu;
label_2edd1c:
    // 0x2edd1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EDD1Cu;
    {
        const bool branch_taken_0x2edd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd1c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD24u;
    // 0x2edd24: 0x0  nop
    ctx->pc = 0x2edd24u;
    // NOP
label_2edd28:
    // 0x2edd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd2c: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDD2Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD34u);
    ctx->pc = 0x2EDD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD2Cu;
    // 0x2edd30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDD2Cu, 0x2EDD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD34u;
label_2edd34:
    // 0x2edd34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EDD34u;
    {
        const bool branch_taken_0x2edd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd34) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD3Cu;
    // 0x2edd3c: 0x0  nop
    ctx->pc = 0x2edd3cu;
    // NOP
label_2edd40:
    // 0x2edd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd44: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDD44u;
    SET_GPR_U32(ctx, 31, 0x2EDD4Cu);
    ctx->pc = 0x2EDD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD44u;
    // 0x2edd48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDD44u, 0x2EDD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD4Cu;
label_2edd4c:
    // 0x2edd4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDD4Cu;
    {
        const bool branch_taken_0x2edd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd4c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD54u;
    // 0x2edd54: 0x0  nop
    ctx->pc = 0x2edd54u;
    // NOP
label_2edd58:
    // 0x2edd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd5c: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD64u);
    ctx->pc = 0x2EDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD5Cu;
    // 0x2edd60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDD5Cu, 0x2EDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD64u;
label_2edd64:
    // 0x2edd64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EDD64u;
    {
        const bool branch_taken_0x2edd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd64) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD6Cu;
    // 0x2edd6c: 0x0  nop
    ctx->pc = 0x2edd6cu;
    // NOP
label_2edd70:
    // 0x2edd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd74: 0xc0bba9c  jal         func_2EEA70
    ctx->pc = 0x2EDD74u;
    SET_GPR_U32(ctx, 31, 0x2EDD7Cu);
    ctx->pc = 0x2EDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD74u;
    // 0x2edd78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA70u, 0x2EDD74u, 0x2EDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD7Cu;
label_2edd7c:
    // 0x2edd7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDD7Cu;
    {
        const bool branch_taken_0x2edd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd7c) {
            ctx->pc = 0x2EDD90u;
            goto label_2edd90;
        }
    }
    ctx->pc = 0x2EDD84u;
    // 0x2edd84: 0x0  nop
    ctx->pc = 0x2edd84u;
    // NOP
label_2edd88:
    // 0x2edd88: 0xc0bb76c  jal         func_2EDDB0
    ctx->pc = 0x2EDD88u;
    SET_GPR_U32(ctx, 31, 0x2EDD90u);
    ctx->pc = 0x2EDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD88u;
    // 0x2edd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDB0u, 0x2EDD88u, 0x2EDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD90u;
label_2edd90:
    // 0x2edd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2edd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edd94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2edd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edd98: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD98u;
        // 0x2edd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDDA0u;
}
