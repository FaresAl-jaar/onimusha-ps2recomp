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

// Function: sub_003A06C0
// Address: 0x3a06c0 - 0x3a071c
void sub_003A06C0_0x3a06c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A06C0_0x3a06c0");
#endif

    switch (ctx->pc) {
        case 0x3a0700u: goto label_3a0700;
        case 0x3a0710u: goto label_3a0710;
        default: break;
    }

    ctx->pc = 0x3a06c0u;

    // 0x3a06c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a06c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a06c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a06c8: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x3a06c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3a06cc: 0x2442ff7c  addiu       $v0, $v0, -0x84
    ctx->pc = 0x3a06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967164));
    // 0x3a06d0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x3a06d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3a06d4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3A06D4u;
    {
        const bool branch_taken_0x3a06d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06D4u;
        // 0x3a06d8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06d4) {
            ctx->pc = 0x3A0708u;
            goto label_3a0708;
        }
    }
    ctx->pc = 0x3A06DCu;
    // 0x3a06dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a06e0: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x3a06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
    // 0x3a06e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a06e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a06ec: 0x400008  jr          $v0
    ctx->pc = 0x3A06ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A06F8u: goto label_3a06f8;
            case 0x3A0708u: goto label_3a0708;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A06ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A06F4u;
    // 0x3a06f4: 0x0  nop
    ctx->pc = 0x3a06f4u;
    // NOP
label_3a06f8:
    // 0x3a06f8: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x3A06F8u;
    SET_GPR_U32(ctx, 31, 0x3A0700u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x3A06F8u, 0x3A0700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0700u;
label_3a0700:
    // 0x3a0700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0700u;
    {
        const bool branch_taken_0x3a0700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0700) {
            ctx->pc = 0x3A0710u;
            goto label_3a0710;
        }
    }
    ctx->pc = 0x3A0708u;
label_3a0708:
    // 0x3a0708: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3A0708u;
    SET_GPR_U32(ctx, 31, 0x3A0710u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3A0708u, 0x3A0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0710u;
label_3a0710:
    // 0x3a0710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0714: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0714u;
        // 0x3a0718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A071Cu;
}
