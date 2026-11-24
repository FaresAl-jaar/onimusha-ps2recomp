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

// Function: sub_00339B10
// Address: 0x339b10 - 0x339c78
void sub_00339B10_0x339b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339B10_0x339b10");
#endif

    switch (ctx->pc) {
        case 0x339b98u: goto label_339b98;
        case 0x339bb8u: goto label_339bb8;
        case 0x339bccu: goto label_339bcc;
        case 0x339bd4u: goto label_339bd4;
        case 0x339c18u: goto label_339c18;
        case 0x339c28u: goto label_339c28;
        case 0x339c38u: goto label_339c38;
        case 0x339c50u: goto label_339c50;
        case 0x339c60u: goto label_339c60;
        default: break;
    }

    ctx->pc = 0x339b10u;

    // 0x339b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339b14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x339b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x339b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b24: 0x90840040  lbu         $a0, 0x40($a0)
    ctx->pc = 0x339b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x339b28: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x339B28u;
    {
        const bool branch_taken_0x339b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x339B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B28u;
        // 0x339b2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b28) {
            ctx->pc = 0x339C40u;
            goto label_339c40;
        }
    }
    ctx->pc = 0x339B30u;
    // 0x339b30: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x339B30u;
    {
        const bool branch_taken_0x339b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x339b30) {
            ctx->pc = 0x339BE8u;
            goto label_339be8;
        }
    }
    ctx->pc = 0x339B38u;
    // 0x339b38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x339b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339b3c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x339B3Cu;
    {
        const bool branch_taken_0x339b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x339B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B3Cu;
        // 0x339b40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b3c) {
            ctx->pc = 0x339BA8u;
            goto label_339ba8;
        }
    }
    ctx->pc = 0x339B44u;
    // 0x339b44: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339B44u;
    {
        const bool branch_taken_0x339b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x339b44) {
            ctx->pc = 0x339B60u;
            goto label_339b60;
        }
    }
    ctx->pc = 0x339B4Cu;
    // 0x339b4c: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x339B4Cu;
    {
        const bool branch_taken_0x339b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b4c) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339B54u;
    // 0x339b54: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x339B54u;
    {
        const bool branch_taken_0x339b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b54) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339B5Cu;
    // 0x339b5c: 0x0  nop
    ctx->pc = 0x339b5cu;
    // NOP
label_339b60:
    // 0x339b60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x339b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x339b64: 0x9022fc8e  lbu         $v0, -0x372($at)
    ctx->pc = 0x339b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x339b68: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339B68u;
    {
        const bool branch_taken_0x339b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x339B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B68u;
        // 0x339b6c: 0x24021a10  addiu       $v0, $zero, 0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b68) {
            ctx->pc = 0x339B74u;
            goto label_339b74;
        }
    }
    ctx->pc = 0x339B70u;
    // 0x339b70: 0x24021a24  addiu       $v0, $zero, 0x1A24
    ctx->pc = 0x339b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6692));
label_339b74:
    // 0x339b74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x339b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339b78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339b7c: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x339b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x339b80: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339b84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339b88: 0x2407ffec  addiu       $a3, $zero, -0x14
    ctx->pc = 0x339b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x339b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339b90: 0xc0ce400  jal         func_339000
    ctx->pc = 0x339B90u;
    SET_GPR_U32(ctx, 31, 0x339B98u);
    ctx->pc = 0x339B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B90u;
    // 0x339b94: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x339B90u, 0x339B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B98u;
