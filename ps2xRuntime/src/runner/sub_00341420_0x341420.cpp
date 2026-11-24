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

// Function: sub_00341420
// Address: 0x341420 - 0x34146c
void sub_00341420_0x341420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341420_0x341420");
#endif

    switch (ctx->pc) {
        case 0x341438u: goto label_341438;
        case 0x341450u: goto label_341450;
        default: break;
    }

    ctx->pc = 0x341420u;

    // 0x341420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x341424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x341428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34142c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34142cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341430: 0xc07cd24  jal         func_1F3490
    ctx->pc = 0x341430u;
    SET_GPR_U32(ctx, 31, 0x341438u);
    ctx->pc = 0x341434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341430u;
    // 0x341434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3490u, 0x341430u, 0x341438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341438u;
label_341438:
    // 0x341438: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x341438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x34143c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34143cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341440: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x341440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341448: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x341448u;
    SET_GPR_U32(ctx, 31, 0x341450u);
    ctx->pc = 0x34144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341448u;
    // 0x34144c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x341448u, 0x341450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341450u;
label_341450:
    // 0x341450: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x341450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x341454: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x341454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x341458: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x341458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x34145c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341464: 0x3e00008  jr          $ra
    ctx->pc = 0x341464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341464u;
        // 0x341468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34146Cu;
}
