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

// Function: sub_001CEE00
// Address: 0x1cee00 - 0x1cf644
void sub_001CEE00_0x1cee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE00_0x1cee00");
#endif

    switch (ctx->pc) {
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf420u: goto label_1cf420;
        default: break;
    }

    ctx->pc = 0x1cee00u;

    // 0x1cee00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cee04: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1cee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cee08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cee0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cee10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cee14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cee18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cee1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEE1Cu;
    {
        const bool branch_taken_0x1cee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE1Cu;
        // 0x1cee20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee1c) {
            ctx->pc = 0x1CEE50u;
            goto label_1cee50;
        }
    }
    ctx->pc = 0x1CEE24u;
    // 0x1cee24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cee28: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1cee2c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1cee2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cee30: 0x34a30080  ori         $v1, $a1, 0x80
    ctx->pc = 0x1cee30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1cee34: 0x34b90040  ori         $t9, $a1, 0x40
    ctx->pc = 0x1cee34u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x1cee38: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1cee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1cee3c: 0x482825  or          $a1, $v0, $t0
    ctx->pc = 0x1cee3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1cee40: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1cee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1cee44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CEE44u;
    {
        const bool branch_taken_0x1cee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE44u;
        // 0x1cee48: 0x48c025  or          $t8, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee44) {
            ctx->pc = 0x1CEE78u;
            goto label_1cee78;
        }
    }
    ctx->pc = 0x1CEE4Cu;
    // 0x1cee4c: 0x0  nop
    ctx->pc = 0x1cee4cu;
    // NOP
label_1cee50:
    // 0x1cee50: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cee54: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1cee54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cee58: 0x3c190008  lui         $t9, 0x8
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8 << 16));
    // 0x1cee5c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1cee60: 0x37230080  ori         $v1, $t9, 0x80
    ctx->pc = 0x1cee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)128);
    // 0x1cee64: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x1cee64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1cee68: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1cee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1cee6c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1cee6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1cee70: 0x48c025  or          $t8, $v0, $t0
    ctx->pc = 0x1cee70u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1cee74: 0x0  nop
    ctx->pc = 0x1cee74u;
    // NOP
