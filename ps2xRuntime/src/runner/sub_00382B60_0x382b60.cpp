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

// Function: sub_00382B60
// Address: 0x382b60 - 0x382ccc
void sub_00382B60_0x382b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382B60_0x382b60");
#endif

    switch (ctx->pc) {
        case 0x382b90u: goto label_382b90;
        case 0x382bd4u: goto label_382bd4;
        case 0x382be0u: goto label_382be0;
        case 0x382c08u: goto label_382c08;
        case 0x382c44u: goto label_382c44;
        case 0x382c90u: goto label_382c90;
        default: break;
    }

    ctx->pc = 0x382b60u;

    // 0x382b60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x382b64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x382b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x382b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x382b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x382b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x382b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x382b70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x382b70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x382b78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x382b78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x382b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382b88: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x382B88u;
    SET_GPR_U32(ctx, 31, 0x382B90u);
    ctx->pc = 0x382B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B88u;
    // 0x382b8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x382B88u, 0x382B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B90u;
label_382b90:
    // 0x382b90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382B90u;
    {
        const bool branch_taken_0x382b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382b90) {
            ctx->pc = 0x382BA0u;
            goto label_382ba0;
        }
    }
    ctx->pc = 0x382B98u;
    // 0x382b98: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x382B98u;
    {
        const bool branch_taken_0x382b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B98u;
        // 0x382b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b98) {
            ctx->pc = 0x382CA8u;
            goto label_382ca8;
        }
    }
    ctx->pc = 0x382BA0u;
label_382ba0:
    // 0x382ba0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x382ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x382ba4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x382ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x382ba8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x382ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382bac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x382bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x382bb0: 0x94450044  lhu         $a1, 0x44($v0)
    ctx->pc = 0x382bb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x382bb4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382BB4u;
    {
        const bool branch_taken_0x382bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x382bb4) {
            ctx->pc = 0x382BC8u;
            goto label_382bc8;
        }
    }
    ctx->pc = 0x382BBCu;
    // 0x382bbc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x382BBCu;
    {
        const bool branch_taken_0x382bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BBCu;
        // 0x382bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bbc) {
            ctx->pc = 0x382CA8u;
            goto label_382ca8;
        }
    }
    ctx->pc = 0x382BC4u;
    // 0x382bc4: 0x0  nop
    ctx->pc = 0x382bc4u;
    // NOP
label_382bc8:
    // 0x382bc8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x382bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x382bcc: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x382BCCu;
    SET_GPR_U32(ctx, 31, 0x382BD4u);
    ctx->pc = 0x382BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BCCu;
    // 0x382bd0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x382BCCu, 0x382BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BD4u;
label_382bd4:
    // 0x382bd4: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x382bd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x382bd8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x382BD8u;
    SET_GPR_U32(ctx, 31, 0x382BE0u);
    ctx->pc = 0x382BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BD8u;
    // 0x382bdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x382BD8u, 0x382BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BE0u;
label_382be0:
    // 0x382be0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382BE0u;
    {
        const bool branch_taken_0x382be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382be0) {
            ctx->pc = 0x382BF0u;
            goto label_382bf0;
        }
    }
    ctx->pc = 0x382BE8u;
    // 0x382be8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x382BE8u;
    {
        const bool branch_taken_0x382be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BE8u;
        // 0x382bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382be8) {
            ctx->pc = 0x382CA8u;
            goto label_382ca8;
        }
    }
    ctx->pc = 0x382BF0u;
label_382bf0:
    // 0x382bf0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x382bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x382bf4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x382BF4u;
    {
        const bool branch_taken_0x382bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BF4u;
        // 0x382bf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bf4) {
            ctx->pc = 0x382C70u;
            goto label_382c70;
        }
    }
    ctx->pc = 0x382BFCu;
    // 0x382bfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x382bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c00: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x382c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c04: 0x0  nop
    ctx->pc = 0x382c04u;
    // NOP
label_382c08:
    // 0x382c08: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x382c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x382c0c: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x382c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x382c10: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x382c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x382c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x382c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x382c18: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x382c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382c1c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x382C1Cu;
    {
        const bool branch_taken_0x382c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x382c1c) {
            ctx->pc = 0x382C58u;
            goto label_382c58;
        }
    }
    ctx->pc = 0x382C24u;
    // 0x382c24: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x382c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x382c28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x382c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x382c2c: 0x2442c170  addiu       $v0, $v0, -0x3E90
    ctx->pc = 0x382c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951280));
    // 0x382c30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c38: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x382c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x382c3c: 0xc0e0b34  jal         func_382CD0
    ctx->pc = 0x382C3Cu;
    SET_GPR_U32(ctx, 31, 0x382C44u);
    ctx->pc = 0x382C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C3Cu;
    // 0x382c40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382CD0u, 0x382C3Cu, 0x382C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C44u;
label_382c44:
    // 0x382c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382C44u;
    {
        const bool branch_taken_0x382c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382c44) {
            ctx->pc = 0x382C58u;
            goto label_382c58;
        }
    }
    ctx->pc = 0x382C4Cu;
    // 0x382c4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x382C4Cu;
    {
        const bool branch_taken_0x382c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C4Cu;
        // 0x382c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c4c) {
            ctx->pc = 0x382CA8u;
            goto label_382ca8;
        }
    }
    ctx->pc = 0x382C54u;
    // 0x382c54: 0x0  nop
    ctx->pc = 0x382c54u;
    // NOP
label_382c58:
    // 0x382c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x382c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x382c5c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x382c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x382c60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x382C60u;
    {
        const bool branch_taken_0x382c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C60u;
        // 0x382c64: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c60) {
            ctx->pc = 0x382C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382c08;
        }
    }
    ctx->pc = 0x382C68u;
    // 0x382c68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x382C68u;
    {
        const bool branch_taken_0x382c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382c68) {
            ctx->pc = 0x382CA0u;
            goto label_382ca0;
        }
    }
    ctx->pc = 0x382C70u;
label_382c70:
    // 0x382c70: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x382c70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x382c74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x382c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c7c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x382c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x382c80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x382c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x382c84: 0x2442c170  addiu       $v0, $v0, -0x3E90
    ctx->pc = 0x382c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951280));
    // 0x382c88: 0xc0e0b34  jal         func_382CD0
    ctx->pc = 0x382C88u;
    SET_GPR_U32(ctx, 31, 0x382C90u);
    ctx->pc = 0x382C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C88u;
    // 0x382c8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382CD0u, 0x382C88u, 0x382C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C90u;
label_382c90:
    // 0x382c90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382C90u;
    {
        const bool branch_taken_0x382c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382c90) {
            ctx->pc = 0x382CA0u;
            goto label_382ca0;
        }
    }
    ctx->pc = 0x382C98u;
    // 0x382c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x382C98u;
    {
        const bool branch_taken_0x382c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C98u;
        // 0x382c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c98) {
            ctx->pc = 0x382CA8u;
            goto label_382ca8;
        }
    }
    ctx->pc = 0x382CA0u;
label_382ca0:
    // 0x382ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ca4: 0x0  nop
    ctx->pc = 0x382ca4u;
    // NOP
label_382ca8:
    // 0x382ca8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x382ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x382cac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x382cacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382cb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x382cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x382CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CC4u;
        // 0x382cc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382CCCu;
}
