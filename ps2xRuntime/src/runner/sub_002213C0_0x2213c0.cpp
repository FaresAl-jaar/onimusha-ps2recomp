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

// Function: sub_002213C0
// Address: 0x2213c0 - 0x221424
void sub_002213C0_0x2213c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213C0_0x2213c0");
#endif

    switch (ctx->pc) {
        case 0x2213e4u: goto label_2213e4;
        case 0x2213f0u: goto label_2213f0;
        case 0x221410u: goto label_221410;
        default: break;
    }

    ctx->pc = 0x2213c0u;

    // 0x2213c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2213c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2213c4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2213c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2213c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2213c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2213cc: 0x24900d30  addiu       $s0, $a0, 0xD30
    ctx->pc = 0x2213ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x2213d0: 0x8c44a180  lw          $a0, -0x5E80($v0)
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BA180u));
    // 0x2213d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2213d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2213d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2213d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2213dc: 0xc080568  jal         func_2015A0
    ctx->pc = 0x2213DCu;
    SET_GPR_U32(ctx, 31, 0x2213E4u);
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x2213DCu, 0x2213E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213E4u;
label_2213e4:
    // 0x2213e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213e8: 0xc084990  jal         func_212640
    ctx->pc = 0x2213E8u;
    SET_GPR_U32(ctx, 31, 0x2213F0u);
    ctx->pc = 0x2213ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2213E8u;
    // 0x2213ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x2213E8u, 0x2213F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213F0u;
label_2213f0:
    // 0x2213f0: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x2213f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2213f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213f8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2213f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2213fc: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x2213fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x221400: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x221404: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x221404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x221408: 0xc084996  jal         func_212658
    ctx->pc = 0x221408u;
    SET_GPR_U32(ctx, 31, 0x221410u);
    ctx->pc = 0x22140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221408u;
    // 0x22140c: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x221408u, 0x221410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221410u;
label_221410:
    // 0x221410: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221414: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x221414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x221418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22141c: 0x3e00008  jr          $ra
    ctx->pc = 0x22141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22141Cu;
        // 0x221420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221424u;
}