label_1cee78:
    // 0x1cee78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1cee7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1cee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1cee80: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1cee80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cee84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cee84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cee88: 0x24087900  addiu       $t0, $zero, 0x7900
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1cee8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1cee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1cee90: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x1cee90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1cee94: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cee94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1cee98: 0x24087000  addiu       $t0, $zero, 0x7000
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1cee9c: 0xaf848b28  sw          $a0, -0x74D8($gp)
    ctx->pc = 0x1cee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 4));
    // 0x1ceea0: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x1ceea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1ceea4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ceea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ceea8: 0x248d0010  addiu       $t5, $a0, 0x10
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ceeac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1ceeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ceeb0: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x1ceeb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ceeb4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ceeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ceeb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceebc: 0xaf8d8b2c  sw          $t5, -0x74D4($gp)
    ctx->pc = 0x1ceebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 13));
    // 0x1ceec0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ceec4: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x1ceec4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x1ceec8: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x1ceec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ceecc: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1ceeccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1ceed0: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x1ceed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ceed4: 0xaf848b30  sw          $a0, -0x74D0($gp)
    ctx->pc = 0x1ceed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 4));
    // 0x1ceed8: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ceed8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1ceedc: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1ceedcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1ceee0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ceee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ceee4: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1ceee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1ceee8: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1ceee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1ceeec: 0x10e000fe  beqz        $a3, . + 4 + (0xFE << 2)
    ctx->pc = 0x1CEEECu;
    {
        const bool branch_taken_0x1ceeec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEECu;
        // 0x1ceef0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceeec) {
            ctx->pc = 0x1CF2E8u;
            goto label_1cf2e8;
        }
    }
    ctx->pc = 0x1CEEF4u;
    // 0x1ceef4: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1ceef4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1ceef8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ceefc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ceefcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cef00: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1cef04: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1cef08: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1cef08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cef0c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x1cef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x1cef10: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1cef10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1cef14: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x1cef14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1cef18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cef18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cef1c: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x1cef1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1cef20: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1cef20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1cef24: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1cef24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1cef28: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cef2c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1cef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1cef30: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1cef30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cef34: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cef34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cef38: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cef3c: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x1cef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x1cef40: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1cef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cef44: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cef44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cef48: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cef4c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cef50: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1cef50u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef54: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1cef54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1cef58: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1cef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cef5c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1cef5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cef60: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1cef60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1cef64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1cef68: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x1cef68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x1cef6c: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1cef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1cef70: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cef74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1cef74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1cef78: 0x240e001f  addiu       $t6, $zero, 0x1F
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1cef7c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cef80: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1cef80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1cef84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cef88: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1cef88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1cef8c: 0x24030316  addiu       $v1, $zero, 0x316
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x1cef90: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1cef90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1cef94: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x1cef94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1cef98: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x1cef98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x1cef9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1cefa0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cefa4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1cefa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1cefa8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cefa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cefac: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cefacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cefb0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cefb4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1cefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1cefb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cefbc: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1cefbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cefc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cefc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cefc4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1cefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1cefc8: 0x240b0041  addiu       $t3, $zero, 0x41
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cefcc: 0x344a0008  ori         $t2, $v0, 0x8
    ctx->pc = 0x1cefccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1cefd0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1cefd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cefd4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1cefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1cefd8: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x1cefd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cefdc: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1cefdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1cefe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cefe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cefe4: 0x70024389  pcpyld      $t0, $zero, $v0
    ctx->pc = 0x1cefe4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1cefe8: 0x3c030e08  lui         $v1, 0xE08
    ctx->pc = 0x1cefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3592 << 16));
    // 0x1cefec: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1cefecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1ceff0: 0x34652008  ori         $a1, $v1, 0x2008
    ctx->pc = 0x1ceff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8200);
    // 0x1ceff4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ceff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ceff8: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x1ceff8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ceffc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cf000:
    // 0x1cf000: 0xe883c  dsll32      $s1, $t6, 0
    ctx->pc = 0x1cf000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1cf004: 0xd903c  dsll32      $s2, $t5, 0
    ctx->pc = 0x1cf004u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1cf008: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf008u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf00c: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1cf00cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1cf010: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1cf010u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1cf014: 0x2519025  or          $s2, $s2, $s1
    ctx->pc = 0x1cf014u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1cf018: 0x25f00001  addiu       $s0, $t7, 0x1
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1cf01c: 0x24c9025  or          $s2, $s2, $t4
    ctx->pc = 0x1cf01cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
    // 0x1cf020: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1cf024: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x1cf024u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x1cf028: 0x2611001f  addiu       $s1, $s0, 0x1F
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1cf02c: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf02cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf030: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1cf030u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1cf034: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf034u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf038: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf03c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf03cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf040: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1cf040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cf044: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf048: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1cf048u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1cf04c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf04cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf050: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1cf050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1cf054: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf054u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf058: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x1cf058u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1cf05c: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf05cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf060: 0x20c8825  or          $s1, $s0, $t4
    ctx->pc = 0x1cf060u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x1cf064: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf064u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf068: 0x25f00002  addiu       $s0, $t7, 0x2
    ctx->pc = 0x1cf068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x1cf06c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf070: 0x109940  sll         $s3, $s0, 5
    ctx->pc = 0x1cf070u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1cf074: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf078: 0x2670001f  addiu       $s0, $s3, 0x1F
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1cf07c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf07cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf080: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x1cf080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cf084: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf088: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1cf088u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1cf08c: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x1cf08cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
    // 0x1cf090: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x1cf090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1cf094: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf094u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf098: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1cf098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1cf09c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf09cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf0a0: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x1cf0a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x1cf0a4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf0a8: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x1cf0a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x1cf0ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf0b0: 0x25f20003  addiu       $s2, $t7, 0x3
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
    // 0x1cf0b4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf0b8: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x1cf0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1cf0bc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf0c0: 0x2672001f  addiu       $s2, $s3, 0x1F
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1cf0c4: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf0c8: 0x12883c  dsll32      $s1, $s2, 0
    ctx->pc = 0x1cf0c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1cf0cc: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf0d0: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf0d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf0d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf0d8: 0x119438  dsll        $s2, $s1, 16
    ctx->pc = 0x1cf0d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << 16);
    // 0x1cf0dc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf0e0: 0x13883c  dsll32      $s1, $s3, 0
    ctx->pc = 0x1cf0e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1cf0e4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf0e8: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf0e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf0ec: 0x20c8025  or          $s0, $s0, $t4
    ctx->pc = 0x1cf0ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x1cf0f0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf0f4: 0xfc900000  sd          $s0, 0x0($a0)
    ctx->pc = 0x1cf0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 16));
    // 0x1cf0f8: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1cf0f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1cf0fc: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf100: 0x22ca025  or          $s4, $s1, $t4
    ctx->pc = 0x1cf100u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) | GPR_U64(ctx, 12));
    // 0x1cf104: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf104u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf108: 0x25f10004  addiu       $s1, $t7, 0x4
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x1cf10c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf10cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf110: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1cf114: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf118: 0x2671001f  addiu       $s1, $s3, 0x1F
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1cf11c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf11cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf120: 0x11903c  dsll32      $s2, $s1, 0
    ctx->pc = 0x1cf120u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1cf124: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf124u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf128: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1cf128u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1cf12c: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf12cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf130: 0x13883c  dsll32      $s1, $s3, 0
    ctx->pc = 0x1cf130u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1cf134: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf134u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf138: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf138u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf13c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf140: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x1cf140u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x1cf144: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf144u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf148: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1cf148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1cf14c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf14cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf150: 0x22c9825  or          $s3, $s1, $t4
    ctx->pc = 0x1cf150u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) | GPR_U64(ctx, 12));
    // 0x1cf154: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf158: 0x25f10005  addiu       $s1, $t7, 0x5
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 5));
    // 0x1cf15c: 0xfc940000  sd          $s4, 0x0($a0)
    ctx->pc = 0x1cf15cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 20));
    // 0x1cf160: 0x11a940  sll         $s5, $s1, 5
    ctx->pc = 0x1cf160u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1cf164: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf164u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf168: 0x26b1001f  addiu       $s1, $s5, 0x1F
    ctx->pc = 0x1cf168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x1cf16c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf16cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf170: 0x11903c  dsll32      $s2, $s1, 0
    ctx->pc = 0x1cf170u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1cf174: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf174u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf178: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1cf178u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1cf17c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf180: 0x15883c  dsll32      $s1, $s5, 0
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1cf184: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf188: 0x25f00006  addiu       $s0, $t7, 0x6
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 6));
    // 0x1cf18c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf18cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf190: 0x10a940  sll         $s5, $s0, 5
    ctx->pc = 0x1cf190u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1cf194: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf194u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf198: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf198u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf19c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf19cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf1a0: 0x129438  dsll        $s2, $s2, 16
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 16);
    // 0x1cf1a4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf1a8: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1cf1a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1cf1ac: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf1acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf1b0: 0x22c9025  or          $s2, $s1, $t4
    ctx->pc = 0x1cf1b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) | GPR_U64(ctx, 12));
    // 0x1cf1b4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf1b8: 0x26b0001f  addiu       $s0, $s5, 0x1F
    ctx->pc = 0x1cf1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x1cf1bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf1c0: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x1cf1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cf1c4: 0xfc930000  sd          $s3, 0x0($a0)
    ctx->pc = 0x1cf1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 19));
    // 0x1cf1c8: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf1c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf1cc: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf1d0: 0x15803c  dsll32      $s0, $s5, 0
    ctx->pc = 0x1cf1d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1cf1d4: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf1d8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1cf1d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1cf1dc: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf1e0: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1cf1e4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf1e8: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1cf1ec: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf1f0: 0x20c8825  or          $s1, $s0, $t4
    ctx->pc = 0x1cf1f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x1cf1f4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf1f8: 0x25f00007  addiu       $s0, $t7, 0x7
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 7));
    // 0x1cf1fc: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf200: 0x10a940  sll         $s5, $s0, 5
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1cf204: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf204u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf208: 0x26b0001f  addiu       $s0, $s5, 0x1F
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x1cf20c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf210: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1cf210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cf214: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf214u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf218: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1cf218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1cf21c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf21cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf220: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x1cf220u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1cf224: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf228: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1cf228u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x1cf22c: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x1cf22cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x1cf230: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x1cf230u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x1cf234: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf234u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf238: 0x2b08025  or          $s0, $s5, $s0
    ctx->pc = 0x1cf238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
    // 0x1cf23c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf23cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf240: 0x20ca025  or          $s4, $s0, $t4
    ctx->pc = 0x1cf240u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x1cf244: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf244u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf248: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x1cf24c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf250: 0x2df00010  sltiu       $s0, $t7, 0x10
    ctx->pc = 0x1cf250u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cf254: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf258: 0x25ce0100  addiu       $t6, $t6, 0x100
    ctx->pc = 0x1cf258u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 256));
    // 0x1cf25c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf25cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf260: 0x25ad0100  addiu       $t5, $t5, 0x100
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 256));
    // 0x1cf264: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf264u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf268: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf268u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf26c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf270: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf274: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf274u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf278: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf27c: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x1cf27cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
    // 0x1cf280: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf280u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf284: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf288: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf288u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf28c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf290: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf290u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf294: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf294u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf298: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf298u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf29c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf29cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf2a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf2a4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf2a8: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf2ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf2b0: 0xfc940000  sd          $s4, 0x0($a0)
    ctx->pc = 0x1cf2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 20));
    // 0x1cf2b4: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x1cf2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x1cf2b8: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1cf2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1cf2bc: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf2c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf2c4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf2c8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf2cc: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1cf2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1cf2d0: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cf2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cf2d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf2d8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cf2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cf2dc: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf2e0: 0x1600ff47  bnez        $s0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x1CF2E0u;
    {
        const bool branch_taken_0x1cf2e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2E0u;
        // 0x1cf2e4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2e0) {
            ctx->pc = 0x1CF000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf000;
        }
    }
    ctx->pc = 0x1CF2E8u;
