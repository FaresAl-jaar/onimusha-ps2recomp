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

// Function: sub_002049D0
// Address: 0x2049d0 - 0x204a04
void sub_002049D0_0x2049d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002049D0_0x2049d0");
#endif

    switch (ctx->pc) {
        case 0x2049e8u: goto label_2049e8;
        case 0x2049f4u: goto label_2049f4;
        default: break;
    }

    ctx->pc = 0x2049d0u;

    // 0x2049d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2049d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2049d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2049d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2049d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2049d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2049dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2049e0: 0xc0852aa  jal         func_214AA8
    ctx->pc = 0x2049E0u;
    SET_GPR_U32(ctx, 31, 0x2049E8u);
    ctx->pc = 0x2049E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049E0u;
    // 0x2049e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AA8u, 0x2049E0u, 0x2049E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049E8u;
label_2049e8:
    // 0x2049e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2049e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049ec: 0xc0812de  jal         func_204B78
    ctx->pc = 0x2049ECu;
    SET_GPR_U32(ctx, 31, 0x2049F4u);
    ctx->pc = 0x2049F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049ECu;
    // 0x2049f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204B78u, 0x2049ECu, 0x2049F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049F4u;
label_2049f4:
    // 0x2049f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2049f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2049f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2049f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2049FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049FCu;
        // 0x204a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204A04u;
}
