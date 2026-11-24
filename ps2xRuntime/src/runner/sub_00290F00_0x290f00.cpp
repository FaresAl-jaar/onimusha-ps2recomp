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

// Function: sub_00290F00
// Address: 0x290f00 - 0x290f4c
void sub_00290F00_0x290f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F00_0x290f00");
#endif

    switch (ctx->pc) {
        case 0x290f14u: goto label_290f14;
        case 0x290f3cu: goto label_290f3c;
        default: break;
    }

    ctx->pc = 0x290f00u;

    // 0x290f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290f04: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290f0c: 0xc0e3718  jal         func_38DC60
    ctx->pc = 0x290F0Cu;
    SET_GPR_U32(ctx, 31, 0x290F14u);
    ctx->pc = 0x290F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F0Cu;
    // 0x290f10: 0x24842e70  addiu       $a0, $a0, 0x2E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DC60u, 0x290F0Cu, 0x290F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F14u;
label_290f14:
    // 0x290f14: 0x9783881c  lhu         $v1, -0x77E4($gp)
    ctx->pc = 0x290f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x290f18: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x290F18u;
    {
        const bool branch_taken_0x290f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F18u;
        // 0x290f1c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f18) {
            ctx->pc = 0x290F40u;
            goto label_290f40;
        }
    }
    ctx->pc = 0x290F20u;
    // 0x290f20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x290f24: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x290f28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x290f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x290f2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F2Cu;
    {
        const bool branch_taken_0x290f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F2Cu;
        // 0x290f30: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f2c) {
            ctx->pc = 0x290F40u;
            goto label_290f40;
        }
    }
    ctx->pc = 0x290F34u;
    // 0x290f34: 0xc0d0a1c  jal         func_342870
    ctx->pc = 0x290F34u;
    SET_GPR_U32(ctx, 31, 0x290F3Cu);
    ctx->pc = 0x290F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F34u;
    // 0x290f38: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342870u, 0x290F34u, 0x290F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F3Cu;
label_290f3c:
    // 0x290f3c: 0x0  nop
    ctx->pc = 0x290f3cu;
    // NOP
label_290f40:
    // 0x290f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290f44: 0x3e00008  jr          $ra
    ctx->pc = 0x290F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F44u;
        // 0x290f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F4Cu;
}
