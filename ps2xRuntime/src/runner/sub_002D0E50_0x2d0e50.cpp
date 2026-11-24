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

// Function: sub_002D0E50
// Address: 0x2d0e50 - 0x2d0ec8
void sub_002D0E50_0x2d0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0E50_0x2d0e50");
#endif

    ctx->pc = 0x2d0e50u;

    // 0x2d0e50: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d0e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0e54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0e58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0E58u;
    {
        const bool branch_taken_0x2d0e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E58u;
        // 0x2d0e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e58) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0E60u;
    // 0x2d0e60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0E60u;
    {
        const bool branch_taken_0x2d0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e60) {
            ctx->pc = 0x2D0EB0u;
            goto label_2d0eb0;
        }
    }
    ctx->pc = 0x2D0E68u;
label_2d0e68:
    // 0x2d0e68: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x2d0e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2d0e6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0E6Cu;
    {
        const bool branch_taken_0x2d0e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E6Cu;
        // 0x2d0e70: 0x28610025  slti        $at, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e6c) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E74u;
    // 0x2d0e74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E74u;
    {
        const bool branch_taken_0x2d0e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E74u;
        // 0x2d0e78: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e74) {
            ctx->pc = 0x2D0E88u;
            goto label_2d0e88;
        }
    }
    ctx->pc = 0x2D0E7Cu;
    // 0x2d0e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0E7Cu;
    {
        const bool branch_taken_0x2d0e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e7c) {
            ctx->pc = 0x2D0EB0u;
            goto label_2d0eb0;
        }
    }
    ctx->pc = 0x2D0E84u;
    // 0x2d0e84: 0x0  nop
    ctx->pc = 0x2d0e84u;
    // NOP
label_2d0e88:
    // 0x2d0e88: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x2d0e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d0e8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0E8Cu;
    {
        const bool branch_taken_0x2d0e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E8Cu;
        // 0x2d0e90: 0x2861001d  slti        $at, $v1, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e8c) {
            ctx->pc = 0x2D0EA8u;
            goto label_2d0ea8;
        }
    }
    ctx->pc = 0x2D0E94u;
    // 0x2d0e94: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E94u;
    {
        const bool branch_taken_0x2d0e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E94u;
        // 0x2d0e98: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e94) {
            ctx->pc = 0x2D0EA8u;
            goto label_2d0ea8;
        }
    }
    ctx->pc = 0x2D0E9Cu;
    // 0x2d0e9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0E9Cu;
    {
        const bool branch_taken_0x2d0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e9c) {
            ctx->pc = 0x2D0EB0u;
            goto label_2d0eb0;
        }
    }
    ctx->pc = 0x2D0EA4u;
    // 0x2d0ea4: 0x0  nop
    ctx->pc = 0x2d0ea4u;
    // NOP
label_2d0ea8:
    // 0x2d0ea8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d0eac: 0x0  nop
    ctx->pc = 0x2d0eacu;
    // NOP
label_2d0eb0:
    // 0x2d0eb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d0eb4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d0eb8: 0x244265c0  addiu       $v0, $v0, 0x65C0
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
    // 0x2d0ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EC0u;
        // 0x2d0ec4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0EC8u;
}
