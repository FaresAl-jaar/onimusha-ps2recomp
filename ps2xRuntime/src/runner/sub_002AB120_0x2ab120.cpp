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

// Function: sub_002AB120
// Address: 0x2ab120 - 0x2ab160
void sub_002AB120_0x2ab120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB120_0x2ab120");
#endif

    switch (ctx->pc) {
        case 0x2ab154u: goto label_2ab154;
        default: break;
    }

    ctx->pc = 0x2ab120u;

    // 0x2ab120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab124: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab128: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2ab128u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab12c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab130: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab134: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab13c: 0x2406035c  addiu       $a2, $zero, 0x35C
    ctx->pc = 0x2ab13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2ab140: 0x34452e24  ori         $a1, $v0, 0x2E24
    ctx->pc = 0x2ab140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11812);
    // 0x2ab144: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab148: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ab148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab14c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB14Cu;
    SET_GPR_U32(ctx, 31, 0x2AB154u);
    ctx->pc = 0x2AB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB14Cu;
    // 0x2ab150: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB14Cu, 0x2AB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB154u;
label_2ab154:
    // 0x2ab154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab158: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB158u;
        // 0x2ab15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB160u;
}
