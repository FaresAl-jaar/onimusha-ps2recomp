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

// Function: sub_002AA370
// Address: 0x2aa370 - 0x2aa3b0
void sub_002AA370_0x2aa370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA370_0x2aa370");
#endif

    switch (ctx->pc) {
        case 0x2aa3a4u: goto label_2aa3a4;
        default: break;
    }

    ctx->pc = 0x2aa370u;

    // 0x2aa370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa374: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aa374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa378: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2aa378u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa37c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa380: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aa380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa384: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aa384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aa388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aa388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa38c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2aa38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2aa390: 0x3445cc08  ori         $a1, $v0, 0xCC08
    ctx->pc = 0x2aa390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52232);
    // 0x2aa394: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa398: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aa398u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa39c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AA39Cu;
    SET_GPR_U32(ctx, 31, 0x2AA3A4u);
    ctx->pc = 0x2AA3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA39Cu;
    // 0x2aa3a0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AA39Cu, 0x2AA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3A4u;
label_2aa3a4:
    // 0x2aa3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA3A8u;
        // 0x2aa3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA3B0u;
}
