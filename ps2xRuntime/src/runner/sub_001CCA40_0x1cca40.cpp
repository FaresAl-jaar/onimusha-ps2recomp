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

// Function: sub_001CCA40
// Address: 0x1cca40 - 0x1ccc68
void sub_001CCA40_0x1cca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA40_0x1cca40");
#endif

    switch (ctx->pc) {
        case 0x1ccbf8u: goto label_1ccbf8;
        default: break;
    }

    ctx->pc = 0x1cca40u;

    // 0x1cca40: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1cca44: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cca48: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x1cca4c: 0x8c880048  lw          $t0, 0x48($a0)
    ctx->pc = 0x1cca4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1cca50: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cca54: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cca58: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1cca58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cca5c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCA5Cu;
    {
        const bool branch_taken_0x1cca5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA5Cu;
        // 0x1cca60: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca5c) {
            ctx->pc = 0x1CCA70u;
            goto label_1cca70;
        }
    }
    ctx->pc = 0x1CCA64u;
    // 0x1cca64: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1CCA64u;
    {
        const bool branch_taken_0x1cca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA64u;
        // 0x1cca68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca64) {
            ctx->pc = 0x1CCC60u;
            goto label_1ccc60;
        }
    }
    ctx->pc = 0x1CCA6Cu;
    // 0x1cca6c: 0x0  nop
    ctx->pc = 0x1cca6cu;
    // NOP
label_1cca70:
    // 0x1cca70: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cca74: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cca78: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cca7c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCA90u;
            goto label_1cca90;
        }
    }
    ctx->pc = 0x1CCA84u;
    // 0x1cca84: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1cca84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1cca88: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1CCA88u;
    {
        const bool branch_taken_0x1cca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA88u;
        // 0x1cca8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca88) {
            ctx->pc = 0x1CCC60u;
            goto label_1ccc60;
        }
    }
    ctx->pc = 0x1CCA90u;
label_1cca90:
    // 0x1cca90: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cca94: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCA94u;
    {
        const bool branch_taken_0x1cca94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca94) {
            ctx->pc = 0x1CCAA8u;
            goto label_1ccaa8;
        }
    }
    ctx->pc = 0x1CCA9Cu;
    // 0x1cca9c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1cca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1ccaa0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1CCAA0u;
    {
        const bool branch_taken_0x1ccaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA0u;
        // 0x1ccaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaa0) {
            ctx->pc = 0x1CCC60u;
            goto label_1ccc60;
        }
    }
    ctx->pc = 0x1CCAA8u;
label_1ccaa8:
    // 0x1ccaa8: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x1ccaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x1ccaac: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1ccaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1ccab0: 0xac860094  sw          $a2, 0x94($a0)
    ctx->pc = 0x1ccab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 6));
    // 0x1ccab4: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x1ccab4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ccab8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1ccab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1ccabc: 0xa48900c8  sh          $t1, 0xC8($a0)
    ctx->pc = 0x1ccabcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 9));
    // 0x1ccac0: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1ccac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x1ccac4: 0x8c8900c4  lw          $t1, 0xC4($a0)
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1ccac8: 0x948500c8  lhu         $a1, 0xC8($a0)
    ctx->pc = 0x1ccac8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1ccacc: 0xa9082b  sltu        $at, $a1, $t1
    ctx->pc = 0x1ccaccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1ccad0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCAD0u;
    {
        const bool branch_taken_0x1ccad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccad0) {
            ctx->pc = 0x1CCAE0u;
            goto label_1ccae0;
        }
    }
    ctx->pc = 0x1CCAD8u;
    // 0x1ccad8: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1ccad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x1ccadc: 0x0  nop
    ctx->pc = 0x1ccadcu;
    // NOP
