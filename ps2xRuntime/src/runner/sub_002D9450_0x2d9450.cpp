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

// Function: sub_002D9450
// Address: 0x2d9450 - 0x2d94cc
void sub_002D9450_0x2d9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9450_0x2d9450");
#endif

    switch (ctx->pc) {
        case 0x2d9490u: goto label_2d9490;
        case 0x2d94a0u: goto label_2d94a0;
        case 0x2d94b0u: goto label_2d94b0;
        case 0x2d94c0u: goto label_2d94c0;
        default: break;
    }

    ctx->pc = 0x2d9450u;

    // 0x2d9450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9458: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x2d9458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2d945c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x2d945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x2d9460: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x2d9460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2d9464: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D9464u;
    {
        const bool branch_taken_0x2d9464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9464u;
        // 0x2d9468: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9464) {
            ctx->pc = 0x2D94B8u;
            goto label_2d94b8;
        }
    }
    ctx->pc = 0x2D946Cu;
    // 0x2d946c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d946cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9470: 0x246379f0  addiu       $v1, $v1, 0x79F0
    ctx->pc = 0x2d9470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31216));
    // 0x2d9474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9478: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d947c: 0x400008  jr          $v0
    ctx->pc = 0x2D947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9488u: goto label_2d9488;
            case 0x2D9498u: goto label_2d9498;
            case 0x2D94A8u: goto label_2d94a8;
            case 0x2D94B8u: goto label_2d94b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D947Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D9484u;
    // 0x2d9484: 0x0  nop
    ctx->pc = 0x2d9484u;
    // NOP
label_2d9488:
    // 0x2d9488: 0xc0a0458  jal         func_281160
    ctx->pc = 0x2D9488u;
    SET_GPR_U32(ctx, 31, 0x2D9490u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x2D9488u, 0x2D9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9490u;
label_2d9490:
    // 0x2d9490: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9490u;
    {
        const bool branch_taken_0x2d9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9490) {
            ctx->pc = 0x2D94C0u;
            goto label_2d94c0;
        }
    }
    ctx->pc = 0x2D9498u;
label_2d9498:
    // 0x2d9498: 0xc0b64fc  jal         func_2D93F0
    ctx->pc = 0x2D9498u;
    SET_GPR_U32(ctx, 31, 0x2D94A0u);
    ctx->pc = 0x2D93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D93F0u, 0x2D9498u, 0x2D94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94A0u;
label_2d94a0:
    // 0x2d94a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D94A0u;
    {
        const bool branch_taken_0x2d94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d94a0) {
            ctx->pc = 0x2D94C0u;
            goto label_2d94c0;
        }
    }
    ctx->pc = 0x2D94A8u;
label_2d94a8:
    // 0x2d94a8: 0xc0b649c  jal         func_2D9270
    ctx->pc = 0x2D94A8u;
    SET_GPR_U32(ctx, 31, 0x2D94B0u);
    ctx->pc = 0x2D9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9270u, 0x2D94A8u, 0x2D94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94B0u;
label_2d94b0:
    // 0x2d94b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D94B0u;
    {
        const bool branch_taken_0x2d94b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d94b0) {
            ctx->pc = 0x2D94C0u;
            goto label_2d94c0;
        }
    }
    ctx->pc = 0x2D94B8u;
label_2d94b8:
    // 0x2d94b8: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x2D94B8u;
    SET_GPR_U32(ctx, 31, 0x2D94C0u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x2D94B8u, 0x2D94C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94C0u;
label_2d94c0:
    // 0x2d94c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d94c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d94c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D94C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94C4u;
        // 0x2d94c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D94C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D94CCu;
}
