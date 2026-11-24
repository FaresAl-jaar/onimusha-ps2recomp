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

// Function: sub_00319940
// Address: 0x319940 - 0x319b5c
void sub_00319940_0x319940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319940_0x319940");
#endif

    ctx->pc = 0x319940u;

    // 0x319940: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x319940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x319944: 0x24ab0010  addiu       $t3, $a1, 0x10
    ctx->pc = 0x319944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319948: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x319948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31994c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x31994cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x319950: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x319950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x319954: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x319954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x319958: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x319958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x31995c: 0x344c0404  ori         $t4, $v0, 0x404
    ctx->pc = 0x31995cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x319960: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x319960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x319964: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x319964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x319968: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x319968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x31996c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x31996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x319970: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x319970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x319974: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x319974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x319978: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x319978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x31997c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31997cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319980: 0xacac0018  sw          $t4, 0x18($a1)
    ctx->pc = 0x319980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 12));
    // 0x319984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x319984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319988: 0xaf8b8b2c  sw          $t3, -0x74D4($gp)
    ctx->pc = 0x319988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 11));
    // 0x31998c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x31998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319990: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x319990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x319994: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x319994u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x319998: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x319998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31999c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x31999cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x3199a0: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x3199a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x3199a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3199a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3199a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3199a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3199ac: 0x78630130  lq          $v1, 0x130($v1)
    ctx->pc = 0x3199acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3199b0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x3199b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x3199b4: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x3199b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3199b8: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x3199b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3199bc: 0xa5f02  srl         $t3, $t2, 28
    ctx->pc = 0x3199bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 28));
    // 0x3199c0: 0xa5682  srl         $t2, $t2, 26
    ctx->pc = 0x3199c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
    // 0x3199c4: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x3199c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3199c8: 0x11470011  beq         $t2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3199C8u;
    {
        const bool branch_taken_0x3199c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        ctx->pc = 0x3199CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199C8u;
        // 0x3199cc: 0x316b000f  andi        $t3, $t3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199c8) {
            ctx->pc = 0x319A10u;
            goto label_319a10;
        }
    }
    ctx->pc = 0x3199D0u;
    // 0x3199d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3199d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3199d4: 0x11470006  beq         $t2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3199D4u;
    {
        const bool branch_taken_0x3199d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x3199d4) {
            ctx->pc = 0x3199F0u;
            goto label_3199f0;
        }
    }
    ctx->pc = 0x3199DCu;
    // 0x3199dc: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3199DCu;
    {
        const bool branch_taken_0x3199dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3199dc) {
            ctx->pc = 0x3199F0u;
            goto label_3199f0;
        }
    }
    ctx->pc = 0x3199E4u;
    // 0x3199e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3199E4u;
    {
        const bool branch_taken_0x3199e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3199e4) {
            ctx->pc = 0x319A40u;
            goto label_319a40;
        }
    }
    ctx->pc = 0x3199ECu;
    // 0x3199ec: 0x0  nop
    ctx->pc = 0x3199ecu;
    // NOP
label_3199f0:
    // 0x3199f0: 0xa33823  subu        $a3, $a1, $v1
    ctx->pc = 0x3199f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3199f4: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3199F4u;
    {
        const bool branch_taken_0x3199f4 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3199F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199F4u;
        // 0x3199f8: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199f4) {
            ctx->pc = 0x319A04u;
            goto label_319a04;
        }
    }
    ctx->pc = 0x3199FCu;
    // 0x3199fc: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x3199fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x319a00: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x319a00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_319a04:
    // 0x319a04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x319a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x319a08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x319A08u;
    {
        const bool branch_taken_0x319a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A08u;
        // 0x319a0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a08) {
            ctx->pc = 0x319A40u;
            goto label_319a40;
        }
    }
    ctx->pc = 0x319A10u;