label_1cf2e8:
    // 0x1cf2e8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1cf2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1cf2ec: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1cf2f0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1cf2f4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf2f8: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x1cf2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cf2fc: 0xfc990010  sd          $t9, 0x10($a0)
    ctx->pc = 0x1cf2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 25));
    // 0x1cf300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf304: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1cf304u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1cf308: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1cf308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cf30c: 0x3c053a00  lui         $a1, 0x3A00
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14848 << 16));
    // 0x1cf310: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf314: 0x34a500c0  ori         $a1, $a1, 0xC0
    ctx->pc = 0x1cf314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)192);
    // 0x1cf318: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x1cf318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cf31c: 0xa84025  or          $t0, $a1, $t0
    ctx->pc = 0x1cf31cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1cf320: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x1cf324: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cf324u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cf328: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cf32c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf32cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf330: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cf334: 0xfc980010  sd          $t8, 0x10($a0)
    ctx->pc = 0x1cf334u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 24));
    // 0x1cf338: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1cf338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cf33c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1cf33cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1cf340: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf344: 0x2405037c  addiu       $a1, $zero, 0x37C
    ctx->pc = 0x1cf344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cf348: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1cf348u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1cf34c: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1cf34cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cf350: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1cf350u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x1cf354: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x1cf358: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x1cf358u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1cf35c: 0x34a5c00a  ori         $a1, $a1, 0xC00A
    ctx->pc = 0x1cf35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49162);
    // 0x1cf360: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1cf360u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1cf364: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1cf364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1cf368: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf36c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1cf36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cf370: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1cf374: 0x24070356  addiu       $a3, $zero, 0x356
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x1cf378: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1cf378u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1cf37c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1cf37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cf380: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1cf380u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1cf384: 0x34e38  dsll        $t1, $v1, 24
    ctx->pc = 0x1cf384u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 24);
    // 0x1cf388: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x1cf388u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x1cf38c: 0x34a500a8  ori         $a1, $a1, 0xA8
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)168);
    // 0x1cf390: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf394: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cf394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf398: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1cf398u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1cf39c: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cf3a0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1cf3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cf3a4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cf3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cf3a8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1cf3ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3b0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1cf3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1cf3b4: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1cf3b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1cf3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1cf3bc: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x1cf3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1cf3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3c4: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1cf3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1cf3c8: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x1cf3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x1cf3cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf3d0: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1cf3d4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf3d8: 0x35300008  ori         $s0, $t1, 0x8
    ctx->pc = 0x1cf3d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
    // 0x1cf3dc: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1cf3e0: 0x3c097900  lui         $t1, 0x7900
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30976 << 16));
    // 0x1cf3e4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1cf3e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1cf3e8: 0x35297000  ori         $t1, $t1, 0x7000
    ctx->pc = 0x1cf3e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28672);
    // 0x1cf3ec: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cf3f0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1cf3f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1cf3f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cf3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cf3f8: 0x70097389  pcpyld      $t6, $zero, $t1
    ctx->pc = 0x1cf3f8u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1cf3fc: 0x3c0a0e08  lui         $t2, 0xE08
    ctx->pc = 0x1cf3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3592 << 16));
    // 0x1cf400: 0x3c098700  lui         $t1, 0x8700
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34560 << 16));
    // 0x1cf404: 0x354c2008  ori         $t4, $t2, 0x2008
    ctx->pc = 0x1cf404u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8200);
    // 0x1cf408: 0x35299000  ori         $t1, $t1, 0x9000
    ctx->pc = 0x1cf408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)36864);
    // 0x1cf40c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf410: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cf414: 0x70095b89  pcpyld      $t3, $zero, $t1
    ctx->pc = 0x1cf414u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1cf418: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf41c: 0x0  nop
    ctx->pc = 0x1cf41cu;
    // NOP
