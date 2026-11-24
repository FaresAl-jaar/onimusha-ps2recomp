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

// Function: sub_002AB7E0
// Address: 0x2ab7e0 - 0x2ab820
void sub_002AB7E0_0x2ab7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB7E0_0x2ab7e0");
#endif

    switch (ctx->pc) {
        case 0x2ab814u: goto label_2ab814;
        default: break;
    }

    ctx->pc = 0x2ab7e0u;

    // 0x2ab7e0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab7e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab7e8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab7e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab7f4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab7fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab800: 0x2406030c  addiu       $a2, $zero, 0x30C
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x2ab804: 0x34457c58  ori         $a1, $v0, 0x7C58
    ctx->pc = 0x2ab804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31832);
    // 0x2ab808: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab80c: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2AB80Cu;
    SET_GPR_U32(ctx, 31, 0x2AB814u);
    ctx->pc = 0x2AB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB80Cu;
    // 0x2ab810: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2AB80Cu, 0x2AB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB814u;
label_2ab814:
    // 0x2ab814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab818: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB818u;
        // 0x2ab81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB820u;
}
