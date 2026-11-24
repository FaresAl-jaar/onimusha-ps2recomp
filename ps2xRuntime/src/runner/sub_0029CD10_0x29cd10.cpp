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

// Function: sub_0029CD10
// Address: 0x29cd10 - 0x29cd80
void sub_0029CD10_0x29cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CD10_0x29cd10");
#endif

    ctx->pc = 0x29cd10u;

    // 0x29cd10: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x29cd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cd14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cd18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29CD18u;
    {
        const bool branch_taken_0x29cd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD18u;
        // 0x29cd1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd18) {
            ctx->pc = 0x29CD50u;
            goto label_29cd50;
        }
    }
    ctx->pc = 0x29CD20u;
    // 0x29cd20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CD20u;
    {
        const bool branch_taken_0x29cd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd20) {
            ctx->pc = 0x29CD30u;
            goto label_29cd30;
        }
    }
    ctx->pc = 0x29CD28u;
    // 0x29cd28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29CD28u;
    {
        const bool branch_taken_0x29cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd28) {
            ctx->pc = 0x29CD70u;
            goto label_29cd70;
        }
    }
    ctx->pc = 0x29CD30u;
label_29cd30:
    // 0x29cd30: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x29cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29cd34: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29cd38: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x29cd3c: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x29cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
    // 0x29cd40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cd44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29CD44u;
    {
        const bool branch_taken_0x29cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD44u;
        // 0x29cd48: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd44) {
            ctx->pc = 0x29CD78u;
            goto label_29cd78;
        }
    }
    ctx->pc = 0x29CD4Cu;
    // 0x29cd4c: 0x0  nop
    ctx->pc = 0x29cd4cu;
    // NOP
label_29cd50:
    // 0x29cd50: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x29cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29cd54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29cd58: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x29cd5c: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x29cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x29cd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cd64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CD64u;
    {
        const bool branch_taken_0x29cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD64u;
        // 0x29cd68: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd64) {
            ctx->pc = 0x29CD78u;
            goto label_29cd78;
        }
    }
    ctx->pc = 0x29CD6Cu;
    // 0x29cd6c: 0x0  nop
    ctx->pc = 0x29cd6cu;
    // NOP
label_29cd70:
    // 0x29cd70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cd74: 0x0  nop
    ctx->pc = 0x29cd74u;
    // NOP
label_29cd78:
    // 0x29cd78: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CD80u;
}