label_1ccae0:
    // 0x1ccae0: 0x90ca0002  lbu         $t2, 0x2($a2)
    ctx->pc = 0x1ccae0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1ccae4: 0x34e50008  ori         $a1, $a3, 0x8
    ctx->pc = 0x1ccae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x1ccae8: 0x24c90003  addiu       $t1, $a2, 0x3
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ccaec: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ccaf0: 0xa08a00cc  sb          $t2, 0xCC($a0)
    ctx->pc = 0x1ccaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ccaf4: 0xac890098  sw          $t1, 0x98($a0)
    ctx->pc = 0x1ccaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 9));
    // 0x1ccaf8: 0x908a00cc  lbu         $t2, 0xCC($a0)
    ctx->pc = 0x1ccaf8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1ccafc: 0x8c890098  lw          $t1, 0x98($a0)
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1ccb00: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1ccb04: 0xac89009c  sw          $t1, 0x9C($a0)
    ctx->pc = 0x1ccb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 9));
    // 0x1ccb08: 0x8c8a009c  lw          $t2, 0x9C($a0)
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1ccb0c: 0x908900cc  lbu         $t1, 0xCC($a0)
    ctx->pc = 0x1ccb0cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1ccb10: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1ccb14: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1ccb18: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1ccb18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1ccb1c: 0xac8700a4  sw          $a3, 0xA4($a0)
    ctx->pc = 0x1ccb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 7));
    // 0x1ccb20: 0x8c8700a4  lw          $a3, 0xA4($a0)
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ccb24: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1ccb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1ccb28: 0xac8700a0  sw          $a3, 0xA0($a0)
    ctx->pc = 0x1ccb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 7));
    // 0x1ccb2c: 0x8c8700a4  lw          $a3, 0xA4($a0)
    ctx->pc = 0x1ccb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ccb30: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ccb34: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ccb38: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x1ccb38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x1ccb3c: 0x908600ca  lbu         $a2, 0xCA($a0)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x1ccb40: 0xa08600cb  sb          $a2, 0xCB($a0)
    ctx->pc = 0x1ccb40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ccb44: 0xa08300ca  sb          $v1, 0xCA($a0)
    ctx->pc = 0x1ccb44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 202), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccb48: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x1ccb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x1ccb4c: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x1ccb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1ccb50: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1ccb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ccb54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ccb54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ccb58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ccb5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccb60: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x1ccb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x1ccb64: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x1ccb64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x1ccb68: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x1ccb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1ccb6c: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1ccb70: 0xa02827  not         $a1, $a1
    ctx->pc = 0x1ccb70u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x1ccb74: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ccb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ccb78: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x1ccb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x1ccb7c: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ccb80: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1ccb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ccb84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCB84u;
    {
        const bool branch_taken_0x1ccb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb84) {
            ctx->pc = 0x1CCBA0u;
            goto label_1ccba0;
        }
    }
    ctx->pc = 0x1CCB8Cu;
    // 0x1ccb8c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ccb90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb94: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ccb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ccb98: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1ccb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1ccb9c: 0x0  nop
    ctx->pc = 0x1ccb9cu;
    // NOP
label_1ccba0:
    // 0x1ccba0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CCBA0u;
    {
        const bool branch_taken_0x1ccba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccba0) {
            ctx->pc = 0x1CCC50u;
            goto label_1ccc50;
        }
    }
    ctx->pc = 0x1CCBA8u;
    // 0x1ccba8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCBA8u;
    {
        const bool branch_taken_0x1ccba8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1CCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA8u;
        // 0x1ccbac: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccba8) {
            ctx->pc = 0x1CCBBCu;
            goto label_1ccbbc;
        }
    }
    ctx->pc = 0x1CCBB0u;
    // 0x1ccbb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccbb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCBB4u;
    {
        const bool branch_taken_0x1ccbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB4u;
        // 0x1ccbb8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb4) {
            ctx->pc = 0x1CCBD4u;
            goto label_1ccbd4;
        }
    }
    ctx->pc = 0x1CCBBCu;
label_1ccbbc:
    // 0x1ccbbc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ccbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ccbc0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ccbc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ccbc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ccbc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccbc8: 0x0  nop
    ctx->pc = 0x1ccbc8u;
    // NOP
    // 0x1ccbcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccbd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ccbd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ccbd4:
    // 0x1ccbd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ccbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ccbd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbdc: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x1ccbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x1ccbe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ccbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccbe8: 0x0  nop
    ctx->pc = 0x1ccbe8u;
    // NOP
    // 0x1ccbec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccbecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccbf0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCBF0u;
    {
        const bool branch_taken_0x1ccbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF0u;
        // 0x1ccbf4: 0xe48000ac  swc1        $f0, 0xAC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf0) {
            ctx->pc = 0x1CCC38u;
            goto label_1ccc38;
        }
    }
    ctx->pc = 0x1CCBF8u;
label_1ccbf8:
    // 0x1ccbf8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ccbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ccbfc: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1ccbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ccc00: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1ccc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1ccc04: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ccc08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ccc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccc0c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1ccc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1ccc10: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1ccc10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccc14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ccc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ccc18: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ccc18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1ccc1c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1ccc1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccc20: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1ccc20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1ccc24: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1ccc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ccc28: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1ccc28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1ccc2c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1ccc2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ccc30: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1ccc30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x1ccc34: 0x0  nop
    ctx->pc = 0x1ccc34u;
    // NOP
label_1ccc38:
    // 0x1ccc38: 0x9502006a  lhu         $v0, 0x6A($t0)
    ctx->pc = 0x1ccc38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x1ccc3c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ccc3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ccc40: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CCC40u;
    {
        const bool branch_taken_0x1ccc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc40) {
            ctx->pc = 0x1CCBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccbf8;
        }
    }
    ctx->pc = 0x1CCC48u;
    // 0x1ccc48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC48u;
    {
        const bool branch_taken_0x1ccc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc48) {
            ctx->pc = 0x1CCC58u;
            goto label_1ccc58;
        }
    }
    ctx->pc = 0x1CCC50u;
label_1ccc50:
    // 0x1ccc50: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1ccc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1ccc54: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x1ccc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_1ccc58:
    // 0x1ccc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ccc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccc5c: 0x0  nop
    ctx->pc = 0x1ccc5cu;
    // NOP
label_1ccc60:
    // 0x1ccc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCC68u;
}