label_319a10:
    // 0x319a10: 0xa33823  subu        $a3, $a1, $v1
    ctx->pc = 0x319a10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x319a14: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x319A14u;
    {
        const bool branch_taken_0x319a14 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x319A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A14u;
        // 0x319a18: 0x72103  sra         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a14) {
            ctx->pc = 0x319A24u;
            goto label_319a24;
        }
    }
    ctx->pc = 0x319A1Cu;
    // 0x319a1c: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x319a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x319a20: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_319a24:
    // 0x319a24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x319a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x319a28: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x319a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x319a2c: 0x8b001b  divu        $zero, $a0, $t3
    ctx->pc = 0x319a2cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x319a30: 0x0  nop
    ctx->pc = 0x319a30u;
    // NOP
    // 0x319a34: 0x0  nop
    ctx->pc = 0x319a34u;
    // NOP
    // 0x319a38: 0x2012  mflo        $a0
    ctx->pc = 0x319a38u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x319a3c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x319a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_319a40:
    // 0x319a40: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x319a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x319a44: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x319a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x319a48: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x319a48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x319a4c: 0x8f878b2c  lw          $a3, -0x74D4($gp)
    ctx->pc = 0x319a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x319a50: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x319a54: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319A54u;
    {
        const bool branch_taken_0x319a54 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x319A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A54u;
        // 0x319a58: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a54) {
            ctx->pc = 0x319A64u;
            goto label_319a64;
        }
    }
    ctx->pc = 0x319A5Cu;
    // 0x319a5c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x319a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x319a60: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x319a60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_319a64:
    // 0x319a64: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x319a68: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x319a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x319a6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x319a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x319a70: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x319a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x319a74: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x319a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x319a78: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x319a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x319a7c: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x319a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x319a80: 0x3c037001  lui         $v1, 0x7001
    ctx->pc = 0x319a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28673 << 16));
    // 0x319a84: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x319a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x319a88: 0x346303ee  ori         $v1, $v1, 0x3EE
    ctx->pc = 0x319a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1006);
    // 0x319a8c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x319a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x319a90: 0x8cc4007c  lw          $a0, 0x7C($a2)
    ctx->pc = 0x319a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319a94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x319a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319a98: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x319a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x319a9c: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x319a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x319aa0: 0x11230003  beq         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319AA0u;
    {
        const bool branch_taken_0x319aa0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x319AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA0u;
        // 0x319aa4: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319aa0) {
            ctx->pc = 0x319AB0u;
            goto label_319ab0;
        }
    }
    ctx->pc = 0x319AA8u;
    // 0x319aa8: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x319aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x319aac: 0x0  nop
    ctx->pc = 0x319aacu;
    // NOP
label_319ab0:
    // 0x319ab0: 0x8f878b28  lw          $a3, -0x74D8($gp)
    ctx->pc = 0x319ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319ab4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x319ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319ab8: 0x672023  subu        $a0, $v1, $a3
    ctx->pc = 0x319ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x319abc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319ABCu;
    {
        const bool branch_taken_0x319abc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x319AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319ABCu;
        // 0x319ac0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319abc) {
            ctx->pc = 0x319ACCu;
            goto label_319acc;
        }
    }
    ctx->pc = 0x319AC4u;
    // 0x319ac4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x319ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x319ac8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x319ac8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_319acc:
    // 0x319acc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x319accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x319ad0: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x319ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x319ad4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x319ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x319ad8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x319ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x319adc: 0x8cc8007c  lw          $t0, 0x7C($a2)
    ctx->pc = 0x319adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319ae0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x319ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x319ae4: 0x34670003  ori         $a3, $v1, 0x3
    ctx->pc = 0x319ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x319ae8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x319ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x319aec: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x319aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x319af0: 0x25080140  addiu       $t0, $t0, 0x140
    ctx->pc = 0x319af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x319af4: 0x8413c  dsll32      $t0, $t0, 4
    ctx->pc = 0x319af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 4));
    // 0x319af8: 0x8413e  dsrl32      $t0, $t0, 4
    ctx->pc = 0x319af8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 4));
    // 0x319afc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x319afcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x319b00: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x319b00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x319b04: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x319b04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x319b08: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x319b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x319b0c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x319b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x319b10: 0x8cc30118  lw          $v1, 0x118($a2)
    ctx->pc = 0x319b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
    // 0x319b14: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319b1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x319b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319b20: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x319b20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319b24: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x319b24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x319b28: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x319b28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x319b2c: 0x8cc4007c  lw          $a0, 0x7C($a2)
    ctx->pc = 0x319b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x319b30: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x319b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x319b34: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x319b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x319b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x319b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x319b3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x319b40: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x319b44: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x319b44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319b48: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x319b48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x319b4c: 0xfca00018  sd          $zero, 0x18($a1)
    ctx->pc = 0x319b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 0));
    // 0x319b50: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319b54: 0x3e00008  jr          $ra
    ctx->pc = 0x319B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B54u;
        // 0x319b58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319B5Cu;
}
