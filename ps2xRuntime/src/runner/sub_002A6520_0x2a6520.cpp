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

// Function: sub_002A6520
// Address: 0x2a6520 - 0x2a655c
void sub_002A6520_0x2a6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6520_0x2a6520");
#endif

    switch (ctx->pc) {
        case 0x2a6550u: goto label_2a6550;
        default: break;
    }

    ctx->pc = 0x2a6520u;

    // 0x2a6520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6524: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6528: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a652c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a652cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6538: 0x34059478  ori         $a1, $zero, 0x9478
    ctx->pc = 0x2a6538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38008);
    // 0x2a653c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2a653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2a6540: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6548: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6548u;
    SET_GPR_U32(ctx, 31, 0x2A6550u);
    ctx->pc = 0x2A654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6548u;
    // 0x2a654c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6548u, 0x2A6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6550u;
label_2a6550:
    // 0x2a6550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6554: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6554u;
        // 0x2a6558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A655Cu;
}
