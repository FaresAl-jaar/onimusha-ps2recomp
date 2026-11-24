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

// Function: sub_002EBBC0
// Address: 0x2ebbc0 - 0x2ebf6c
void sub_002EBBC0_0x2ebbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBC0_0x2ebbc0");
#endif

    switch (ctx->pc) {
        case 0x2ebd08u: goto label_2ebd08;
        case 0x2ebd80u: goto label_2ebd80;
        case 0x2ebde8u: goto label_2ebde8;
        case 0x2ebe74u: goto label_2ebe74;
        case 0x2ebe88u: goto label_2ebe88;
        case 0x2ebe94u: goto label_2ebe94;
        case 0x2ebea0u: goto label_2ebea0;
        case 0x2ebea8u: goto label_2ebea8;
        case 0x2ebef8u: goto label_2ebef8;
        default: break;
    }

    ctx->pc = 0x2ebbc0u;

    // 0x2ebbc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ebbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ebbc4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ebbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ebbc8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ebbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2ebbcc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ebbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ebbd0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ebbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ebbd4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ebbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ebbd8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ebbd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbdc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ebbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ebbe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ebbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebbe4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ebbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ebbe8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ebbe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ebbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ebbf0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ebbf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ebbf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ebbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ebbfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ebbfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc00: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2ebc00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ebc04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ebc04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ebc08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ebc08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ebc0c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x2ebc0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ebc10: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EBC10u;
    {
        const bool branch_taken_0x2ebc10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC10u;
        // 0x2ebc14: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc10) {
            ctx->pc = 0x2EBC98u;
            goto label_2ebc98;
        }
    }
    ctx->pc = 0x2EBC18u;
    // 0x2ebc18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ebc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebc1c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EBC1Cu;
    {
        const bool branch_taken_0x2ebc1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC1Cu;
        // 0x2ebc20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc1c) {
            ctx->pc = 0x2EBC70u;
            goto label_2ebc70;
        }
    }
    ctx->pc = 0x2EBC24u;
    // 0x2ebc24: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBC24u;
    {
        const bool branch_taken_0x2ebc24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebc24) {
            ctx->pc = 0x2EBC38u;
            goto label_2ebc38;
        }
    }
    ctx->pc = 0x2EBC2Cu;
    // 0x2ebc2c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2EBC2Cu;
    {
        const bool branch_taken_0x2ebc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc2c) {
            ctx->pc = 0x2EBCD8u;
            goto label_2ebcd8;
        }
    }
    ctx->pc = 0x2EBC34u;
    // 0x2ebc34: 0x0  nop
    ctx->pc = 0x2ebc34u;
    // NOP
label_2ebc38:
    // 0x2ebc38: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x2ebc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ebc3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2ebc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ebc40: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x2ebc40u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebc44: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x2ebc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x2ebc48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ebc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ebc4c: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x2ebc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebc50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ebc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ebc54: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2ebc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ebc58: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EBC58u;
    {
        const bool branch_taken_0x2ebc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc58) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBC60u;
    // 0x2ebc60: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2ebc60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ebc64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2EBC64u;
    {
        const bool branch_taken_0x2ebc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC64u;
        // 0x2ebc68: 0xa2a00005  sb          $zero, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc64) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBC6Cu;
    // 0x2ebc6c: 0x0  nop
    ctx->pc = 0x2ebc6cu;
    // NOP
label_2ebc70:
    // 0x2ebc70: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x2ebc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x2ebc74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ebc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ebc78: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x2ebc78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebc7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ebc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ebc80: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x2ebc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2ebc84: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EBC84u;
    {
        const bool branch_taken_0x2ebc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc84) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBC8Cu;
    // 0x2ebc8c: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x2ebc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ebc90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EBC90u;
    {
        const bool branch_taken_0x2ebc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC90u;
        // 0x2ebc94: 0xa2a00005  sb          $zero, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc90) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBC98u;
label_2ebc98:
    // 0x2ebc98: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x2ebc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x2ebc9c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EBC9Cu;
    {
        const bool branch_taken_0x2ebc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc9c) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBCA4u;
    // 0x2ebca4: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x2ebca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ebca8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2ebca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2ebcac: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x2ebcacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebcb0: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x2ebcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x2ebcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ebcb8: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x2ebcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebcbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ebcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ebcc0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2ebcc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ebcc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBCC4u;
    {
        const bool branch_taken_0x2ebcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebcc4) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBCCCu;
    // 0x2ebccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBCCCu;
    {
        const bool branch_taken_0x2ebccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCCCu;
        // 0x2ebcd0: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebccc) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBCD4u;
    // 0x2ebcd4: 0x0  nop
    ctx->pc = 0x2ebcd4u;
    // NOP
label_2ebcd8:
    // 0x2ebcd8: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2ebcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebcdc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ebce0: 0x1201827  not         $v1, $t1
    ctx->pc = 0x2ebce0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
    // 0x2ebce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ebce8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2ebce8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2ebcec: 0x0  nop
    ctx->pc = 0x2ebcecu;
    // NOP
label_2ebcf0:
    // 0x2ebcf0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2ebcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2ebcf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ebcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ebd00: 0xc0bae78  jal         func_2EB9E0
    ctx->pc = 0x2EBD00u;
    SET_GPR_U32(ctx, 31, 0x2EBD08u);
    ctx->pc = 0x2EBD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD00u;
    // 0x2ebd04: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB9E0u, 0x2EBD00u, 0x2EBD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD08u;
label_2ebd08:
    // 0x2ebd08: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2EBD08u;
    {
        const bool branch_taken_0x2ebd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD08u;
        // 0x2ebd0c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd08) {
            ctx->pc = 0x2EBF30u;
            goto label_2ebf30;
        }
    }
    ctx->pc = 0x2EBD10u;
    // 0x2ebd10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebd14: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x2ebd14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x2ebd18: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBD18u;
    {
        const bool branch_taken_0x2ebd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ebd18) {
            ctx->pc = 0x2EBD40u;
            goto label_2ebd40;
        }
    }
    ctx->pc = 0x2EBD20u;
    // 0x2ebd20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ebd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ebd24: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2ebd24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2ebd28: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ebd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ebd2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBD2Cu;
    {
        const bool branch_taken_0x2ebd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD2Cu;
        // 0x2ebd30: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd2c) {
            ctx->pc = 0x2EBD40u;
            goto label_2ebd40;
        }
    }
    ctx->pc = 0x2EBD34u;
    // 0x2ebd34: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ebd38: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2ebd38u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2ebd3c: 0x0  nop
    ctx->pc = 0x2ebd3cu;
    // NOP
