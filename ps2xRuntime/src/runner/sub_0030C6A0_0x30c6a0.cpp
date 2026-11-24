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

// Function: sub_0030C6A0
// Address: 0x30c6a0 - 0x30c87c
void sub_0030C6A0_0x30c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C6A0_0x30c6a0");
#endif

    switch (ctx->pc) {
        case 0x30c6d8u: goto label_30c6d8;
        case 0x30c6f8u: goto label_30c6f8;
        case 0x30c7a4u: goto label_30c7a4;
        case 0x30c7c0u: goto label_30c7c0;
        case 0x30c7d8u: goto label_30c7d8;
        case 0x30c81cu: goto label_30c81c;
        case 0x30c838u: goto label_30c838;
        case 0x30c850u: goto label_30c850;
        default: break;
    }

    ctx->pc = 0x30c6a0u;

    // 0x30c6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30c6a4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x30c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x30c6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30c6ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x30c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x30c6b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c6b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c6b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30c6b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c6c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c6c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30c6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6cc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x30c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x30c6d0: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x30C6D0u;
    SET_GPR_U32(ctx, 31, 0x30C6D8u);
    ctx->pc = 0x30C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6D0u;
    // 0x30c6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x30C6D0u, 0x30C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6D8u;
label_30c6d8:
    // 0x30c6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C6DCu;
    {
        const bool branch_taken_0x30c6dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c6dc) {
            ctx->pc = 0x30C6F0u;
            goto label_30c6f0;
        }
    }
    ctx->pc = 0x30C6E4u;
    // 0x30c6e4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x30C6E4u;
    {
        const bool branch_taken_0x30c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6E4u;
        // 0x30c6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6e4) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C6ECu;
    // 0x30c6ec: 0x0  nop
    ctx->pc = 0x30c6ecu;
    // NOP
label_30c6f0:
    // 0x30c6f0: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x30C6F0u;
    SET_GPR_U32(ctx, 31, 0x30C6F8u);
    ctx->pc = 0x30C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C6F0u;
    // 0x30c6f4: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x30C6F0u, 0x30C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C6F8u;
label_30c6f8:
    // 0x30c6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C6F8u;
    {
        const bool branch_taken_0x30c6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c6f8) {
            ctx->pc = 0x30C708u;
            goto label_30c708;
        }
    }
    ctx->pc = 0x30C700u;
    // 0x30c700: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30C700u;
    {
        const bool branch_taken_0x30c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C700u;
        // 0x30c704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c700) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C708u;
label_30c708:
    // 0x30c708: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x30c708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x30c70c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C70Cu;
    {
        const bool branch_taken_0x30c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c70c) {
            ctx->pc = 0x30C720u;
            goto label_30c720;
        }
    }
    ctx->pc = 0x30C714u;
    // 0x30c714: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x30C714u;
    {
        const bool branch_taken_0x30c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C714u;
        // 0x30c718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c714) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C71Cu;
    // 0x30c71c: 0x0  nop
    ctx->pc = 0x30c71cu;
    // NOP
label_30c720:
    // 0x30c720: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x30c720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30c724: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x30c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x30c728: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x30c728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30c72c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x30c72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30c730: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C730u;
    {
        const bool branch_taken_0x30c730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C730u;
        // 0x30c734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c730) {
            ctx->pc = 0x30C768u;
            goto label_30c768;
        }
    }
    ctx->pc = 0x30C738u;
    // 0x30c738: 0x87828b08  lh          $v0, -0x74F8($gp)
    ctx->pc = 0x30c738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937352)));
    // 0x30c73c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x30c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x30c740: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x30c740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30c744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C744u;
    {
        const bool branch_taken_0x30c744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C744u;
        // 0x30c748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c744) {
            ctx->pc = 0x30C758u;
            goto label_30c758;
        }
    }
    ctx->pc = 0x30C74Cu;
    // 0x30c74c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x30C74Cu;
    {
        const bool branch_taken_0x30c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c74c) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C754u;
    // 0x30c754: 0x0  nop
    ctx->pc = 0x30c754u;
    // NOP
label_30c758:
    // 0x30c758: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x30c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x30c75c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30c760: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x30c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x30c764: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x30c764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30c768:
    // 0x30c768: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x30C768u;
    {
        const bool branch_taken_0x30c768 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C768u;
        // 0x30c76c: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c768) {
            ctx->pc = 0x30C7E8u;
            goto label_30c7e8;
        }
    }
    ctx->pc = 0x30C770u;
    // 0x30c770: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x30c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30c774: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30C774u;
    {
        const bool branch_taken_0x30c774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C774u;
        // 0x30c778: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c774) {
            ctx->pc = 0x30C7C8u;
            goto label_30c7c8;
        }
    }
    ctx->pc = 0x30C77Cu;
    // 0x30c77c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C77Cu;
    {
        const bool branch_taken_0x30c77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c77c) {
            ctx->pc = 0x30C7B0u;
            goto label_30c7b0;
        }
    }
    ctx->pc = 0x30C784u;
    // 0x30c784: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C784u;
    {
        const bool branch_taken_0x30c784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c784) {
            ctx->pc = 0x30C798u;
            goto label_30c798;
        }
    }
    ctx->pc = 0x30C78Cu;
    // 0x30c78c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30C78Cu;
    {
        const bool branch_taken_0x30c78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c78c) {
            ctx->pc = 0x30C7E0u;
            goto label_30c7e0;
        }
    }
    ctx->pc = 0x30C794u;
    // 0x30c794: 0x0  nop
    ctx->pc = 0x30c794u;
    // NOP
