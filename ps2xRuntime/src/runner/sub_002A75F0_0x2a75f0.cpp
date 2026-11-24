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

// Function: sub_002A75F0
// Address: 0x2a75f0 - 0x2a762c
void sub_002A75F0_0x2a75f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A75F0_0x2a75f0");
#endif

    switch (ctx->pc) {
        case 0x2a7620u: goto label_2a7620;
        default: break;
    }

    ctx->pc = 0x2a75f0u;

    // 0x2a75f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a75f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a75f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a75f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75f8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a75f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75fc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a75fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7608: 0x3405d864  ori         $a1, $zero, 0xD864
    ctx->pc = 0x2a7608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55396);
    // 0x2a760c: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x2a760cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x2a7610: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7614: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7614u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7618: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7618u;
    SET_GPR_U32(ctx, 31, 0x2A7620u);
    ctx->pc = 0x2A761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7618u;
    // 0x2a761c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7618u, 0x2A7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7620u;
label_2a7620:
    // 0x2a7620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7624: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7624u;
        // 0x2a7628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A762Cu;
}
