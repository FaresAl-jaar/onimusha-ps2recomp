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

// Function: sub_002AB640
// Address: 0x2ab640 - 0x2ab680
void sub_002AB640_0x2ab640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB640_0x2ab640");
#endif

    switch (ctx->pc) {
        case 0x2ab674u: goto label_2ab674;
        default: break;
    }

    ctx->pc = 0x2ab640u;

    // 0x2ab640: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab644: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab648: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab648u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab64c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab654: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab658: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab65c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab660: 0x24060730  addiu       $a2, $zero, 0x730
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x2ab664: 0x34456094  ori         $a1, $v0, 0x6094
    ctx->pc = 0x2ab664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24724);
    // 0x2ab668: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab66c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB66Cu;
    SET_GPR_U32(ctx, 31, 0x2AB674u);
    ctx->pc = 0x2AB670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB66Cu;
    // 0x2ab670: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB66Cu, 0x2AB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB674u;
label_2ab674:
    // 0x2ab674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab678: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB678u;
        // 0x2ab67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB680u;
}
