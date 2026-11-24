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

// Function: sub_002AB600
// Address: 0x2ab600 - 0x2ab640
void sub_002AB600_0x2ab600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB600_0x2ab600");
#endif

    switch (ctx->pc) {
        case 0x2ab634u: goto label_2ab634;
        default: break;
    }

    ctx->pc = 0x2ab600u;

    // 0x2ab600: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab604: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab608: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab60c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab614: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab618: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab61c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab620: 0x24060438  addiu       $a2, $zero, 0x438
    ctx->pc = 0x2ab620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
    // 0x2ab624: 0x34455bd0  ori         $a1, $v0, 0x5BD0
    ctx->pc = 0x2ab624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23504);
    // 0x2ab628: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab62c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB62Cu;
    SET_GPR_U32(ctx, 31, 0x2AB634u);
    ctx->pc = 0x2AB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB62Cu;
    // 0x2ab630: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB62Cu, 0x2AB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB634u;
label_2ab634:
    // 0x2ab634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab638: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB638u;
        // 0x2ab63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB640u;
}
