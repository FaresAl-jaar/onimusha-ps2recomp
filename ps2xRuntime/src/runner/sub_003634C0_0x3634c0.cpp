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

// Function: sub_003634C0
// Address: 0x3634c0 - 0x36351c
void sub_003634C0_0x3634c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003634C0_0x3634c0");
#endif

    switch (ctx->pc) {
        case 0x3634dcu: goto label_3634dc;
        default: break;
    }

    ctx->pc = 0x3634c0u;

    // 0x3634c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3634c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3634c4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3634c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3634c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3634c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3634cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3634CCu;
    {
        const bool branch_taken_0x3634cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3634D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634CCu;
        // 0x3634d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3634cc) {
            ctx->pc = 0x3634E0u;
            goto label_3634e0;
        }
    }
    ctx->pc = 0x3634D4u;
    // 0x3634d4: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3634D4u;
    SET_GPR_U32(ctx, 31, 0x3634DCu);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3634D4u, 0x3634DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3634DCu;
label_3634dc:
    // 0x3634dc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3634dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3634e0:
    // 0x3634e0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3634e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3634e4: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x3634e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3634e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3634E8u;
    {
        const bool branch_taken_0x3634e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3634ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634E8u;
        // 0x3634ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3634e8) {
            ctx->pc = 0x3634F8u;
            goto label_3634f8;
        }
    }
    ctx->pc = 0x3634F0u;
    // 0x3634f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3634F0u;
    {
        const bool branch_taken_0x3634f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3634f0) {
            ctx->pc = 0x363510u;
            goto label_363510;
        }
    }
    ctx->pc = 0x3634F8u;
label_3634f8:
    // 0x3634f8: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x3634f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x3634fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3634fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x363500: 0x2442c0f8  addiu       $v0, $v0, -0x3F08
    ctx->pc = 0x363500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951160));
    // 0x363504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363508: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x363508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36350c: 0x0  nop
    ctx->pc = 0x36350cu;
    // NOP
label_363510:
    // 0x363510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363514: 0x3e00008  jr          $ra
    ctx->pc = 0x363514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363514u;
        // 0x363518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36351Cu;
}
