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

// Function: sub_0035B760
// Address: 0x35b760 - 0x35b814
void sub_0035B760_0x35b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B760_0x35b760");
#endif

    switch (ctx->pc) {
        case 0x35b798u: goto label_35b798;
        case 0x35b7a8u: goto label_35b7a8;
        case 0x35b7b8u: goto label_35b7b8;
        case 0x35b7c8u: goto label_35b7c8;
        case 0x35b7d8u: goto label_35b7d8;
        case 0x35b7e8u: goto label_35b7e8;
        case 0x35b7f8u: goto label_35b7f8;
        case 0x35b808u: goto label_35b808;
        default: break;
    }

    ctx->pc = 0x35b760u;

    // 0x35b760: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x35b760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x35b764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b768: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x35b768u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x35b76c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x35B76Cu;
    {
        const bool branch_taken_0x35b76c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B76Cu;
        // 0x35b770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b76c) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B774u;
    // 0x35b774: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x35b774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x35b778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b77c: 0x2484fa90  addiu       $a0, $a0, -0x570
    ctx->pc = 0x35b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965904));
    // 0x35b780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b784: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b788: 0x600008  jr          $v1
    ctx->pc = 0x35B788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35B790u: goto label_35b790;
            case 0x35B7A0u: goto label_35b7a0;
            case 0x35B7B0u: goto label_35b7b0;
            case 0x35B7C0u: goto label_35b7c0;
            case 0x35B7D0u: goto label_35b7d0;
            case 0x35B7E0u: goto label_35b7e0;
            case 0x35B7F0u: goto label_35b7f0;
            case 0x35B800u: goto label_35b800;
            case 0x35B808u: goto label_35b808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B788u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35B790u;
label_35b790:
    // 0x35b790: 0xc0d6ca8  jal         func_35B2A0
    ctx->pc = 0x35B790u;
    SET_GPR_U32(ctx, 31, 0x35B798u);
    ctx->pc = 0x35B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B2A0u, 0x35B790u, 0x35B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B798u;
label_35b798:
    // 0x35b798: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x35B798u;
    {
        const bool branch_taken_0x35b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b798) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7A0u;
label_35b7a0:
    // 0x35b7a0: 0xc0d6ccc  jal         func_35B330
    ctx->pc = 0x35B7A0u;
    SET_GPR_U32(ctx, 31, 0x35B7A8u);
    ctx->pc = 0x35B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B330u, 0x35B7A0u, 0x35B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7A8u;
label_35b7a8:
    // 0x35b7a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x35B7A8u;
    {
        const bool branch_taken_0x35b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7a8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7B0u;
label_35b7b0:
    // 0x35b7b0: 0xc0d6cf0  jal         func_35B3C0
    ctx->pc = 0x35B7B0u;
    SET_GPR_U32(ctx, 31, 0x35B7B8u);
    ctx->pc = 0x35B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B3C0u, 0x35B7B0u, 0x35B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7B8u;
label_35b7b8:
    // 0x35b7b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35B7B8u;
    {
        const bool branch_taken_0x35b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7b8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7C0u;
label_35b7c0:
    // 0x35b7c0: 0xc0d6d34  jal         func_35B4D0
    ctx->pc = 0x35B7C0u;
    SET_GPR_U32(ctx, 31, 0x35B7C8u);
    ctx->pc = 0x35B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4D0u, 0x35B7C0u, 0x35B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7C8u;
label_35b7c8:
    // 0x35b7c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35B7C8u;
    {
        const bool branch_taken_0x35b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7c8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7D0u;
label_35b7d0:
    // 0x35b7d0: 0xc0d6cb4  jal         func_35B2D0
    ctx->pc = 0x35B7D0u;
    SET_GPR_U32(ctx, 31, 0x35B7D8u);
    ctx->pc = 0x35B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B2D0u, 0x35B7D0u, 0x35B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7D8u;
label_35b7d8:
    // 0x35b7d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35B7D8u;
    {
        const bool branch_taken_0x35b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7d8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7E0u;
label_35b7e0:
    // 0x35b7e0: 0xc0d6cd8  jal         func_35B360
    ctx->pc = 0x35B7E0u;
    SET_GPR_U32(ctx, 31, 0x35B7E8u);
    ctx->pc = 0x35B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B360u, 0x35B7E0u, 0x35B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7E8u;
label_35b7e8:
    // 0x35b7e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35B7E8u;
    {
        const bool branch_taken_0x35b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7e8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B7F0u;
label_35b7f0:
    // 0x35b7f0: 0xc0d6d00  jal         func_35B400
    ctx->pc = 0x35B7F0u;
    SET_GPR_U32(ctx, 31, 0x35B7F8u);
    ctx->pc = 0x35B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B400u, 0x35B7F0u, 0x35B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7F8u;
label_35b7f8:
    // 0x35b7f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35B7F8u;
    {
        const bool branch_taken_0x35b7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b7f8) {
            ctx->pc = 0x35B808u;
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B800u;
label_35b800:
    // 0x35b800: 0xc0d6d44  jal         func_35B510
    ctx->pc = 0x35B800u;
    SET_GPR_U32(ctx, 31, 0x35B808u);
    ctx->pc = 0x35B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B510u, 0x35B800u, 0x35B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B808u;
label_35b808:
    // 0x35b808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B80Cu;
        // 0x35b810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B814u;
}
