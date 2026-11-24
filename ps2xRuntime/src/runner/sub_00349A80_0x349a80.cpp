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

// Function: sub_00349A80
// Address: 0x349a80 - 0x349b08
void sub_00349A80_0x349a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349A80_0x349a80");
#endif

    switch (ctx->pc) {
        case 0x349ac4u: goto label_349ac4;
        case 0x349adcu: goto label_349adc;
        default: break;
    }

    ctx->pc = 0x349a80u;

    // 0x349a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x349a88: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x349A88u;
    {
        const bool branch_taken_0x349a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x349A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A88u;
        // 0x349a8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a88) {
            ctx->pc = 0x349A98u;
            goto label_349a98;
        }
    }
    ctx->pc = 0x349A90u;
    // 0x349a90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x349A90u;
    {
        const bool branch_taken_0x349a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A90u;
        // 0x349a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a90) {
            ctx->pc = 0x349AF8u;
            goto label_349af8;
        }
    }
    ctx->pc = 0x349A98u;
label_349a98:
    // 0x349a98: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x349a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x349a9c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x349a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x349aa0: 0x94650044  lhu         $a1, 0x44($v1)
    ctx->pc = 0x349aa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x349aa4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x349aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349aa8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349AA8u;
    {
        const bool branch_taken_0x349aa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x349AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AA8u;
        // 0x349aac: 0x24700044  addiu       $s0, $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349aa8) {
            ctx->pc = 0x349AB8u;
            goto label_349ab8;
        }
    }
    ctx->pc = 0x349AB0u;
    // 0x349ab0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x349AB0u;
    {
        const bool branch_taken_0x349ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AB0u;
        // 0x349ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ab0) {
            ctx->pc = 0x349AF8u;
            goto label_349af8;
        }
    }
    ctx->pc = 0x349AB8u;
label_349ab8:
    // 0x349ab8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x349ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x349abc: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x349ABCu;
    SET_GPR_U32(ctx, 31, 0x349AC4u);
    ctx->pc = 0x349AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349ABCu;
    // 0x349ac0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x349ABCu, 0x349AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AC4u;
label_349ac4:
    // 0x349ac4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x349AC4u;
    {
        const bool branch_taken_0x349ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AC4u;
        // 0x349ac8: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ac4) {
            ctx->pc = 0x349AF0u;
            goto label_349af0;
        }
    }
    ctx->pc = 0x349ACCu;
    // 0x349acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x349accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ad0: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x349ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x349ad4: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x349AD4u;
    SET_GPR_U32(ctx, 31, 0x349ADCu);
    ctx->pc = 0x349AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AD4u;
    // 0x349ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x349AD4u, 0x349ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349ADCu;
label_349adc:
    // 0x349adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349ADCu;
    {
        const bool branch_taken_0x349adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349ADCu;
        // 0x349ae0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349adc) {
            ctx->pc = 0x349AF0u;
            goto label_349af0;
        }
    }
    ctx->pc = 0x349AE4u;
    // 0x349ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349AE8u;
    {
        const bool branch_taken_0x349ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AE8u;
        // 0x349aec: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ae8) {
            ctx->pc = 0x349AF8u;
            goto label_349af8;
        }
    }
    ctx->pc = 0x349AF0u;
label_349af0:
    // 0x349af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349af4: 0x0  nop
    ctx->pc = 0x349af4u;
    // NOP
label_349af8:
    // 0x349af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b00: 0x3e00008  jr          $ra
    ctx->pc = 0x349B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B00u;
        // 0x349b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349B08u;
}
