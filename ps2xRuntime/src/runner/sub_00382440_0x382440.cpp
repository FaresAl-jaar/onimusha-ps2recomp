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

// Function: sub_00382440
// Address: 0x382440 - 0x382490
void sub_00382440_0x382440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382440_0x382440");
#endif

    switch (ctx->pc) {
        case 0x382450u: goto label_382450;
        default: break;
    }

    ctx->pc = 0x382440u;

    // 0x382440: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x382440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x382444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382448: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x382448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x38244c: 0x2484b148  addiu       $a0, $a0, -0x4EB8
    ctx->pc = 0x38244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947144));
label_382450:
    // 0x382450: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x382450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382454: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382454u;
    {
        const bool branch_taken_0x382454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x382454) {
            ctx->pc = 0x382478u;
            goto label_382478;
        }
    }
    ctx->pc = 0x38245Cu;
    // 0x38245c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x38245cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x382460: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x382460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x382464: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x382464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x382468: 0x2442b148  addiu       $v0, $v0, -0x4EB8
    ctx->pc = 0x382468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947144));
    // 0x38246c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38246cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x382470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x382470u;
    {
        const bool branch_taken_0x382470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382470u;
        // 0x382474: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382470) {
            ctx->pc = 0x382488u;
            goto label_382488;
        }
    }
    ctx->pc = 0x382478u;
label_382478:
    // 0x382478: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38247c: 0x10a0fff4  beqz        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x38247Cu;
    {
        const bool branch_taken_0x38247c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x382480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38247Cu;
        // 0x382480: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38247c) {
            ctx->pc = 0x382450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382450;
        }
    }
    ctx->pc = 0x382484u;
    // 0x382484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382488:
    // 0x382488: 0x3e00008  jr          $ra
    ctx->pc = 0x382488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382490u;
}
