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

// Function: sub_003B7A60
// Address: 0x3b7a60 - 0x3b7cb8
void sub_003B7A60_0x3b7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7A60_0x3b7a60");
#endif

    switch (ctx->pc) {
        case 0x3b7b0cu: goto label_3b7b0c;
        case 0x3b7b3cu: goto label_3b7b3c;
        case 0x3b7b54u: goto label_3b7b54;
        case 0x3b7b68u: goto label_3b7b68;
        case 0x3b7b78u: goto label_3b7b78;
        case 0x3b7b88u: goto label_3b7b88;
        case 0x3b7b98u: goto label_3b7b98;
        case 0x3b7ba8u: goto label_3b7ba8;
        case 0x3b7bb8u: goto label_3b7bb8;
        case 0x3b7bc8u: goto label_3b7bc8;
        case 0x3b7bd8u: goto label_3b7bd8;
        case 0x3b7be8u: goto label_3b7be8;
        case 0x3b7bf8u: goto label_3b7bf8;
        case 0x3b7c08u: goto label_3b7c08;
        case 0x3b7c10u: goto label_3b7c10;
        case 0x3b7c18u: goto label_3b7c18;
        case 0x3b7c30u: goto label_3b7c30;
        case 0x3b7c48u: goto label_3b7c48;
        case 0x3b7c50u: goto label_3b7c50;
        case 0x3b7ca8u: goto label_3b7ca8;
        default: break;
    }

    ctx->pc = 0x3b7a60u;

    // 0x3b7a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7a64: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x3b7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x3b7a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b7a70: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3b7a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3b7a74: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3B7A74u;
    {
        const bool branch_taken_0x3b7a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A74u;
        // 0x3b7a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a74) {
            ctx->pc = 0x3B7C00u;
            goto label_3b7c00;
        }
    }
    ctx->pc = 0x3B7A7Cu;
    // 0x3b7a7c: 0x240200f9  addiu       $v0, $zero, 0xF9
    ctx->pc = 0x3b7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x3b7a80: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3B7A80u;
    {
        const bool branch_taken_0x3b7a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A80u;
        // 0x3b7a84: 0x240200f8  addiu       $v0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a80) {
            ctx->pc = 0x3B7BF0u;
            goto label_3b7bf0;
        }
    }
    ctx->pc = 0x3B7A88u;
    // 0x3b7a88: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3B7A88u;
    {
        const bool branch_taken_0x3b7a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7a88) {
            ctx->pc = 0x3B7BE0u;
            goto label_3b7be0;
        }
    }
    ctx->pc = 0x3B7A90u;
    // 0x3b7a90: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x3b7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3b7a94: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3B7A94u;
    {
        const bool branch_taken_0x3b7a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A94u;
        // 0x3b7a98: 0x240200f6  addiu       $v0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a94) {
            ctx->pc = 0x3B7BD0u;
            goto label_3b7bd0;
        }
    }
    ctx->pc = 0x3B7A9Cu;
    // 0x3b7a9c: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B7A9Cu;
    {
        const bool branch_taken_0x3b7a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7a9c) {
            ctx->pc = 0x3B7BC0u;
            goto label_3b7bc0;
        }
    }
    ctx->pc = 0x3B7AA4u;
    // 0x3b7aa4: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x3b7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x3b7aa8: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3B7AA8u;
    {
        const bool branch_taken_0x3b7aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AA8u;
        // 0x3b7aac: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7aa8) {
            ctx->pc = 0x3B7BB0u;
            goto label_3b7bb0;
        }
    }
    ctx->pc = 0x3B7AB0u;
    // 0x3b7ab0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3B7AB0u;
    {
        const bool branch_taken_0x3b7ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ab0) {
            ctx->pc = 0x3B7BA0u;
            goto label_3b7ba0;
        }
    }
    ctx->pc = 0x3B7AB8u;
    // 0x3b7ab8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3b7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3b7abc: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3B7ABCu;
    {
        const bool branch_taken_0x3b7abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7ABCu;
        // 0x3b7ac0: 0x240200f3  addiu       $v0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7abc) {
            ctx->pc = 0x3B7B90u;
            goto label_3b7b90;
        }
    }
    ctx->pc = 0x3B7AC4u;
    // 0x3b7ac4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3B7AC4u;
    {
        const bool branch_taken_0x3b7ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ac4) {
            ctx->pc = 0x3B7B80u;
            goto label_3b7b80;
        }
    }
    ctx->pc = 0x3B7ACCu;
    // 0x3b7acc: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x3b7accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3b7ad0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3B7AD0u;
    {
        const bool branch_taken_0x3b7ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AD0u;
        // 0x3b7ad4: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ad0) {
            ctx->pc = 0x3B7B70u;
            goto label_3b7b70;
        }
    }
    ctx->pc = 0x3B7AD8u;
    // 0x3b7ad8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B7AD8u;
    {
        const bool branch_taken_0x3b7ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ad8) {
            ctx->pc = 0x3B7B60u;
            goto label_3b7b60;
        }
    }
    ctx->pc = 0x3B7AE0u;
    // 0x3b7ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7ae4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7AE4u;
    {
        const bool branch_taken_0x3b7ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ae4) {
            ctx->pc = 0x3B7AF8u;
            goto label_3b7af8;
        }
    }
    ctx->pc = 0x3B7AECu;
    // 0x3b7aec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3B7AECu;
    {
        const bool branch_taken_0x3b7aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7aec) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7AF4u;
    // 0x3b7af4: 0x0  nop
    ctx->pc = 0x3b7af4u;
    // NOP
