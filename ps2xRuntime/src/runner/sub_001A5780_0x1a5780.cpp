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

// Function: sub_001A5780
// Address: 0x1a5780 - 0x1a57cc
void sub_001A5780_0x1a5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5780_0x1a5780");
#endif

    switch (ctx->pc) {
        case 0x1a57a0u: goto label_1a57a0;
        case 0x1a57bcu: goto label_1a57bc;
        default: break;
    }

    ctx->pc = 0x1a5780u;

    // 0x1a5780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a578c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5794: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1a5794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a5798: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A5798u;
    SET_GPR_U32(ctx, 31, 0x1A57A0u);
    ctx->pc = 0x1A579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5798u;
    // 0x1a579c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A5798u, 0x1A57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57A0u;
label_1a57a0:
    // 0x1a57a0: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1a57a4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1a57a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a57a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a57ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57b0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1a57b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A57B4u;
    SET_GPR_U32(ctx, 31, 0x1A57BCu);
    ctx->pc = 0x1A57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57B4u;
    // 0x1a57b8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A57B4u, 0x1A57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57BCu;
label_1a57bc:
    // 0x1a57bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a57c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a57c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A57C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C4u;
        // 0x1a57c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A57CCu;
}
