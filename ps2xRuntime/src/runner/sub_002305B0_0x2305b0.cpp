#include <cstdio>
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

// Function: sub_002305B0
// Address: 0x2305b0 - 0x2305f8
void sub_002305B0_0x2305b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002305B0_0x2305b0");
#endif
    { static uint32_t n=0; ++n; if (n<=40) fprintf(stderr,"[probe adxf_open] call %u a0=0x%x a1=0x%x a2=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,5),GPR_U32(ctx,6),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305e0u: goto label_2305e0;
        default: break;
    }

    ctx->pc = 0x2305b0u;

    // 0x2305b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2305b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2305b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2305b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2305b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2305bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2305c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2305c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2305c4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2305C4u;
    SET_GPR_U32(ctx, 31, 0x2305CCu);
    ctx->pc = 0x2305C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305C4u;
    // 0x2305c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2305C4u, 0x2305CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305CCu;
label_2305cc:
    // 0x2305cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2305ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305d0: 0xc08c17e  jal         func_2305F8
    ctx->pc = 0x2305D0u;
    SET_GPR_U32(ctx, 31, 0x2305D8u);
    ctx->pc = 0x2305D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305D0u;
    // 0x2305d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2305F8u, 0x2305D0u, 0x2305D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305D8u;
label_2305d8:
    // 0x2305d8: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2305D8u;
    SET_GPR_U32(ctx, 31, 0x2305E0u);
    ctx->pc = 0x2305DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305D8u;
    // 0x2305dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2305D8u, 0x2305E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305E0u;
label_2305e0:
    // 0x2305e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2305e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2305e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2305e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2305e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2305ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2305ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2305f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2305F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305F0u;
        // 0x2305f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2305F8u;
}