label_2ebd40:
    // 0x2ebd40: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x2ebd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2ebd44: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2ebd44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2ebd48: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2ebd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2ebd4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ebd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ebd50: 0x92a90004  lbu         $t1, 0x4($s5)
    ctx->pc = 0x2ebd50u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ebd54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ebd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ebd58: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x2ebd58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2ebd5c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2ebd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ebd60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ebd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ebd68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ebd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ebd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebd70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ebd70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd74: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ebd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ebd78: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2EBD78u;
    SET_GPR_U32(ctx, 31, 0x2EBD80u);
    ctx->pc = 0x2EBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD78u;
    // 0x2ebd7c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2EBD78u, 0x2EBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD80u;
label_2ebd80:
    // 0x2ebd80: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2ebd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebd84: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x2ebd84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
    // 0x2ebd88: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ebd88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebd8c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2ebd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ebd90: 0x143c3c  dsll32      $a3, $s4, 16
    ctx->pc = 0x2ebd90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2ebd94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ebd94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ebd98: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2ebd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2ebd9c: 0x92b30001  lbu         $s3, 0x1($s5)
    ctx->pc = 0x2ebd9cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x2ebda0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2ebda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ebda4: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x2ebda4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2ebda8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2ebda8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2ebdac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ebdacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ebdb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebdb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ebdb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ebdb8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ebdb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ebdbc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ebdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ebdc0: 0x6bc3c  dsll32      $s7, $a2, 16
    ctx->pc = 0x2ebdc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2ebdc4: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x2ebdc4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x2ebdc8: 0x1730c0  sll         $a2, $s7, 3
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2ebdcc: 0xd73023  subu        $a2, $a2, $s7
    ctx->pc = 0x2ebdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2ebdd0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2ebdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ebdd4: 0x6a43c  dsll32      $s4, $a2, 16
    ctx->pc = 0x2ebdd4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2ebdd8: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EBDD8u;
    {
        const bool branch_taken_0x2ebdd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDD8u;
        // 0x2ebddc: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdd8) {
            ctx->pc = 0x2EBF30u;
            goto label_2ebf30;
        }
    }
    ctx->pc = 0x2EBDE0u;
    // 0x2ebde0: 0x3f43c  dsll32      $fp, $v1, 16
    ctx->pc = 0x2ebde0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ebde4: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x2ebde4u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
label_2ebde8:
    // 0x2ebde8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x2ebde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2ebdec: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBDECu;
    {
        const bool branch_taken_0x2ebdec = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2EBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDECu;
        // 0x2ebdf0: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdec) {
            ctx->pc = 0x2EBE00u;
            goto label_2ebe00;
        }
    }
    ctx->pc = 0x2EBDF4u;
    // 0x2ebdf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebdf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebdf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBDF8u;
    {
        const bool branch_taken_0x2ebdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDF8u;
        // 0x2ebdfc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdf8) {
            ctx->pc = 0x2EBE18u;
            goto label_2ebe18;
        }
    }
    ctx->pc = 0x2EBE00u;
