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

// Function: sub_003B9AF0
// Address: 0x3b9af0 - 0x3ba01c
void sub_003B9AF0_0x3b9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9AF0_0x3b9af0");
#endif

    switch (ctx->pc) {
        case 0x3b9b1cu: goto label_3b9b1c;
        case 0x3b9b78u: goto label_3b9b78;
        case 0x3b9ba0u: goto label_3b9ba0;
        case 0x3b9bc8u: goto label_3b9bc8;
        case 0x3b9c00u: goto label_3b9c00;
        case 0x3b9c50u: goto label_3b9c50;
        case 0x3b9c64u: goto label_3b9c64;
        case 0x3b9ca8u: goto label_3b9ca8;
        case 0x3b9d30u: goto label_3b9d30;
        case 0x3b9d40u: goto label_3b9d40;
        case 0x3b9df0u: goto label_3b9df0;
        case 0x3b9e04u: goto label_3b9e04;
        case 0x3b9e70u: goto label_3b9e70;
        case 0x3b9e84u: goto label_3b9e84;
        case 0x3b9f30u: goto label_3b9f30;
        default: break;
    }

    ctx->pc = 0x3b9af0u;

    // 0x3b9af0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b9af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b9af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b9afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b9b00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9b08: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b9b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b9b0c: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x3b9b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x3b9b10: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x3b9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x3b9b14: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B9B14u;
    SET_GPR_U32(ctx, 31, 0x3B9B1Cu);
    ctx->pc = 0x3B9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B14u;
    // 0x3b9b18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B9B14u, 0x3B9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B1Cu;
label_3b9b1c:
    // 0x3b9b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b20: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3b9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b9b24: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3b9b24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3b9b28: 0x92422b5a  lbu         $v0, 0x2B5A($s2)
    ctx->pc = 0x3b9b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11098)));
    // 0x3b9b2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b9b30: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x3b9b30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b9b34: 0x10200132  beqz        $at, . + 4 + (0x132 << 2)
    ctx->pc = 0x3B9B34u;
    {
        const bool branch_taken_0x3b9b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B34u;
        // 0x3b9b38: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9b34) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9B3Cu;
    // 0x3b9b3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b9b40: 0x24632d40  addiu       $v1, $v1, 0x2D40
    ctx->pc = 0x3b9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11584));
    // 0x3b9b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b9b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9b4c: 0x400008  jr          $v0
    ctx->pc = 0x3B9B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B9B58u: goto label_3b9b58;
            case 0x3B9B80u: goto label_3b9b80;
            case 0x3B9BA8u: goto label_3b9ba8;
            case 0x3B9BD0u: goto label_3b9bd0;
            case 0x3B9C08u: goto label_3b9c08;
            case 0x3B9D20u: goto label_3b9d20;
            case 0x3BA000u: goto label_3ba000;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9B4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B9B54u;
    // 0x3b9b54: 0x0  nop
    ctx->pc = 0x3b9b54u;
    // NOP
label_3b9b58:
    // 0x3b9b58: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3b9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3b9b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b9b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9b6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b9b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b70: 0xc0ee8d8  jal         func_3BA360
    ctx->pc = 0x3B9B70u;
    SET_GPR_U32(ctx, 31, 0x3B9B78u);
    ctx->pc = 0x3B9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B70u;
    // 0x3b9b74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA360u, 0x3B9B70u, 0x3B9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B78u;
label_3b9b78:
    // 0x3b9b78: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x3B9B78u;
    {
        const bool branch_taken_0x3b9b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9b78) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9B80u;
label_3b9b80:
    // 0x3b9b80: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3b9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3b9b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b90: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3b9b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b9b94: 0x2407fe39  addiu       $a3, $zero, -0x1C7
    ctx->pc = 0x3b9b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966841));
    // 0x3b9b98: 0xc0ee8d8  jal         func_3BA360
    ctx->pc = 0x3B9B98u;
    SET_GPR_U32(ctx, 31, 0x3B9BA0u);
    ctx->pc = 0x3B9B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B98u;
    // 0x3b9b9c: 0x240800e3  addiu       $t0, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA360u, 0x3B9B98u, 0x3B9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BA0u;
label_3b9ba0:
    // 0x3b9ba0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3B9BA0u;
    {
        const bool branch_taken_0x3b9ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9ba0) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9BA8u;