label_3b7af8:
    // 0x3b7af8: 0x92022b54  lbu         $v0, 0x2B54($s0)
    ctx->pc = 0x3b7af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11092)));
    // 0x3b7afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7AFCu;
    {
        const bool branch_taken_0x3b7afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7afc) {
            ctx->pc = 0x3B7B10u;
            goto label_3b7b10;
        }
    }
    ctx->pc = 0x3B7B04u;
    // 0x3b7b04: 0xc0edf30  jal         func_3B7CC0
    ctx->pc = 0x3B7B04u;
    SET_GPR_U32(ctx, 31, 0x3B7B0Cu);
    ctx->pc = 0x3B7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7CC0u, 0x3B7B04u, 0x3B7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B0Cu;
label_3b7b0c:
    // 0x3b7b0c: 0x0  nop
    ctx->pc = 0x3b7b0cu;
    // NOP
label_3b7b10:
    // 0x3b7b10: 0x92032b59  lbu         $v1, 0x2B59($s0)
    ctx->pc = 0x3b7b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11097)));
    // 0x3b7b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b7b18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B7B18u;
    {
        const bool branch_taken_0x3b7b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7B18u;
        // 0x3b7b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7b18) {
            ctx->pc = 0x3B7B48u;
            goto label_3b7b48;
        }
    }
    ctx->pc = 0x3B7B20u;
    // 0x3b7b20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7B20u;
    {
        const bool branch_taken_0x3b7b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7b20) {
            ctx->pc = 0x3B7B30u;
            goto label_3b7b30;
        }
    }
    ctx->pc = 0x3B7B28u;
    // 0x3b7b28: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3B7B28u;
    {
        const bool branch_taken_0x3b7b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b28) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B30u;
label_3b7b30:
    // 0x3b7b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b34: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3B7B34u;
    SET_GPR_U32(ctx, 31, 0x3B7B3Cu);
    ctx->pc = 0x3B7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B34u;
    // 0x3b7b38: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3B7B34u, 0x3B7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B3Cu;
label_3b7b3c:
    // 0x3b7b3c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3B7B3Cu;
    {
        const bool branch_taken_0x3b7b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b3c) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B44u;
    // 0x3b7b44: 0x0  nop
    ctx->pc = 0x3b7b44u;
    // NOP
label_3b7b48:
    // 0x3b7b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b4c: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3B7B4Cu;
    SET_GPR_U32(ctx, 31, 0x3B7B54u);
    ctx->pc = 0x3B7B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B4Cu;
    // 0x3b7b50: 0x240500aa  addiu       $a1, $zero, 0xAA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3B7B4Cu, 0x3B7B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B54u;
label_3b7b54:
    // 0x3b7b54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3B7B54u;
    {
        const bool branch_taken_0x3b7b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b54) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B5Cu;
    // 0x3b7b5c: 0x0  nop
    ctx->pc = 0x3b7b5cu;
    // NOP
label_3b7b60:
    // 0x3b7b60: 0xc0eefc0  jal         func_3BBF00
    ctx->pc = 0x3B7B60u;
    SET_GPR_U32(ctx, 31, 0x3B7B68u);
    ctx->pc = 0x3BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBF00u, 0x3B7B60u, 0x3B7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B68u;
label_3b7b68:
    // 0x3b7b68: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3B7B68u;
    {
        const bool branch_taken_0x3b7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b68) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B70u;
label_3b7b70:
    // 0x3b7b70: 0xc0eefec  jal         func_3BBFB0
    ctx->pc = 0x3B7B70u;
    SET_GPR_U32(ctx, 31, 0x3B7B78u);
    ctx->pc = 0x3BBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBFB0u, 0x3B7B70u, 0x3B7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B78u;
