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

// Function: sub_00237778
// Address: 0x237778 - 0x2377b8
void sub_00237778_0x237778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237778_0x237778");
#endif

    switch (ctx->pc) {
        case 0x23778cu: goto label_23778c;
        case 0x237794u: goto label_237794;
        case 0x2377a4u: goto label_2377a4;
        default: break;
    }

    ctx->pc = 0x237778u;

    // 0x237778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23777c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237784: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237784u;
    SET_GPR_U32(ctx, 31, 0x23778Cu);
    ctx->pc = 0x237788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237784u;
    // 0x237788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237784u, 0x23778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23778Cu;
label_23778c:
    // 0x23778c: 0xc08ddc2  jal         func_237708
    ctx->pc = 0x23778Cu;
    SET_GPR_U32(ctx, 31, 0x237794u);
    ctx->pc = 0x237790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23778Cu;
    // 0x237790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237708u, 0x23778Cu, 0x237794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237794u;
label_237794:
    // 0x237794: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x237794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x237798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23779c: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x23779Cu;
    SET_GPR_U32(ctx, 31, 0x2377A4u);
    ctx->pc = 0x2377A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23779Cu;
    // 0x2377a0: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x23779Cu, 0x2377A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377A4u;
label_2377a4:
    // 0x2377a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2377a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2377a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2377ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2377acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2377b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2377B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377B0u;
        // 0x2377b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2377B8u;
}