label_3b9ba8:
    // 0x3b9ba8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3b9bac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bb8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3b9bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b9bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b9bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bc0: 0xc0ee8d8  jal         func_3BA360
    ctx->pc = 0x3B9BC0u;
    SET_GPR_U32(ctx, 31, 0x3B9BC8u);
    ctx->pc = 0x3B9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9BC0u;
    // 0x3b9bc4: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA360u, 0x3B9BC0u, 0x3B9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BC8u;
label_3b9bc8:
    // 0x3b9bc8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x3B9BC8u;
    {
        const bool branch_taken_0x3b9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9bc8) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9BD0u;
label_3b9bd0:
    // 0x3b9bd0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9BD0u;
    {
        const bool branch_taken_0x3b9bd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9bd0) {
            ctx->pc = 0x3B9BE0u;
            goto label_3b9be0;
        }
    }
    ctx->pc = 0x3B9BD8u;
    // 0x3b9bd8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b9bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bdc: 0x0  nop
    ctx->pc = 0x3b9bdcu;
    // NOP
label_3b9be0:
    // 0x3b9be0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3b9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3b9be4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b9becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bf0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3b9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b9bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b9bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bf8: 0xc0ee8d8  jal         func_3BA360
    ctx->pc = 0x3B9BF8u;
    SET_GPR_U32(ctx, 31, 0x3B9C00u);
    ctx->pc = 0x3B9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9BF8u;
    // 0x3b9bfc: 0x240802aa  addiu       $t0, $zero, 0x2AA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA360u, 0x3B9BF8u, 0x3B9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C00u;
label_3b9c00:
    // 0x3b9c00: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x3B9C00u;
    {
        const bool branch_taken_0x3b9c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c00) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9C08u;
label_3b9c08:
    // 0x3b9c08: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x3b9c08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3b9c0c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b9c10: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3b9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3b9c14: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3b9c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3b9c18: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9c20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b9c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9c24: 0xa6452b5e  sh          $a1, 0x2B5E($s2)
    ctx->pc = 0x3b9c24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11102), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b9c28: 0x86422b5e  lh          $v0, 0x2B5E($s2)
    ctx->pc = 0x3b9c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11102)));
    // 0x3b9c2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b9c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9c30: 0x0  nop
    ctx->pc = 0x3b9c30u;
    // NOP
    // 0x3b9c34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b9c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b9c38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9c38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b9c3c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b9c3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b9c40: 0x0  nop
    ctx->pc = 0x3b9c40u;
    // NOP
    // 0x3b9c44: 0x0  nop
    ctx->pc = 0x3b9c44u;
    // NOP
    // 0x3b9c48: 0xc096784  jal         func_259E10
    ctx->pc = 0x3B9C48u;
    SET_GPR_U32(ctx, 31, 0x3B9C50u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3B9C48u, 0x3B9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C50u;
label_3b9c50:
    // 0x3b9c50: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3b9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3b9c54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3b9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b9c58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9c5c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B9C5Cu;
    SET_GPR_U32(ctx, 31, 0x3B9C64u);
    ctx->pc = 0x3B9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C5Cu;
    // 0x3b9c60: 0x26452b60  addiu       $a1, $s2, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B9C5Cu, 0x3B9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C64u;
label_3b9c64:
    // 0x3b9c64: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x3b9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b9c68: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3b9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b9c6c: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9c70: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3b9c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9c74: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3b9c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9c78: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3b9c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3b9c7c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3b9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3b9c80: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3b9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3b9c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c8c: 0x26462b60  addiu       $a2, $s2, 0x2B60
    ctx->pc = 0x3b9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9c90: 0xc6412b64  lwc1        $f1, 0x2B64($s2)
    ctx->pc = 0x3b9c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9c94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b9c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b9c98: 0xe6402b64  swc1        $f0, 0x2B64($s2)
    ctx->pc = 0x3b9c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11108), bits); }
    // 0x3b9c9c: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x3b9c9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3b9ca0: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x3B9CA0u;
    SET_GPR_U32(ctx, 31, 0x3B9CA8u);
    ctx->pc = 0x3B9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9CA0u;
    // 0x3b9ca4: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2010u, 0x3B9CA0u, 0x3B9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9CA8u;
