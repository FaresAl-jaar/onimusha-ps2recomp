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

// Function: sub_002D05A0
// Address: 0x2d05a0 - 0x2d062c
void sub_002D05A0_0x2d05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D05A0_0x2d05a0");
#endif

    switch (ctx->pc) {
        case 0x2d05e0u: goto label_2d05e0;
        case 0x2d05f0u: goto label_2d05f0;
        case 0x2d0600u: goto label_2d0600;
        case 0x2d0610u: goto label_2d0610;
        case 0x2d0620u: goto label_2d0620;
        default: break;
    }

    ctx->pc = 0x2d05a0u;

    // 0x2d05a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d05a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d05a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d05a8: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x2d05a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2d05ac: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x2d05b0: 0x2c410017  sltiu       $at, $v0, 0x17
    ctx->pc = 0x2d05b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2d05b4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D05B4u;
    {
        const bool branch_taken_0x2d05b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B4u;
        // 0x2d05b8: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b4) {
            ctx->pc = 0x2D0618u;
            goto label_2d0618;
        }
    }
    ctx->pc = 0x2D05BCu;
    // 0x2d05bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d05c0: 0x24637910  addiu       $v1, $v1, 0x7910
    ctx->pc = 0x2d05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30992));
    // 0x2d05c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d05cc: 0x400008  jr          $v0
    ctx->pc = 0x2D05CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D05D8u: goto label_2d05d8;
            case 0x2D05E8u: goto label_2d05e8;
            case 0x2D05F8u: goto label_2d05f8;
            case 0x2D0608u: goto label_2d0608;
            case 0x2D0618u: goto label_2d0618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D05CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D05D4u;
    // 0x2d05d4: 0x0  nop
    ctx->pc = 0x2d05d4u;
    // NOP
label_2d05d8:
    // 0x2d05d8: 0xc0b3ff8  jal         func_2CFFE0
    ctx->pc = 0x2D05D8u;
    SET_GPR_U32(ctx, 31, 0x2D05E0u);
    ctx->pc = 0x2CFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFFE0u, 0x2D05D8u, 0x2D05E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05E0u;
label_2d05e0:
    // 0x2d05e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D05E0u;
    {
        const bool branch_taken_0x2d05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d05e0) {
            ctx->pc = 0x2D0620u;
            goto label_2d0620;
        }
    }
    ctx->pc = 0x2D05E8u;
label_2d05e8:
    // 0x2d05e8: 0xc0b4088  jal         func_2D0220
    ctx->pc = 0x2D05E8u;
    SET_GPR_U32(ctx, 31, 0x2D05F0u);
    ctx->pc = 0x2D05ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05E8u;
    // 0x2d05ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0220u, 0x2D05E8u, 0x2D05F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05F0u;
label_2d05f0:
    // 0x2d05f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D05F0u;
    {
        const bool branch_taken_0x2d05f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d05f0) {
            ctx->pc = 0x2D0620u;
            goto label_2d0620;
        }
    }
    ctx->pc = 0x2D05F8u;
label_2d05f8:
    // 0x2d05f8: 0xc0b4020  jal         func_2D0080
    ctx->pc = 0x2D05F8u;
    SET_GPR_U32(ctx, 31, 0x2D0600u);
    ctx->pc = 0x2D0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0080u, 0x2D05F8u, 0x2D0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0600u;
label_2d0600:
    // 0x2d0600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0600u;
    {
        const bool branch_taken_0x2d0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0600) {
            ctx->pc = 0x2D0620u;
            goto label_2d0620;
        }
    }
    ctx->pc = 0x2D0608u;
label_2d0608:
    // 0x2d0608: 0xc0b4088  jal         func_2D0220
    ctx->pc = 0x2D0608u;
    SET_GPR_U32(ctx, 31, 0x2D0610u);
    ctx->pc = 0x2D060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0608u;
    // 0x2d060c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0220u, 0x2D0608u, 0x2D0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0610u;
label_2d0610:
    // 0x2d0610: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0610u;
    {
        const bool branch_taken_0x2d0610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0610) {
            ctx->pc = 0x2D0620u;
            goto label_2d0620;
        }
    }
    ctx->pc = 0x2D0618u;
label_2d0618:
    // 0x2d0618: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x2D0618u;
    SET_GPR_U32(ctx, 31, 0x2D0620u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x2D0618u, 0x2D0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0620u;
label_2d0620:
    // 0x2d0620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0624: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0624u;
        // 0x2d0628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D062Cu;
}
