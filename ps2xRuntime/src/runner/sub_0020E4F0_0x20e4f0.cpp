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

// Function: sub_0020E4F0
// Address: 0x20e4f0 - 0x20e53c
void sub_0020E4F0_0x20e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E4F0_0x20e4f0");
#endif

    switch (ctx->pc) {
        case 0x20e514u: goto label_20e514;
        case 0x20e524u: goto label_20e524;
        default: break;
    }

    ctx->pc = 0x20e4f0u;

    // 0x20e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e4f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20e4f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20e4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20e4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20e500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e504: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20e508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20e508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20e50c: 0xc08851e  jal         func_221478
    ctx->pc = 0x20E50Cu;
    SET_GPR_U32(ctx, 31, 0x20E514u);
    ctx->pc = 0x20E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E50Cu;
    // 0x20e510: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221478u, 0x20E50Cu, 0x20E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E514u;
label_20e514:
    // 0x20e514: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20e514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e51c: 0xc080568  jal         func_2015A0
    ctx->pc = 0x20E51Cu;
    SET_GPR_U32(ctx, 31, 0x20E524u);
    ctx->pc = 0x20E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E51Cu;
    // 0x20e520: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x20E51Cu, 0x20E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E524u;
label_20e524:
    // 0x20e524: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20e524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x20e528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20e528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e52c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20e52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e534: 0x3e00008  jr          $ra
    ctx->pc = 0x20E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E534u;
        // 0x20e538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E53Cu;
}
