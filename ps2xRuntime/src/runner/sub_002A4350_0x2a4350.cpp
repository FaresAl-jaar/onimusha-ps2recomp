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

// Function: sub_002A4350
// Address: 0x2a4350 - 0x2a4390
void sub_002A4350_0x2a4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4350_0x2a4350");
#endif

    switch (ctx->pc) {
        case 0x2a4384u: goto label_2a4384;
        default: break;
    }

    ctx->pc = 0x2a4350u;

    // 0x2a4350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4354: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a435c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a435cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4360: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a4360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a4364: 0x240514ac  addiu       $a1, $zero, 0x14AC
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5292));
    // 0x2a4368: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a436c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a4370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4374: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4378: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a437c: 0xc097c7c  jal         func_25F1F0
    ctx->pc = 0x2A437Cu;
    SET_GPR_U32(ctx, 31, 0x2A4384u);
    ctx->pc = 0x2A4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A437Cu;
    // 0x2a4380: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1F0u, 0x2A437Cu, 0x2A4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4384u;
label_2a4384:
    // 0x2a4384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4388: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4388u;
        // 0x2a438c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4390u;
}
