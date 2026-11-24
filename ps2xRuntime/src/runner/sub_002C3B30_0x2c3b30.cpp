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

// Function: sub_002C3B30
// Address: 0x2c3b30 - 0x2c3c94
void sub_002C3B30_0x2c3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3B30_0x2c3b30");
#endif

    switch (ctx->pc) {
        case 0x2c3b94u: goto label_2c3b94;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3c4cu: goto label_2c3c4c;
        default: break;
    }

    ctx->pc = 0x2c3b30u;

    // 0x2c3b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c3b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c3b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3b40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c3b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3b48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3b50: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2c3b50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c3b54: 0x90d00001  lbu         $s0, 0x1($a2)
    ctx->pc = 0x2c3b54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c3b58: 0x28810010  slti        $at, $a0, 0x10
    ctx->pc = 0x2c3b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c3b5c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3B5Cu;
    {
        const bool branch_taken_0x2c3b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B5Cu;
        // 0x2c3b60: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b5c) {
            ctx->pc = 0x2C3BA8u;
            goto label_2c3ba8;
        }
    }
    ctx->pc = 0x2C3B64u;
    // 0x2c3b64: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x2c3b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x2c3b68: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x2c3b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2c3b6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c3b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3b70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c3b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3B74u;
    {
        const bool branch_taken_0x2c3b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B74u;
        // 0x2c3b78: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b74) {
            ctx->pc = 0x2C3B88u;
            goto label_2c3b88;
        }
    }
    ctx->pc = 0x2C3B7Cu;
    // 0x2c3b7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c3b80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3B80u;
    {
        const bool branch_taken_0x2c3b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B80u;
        // 0x2c3b84: 0x8c442988  lw          $a0, 0x2988($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b80) {
            ctx->pc = 0x2C3B8Cu;
            goto label_2c3b8c;
        }
    }
    ctx->pc = 0x2C3B88u;
label_2c3b88:
    // 0x2c3b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b8c:
    // 0x2c3b8c: 0xc0c0890  jal         func_302240
    ctx->pc = 0x2C3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C3B94u);
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x2C3B8Cu, 0x2C3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B94u;
label_2c3b94:
    // 0x2c3b94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3B94u;
    {
        const bool branch_taken_0x2c3b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b94) {
            ctx->pc = 0x2C3BF0u;
            goto label_2c3bf0;
        }
    }
    ctx->pc = 0x2C3B9Cu;
    // 0x2c3b9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3B9Cu;
    {
        const bool branch_taken_0x2c3b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B9Cu;
        // 0x2c3ba0: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b9c) {
            ctx->pc = 0x2C3BF0u;
            goto label_2c3bf0;
        }
    }
    ctx->pc = 0x2C3BA4u;
    // 0x2c3ba4: 0x0  nop
    ctx->pc = 0x2c3ba4u;
    // NOP
label_2c3ba8:
    // 0x2c3ba8: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x2c3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x2c3bac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c3bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3bb0: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x2c3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x2c3bb4: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x2c3bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2c3bb8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c3bb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3bbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c3bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3bc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3BC0u;
    {
        const bool branch_taken_0x2c3bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BC0u;
        // 0x2c3bc4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bc0) {
            ctx->pc = 0x2C3BD4u;
            goto label_2c3bd4;
        }
    }
    ctx->pc = 0x2C3BC8u;
    // 0x2c3bc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c3bcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3BCCu;
    {
        const bool branch_taken_0x2c3bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BCCu;
        // 0x2c3bd0: 0x8c442950  lw          $a0, 0x2950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bcc) {
            ctx->pc = 0x2C3BD8u;
            goto label_2c3bd8;
        }
    }
    ctx->pc = 0x2C3BD4u;
label_2c3bd4:
    // 0x2c3bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3bd8:
    // 0x2c3bd8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x2C3BD8u;
    SET_GPR_U32(ctx, 31, 0x2C3BE0u);
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x2C3BD8u, 0x2C3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BE0u;
label_2c3be0:
    // 0x2c3be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3BE0u;
    {
        const bool branch_taken_0x2c3be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3be0) {
            ctx->pc = 0x2C3BF0u;
            goto label_2c3bf0;
        }
    }
    ctx->pc = 0x2C3BE8u;
    // 0x2c3be8: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x2c3be8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x2c3bec: 0x0  nop
    ctx->pc = 0x2c3becu;
    // NOP
label_2c3bf0:
    // 0x2c3bf0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3BF0u;
    {
        const bool branch_taken_0x2c3bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3bf0) {
            ctx->pc = 0x2C3C70u;
            goto label_2c3c70;
        }
    }
    ctx->pc = 0x2C3BF8u;
    // 0x2c3bf8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3bfc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3BFCu;
    {
        const bool branch_taken_0x2c3bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BFCu;
        // 0x2c3c00: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bfc) {
            ctx->pc = 0x2C3C58u;
            goto label_2c3c58;
        }
    }
    ctx->pc = 0x2C3C04u;
    // 0x2c3c04: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3C04u;
    {
        const bool branch_taken_0x2c3c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C04u;
        // 0x2c3c08: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c04) {
            ctx->pc = 0x2C3C40u;
            goto label_2c3c40;
        }
    }
    ctx->pc = 0x2C3C0Cu;
    // 0x2c3c0c: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c3c0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c3c10: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3c14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3c1c: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c3c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3c20: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2c3c20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3c24: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c3c24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3c28: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c3c28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3c2c: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c3c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3c30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c3c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3C38u;
    {
        const bool branch_taken_0x2c3c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C38u;
        // 0x2c3c3c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c38) {
            ctx->pc = 0x2C3C68u;
            goto label_2c3c68;
        }
    }
    ctx->pc = 0x2C3C40u;
label_2c3c40:
    // 0x2c3c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c44: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C3C44u;
    SET_GPR_U32(ctx, 31, 0x2C3C4Cu);
    ctx->pc = 0x2C3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C44u;
    // 0x2c3c48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C3C44u, 0x2C3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C4Cu;
label_2c3c4c:
    // 0x2c3c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3C4Cu;
    {
        const bool branch_taken_0x2c3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c4c) {
            ctx->pc = 0x2C3C60u;
            goto label_2c3c60;
        }
    }
    ctx->pc = 0x2C3C54u;
    // 0x2c3c54: 0x0  nop
    ctx->pc = 0x2c3c54u;
    // NOP
label_2c3c58:
    // 0x2c3c58: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c3c58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3c5c: 0x0  nop
    ctx->pc = 0x2c3c5cu;
    // NOP
label_2c3c60:
    // 0x2c3c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c64: 0x0  nop
    ctx->pc = 0x2c3c64u;
    // NOP
label_2c3c68:
    // 0x2c3c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3C68u;
    {
        const bool branch_taken_0x2c3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c68) {
            ctx->pc = 0x2C3C78u;
            goto label_2c3c78;
        }
    }
    ctx->pc = 0x2C3C70u;
label_2c3c70:
    // 0x2c3c70: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2c3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c3c74: 0x0  nop
    ctx->pc = 0x2c3c74u;
    // NOP
label_2c3c78:
    // 0x2c3c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3c7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C8Cu;
        // 0x2c3c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3C94u;
}
