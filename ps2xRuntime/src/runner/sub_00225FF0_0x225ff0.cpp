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

// Function: sub_00225FF0
// Address: 0x225ff0 - 0x226048
void sub_00225FF0_0x225ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225FF0_0x225ff0");
#endif

    switch (ctx->pc) {
        case 0x226014u: goto label_226014;
        case 0x22601cu: goto label_22601c;
        case 0x226024u: goto label_226024;
        case 0x22602cu: goto label_22602c;
        default: break;
    }

    ctx->pc = 0x225ff0u;

    // 0x225ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225ff4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x225ff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225ffc: 0x2450a370  addiu       $s0, $v0, -0x5C90
    ctx->pc = 0x225ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x226000: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA370u));
    // 0x226004: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x226004u;
    {
        const bool branch_taken_0x226004 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x226008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226004u;
        // 0x226008: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226004) {
            ctx->pc = 0x226038u;
            goto label_226038;
        }
    }
    ctx->pc = 0x22600Cu;
    // 0x22600c: 0xc089a1e  jal         func_226878
    ctx->pc = 0x22600Cu;
    SET_GPR_U32(ctx, 31, 0x226014u);
    ctx->pc = 0x226878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226878u, 0x22600Cu, 0x226014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226014u;
label_226014:
    // 0x226014: 0xc0893ce  jal         func_224F38
    ctx->pc = 0x226014u;
    SET_GPR_U32(ctx, 31, 0x22601Cu);
    ctx->pc = 0x224F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F38u, 0x226014u, 0x22601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22601Cu;
label_22601c:
    // 0x22601c: 0xc089a02  jal         func_226808
    ctx->pc = 0x22601Cu;
    SET_GPR_U32(ctx, 31, 0x226024u);
    ctx->pc = 0x226808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226808u, 0x22601Cu, 0x226024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226024u;
label_226024:
    // 0x226024: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x226024u;
    SET_GPR_U32(ctx, 31, 0x22602Cu);
    ctx->pc = 0x1F3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3750u, 0x226024u, 0x22602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22602Cu;
label_22602c:
    // 0x22602c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x226030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_226038:
    // 0x226038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22603c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226040: 0x3e00008  jr          $ra
    ctx->pc = 0x226040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226040u;
        // 0x226044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226048u;
}
