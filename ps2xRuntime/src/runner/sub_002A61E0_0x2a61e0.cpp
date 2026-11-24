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

// Function: sub_002A61E0
// Address: 0x2a61e0 - 0x2a621c
void sub_002A61E0_0x2a61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A61E0_0x2a61e0");
#endif

    switch (ctx->pc) {
        case 0x2a6210u: goto label_2a6210;
        default: break;
    }

    ctx->pc = 0x2a61e0u;

    // 0x2a61e0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a61e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a61e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a61e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a61e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61ec: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a61ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a61f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a61f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a61f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a61f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61fc: 0x3405892c  ori         $a1, $zero, 0x892C
    ctx->pc = 0x2a61fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35116);
    // 0x2a6200: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x2a6204: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6208: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6208u;
    SET_GPR_U32(ctx, 31, 0x2A6210u);
    ctx->pc = 0x2A620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6208u;
    // 0x2a620c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6208u, 0x2A6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6210u;
label_2a6210:
    // 0x2a6210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6214: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6214u;
        // 0x2a6218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A621Cu;
}