label_2ebe00:
    // 0x2ebe00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ebe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ebe04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ebe04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2ebe08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ebe08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe0c: 0x0  nop
    ctx->pc = 0x2ebe0cu;
    // NOP
    // 0x2ebe10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ebe10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ebe14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ebe14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ebe18:
    // 0x2ebe18: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x2ebe18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ebe1c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2ebe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2ebe20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ebe20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebe24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ebe24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe28: 0x0  nop
    ctx->pc = 0x2ebe28u;
    // NOP
    // 0x2ebe2c: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x2ebe2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2ebe30: 0x0  nop
    ctx->pc = 0x2ebe30u;
    // NOP
    // 0x2ebe34: 0x0  nop
    ctx->pc = 0x2ebe34u;
    // NOP
    // 0x2ebe38: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2ebe38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebe3c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x2EBE3Cu;
    {
        const bool branch_taken_0x2ebe3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebe3c) {
            ctx->pc = 0x2EBEF8u;
            goto label_2ebef8;
        }
    }
    ctx->pc = 0x2EBE44u;
    // 0x2ebe44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ebe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ebe48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe4c: 0x0  nop
    ctx->pc = 0x2ebe4cu;
    // NOP
    // 0x2ebe50: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2ebe50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebe54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBE54u;
    {
        const bool branch_taken_0x2ebe54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebe54) {
            ctx->pc = 0x2EBE60u;
            goto label_2ebe60;
        }
    }
    ctx->pc = 0x2EBE5Cu;
    // 0x2ebe5c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ebe5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2ebe60:
    // 0x2ebe60: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ebe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2ebe64: 0xc6b5000c  lwc1        $f21, 0xC($s5)
    ctx->pc = 0x2ebe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ebe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe6c: 0xc04b946  jal         func_12E518
    ctx->pc = 0x2EBE6Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE74u);
    ctx->pc = 0x2EBE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE6Cu;
    // 0x2ebe70: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x2EBE6Cu, 0x2EBE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE74u;
label_2ebe74:
    // 0x2ebe74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ebe74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe78: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x2ebe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x2ebe7c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2ebe7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ebe80: 0xc04b946  jal         func_12E518
    ctx->pc = 0x2EBE80u;
    SET_GPR_U32(ctx, 31, 0x2EBE88u);
    ctx->pc = 0x2EBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE80u;
    // 0x2ebe84: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x2EBE80u, 0x2EBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE88u;
label_2ebe88:
    // 0x2ebe88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe8c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x2EBE8Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE94u);
    ctx->pc = 0x2EBE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE8Cu;
    // 0x2ebe90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x2EBE8Cu, 0x2EBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE94u;
label_2ebe94:
    // 0x2ebe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe98: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x2EBE98u;
    SET_GPR_U32(ctx, 31, 0x2EBEA0u);
    ctx->pc = 0x2EBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE98u;
    // 0x2ebe9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x2EBE98u, 0x2EBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEA0u;
label_2ebea0:
    // 0x2ebea0: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x2EBEA0u;
    SET_GPR_U32(ctx, 31, 0x2EBEA8u);
    ctx->pc = 0x2EBEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEA0u;
    // 0x2ebea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x2EBEA0u, 0x2EBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEA8u;
label_2ebea8:
    // 0x2ebea8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ebea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ebeac: 0x92a90004  lbu         $t1, 0x4($s5)
    ctx->pc = 0x2ebeacu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ebeb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ebeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ebeb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ebeb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ebeb8: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x2ebeb8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x2ebebc: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x2ebebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2ebec0: 0x4616ab42  mul.s       $f13, $f21, $f22
    ctx->pc = 0x2ebec0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2ebec4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ebec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebec8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ebec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebecc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ebeccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2ebed0: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x2ebed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2ebed4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2ebed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ebed8: 0x2810  mfhi        $a1
    ctx->pc = 0x2ebed8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2ebedc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2ebedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2ebee0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2ebee0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2ebee4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ebee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ebee8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ebee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ebeec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ebef0: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2EBEF0u;
    SET_GPR_U32(ctx, 31, 0x2EBEF8u);
    ctx->pc = 0x2EBEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEF0u;
    // 0x2ebef4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2EBEF0u, 0x2EBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEF8u;
label_2ebef8:
    // 0x2ebef8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ebef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebf00: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2ebf00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2ebf04: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2ebf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2ebf08: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x2ebf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ebf0c: 0xd20019  multu       $a2, $s2
    ctx->pc = 0x2ebf0cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ebf10: 0x2971823  subu        $v1, $s4, $s7
    ctx->pc = 0x2ebf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x2ebf14: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x2ebf14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ebf18: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2ebf18u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2ebf1c: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2ebf1cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2ebf20: 0x1810  mfhi        $v1
    ctx->pc = 0x2ebf20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ebf24: 0x1660ffb0  bnez        $s3, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2EBF24u;
    {
        const bool branch_taken_0x2ebf24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF24u;
        // 0x2ebf28: 0x390c2  srl         $s2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf24) {
            ctx->pc = 0x2EBDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebde8;
        }
    }
    ctx->pc = 0x2EBF2Cu;
    // 0x2ebf2c: 0x0  nop
    ctx->pc = 0x2ebf2cu;
    // NOP
label_2ebf30:
    // 0x2ebf30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ebf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ebf34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ebf34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ebf38: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2ebf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ebf3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ebf3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ebf40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ebf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ebf44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ebf44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ebf48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ebf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ebf4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ebf4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ebf50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ebf50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebf54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ebf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebf58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ebf58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebf5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ebf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebf60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ebf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF64u;
        // 0x2ebf68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF6Cu;
}