label_1cf420:
    // 0x1cf420: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x1cf420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1cf424: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x1cf424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cf428: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x1cf428u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1cf42c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1cf42cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1cf430: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1cf430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1cf434: 0x2294825  or          $t1, $s1, $t1
    ctx->pc = 0x1cf434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) | GPR_U64(ctx, 9));
    // 0x1cf438: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cf43c: 0x1238825  or          $s1, $t1, $v1
    ctx->pc = 0x1cf43cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1cf440: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1cf444: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x1cf444u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
    // 0x1cf448: 0x2d090010  sltiu       $t1, $t0, 0x10
    ctx->pc = 0x1cf448u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cf44c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cf44cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cf450: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1cf454: 0xfc900010  sd          $s0, 0x10($a0)
    ctx->pc = 0x1cf454u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 16));
    // 0x1cf458: 0xfc8f0018  sd          $t7, 0x18($a0)
    ctx->pc = 0x1cf458u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 15));
    // 0x1cf45c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf460: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x1cf460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x1cf464: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x1cf464u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x1cf468: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1cf468u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1cf46c: 0xfc8f0018  sd          $t7, 0x18($a0)
    ctx->pc = 0x1cf46cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 15));
    // 0x1cf470: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf474: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1cf474u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1cf478: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1cf478u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x1cf47c: 0x1520ffe8  bnez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CF47Cu;
    {
        const bool branch_taken_0x1cf47c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf47c) {
            ctx->pc = 0x1CF420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf420;
        }
    }
    ctx->pc = 0x1CF484u;
    // 0x1cf484: 0x3c073a00  lui         $a3, 0x3A00
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14848 << 16));
    // 0x1cf488: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x1cf48c: 0x34e700c0  ori         $a3, $a3, 0xC0
    ctx->pc = 0x1cf48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)192);
    // 0x1cf490: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cf494: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1cf494u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1cf498: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cf49c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1cf49cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1cf4a0: 0x240e0019  addiu       $t6, $zero, 0x19
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cf4a4: 0x8c2ff014  lw          $t7, -0xFEC($at)
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81F014u));
    // 0x1cf4a8: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x1cf4ac: 0xa33825  or          $a3, $a1, $v1
    ctx->pc = 0x1cf4acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1cf4b0: 0x240d0009  addiu       $t5, $zero, 0x9
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cf4b4: 0x356c020b  ori         $t4, $t3, 0x20B
    ctx->pc = 0x1cf4b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)523);
    // 0x1cf4b8: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cf4bc: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1cf4c0: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cf4c4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cf4c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf4cc: 0xddef0040  ld          $t7, 0x40($t7)
    ctx->pc = 0x1cf4ccu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x1cf4d0: 0xfc8f0010  sd          $t7, 0x10($a0)
    ctx->pc = 0x1cf4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 15));
    // 0x1cf4d4: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1cf4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1cf4d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf4dc: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1cf4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1cf4e0: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x1cf4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x1cf4e4: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1cf4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1cf4e8: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1cf4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1cf4ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf4f0: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1cf4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1cf4f4: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1cf4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1cf4f8: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1cf4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1cf4fc: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x1cf4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x1cf500: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf504: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1cf504u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1cf508: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1cf508u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1cf50c: 0x8f878b30  lw          $a3, -0x74D0($gp)
    ctx->pc = 0x1cf50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1cf510: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cf510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cf514: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1cf518: 0x21682  srl         $v0, $v0, 26
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x1cf51c: 0x30a8000f  andi        $t0, $a1, 0xF
    ctx->pc = 0x1cf51cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1cf520: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x1cf520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1cf524: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CF524u;
    {
        const bool branch_taken_0x1cf524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf524) {
            ctx->pc = 0x1CF570u;
            goto label_1cf570;
        }
    }
    ctx->pc = 0x1CF52Cu;
    // 0x1cf52c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf530: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF530u;
    {
        const bool branch_taken_0x1cf530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf530) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF538u;
    // 0x1cf538: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF538u;
    {
        const bool branch_taken_0x1cf538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf538) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF540u;
    // 0x1cf540: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF540u;
    {
        const bool branch_taken_0x1cf540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf540) {
            ctx->pc = 0x1CF5A8u;
            goto label_1cf5a8;
        }
    }
    ctx->pc = 0x1CF548u;
