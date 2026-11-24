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

// Function: sub_002C4AE0
// Address: 0x2c4ae0 - 0x2c4c34
void sub_002C4AE0_0x2c4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4AE0_0x2c4ae0");
#endif

    switch (ctx->pc) {
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4becu: goto label_2c4bec;
        default: break;
    }

    ctx->pc = 0x2c4ae0u;

    // 0x2c4ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4ae4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c4ae8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4aec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4af0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4af8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4b00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c4b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b04: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c4b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c4b08: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2c4b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c4b0c: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x2c4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x2c4b10: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x2c4b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2c4b14: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c4b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c4b18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4b1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4B1Cu;
    {
        const bool branch_taken_0x2c4b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B1Cu;
        // 0x2c4b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b1c) {
            ctx->pc = 0x2C4B34u;
            goto label_2c4b34;
        }
    }
    ctx->pc = 0x2C4B24u;
    // 0x2c4b24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2c4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4b28: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c4b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4B2Cu;
    {
        const bool branch_taken_0x2c4b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B2Cu;
        // 0x2c4b30: 0x8c442988  lw          $a0, 0x2988($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b2c) {
            ctx->pc = 0x2C4B38u;
            goto label_2c4b38;
        }
    }
    ctx->pc = 0x2C4B34u;
label_2c4b34:
    // 0x2c4b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c4b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b38:
    // 0x2c4b38: 0xc0c0890  jal         func_302240
    ctx->pc = 0x2C4B38u;
    SET_GPR_U32(ctx, 31, 0x2C4B40u);
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x2C4B38u, 0x2C4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B40u;
label_2c4b40:
    // 0x2c4b40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4B40u;
    {
        const bool branch_taken_0x2c4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b40) {
            ctx->pc = 0x2C4B78u;
            goto label_2c4b78;
        }
    }
    ctx->pc = 0x2C4B48u;
    // 0x2c4b48: 0x9043053a  lbu         $v1, 0x53A($v0)
    ctx->pc = 0x2c4b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x2c4b4c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2c4b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c4b50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B50u;
    {
        const bool branch_taken_0x2c4b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4b50) {
            ctx->pc = 0x2C4B60u;
            goto label_2c4b60;
        }
    }
    ctx->pc = 0x2C4B58u;
    // 0x2c4b58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4b5c: 0x0  nop
    ctx->pc = 0x2c4b5cu;
    // NOP
label_2c4b60:
    // 0x2c4b60: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2c4b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c4b64: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c4b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c4b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4B68u;
    {
        const bool branch_taken_0x2c4b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b68) {
            ctx->pc = 0x2C4B90u;
            goto label_2c4b90;
        }
    }
    ctx->pc = 0x2C4B70u;
    // 0x2c4b70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4B70u;
    {
        const bool branch_taken_0x2c4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B70u;
        // 0x2c4b74: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b70) {
            ctx->pc = 0x2C4B90u;
            goto label_2c4b90;
        }
    }
    ctx->pc = 0x2C4B78u;
label_2c4b78:
    // 0x2c4b78: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2c4b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c4b7c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c4b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c4b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B80u;
    {
        const bool branch_taken_0x2c4b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b80) {
            ctx->pc = 0x2C4B90u;
            goto label_2c4b90;
        }
    }
    ctx->pc = 0x2C4B88u;
    // 0x2c4b88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c4b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4b8c: 0x0  nop
    ctx->pc = 0x2c4b8cu;
    // NOP
label_2c4b90:
    // 0x2c4b90: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4B90u;
    {
        const bool branch_taken_0x2c4b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b90) {
            ctx->pc = 0x2C4C10u;
            goto label_2c4c10;
        }
    }
    ctx->pc = 0x2C4B98u;
    // 0x2c4b98: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c4b9c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4B9Cu;
    {
        const bool branch_taken_0x2c4b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B9Cu;
        // 0x2c4ba0: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b9c) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4BA4u;
    // 0x2c4ba4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4BA4u;
    {
        const bool branch_taken_0x2c4ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BA4u;
        // 0x2c4ba8: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ba4) {
            ctx->pc = 0x2C4BE0u;
            goto label_2c4be0;
        }
    }
    ctx->pc = 0x2C4BACu;
    // 0x2c4bac: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c4bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c4bb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c4bb4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4bb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4bbc: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c4bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4bc0: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2c4bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4bc4: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c4bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4bc8: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c4bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4bcc: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c4bccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4bd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4bd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4BD8u;
    {
        const bool branch_taken_0x2c4bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BD8u;
        // 0x2c4bdc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bd8) {
            ctx->pc = 0x2C4C08u;
            goto label_2c4c08;
        }
    }
    ctx->pc = 0x2C4BE0u;
label_2c4be0:
    // 0x2c4be0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4be4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C4BE4u;
    SET_GPR_U32(ctx, 31, 0x2C4BECu);
    ctx->pc = 0x2C4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BE4u;
    // 0x2c4be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C4BE4u, 0x2C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BECu;
label_2c4bec:
    // 0x2c4bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4BECu;
    {
        const bool branch_taken_0x2c4bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4bec) {
            ctx->pc = 0x2C4C00u;
            goto label_2c4c00;
        }
    }
    ctx->pc = 0x2C4BF4u;
    // 0x2c4bf4: 0x0  nop
    ctx->pc = 0x2c4bf4u;
    // NOP
label_2c4bf8:
    // 0x2c4bf8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c4bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4bfc: 0x0  nop
    ctx->pc = 0x2c4bfcu;
    // NOP
label_2c4c00:
    // 0x2c4c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c04: 0x0  nop
    ctx->pc = 0x2c4c04u;
    // NOP
label_2c4c08:
    // 0x2c4c08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4C08u;
    {
        const bool branch_taken_0x2c4c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c08) {
            ctx->pc = 0x2C4C18u;
            goto label_2c4c18;
        }
    }
    ctx->pc = 0x2C4C10u;
label_2c4c10:
    // 0x2c4c10: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c4c14: 0x0  nop
    ctx->pc = 0x2c4c14u;
    // NOP
label_2c4c18:
    // 0x2c4c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C2Cu;
        // 0x2c4c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4C34u;
}