label_3b9ca8:
    // 0x3b9ca8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b9cac: 0x92442b5c  lbu         $a0, 0x2B5C($s2)
    ctx->pc = 0x3b9cacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3b9cb0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b9cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b9cb4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b9cb8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3b9cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b9cbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b9cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9cc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b9cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9cc8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b9ccc: 0xa2422b5c  sb          $v0, 0x2B5C($s2)
    ctx->pc = 0x3b9cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11100), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b9cd0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b9cd4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b9cd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b9cd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b9cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b9cdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b9cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b9ce0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9CE0u;
    {
        const bool branch_taken_0x3b9ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b9ce0) {
            ctx->pc = 0x3B9CF8u;
            goto label_3b9cf8;
        }
    }
    ctx->pc = 0x3B9CE8u;
    // 0x3b9ce8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9cec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9cf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9CF0u;
    {
        const bool branch_taken_0x3b9cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9CF0u;
        // 0x3b9cf4: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9cf0) {
            ctx->pc = 0x3B9D14u;
            goto label_3b9d14;
        }
    }
    ctx->pc = 0x3B9CF8u;
label_3b9cf8:
    // 0x3b9cf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b9cf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b9cfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b9d00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9d04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9d08: 0x0  nop
    ctx->pc = 0x3b9d08u;
    // NOP
    // 0x3b9d0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b9d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9d10: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3b9d10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b9d14:
    // 0x3b9d14: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x3B9D14u;
    {
        const bool branch_taken_0x3b9d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9d14) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9D1Cu;
    // 0x3b9d1c: 0x0  nop
    ctx->pc = 0x3b9d1cu;
    // NOP
label_3b9d20:
    // 0x3b9d20: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9D20u;
    {
        const bool branch_taken_0x3b9d20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D20u;
        // 0x3b9d24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d20) {
            ctx->pc = 0x3B9D30u;
            goto label_3b9d30;
        }
    }
    ctx->pc = 0x3B9D28u;
    // 0x3b9d28: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3B9D28u;
    SET_GPR_U32(ctx, 31, 0x3B9D30u);
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3B9D28u, 0x3B9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9D30u;
label_3b9d30:
    // 0x3b9d30: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B9D30u;
    {
        const bool branch_taken_0x3b9d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D30u;
        // 0x3b9d34: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d30) {
            ctx->pc = 0x3B9DA8u;
            goto label_3b9da8;
        }
    }
    ctx->pc = 0x3B9D38u;
    // 0x3b9d38: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B9D38u;
    SET_GPR_U32(ctx, 31, 0x3B9D40u);
    ctx->pc = 0x3B9D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9D38u;
    // 0x3b9d3c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B9D38u, 0x3B9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9D40u;
label_3b9d40:
    // 0x3b9d40: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b9d44: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3b9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b9d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b9d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9d50: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9d54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b9d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b9d58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b9d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b9d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b9d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9d64: 0x0  nop
    ctx->pc = 0x3b9d64u;
    // NOP
    // 0x3b9d68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b9d68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b9d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b9d70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b9d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b9d74: 0x0  nop
    ctx->pc = 0x3b9d74u;
    // NOP
    // 0x3b9d78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b9d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b9d7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9d7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b9d80: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b9d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b9d84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b9d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b9d8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b9d90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b9d94: 0xa6422b5e  sh          $v0, 0x2B5E($s2)
    ctx->pc = 0x3b9d94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11102), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b9d98: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3b9d98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9d9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B9D9Cu;
    {
        const bool branch_taken_0x3b9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D9Cu;
        // 0x3b9da0: 0x7c850000  sq          $a1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d9c) {
            ctx->pc = 0x3B9E20u;
            goto label_3b9e20;
        }
    }
    ctx->pc = 0x3B9DA4u;
    // 0x3b9da4: 0x0  nop
    ctx->pc = 0x3b9da4u;
    // NOP