label_339b98:
    // 0x339b98: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x339b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x339b9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x339ba0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x339BA0u;
    {
        const bool branch_taken_0x339ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BA0u;
        // 0x339ba4: 0xa2030040  sb          $v1, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ba0) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339BA8u;
label_339ba8:
    // 0x339ba8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339bac: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339bb0: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x339BB0u;
    SET_GPR_U32(ctx, 31, 0x339BB8u);
    ctx->pc = 0x339BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BB0u;
    // 0x339bb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x339BB0u, 0x339BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BB8u;
label_339bb8:
    // 0x339bb8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x339BB8u;
    {
        const bool branch_taken_0x339bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BB8u;
        // 0x339bbc: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bb8) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339BC0u;
    // 0x339bc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339bc4: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x339BC4u;
    SET_GPR_U32(ctx, 31, 0x339BCCu);
    ctx->pc = 0x339BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BC4u;
    // 0x339bc8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x339BC4u, 0x339BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BCCu;
label_339bcc:
    // 0x339bcc: 0xc0caeac  jal         func_32BAB0
    ctx->pc = 0x339BCCu;
    SET_GPR_U32(ctx, 31, 0x339BD4u);
    ctx->pc = 0x32BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BAB0u, 0x339BCCu, 0x339BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BD4u;
label_339bd4:
    // 0x339bd4: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x339bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x339bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x339bdc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x339BDCu;
    {
        const bool branch_taken_0x339bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BDCu;
        // 0x339be0: 0xa2030040  sb          $v1, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bdc) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339BE4u;
    // 0x339be4: 0x0  nop
    ctx->pc = 0x339be4u;
    // NOP
label_339be8:
    // 0x339be8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x339bec: 0x9023f82b  lbu         $v1, -0x7D5($at)
    ctx->pc = 0x339becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x90F82Bu));
    // 0x339bf0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x339bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339bf4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339bf8: 0x2402ffec  addiu       $v0, $zero, -0x14
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x339bfc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339c00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339c04: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x339c08: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x339c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x339c0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x339c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x339c10: 0xc0ce34c  jal         func_338D30
    ctx->pc = 0x339C10u;
    SET_GPR_U32(ctx, 31, 0x339C18u);
    ctx->pc = 0x339C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C10u;
    // 0x339c14: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D30u, 0x339C10u, 0x339C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C18u;
label_339c18:
    // 0x339c18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339c1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339c20: 0xc0ce2fc  jal         func_338BF0
    ctx->pc = 0x339C20u;
    SET_GPR_U32(ctx, 31, 0x339C28u);
    ctx->pc = 0x339C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C20u;
    // 0x339c24: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BF0u, 0x339C20u, 0x339C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C28u;
label_339c28:
    // 0x339c28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x339C28u;
    {
        const bool branch_taken_0x339c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C28u;
        // 0x339c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c28) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C30u;
    // 0x339c30: 0xc0ce6a4  jal         func_339A90
    ctx->pc = 0x339C30u;
    SET_GPR_U32(ctx, 31, 0x339C38u);
    ctx->pc = 0x339A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A90u, 0x339C30u, 0x339C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C38u;
label_339c38:
    // 0x339c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x339C38u;
    {
        const bool branch_taken_0x339c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c38) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C40u;
label_339c40:
    // 0x339c40: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x339c44: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339c48: 0xc0ce2fc  jal         func_338BF0
    ctx->pc = 0x339C48u;
    SET_GPR_U32(ctx, 31, 0x339C50u);
    ctx->pc = 0x339C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C48u;
    // 0x339c4c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BF0u, 0x339C48u, 0x339C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C50u;
label_339c50:
    // 0x339c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x339C50u;
    {
        const bool branch_taken_0x339c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c50) {
            ctx->pc = 0x339C68u;
            goto label_339c68;
        }
    }
    ctx->pc = 0x339C58u;
    // 0x339c58: 0xc0caeac  jal         func_32BAB0
    ctx->pc = 0x339C58u;
    SET_GPR_U32(ctx, 31, 0x339C60u);
    ctx->pc = 0x32BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BAB0u, 0x339C58u, 0x339C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C60u;
label_339c60:
    // 0x339c60: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x339c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x339c64: 0x0  nop
    ctx->pc = 0x339c64u;
    // NOP
label_339c68:
    // 0x339c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339c70: 0x3e00008  jr          $ra
    ctx->pc = 0x339C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C70u;
        // 0x339c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339C78u;
}
