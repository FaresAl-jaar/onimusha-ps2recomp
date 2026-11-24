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

// Function: sub_001A4B60
// Address: 0x1a4b60 - 0x1a4c90
void sub_001A4B60_0x1a4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4B60_0x1a4b60");
#endif

    switch (ctx->pc) {
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c58u: goto label_1a4c58;
        default: break;
    }

    ctx->pc = 0x1a4b60u;

    // 0x1a4b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4b6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4b74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4b7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b80: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a4b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a4b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a4b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a4b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b8c: 0x0  nop
    ctx->pc = 0x1a4b8cu;
    // NOP
label_1a4b90:
    // 0x1a4b90: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a4b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a4b94: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B94u;
    {
        const bool branch_taken_0x1a4b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4b94) {
            ctx->pc = 0x1A4BB8u;
            goto label_1a4bb8;
        }
    }
    ctx->pc = 0x1A4B9Cu;
    // 0x1a4b9c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x1a4b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a4ba0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1a4ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1a4ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4BA4u;
    {
        const bool branch_taken_0x1a4ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BA4u;
        // 0x1a4ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ba4) {
            ctx->pc = 0x1A4BB8u;
            goto label_1a4bb8;
        }
    }
    ctx->pc = 0x1A4BACu;
    // 0x1a4bac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A4BACu;
    {
        const bool branch_taken_0x1a4bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bac) {
            ctx->pc = 0x1A4C78u;
            goto label_1a4c78;
        }
    }
    ctx->pc = 0x1A4BB4u;
    // 0x1a4bb4: 0x0  nop
    ctx->pc = 0x1a4bb4u;
    // NOP
label_1a4bb8:
    // 0x1a4bb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4BB8u;
    {
        const bool branch_taken_0x1a4bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB8u;
        // 0x1a4bbc: 0x71240  sll         $v0, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bb8) {
            ctx->pc = 0x1A4BC8u;
            goto label_1a4bc8;
        }
    }
    ctx->pc = 0x1A4BC0u;
    // 0x1a4bc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BC0u;
    {
        const bool branch_taken_0x1a4bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC0u;
        // 0x1a4bc4: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bc0) {
            ctx->pc = 0x1A4BD8u;
            goto label_1a4bd8;
        }
    }
    ctx->pc = 0x1A4BC8u;
label_1a4bc8:
    // 0x1a4bc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a4bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4bcc: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x1a4bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4bd0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A4BD0u;
    {
        const bool branch_taken_0x1a4bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD0u;
        // 0x1a4bd4: 0x24c60200  addiu       $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bd0) {
            ctx->pc = 0x1A4B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4b90;
        }
    }
    ctx->pc = 0x1A4BD8u;
label_1a4bd8:
    // 0x1a4bd8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4BD8u;
    {
        const bool branch_taken_0x1a4bd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD8u;
        // 0x1a4bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bd8) {
            ctx->pc = 0x1A4BE8u;
            goto label_1a4be8;
        }
    }
    ctx->pc = 0x1A4BE0u;
    // 0x1a4be0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4BE0u;
    {
        const bool branch_taken_0x1a4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4be0) {
            ctx->pc = 0x1A4C78u;
            goto label_1a4c78;
        }
    }
    ctx->pc = 0x1A4BE8u;
label_1a4be8:
    // 0x1a4be8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a4be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bf0: 0xc069894  jal         func_1A6250
    ctx->pc = 0x1A4BF0u;
    SET_GPR_U32(ctx, 31, 0x1A4BF8u);
    ctx->pc = 0x1A4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BF0u;
    // 0x1a4bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6250u, 0x1A4BF0u, 0x1A4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BF8u;
label_1a4bf8:
    // 0x1a4bf8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BF8u;
    {
        const bool branch_taken_0x1a4bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bf8) {
            ctx->pc = 0x1A4C10u;
            goto label_1a4c10;
        }
    }
    ctx->pc = 0x1A4C00u;
    // 0x1a4c00: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a4c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4c04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a4c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a4c08: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a4c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4c0c: 0x0  nop
    ctx->pc = 0x1a4c0cu;
    // NOP
label_1a4c10:
    // 0x1a4c10: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a4c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4c14: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a4c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a4c18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4C18u;
    {
        const bool branch_taken_0x1a4c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C18u;
        // 0x1a4c1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c18) {
            ctx->pc = 0x1A4C70u;
            goto label_1a4c70;
        }
    }
    ctx->pc = 0x1A4C20u;
    // 0x1a4c20: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1a4c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c24: 0x0  nop
    ctx->pc = 0x1a4c24u;
    // NOP
label_1a4c28:
    // 0x1a4c28: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4C28u;
    {
        const bool branch_taken_0x1a4c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a4c28) {
            ctx->pc = 0x1A4C60u;
            goto label_1a4c60;
        }
    }
    ctx->pc = 0x1A4C30u;
    // 0x1a4c30: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1a4c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a4c34: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a4c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a4c38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4C38u;
    {
        const bool branch_taken_0x1a4c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c38) {
            ctx->pc = 0x1A4C60u;
            goto label_1a4c60;
        }
    }
    ctx->pc = 0x1A4C40u;
    // 0x1a4c40: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a4c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4c44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c4c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a4c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a4c50: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x1A4C50u;
    SET_GPR_U32(ctx, 31, 0x1A4C58u);
    ctx->pc = 0x1A4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C50u;
    // 0x1a4c54: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x1A4C50u, 0x1A4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C58u;
label_1a4c58:
    // 0x1a4c58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4C58u;
    {
        const bool branch_taken_0x1a4c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C58u;
        // 0x1a4c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c58) {
            ctx->pc = 0x1A4C78u;
            goto label_1a4c78;
        }
    }
    ctx->pc = 0x1A4C60u;
label_1a4c60:
    // 0x1a4c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4c64: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x1a4c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4c68: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A4C68u;
    {
        const bool branch_taken_0x1a4c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C68u;
        // 0x1a4c6c: 0x24630200  addiu       $v1, $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c68) {
            ctx->pc = 0x1A4C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4c28;
        }
    }
    ctx->pc = 0x1A4C70u;
label_1a4c70:
    // 0x1a4c70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c74: 0x0  nop
    ctx->pc = 0x1a4c74u;
    // NOP
label_1a4c78:
    // 0x1a4c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C88u;
        // 0x1a4c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C90u;
}