label_30c798:
    // 0x30c798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c79c: 0xc0c3220  jal         func_30C880
    ctx->pc = 0x30C79Cu;
    SET_GPR_U32(ctx, 31, 0x30C7A4u);
    ctx->pc = 0x30C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C79Cu;
    // 0x30c7a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C880u, 0x30C79Cu, 0x30C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7A4u;
label_30c7a4:
    // 0x30c7a4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x30C7A4u;
    {
        const bool branch_taken_0x30c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7a4) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C7ACu;
    // 0x30c7ac: 0x0  nop
    ctx->pc = 0x30c7acu;
    // NOP
label_30c7b0:
    // 0x30c7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7b8: 0xc0c3274  jal         func_30C9D0
    ctx->pc = 0x30C7B8u;
    SET_GPR_U32(ctx, 31, 0x30C7C0u);
    ctx->pc = 0x30C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7B8u;
    // 0x30c7bc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9D0u, 0x30C7B8u, 0x30C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7C0u;
label_30c7c0:
    // 0x30c7c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30C7C0u;
    {
        const bool branch_taken_0x30c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7c0) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C7C8u;
label_30c7c8:
    // 0x30c7c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7d0: 0xc0c3310  jal         func_30CC40
    ctx->pc = 0x30C7D0u;
    SET_GPR_U32(ctx, 31, 0x30C7D8u);
    ctx->pc = 0x30C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7D0u;
    // 0x30c7d4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CC40u, 0x30C7D0u, 0x30C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7D8u;
label_30c7d8:
    // 0x30c7d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30C7D8u;
    {
        const bool branch_taken_0x30c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7d8) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C7E0u;
label_30c7e0:
    // 0x30c7e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x30C7E0u;
    {
        const bool branch_taken_0x30c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7E0u;
        // 0x30c7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7e0) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C7E8u;
label_30c7e8:
    // 0x30c7e8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x30c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c7ec: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x30c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30c7f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30C7F0u;
    {
        const bool branch_taken_0x30c7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7F0u;
        // 0x30c7f4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7f0) {
            ctx->pc = 0x30C840u;
            goto label_30c840;
        }
    }
    ctx->pc = 0x30C7F8u;
    // 0x30c7f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30C7F8u;
    {
        const bool branch_taken_0x30c7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c7f8) {
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C800u;
    // 0x30c800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C800u;
    {
        const bool branch_taken_0x30c800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c800) {
            ctx->pc = 0x30C810u;
            goto label_30c810;
        }
    }
    ctx->pc = 0x30C808u;
    // 0x30c808: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30C808u;
    {
        const bool branch_taken_0x30c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c808) {
            ctx->pc = 0x30C858u;
            goto label_30c858;
        }
    }
    ctx->pc = 0x30C810u;
label_30c810:
    // 0x30c810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c814: 0xc0c324c  jal         func_30C930
    ctx->pc = 0x30C814u;
    SET_GPR_U32(ctx, 31, 0x30C81Cu);
    ctx->pc = 0x30C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C814u;
    // 0x30c818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C930u, 0x30C814u, 0x30C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C81Cu;
label_30c81c:
    // 0x30c81c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30C81Cu;
    {
        const bool branch_taken_0x30c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c81c) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C824u;
    // 0x30c824: 0x0  nop
    ctx->pc = 0x30c824u;
    // NOP
label_30c828:
    // 0x30c828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c830: 0xc0c32a8  jal         func_30CAA0
    ctx->pc = 0x30C830u;
    SET_GPR_U32(ctx, 31, 0x30C838u);
    ctx->pc = 0x30C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C830u;
    // 0x30c834: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAA0u, 0x30C830u, 0x30C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C838u;
label_30c838:
    // 0x30c838: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30C838u;
    {
        const bool branch_taken_0x30c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c838) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C840u;
label_30c840:
    // 0x30c840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c848: 0xc0c3330  jal         func_30CCC0
    ctx->pc = 0x30C848u;
    SET_GPR_U32(ctx, 31, 0x30C850u);
    ctx->pc = 0x30C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C848u;
    // 0x30c84c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCC0u, 0x30C848u, 0x30C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C850u;
label_30c850:
    // 0x30c850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30C850u;
    {
        const bool branch_taken_0x30c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c850) {
            ctx->pc = 0x30C860u;
            goto label_30c860;
        }
    }
    ctx->pc = 0x30C858u;
label_30c858:
    // 0x30c858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c85c: 0x0  nop
    ctx->pc = 0x30c85cu;
    // NOP
label_30c860:
    // 0x30c860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c874: 0x3e00008  jr          $ra
    ctx->pc = 0x30C874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C874u;
        // 0x30c878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C87Cu;
}