label_1cf548:
    // 0x1cf548: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf54c: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1cf54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cf550: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF550u;
    {
        const bool branch_taken_0x1cf550 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF550u;
        // 0x1cf554: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf550) {
            ctx->pc = 0x1CF560u;
            goto label_1cf560;
        }
    }
    ctx->pc = 0x1CF558u;
    // 0x1cf558: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf55c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf560:
    // 0x1cf560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf564: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF564u;
    {
        const bool branch_taken_0x1cf564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF564u;
        // 0x1cf568: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf564) {
            ctx->pc = 0x1CF5A8u;
            goto label_1cf5a8;
        }
    }
    ctx->pc = 0x1CF56Cu;
    // 0x1cf56c: 0x0  nop
    ctx->pc = 0x1cf56cu;
    // NOP
label_1cf570:
    // 0x1cf570: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cf570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf574: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cf578: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF578u;
    {
        const bool branch_taken_0x1cf578 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF578u;
        // 0x1cf57c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf578) {
            ctx->pc = 0x1CF588u;
            goto label_1cf588;
        }
    }
    ctx->pc = 0x1CF580u;
    // 0x1cf580: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf584: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf588:
    // 0x1cf588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf58c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cf590: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1cf590u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cf594: 0x0  nop
    ctx->pc = 0x1cf594u;
    // NOP
    // 0x1cf598: 0x0  nop
    ctx->pc = 0x1cf598u;
    // NOP
    // 0x1cf59c: 0x1012  mflo        $v0
    ctx->pc = 0x1cf59cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1cf5a0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1cf5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1cf5a4: 0x0  nop
    ctx->pc = 0x1cf5a4u;
    // NOP
