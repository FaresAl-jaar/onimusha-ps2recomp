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

// Function: sub_00130990
// Address: 0x130990 - 0x130b54
void sub_00130990_0x130990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130990_0x130990");
#endif

    switch (ctx->pc) {
        case 0x1309d0u: goto label_1309d0;
        case 0x130a64u: goto label_130a64;
        case 0x130b00u: goto label_130b00;
        default: break;
    }

    ctx->pc = 0x130990u;

    // 0x130990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130994: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130998: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13099c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x13099cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1309a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1309a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1309a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1309a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1309a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1309a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1309ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1309acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1309b0: 0x90308474  lbu         $s0, -0x7B8C($at)
    ctx->pc = 0x1309b0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935668)));
    // 0x1309b4: 0x12000060  beqz        $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1309B4u;
    {
        const bool branch_taken_0x1309b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309B4u;
        // 0x1309b8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309b4) {
            ctx->pc = 0x130B38u;
            goto label_130b38;
        }
    }
    ctx->pc = 0x1309BCu;
    // 0x1309bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1309bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1309c0: 0x34218478  ori         $at, $at, 0x8478
    ctx->pc = 0x1309c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33912);
    // 0x1309c4: 0x1a00005c  blez        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1309C4u;
    {
        const bool branch_taken_0x1309c4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C4u;
        // 0x1309c8: 0x2619021  addu        $s2, $s3, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309c4) {
            ctx->pc = 0x130B38u;
            goto label_130b38;
        }
    }
    ctx->pc = 0x1309CCu;
    // 0x1309cc: 0x0  nop
    ctx->pc = 0x1309ccu;
    // NOP
label_1309d0:
    // 0x1309d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1309d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1309d4: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1309D4u;
    {
        const bool branch_taken_0x1309d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309D4u;
        // 0x1309d8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309d4) {
            ctx->pc = 0x130B30u;
            goto label_130b30;
        }
    }
    ctx->pc = 0x1309DCu;
    // 0x1309dc: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x1309dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1309e0: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x1309e4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1309e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1309e8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1309e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1309ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1309ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1309f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1309f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1309f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1309F4u;
    {
        const bool branch_taken_0x1309f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1309F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309F4u;
        // 0x1309f8: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309f4) {
            ctx->pc = 0x130A38u;
            goto label_130a38;
        }
    }
    ctx->pc = 0x1309FCu;
    // 0x1309fc: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1309fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x130a00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130A00u;
    {
        const bool branch_taken_0x130a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130a00) {
            ctx->pc = 0x130A38u;
            goto label_130a38;
        }
    }
    ctx->pc = 0x130A08u;
    // 0x130a08: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x130a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130a0c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x130a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x130a10: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x130a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x130a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x130a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130a18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x130a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x130a1c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x130a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x130a20: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x130a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x130a24: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x130a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x130a28: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x130a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x130a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x130a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130a30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x130a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x130a34: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x130a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_130a38:
    // 0x130a38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130a3c: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x130a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x130a40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x130a44: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x130a48: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x130a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x130a4c: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x130a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x130a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x130a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x130a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130a58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130a5c: 0xc0a84f8  jal         func_2A13E0
    ctx->pc = 0x130A5Cu;
    SET_GPR_U32(ctx, 31, 0x130A64u);
    ctx->pc = 0x130A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A5Cu;
    // 0x130a60: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A13E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A13E0u, 0x130A5Cu, 0x130A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A64u;
label_130a64:
    // 0x130a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130a68: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x130a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x130a6c: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x130a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x130a70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x130a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130a74: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x130A74u;
    {
        const bool branch_taken_0x130a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130a74) {
            ctx->pc = 0x130B28u;
            goto label_130b28;
        }
    }
    ctx->pc = 0x130A7Cu;
    // 0x130a7c: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x130a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x130a80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130a84: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x130a84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x130a88: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x130a88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x130a8c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x130a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130a90: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x130a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x130a94: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x130A94u;
    {
        const bool branch_taken_0x130a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a94) {
            ctx->pc = 0x130B28u;
            goto label_130b28;
        }
    }
    ctx->pc = 0x130A9Cu;
    // 0x130a9c: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x130a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x130aa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130aa4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x130AA4u;
    {
        const bool branch_taken_0x130aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AA4u;
        // 0x130aa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130aa4) {
            ctx->pc = 0x130B00u;
            goto label_130b00;
        }
    }
    ctx->pc = 0x130AACu;
    // 0x130aac: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x130AACu;
    {
        const bool branch_taken_0x130aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130aac) {
            ctx->pc = 0x130AF0u;
            goto label_130af0;
        }
    }
    ctx->pc = 0x130AB4u;
    // 0x130ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130AB4u;
    {
        const bool branch_taken_0x130ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ab4) {
            ctx->pc = 0x130AC8u;
            goto label_130ac8;
        }
    }
    ctx->pc = 0x130ABCu;
    // 0x130abc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x130ABCu;
    {
        const bool branch_taken_0x130abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130abc) {
            ctx->pc = 0x130B20u;
            goto label_130b20;
        }
    }
    ctx->pc = 0x130AC4u;
    // 0x130ac4: 0x0  nop
    ctx->pc = 0x130ac4u;
    // NOP
label_130ac8:
    // 0x130ac8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x130ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x130acc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130ad0: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x130ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x130ad4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x130ad4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x130ad8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x130ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x130adc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x130adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x130ae0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x130AE0u;
    {
        const bool branch_taken_0x130ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ae0) {
            ctx->pc = 0x130B20u;
            goto label_130b20;
        }
    }
    ctx->pc = 0x130AE8u;
    // 0x130ae8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x130AE8u;
    {
        const bool branch_taken_0x130ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AE8u;
        // 0x130aec: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ae8) {
            ctx->pc = 0x130B20u;
            goto label_130b20;
        }
    }
    ctx->pc = 0x130AF0u;
label_130af0:
    // 0x130af0: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x130af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x130af4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x130AF4u;
    {
        const bool branch_taken_0x130af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AF4u;
        // 0x130af8: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130af4) {
            ctx->pc = 0x130B20u;
            goto label_130b20;
        }
    }
    ctx->pc = 0x130AFCu;
    // 0x130afc: 0x0  nop
    ctx->pc = 0x130afcu;
    // NOP
label_130b00:
    // 0x130b00: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130b04: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x130b08: 0x90238474  lbu         $v1, -0x7B8C($at)
    ctx->pc = 0x130b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935668)));
    // 0x130b0c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130b10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130b14: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x130b14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x130b18: 0xa0238474  sb          $v1, -0x7B8C($at)
    ctx->pc = 0x130b18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935668), (uint8_t)GPR_U32(ctx, 3));
    // 0x130b1c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x130b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_130b20:
    // 0x130b20: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x130b20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130b24: 0x0  nop
    ctx->pc = 0x130b24u;
    // NOP
label_130b28:
    // 0x130b28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x130b2c: 0x0  nop
    ctx->pc = 0x130b2cu;
    // NOP
label_130b30:
    // 0x130b30: 0x1e00ffa7  bgtz        $s0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x130B30u;
    {
        const bool branch_taken_0x130b30 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x130B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B30u;
        // 0x130b34: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b30) {
            ctx->pc = 0x1309D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1309d0;
        }
    }
    ctx->pc = 0x130B38u;
label_130b38:
    // 0x130b38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x130B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B4Cu;
        // 0x130b50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130B54u;
}
