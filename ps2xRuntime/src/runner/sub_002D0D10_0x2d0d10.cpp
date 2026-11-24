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

// Function: sub_002D0D10
// Address: 0x2d0d10 - 0x2d0db8
void sub_002D0D10_0x2d0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0D10_0x2d0d10");
#endif

    ctx->pc = 0x2d0d10u;

    // 0x2d0d10: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d0d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0d14: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2d0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2d0d18: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D0D18u;
    {
        const bool branch_taken_0x2d0d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D18u;
        // 0x2d0d1c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d18) {
            ctx->pc = 0x2D0DA0u;
            goto label_2d0da0;
        }
    }
    ctx->pc = 0x2D0D20u;
    // 0x2d0d20: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0D20u;
    {
        const bool branch_taken_0x2d0d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0d20) {
            ctx->pc = 0x2D0DA0u;
            goto label_2d0da0;
        }
    }
    ctx->pc = 0x2D0D28u;
    // 0x2d0d28: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2d0d2c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0D2Cu;
    {
        const bool branch_taken_0x2d0d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D2Cu;
        // 0x2d0d30: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d2c) {
            ctx->pc = 0x2D0D98u;
            goto label_2d0d98;
        }
    }
    ctx->pc = 0x2D0D34u;
    // 0x2d0d34: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0D34u;
    {
        const bool branch_taken_0x2d0d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0d34) {
            ctx->pc = 0x2D0D98u;
            goto label_2d0d98;
        }
    }
    ctx->pc = 0x2D0D3Cu;
    // 0x2d0d3c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d0d40: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0D40u;
    {
        const bool branch_taken_0x2d0d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D40u;
        // 0x2d0d44: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d40) {
            ctx->pc = 0x2D0D90u;
            goto label_2d0d90;
        }
    }
    ctx->pc = 0x2D0D48u;
    // 0x2d0d48: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0D48u;
    {
        const bool branch_taken_0x2d0d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0d48) {
            ctx->pc = 0x2D0D90u;
            goto label_2d0d90;
        }
    }
    ctx->pc = 0x2D0D50u;
    // 0x2d0d50: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d0d54: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0D54u;
    {
        const bool branch_taken_0x2d0d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D54u;
        // 0x2d0d58: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d54) {
            ctx->pc = 0x2D0D88u;
            goto label_2d0d88;
        }
    }
    ctx->pc = 0x2D0D5Cu;
    // 0x2d0d5c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0D5Cu;
    {
        const bool branch_taken_0x2d0d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0d5c) {
            ctx->pc = 0x2D0D88u;
            goto label_2d0d88;
        }
    }
    ctx->pc = 0x2D0D64u;
    // 0x2d0d64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0d68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0D68u;
    {
        const bool branch_taken_0x2d0d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D68u;
        // 0x2d0d6c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d68) {
            ctx->pc = 0x2D0D80u;
            goto label_2d0d80;
        }
    }
    ctx->pc = 0x2D0D70u;
    // 0x2d0d70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D70u;
    {
        const bool branch_taken_0x2d0d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0d70) {
            ctx->pc = 0x2D0D80u;
            goto label_2d0d80;
        }
    }
    ctx->pc = 0x2D0D78u;
    // 0x2d0d78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D0D78u;
    {
        const bool branch_taken_0x2d0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d78) {
            ctx->pc = 0x2D0DA8u;
            goto label_2d0da8;
        }
    }
    ctx->pc = 0x2D0D80u;
label_2d0d80:
    // 0x2d0d80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D0D80u;
    {
        const bool branch_taken_0x2d0d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D80u;
        // 0x2d0d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d80) {
            ctx->pc = 0x2D0DB0u;
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0D88u;
label_2d0d88:
    // 0x2d0d88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0D88u;
    {
        const bool branch_taken_0x2d0d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D88u;
        // 0x2d0d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d88) {
            ctx->pc = 0x2D0DB0u;
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0D90u;
label_2d0d90:
    // 0x2d0d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0D90u;
    {
        const bool branch_taken_0x2d0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D90u;
        // 0x2d0d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d90) {
            ctx->pc = 0x2D0DB0u;
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0D98u;
label_2d0d98:
    // 0x2d0d98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0D98u;
    {
        const bool branch_taken_0x2d0d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D98u;
        // 0x2d0d9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d98) {
            ctx->pc = 0x2D0DB0u;
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0DA0u;
label_2d0da0:
    // 0x2d0da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0DA0u;
    {
        const bool branch_taken_0x2d0da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DA0u;
        // 0x2d0da4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0da0) {
            ctx->pc = 0x2D0DB0u;
            goto label_2d0db0;
        }
    }
    ctx->pc = 0x2D0DA8u;
label_2d0da8:
    // 0x2d0da8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dac: 0x0  nop
    ctx->pc = 0x2d0dacu;
    // NOP
label_2d0db0:
    // 0x2d0db0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0DB8u;
}