label_3b7b78:
    // 0x3b7b78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B7B78u;
    {
        const bool branch_taken_0x3b7b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b78) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B80u;
label_3b7b80:
    // 0x3b7b80: 0xc0eeffc  jal         func_3BBFF0
    ctx->pc = 0x3B7B80u;
    SET_GPR_U32(ctx, 31, 0x3B7B88u);
    ctx->pc = 0x3BBFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBFF0u, 0x3B7B80u, 0x3B7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B88u;
label_3b7b88:
    // 0x3b7b88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3B7B88u;
    {
        const bool branch_taken_0x3b7b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b88) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7B90u;
label_3b7b90:
    // 0x3b7b90: 0xc0ef144  jal         func_3BC510
    ctx->pc = 0x3B7B90u;
    SET_GPR_U32(ctx, 31, 0x3B7B98u);
    ctx->pc = 0x3BC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC510u, 0x3B7B90u, 0x3B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B98u;
label_3b7b98:
    // 0x3b7b98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B7B98u;
    {
        const bool branch_taken_0x3b7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7b98) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BA0u;
label_3b7ba0:
    // 0x3b7ba0: 0xc0ee624  jal         func_3B9890
    ctx->pc = 0x3B7BA0u;
    SET_GPR_U32(ctx, 31, 0x3B7BA8u);
    ctx->pc = 0x3B9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9890u, 0x3B7BA0u, 0x3B7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BA8u;
