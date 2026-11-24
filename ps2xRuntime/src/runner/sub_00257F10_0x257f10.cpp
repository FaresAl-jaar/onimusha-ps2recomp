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

// Function: sub_00257F10
// Address: 0x257f10 - 0x257f68
void sub_00257F10_0x257f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257F10_0x257f10");
#endif

    switch (ctx->pc) {
        case 0x257f5cu: goto label_257f5c;
        default: break;
    }

    ctx->pc = 0x257f10u;

    // 0x257f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x257f14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x257f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257f1c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x257f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x257f20: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x257f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x257f24: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x257f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x257f28: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x257f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x257f2c: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x257f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x257f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257F30u;
    {
        const bool branch_taken_0x257f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F30u;
        // 0x257f34: 0xffab0068  sd          $t3, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f30) {
            ctx->pc = 0x257F40u;
            goto label_257f40;
        }
    }
    ctx->pc = 0x257F38u;
    // 0x257f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257F38u;
    {
        const bool branch_taken_0x257f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F38u;
        // 0x257f3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f38) {
            ctx->pc = 0x257F4Cu;
            goto label_257f4c;
        }
    }
    ctx->pc = 0x257F40u;
label_257f40:
    // 0x257f40: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x257f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257f44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257f48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x257f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_257f4c:
    // 0x257f4c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x257f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257f50: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x257f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x257f54: 0xc095ff8  jal         func_257FE0
    ctx->pc = 0x257F54u;
    SET_GPR_U32(ctx, 31, 0x257F5Cu);
    ctx->pc = 0x257F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F54u;
    // 0x257f58: 0x434023  subu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257FE0u, 0x257F54u, 0x257F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F5Cu;
label_257f5c:
    // 0x257f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f60: 0x3e00008  jr          $ra
    ctx->pc = 0x257F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F60u;
        // 0x257f64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F68u;
}
