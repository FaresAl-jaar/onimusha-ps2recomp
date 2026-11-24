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

// Function: sub_003A1570
// Address: 0x3a1570 - 0x3a1624
void sub_003A1570_0x3a1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1570_0x3a1570");
#endif

    switch (ctx->pc) {
        case 0x3a15a8u: goto label_3a15a8;
        case 0x3a15b8u: goto label_3a15b8;
        case 0x3a15c8u: goto label_3a15c8;
        case 0x3a15d8u: goto label_3a15d8;
        case 0x3a15e8u: goto label_3a15e8;
        case 0x3a15f8u: goto label_3a15f8;
        case 0x3a1608u: goto label_3a1608;
        case 0x3a1618u: goto label_3a1618;
        default: break;
    }

    ctx->pc = 0x3a1570u;

    // 0x3a1570: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3a1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3a1574: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1578: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3a1578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a157c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A157Cu;
    {
        const bool branch_taken_0x3a157c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A157Cu;
        // 0x3a1580: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a157c) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A1584u;
    // 0x3a1584: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3a1584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3a1588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a158c: 0x24842780  addiu       $a0, $a0, 0x2780
    ctx->pc = 0x3a158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
    // 0x3a1590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a1590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a1594: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1598: 0x600008  jr          $v1
    ctx->pc = 0x3A1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A15A0u: goto label_3a15a0;
            case 0x3A15B0u: goto label_3a15b0;
            case 0x3A15C0u: goto label_3a15c0;
            case 0x3A15D0u: goto label_3a15d0;
            case 0x3A15E0u: goto label_3a15e0;
            case 0x3A15F0u: goto label_3a15f0;
            case 0x3A1600u: goto label_3a1600;
            case 0x3A1610u: goto label_3a1610;
            case 0x3A1618u: goto label_3a1618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A15A0u;
label_3a15a0:
    // 0x3a15a0: 0xc0e842c  jal         func_3A10B0
    ctx->pc = 0x3A15A0u;
    SET_GPR_U32(ctx, 31, 0x3A15A8u);
    ctx->pc = 0x3A10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A10B0u, 0x3A15A0u, 0x3A15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15A8u;
label_3a15a8:
    // 0x3a15a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3A15A8u;
    {
        const bool branch_taken_0x3a15a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15a8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A15B0u;
label_3a15b0:
    // 0x3a15b0: 0xc0e8450  jal         func_3A1140
    ctx->pc = 0x3A15B0u;
    SET_GPR_U32(ctx, 31, 0x3A15B8u);
    ctx->pc = 0x3A1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1140u, 0x3A15B0u, 0x3A15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15B8u;
label_3a15b8:
    // 0x3a15b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3A15B8u;
    {
        const bool branch_taken_0x3a15b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15b8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A15C0u;
label_3a15c0:
    // 0x3a15c0: 0xc0e8474  jal         func_3A11D0
    ctx->pc = 0x3A15C0u;
    SET_GPR_U32(ctx, 31, 0x3A15C8u);
    ctx->pc = 0x3A11D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A11D0u, 0x3A15C0u, 0x3A15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15C8u;
label_3a15c8:
    // 0x3a15c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A15C8u;
    {
        const bool branch_taken_0x3a15c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15c8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A15D0u;
label_3a15d0:
    // 0x3a15d0: 0xc0e84b8  jal         func_3A12E0
    ctx->pc = 0x3A15D0u;
    SET_GPR_U32(ctx, 31, 0x3A15D8u);
    ctx->pc = 0x3A12E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A12E0u, 0x3A15D0u, 0x3A15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15D8u;
label_3a15d8:
    // 0x3a15d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A15D8u;
    {
        const bool branch_taken_0x3a15d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15d8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A15E0u;
label_3a15e0:
    // 0x3a15e0: 0xc0e8438  jal         func_3A10E0
    ctx->pc = 0x3A15E0u;
    SET_GPR_U32(ctx, 31, 0x3A15E8u);
    ctx->pc = 0x3A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A10E0u, 0x3A15E0u, 0x3A15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15E8u;
label_3a15e8:
    // 0x3a15e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A15E8u;
    {
        const bool branch_taken_0x3a15e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15e8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A15F0u;
label_3a15f0:
    // 0x3a15f0: 0xc0e845c  jal         func_3A1170
    ctx->pc = 0x3A15F0u;
    SET_GPR_U32(ctx, 31, 0x3A15F8u);
    ctx->pc = 0x3A1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1170u, 0x3A15F0u, 0x3A15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15F8u;
label_3a15f8:
    // 0x3a15f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A15F8u;
    {
        const bool branch_taken_0x3a15f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a15f8) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A1600u;
label_3a1600:
    // 0x3a1600: 0xc0e8484  jal         func_3A1210
    ctx->pc = 0x3A1600u;
    SET_GPR_U32(ctx, 31, 0x3A1608u);
    ctx->pc = 0x3A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1210u, 0x3A1600u, 0x3A1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1608u;
label_3a1608:
    // 0x3a1608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1608u;
    {
        const bool branch_taken_0x3a1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1608) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A1610u;
label_3a1610:
    // 0x3a1610: 0xc0e84c8  jal         func_3A1320
    ctx->pc = 0x3A1610u;
    SET_GPR_U32(ctx, 31, 0x3A1618u);
    ctx->pc = 0x3A1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1320u, 0x3A1610u, 0x3A1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1618u;
label_3a1618:
    // 0x3a1618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a161c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A161Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A161Cu;
        // 0x3a1620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A161Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1624u;
}