label_3b9da8:
    // 0x3b9da8: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x3b9da8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3b9dac: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b9db0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3b9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3b9db4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3b9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3b9db8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b9dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9dc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b9dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9dc4: 0xa6452b5e  sh          $a1, 0x2B5E($s2)
    ctx->pc = 0x3b9dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11102), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b9dc8: 0x86422b5e  lh          $v0, 0x2B5E($s2)
    ctx->pc = 0x3b9dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11102)));
    // 0x3b9dcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b9dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9dd0: 0x0  nop
    ctx->pc = 0x3b9dd0u;
    // NOP
    // 0x3b9dd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b9dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b9dd8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9dd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b9ddc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b9ddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b9de0: 0x0  nop
    ctx->pc = 0x3b9de0u;
    // NOP
    // 0x3b9de4: 0x0  nop
    ctx->pc = 0x3b9de4u;
    // NOP
    // 0x3b9de8: 0xc096784  jal         func_259E10
    ctx->pc = 0x3B9DE8u;
    SET_GPR_U32(ctx, 31, 0x3B9DF0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3B9DE8u, 0x3B9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9DF0u;
label_3b9df0:
    // 0x3b9df0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3b9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3b9df4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b9df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9dfc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B9DFCu;
    SET_GPR_U32(ctx, 31, 0x3B9E04u);
    ctx->pc = 0x3B9E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9DFCu;
    // 0x3b9e00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B9DFCu, 0x3B9E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E04u;
label_3b9e04:
    // 0x3b9e04: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x3b9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b9e08: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3b9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b9e0c: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9e10: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3b9e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9e14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3b9e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9e18: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3b9e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3b9e1c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3b9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_3b9e20:
    // 0x3b9e20: 0x86452b5e  lh          $a1, 0x2B5E($s2)
    ctx->pc = 0x3b9e20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11102)));
    // 0x3b9e24: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b9e28: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3b9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3b9e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9e30: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3b9e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3b9e34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b9e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9e38: 0x26442b70  addiu       $a0, $s2, 0x2B70
    ctx->pc = 0x3b9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3b9e3c: 0x24a20355  addiu       $v0, $a1, 0x355
    ctx->pc = 0x3b9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 853));
    // 0x3b9e40: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b9e44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b9e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b9e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b9e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b9e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9e50: 0x0  nop
    ctx->pc = 0x3b9e50u;
    // NOP
    // 0x3b9e54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b9e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b9e58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9e58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b9e5c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b9e5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b9e60: 0x0  nop
    ctx->pc = 0x3b9e60u;
    // NOP
    // 0x3b9e64: 0x0  nop
    ctx->pc = 0x3b9e64u;
    // NOP
    // 0x3b9e68: 0xc096784  jal         func_259E10
    ctx->pc = 0x3B9E68u;
    SET_GPR_U32(ctx, 31, 0x3B9E70u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3B9E68u, 0x3B9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E70u;
label_3b9e70:
    // 0x3b9e70: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3b9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3b9e74: 0x26442b70  addiu       $a0, $s2, 0x2B70
    ctx->pc = 0x3b9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3b9e78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b9e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b9e7c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B9E7Cu;
    SET_GPR_U32(ctx, 31, 0x3B9E84u);
    ctx->pc = 0x3B9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9E7Cu;
    // 0x3b9e80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B9E7Cu, 0x3B9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E84u;
label_3b9e84:
    // 0x3b9e84: 0x26432b60  addiu       $v1, $s2, 0x2B60
    ctx->pc = 0x3b9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9e88: 0x26422b70  addiu       $v0, $s2, 0x2B70
    ctx->pc = 0x3b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3b9e8c: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9e90: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3b9e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9e94: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3b9e94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9e98: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3b9e98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3b9e9c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3b9e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3b9ea0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x3b9ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x3b9ea4: 0x26432b60  addiu       $v1, $s2, 0x2B60
    ctx->pc = 0x3b9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9ea8: 0x26422b70  addiu       $v0, $s2, 0x2B70
    ctx->pc = 0x3b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3b9eac: 0xc424a298  lwc1        $f4, -0x5D68($at)
    ctx->pc = 0x3b9eacu;
    { uint32_t bits = FAST_READ32(0x40A298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b9eb0: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3b9eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9eb4: 0xc6412b78  lwc1        $f1, 0x2B78($s2)
    ctx->pc = 0x3b9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9eb8: 0xc6422b70  lwc1        $f2, 0x2B70($s2)
    ctx->pc = 0x3b9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b9ebc: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3b9ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3b9ec0: 0xc4237298  lwc1        $f3, 0x7298($at)
    ctx->pc = 0x3b9ec0u;
    { uint32_t bits = FAST_READ32(0x407298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b9ec4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3b9ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3b9ec8: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3b9ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3b9ecc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3b9eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b9ed0: 0xe6412b70  swc1        $f1, 0x2B70($s2)
    ctx->pc = 0x3b9ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11120), bits); }
    // 0x3b9ed4: 0xc6412b74  lwc1        $f1, 0x2B74($s2)
    ctx->pc = 0x3b9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9ed8: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x3b9ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3b9edc: 0xe6412b74  swc1        $f1, 0x2B74($s2)
    ctx->pc = 0x3b9edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11124), bits); }
    // 0x3b9ee0: 0xc6412b78  lwc1        $f1, 0x2B78($s2)
    ctx->pc = 0x3b9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9ee4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3b9ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3b9ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b9ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b9eec: 0xe6402b78  swc1        $f0, 0x2B78($s2)
    ctx->pc = 0x3b9eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11128), bits); }
    // 0x3b9ef0: 0xc6402b7c  lwc1        $f0, 0x2B7C($s2)
    ctx->pc = 0x3b9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b9ef4: 0xe6402b7c  swc1        $f0, 0x2B7C($s2)
    ctx->pc = 0x3b9ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11132), bits); }
    // 0x3b9ef8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3b9ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9efc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3b9efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b9f00: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3b9f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3b9f04: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3b9f04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3b9f08: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3b9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3b9f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9f14: 0x26462b60  addiu       $a2, $s2, 0x2B60
    ctx->pc = 0x3b9f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3b9f18: 0xc6412b64  lwc1        $f1, 0x2B64($s2)
    ctx->pc = 0x3b9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9f1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b9f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b9f20: 0xe6402b64  swc1        $f0, 0x2B64($s2)
    ctx->pc = 0x3b9f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11108), bits); }
    // 0x3b9f24: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x3b9f24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3b9f28: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x3B9F28u;
    SET_GPR_U32(ctx, 31, 0x3B9F30u);
    ctx->pc = 0x3B9F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9F28u;
    // 0x3b9f2c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2010u, 0x3B9F28u, 0x3B9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9F30u;
