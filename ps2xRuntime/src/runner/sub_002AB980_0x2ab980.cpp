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

// Function: sub_002AB980
// Address: 0x2ab980 - 0x2ab9c0
void sub_002AB980_0x2ab980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB980_0x2ab980");
#endif

    switch (ctx->pc) {
        case 0x2ab9b4u: goto label_2ab9b4;
        default: break;
    }

    ctx->pc = 0x2ab980u;

    // 0x2ab980: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab980u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab984: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab988: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab98c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab994: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab998: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab99c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9a0: 0x240601b8  addiu       $a2, $zero, 0x1B8
    ctx->pc = 0x2ab9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x2ab9a4: 0x344587b4  ori         $a1, $v0, 0x87B4
    ctx->pc = 0x2ab9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34740);
    // 0x2ab9a8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab9ac: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB9ACu;
    SET_GPR_U32(ctx, 31, 0x2AB9B4u);
    ctx->pc = 0x2AB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9ACu;
    // 0x2ab9b0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB9ACu, 0x2AB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9B4u;
label_2ab9b4:
    // 0x2ab9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9B8u;
        // 0x2ab9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB9C0u;
}
