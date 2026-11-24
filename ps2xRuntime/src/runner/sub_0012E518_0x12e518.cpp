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

// Function: sub_0012E518
// Address: 0x12e518 - 0x12e554
void sub_0012E518_0x12e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E518_0x12e518");
#endif

    switch (ctx->pc) {
        case 0x12e530u: goto label_12e530;
        case 0x12e548u: goto label_12e548;
        default: break;
    }

    ctx->pc = 0x12e518u;

    // 0x12e518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12e51c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12e520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12e524: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x12e524u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12e528: 0xc04b924  jal         func_12E490
    ctx->pc = 0x12E528u;
    SET_GPR_U32(ctx, 31, 0x12E530u);
    ctx->pc = 0x12E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E528u;
    // 0x12e52c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E490u, 0x12E528u, 0x12E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E530u;
label_12e530:
    // 0x12e530: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x12e530u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12e534: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e538: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12e538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12e53c: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x12e53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x12e540: 0xc04bbf6  jal         func_12EFD8
    ctx->pc = 0x12E540u;
    SET_GPR_U32(ctx, 31, 0x12E548u);
    ctx->pc = 0x12E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E540u;
    // 0x12e544: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFD8u, 0x12E540u, 0x12E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E548u;
label_12e548:
    // 0x12e548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e54c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E54Cu;
        // 0x12e550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E554u;
}