label_3b7ba8:
    // 0x3b7ba8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B7BA8u;
    {
        const bool branch_taken_0x3b7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ba8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BB0u;
label_3b7bb0:
    // 0x3b7bb0: 0xc0eeab4  jal         func_3BAAD0
    ctx->pc = 0x3B7BB0u;
    SET_GPR_U32(ctx, 31, 0x3B7BB8u);
    ctx->pc = 0x3BAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAAD0u, 0x3B7BB0u, 0x3B7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BB8u;
label_3b7bb8:
    // 0x3b7bb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B7BB8u;
    {
        const bool branch_taken_0x3b7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bb8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BC0u;
label_3b7bc0:
    // 0x3b7bc0: 0xc0eeb78  jal         func_3BADE0
    ctx->pc = 0x3B7BC0u;
    SET_GPR_U32(ctx, 31, 0x3B7BC8u);
    ctx->pc = 0x3BADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BADE0u, 0x3B7BC0u, 0x3B7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BC8u;
label_3b7bc8:
    // 0x3b7bc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B7BC8u;
    {
        const bool branch_taken_0x3b7bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bc8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BD0u;
label_3b7bd0:
    // 0x3b7bd0: 0xc0eed18  jal         func_3BB460
    ctx->pc = 0x3B7BD0u;
    SET_GPR_U32(ctx, 31, 0x3B7BD8u);
    ctx->pc = 0x3BB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB460u, 0x3B7BD0u, 0x3B7BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BD8u;
label_3b7bd8:
    // 0x3b7bd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B7BD8u;
    {
        const bool branch_taken_0x3b7bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bd8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BE0u;
label_3b7be0:
    // 0x3b7be0: 0xc0eea3c  jal         func_3BA8F0
    ctx->pc = 0x3B7BE0u;
    SET_GPR_U32(ctx, 31, 0x3B7BE8u);
    ctx->pc = 0x3BA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA8F0u, 0x3B7BE0u, 0x3B7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BE8u;
label_3b7be8:
    // 0x3b7be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7BE8u;
    {
        const bool branch_taken_0x3b7be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7be8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7BF0u;
label_3b7bf0:
    // 0x3b7bf0: 0xc0eea78  jal         func_3BA9E0
    ctx->pc = 0x3B7BF0u;
    SET_GPR_U32(ctx, 31, 0x3B7BF8u);
    ctx->pc = 0x3BA9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA9E0u, 0x3B7BF0u, 0x3B7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BF8u;
label_3b7bf8:
    // 0x3b7bf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7BF8u;
    {
        const bool branch_taken_0x3b7bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bf8) {
            ctx->pc = 0x3B7C08u;
            goto label_3b7c08;
        }
    }
    ctx->pc = 0x3B7C00u;
label_3b7c00:
    // 0x3b7c00: 0xc0ee938  jal         func_3BA4E0
    ctx->pc = 0x3B7C00u;
    SET_GPR_U32(ctx, 31, 0x3B7C08u);
    ctx->pc = 0x3BA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4E0u, 0x3B7C00u, 0x3B7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C08u;
label_3b7c08:
    // 0x3b7c08: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3B7C08u;
    SET_GPR_U32(ctx, 31, 0x3B7C10u);
    ctx->pc = 0x3B7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C08u;
    // 0x3b7c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3B7C08u, 0x3B7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C10u;
label_3b7c10:
    // 0x3b7c10: 0xc0ee1ac  jal         func_3B86B0
    ctx->pc = 0x3B7C10u;
    SET_GPR_U32(ctx, 31, 0x3B7C18u);
    ctx->pc = 0x3B7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C10u;
    // 0x3b7c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B86B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B86B0u, 0x3B7C10u, 0x3B7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C18u;
label_3b7c18:
    // 0x3b7c18: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b7c1c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7C20u;
    {
        const bool branch_taken_0x3b7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C20u;
        // 0x3b7c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c20) {
            ctx->pc = 0x3B7C30u;
            goto label_3b7c30;
        }
    }
    ctx->pc = 0x3B7C28u;
    // 0x3b7c28: 0xc0ee1e0  jal         func_3B8780
    ctx->pc = 0x3B7C28u;
    SET_GPR_U32(ctx, 31, 0x3B7C30u);
    ctx->pc = 0x3B8780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8780u, 0x3B7C28u, 0x3B7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C30u;
label_3b7c30:
    // 0x3b7c30: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3b7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b7c34: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7c38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7C38u;
    {
        const bool branch_taken_0x3b7c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C38u;
        // 0x3b7c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c38) {
            ctx->pc = 0x3B7C48u;
            goto label_3b7c48;
        }
    }
    ctx->pc = 0x3B7C40u;
    // 0x3b7c40: 0xc0ee14c  jal         func_3B8530
    ctx->pc = 0x3B7C40u;
    SET_GPR_U32(ctx, 31, 0x3B7C48u);
    ctx->pc = 0x3B7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C40u;
    // 0x3b7c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8530u, 0x3B7C40u, 0x3B7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C48u;
label_3b7c48:
    // 0x3b7c48: 0xc0ee154  jal         func_3B8550
    ctx->pc = 0x3B7C48u;
    SET_GPR_U32(ctx, 31, 0x3B7C50u);
    ctx->pc = 0x3B7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C48u;
    // 0x3b7c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8550u, 0x3B7C48u, 0x3B7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C50u;
label_3b7c50:
    // 0x3b7c50: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b7c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b7c54: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3b7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3b7c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7C58u;
    {
        const bool branch_taken_0x3b7c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7c58) {
            ctx->pc = 0x3B7C70u;
            goto label_3b7c70;
        }
    }
    ctx->pc = 0x3B7C60u;
    // 0x3b7c60: 0x92022b4c  lbu         $v0, 0x2B4C($s0)
    ctx->pc = 0x3b7c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b7c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b7c68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B7C68u;
    {
        const bool branch_taken_0x3b7c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7c68) {
            ctx->pc = 0x3B7C90u;
            goto label_3b7c90;
        }
    }
    ctx->pc = 0x3B7C70u;
label_3b7c70:
    // 0x3b7c70: 0x92022b4c  lbu         $v0, 0x2B4C($s0)
    ctx->pc = 0x3b7c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b7c74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b7c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b7c78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7C78u;
    {
        const bool branch_taken_0x3b7c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7c78) {
            ctx->pc = 0x3B7C90u;
            goto label_3b7c90;
        }
    }
    ctx->pc = 0x3B7C80u;
    // 0x3b7c80: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3b7c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3b7c84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3b7c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3b7c88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7C88u;
    {
        const bool branch_taken_0x3b7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C88u;
        // 0x3b7c8c: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c88) {
            ctx->pc = 0x3B7CA0u;
            goto label_3b7ca0;
        }
    }
    ctx->pc = 0x3B7C90u;
label_3b7c90:
    // 0x3b7c90: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3b7c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3b7c94: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3b7c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3b7c98: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3b7c98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7c9c: 0x0  nop
    ctx->pc = 0x3b7c9cu;
    // NOP
label_3b7ca0:
    // 0x3b7ca0: 0xc0ef368  jal         func_3BCDA0
    ctx->pc = 0x3B7CA0u;
    SET_GPR_U32(ctx, 31, 0x3B7CA8u);
    ctx->pc = 0x3B7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CA0u;
    // 0x3b7ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDA0u, 0x3B7CA0u, 0x3B7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CA8u;
label_3b7ca8:
    // 0x3b7ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CB0u;
        // 0x3b7cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7CB8u;
}
