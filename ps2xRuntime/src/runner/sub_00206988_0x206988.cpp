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

// Function: sub_00206988
// Address: 0x206988 - 0x2069d4
void sub_00206988_0x206988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206988_0x206988");
#endif

    switch (ctx->pc) {
        case 0x2069b8u: goto label_2069b8;
        case 0x2069c4u: goto label_2069c4;
        default: break;
    }

    ctx->pc = 0x206988u;

    // 0x206988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20698c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20698cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206990: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x206990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x206994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206998: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x206998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x20699c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2069a0: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x2069a4: 0x24a574e0  addiu       $a1, $a1, 0x74E0
    ctx->pc = 0x2069a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29920));
    // 0x2069a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2069a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2069b0: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x2069B0u;
    SET_GPR_U32(ctx, 31, 0x2069B8u);
    ctx->pc = 0x2069B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069B0u;
    // 0x2069b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x2069B0u, 0x2069B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069B8u;
label_2069b8:
    // 0x2069b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2069b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069bc: 0xc081860  jal         func_206180
    ctx->pc = 0x2069BCu;
    SET_GPR_U32(ctx, 31, 0x2069C4u);
    ctx->pc = 0x2069C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069BCu;
    // 0x2069c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x2069BCu, 0x2069C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069C4u;
label_2069c4:
    // 0x2069c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2069c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2069c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2069c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2069cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2069CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2069D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069CCu;
        // 0x2069d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2069D4u;
}