label_3b9f30:
    // 0x3b9f30: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b9f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b9f34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b9f38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b9f3c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b9f40: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3b9f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b9f44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b9f48: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b9f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b9f4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b9f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9f54: 0x0  nop
    ctx->pc = 0x3b9f54u;
    // NOP
    // 0x3b9f58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b9f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b9f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b9f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b9f60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9F60u;
    {
        const bool branch_taken_0x3b9f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b9f60) {
            ctx->pc = 0x3B9F78u;
            goto label_3b9f78;
        }
    }
    ctx->pc = 0x3B9F68u;
    // 0x3b9f68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9f6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9f70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9F70u;
    {
        const bool branch_taken_0x3b9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F70u;
        // 0x3b9f74: 0xa2432b5d  sb          $v1, 0x2B5D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f70) {
            ctx->pc = 0x3B9F94u;
            goto label_3b9f94;
        }
    }
    ctx->pc = 0x3B9F78u;
label_3b9f78:
    // 0x3b9f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b9f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b9f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b9f80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9f84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9f88: 0x0  nop
    ctx->pc = 0x3b9f88u;
    // NOP
    // 0x3b9f8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b9f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9f90: 0xa2432b5d  sb          $v1, 0x2B5D($s2)
    ctx->pc = 0x3b9f90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11101), (uint8_t)GPR_U32(ctx, 3));
label_3b9f94:
    // 0x3b9f94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b9f98: 0x92442b5c  lbu         $a0, 0x2B5C($s2)
    ctx->pc = 0x3b9f98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3b9f9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b9f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b9fa0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b9fa4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b9fa8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b9fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b9fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9fb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b9fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b9fb4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b9fb8: 0xa2422b5c  sb          $v0, 0x2B5C($s2)
    ctx->pc = 0x3b9fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11100), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b9fbc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b9fc0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b9fc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b9fc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b9fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b9fc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b9fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b9fcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9FCCu;
    {
        const bool branch_taken_0x3b9fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b9fcc) {
            ctx->pc = 0x3B9FE4u;
            goto label_3b9fe4;
        }
    }
    ctx->pc = 0x3B9FD4u;
    // 0x3b9fd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9fd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B9FDCu;
    {
        const bool branch_taken_0x3b9fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FDCu;
        // 0x3b9fe0: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9fdc) {
            ctx->pc = 0x3BA000u;
            goto label_3ba000;
        }
    }
    ctx->pc = 0x3B9FE4u;
label_3b9fe4:
    // 0x3b9fe4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b9fe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b9fe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b9fec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b9fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b9ff0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b9ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b9ff4: 0x0  nop
    ctx->pc = 0x3b9ff4u;
    // NOP
    // 0x3b9ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b9ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9ffc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3b9ffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ba000:
    // 0x3ba000: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ba000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ba004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ba008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ba00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba014: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA014u;
        // 0x3ba018: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA01Cu;
}