label_1cf5a8:
    // 0x1cf5a8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1cf5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cf5ac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1cf5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1cf5b0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1cf5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf5b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf5b8: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x1cf5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1cf5bc: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1cf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cf5c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF5C0u;
    {
        const bool branch_taken_0x1cf5c0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5C0u;
        // 0x1cf5c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5c0) {
            ctx->pc = 0x1CF5D0u;
            goto label_1cf5d0;
        }
    }
    ctx->pc = 0x1CF5C8u;
    // 0x1cf5c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf5cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf5d0:
    // 0x1cf5d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf5d4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1cf5d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cf5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cf5dc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1cf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1cf5e0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf5e4: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x1cf5e8: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cf5ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF5ECu;
    {
        const bool branch_taken_0x1cf5ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5ECu;
        // 0x1cf5f0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5ec) {
            ctx->pc = 0x1CF5FCu;
            goto label_1cf5fc;
        }
    }
    ctx->pc = 0x1CF5F4u;
    // 0x1cf5f4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf5f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf5fc:
    // 0x1cf5fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf600: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1cf600u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1cf608: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1cf608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1cf60c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cf610: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1cf614: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cf618: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cf618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cf61c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1cf620: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x1cf620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x1cf624: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cf624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf628: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cf628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf62c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf63c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF63Cu;
        // 0x1cf640: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF644u;
}
