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

// Function: sub_002A8400
// Address: 0x2a8400 - 0x2a8440
void sub_002A8400_0x2a8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8400_0x2a8400");
#endif

    switch (ctx->pc) {
        case 0x2a8434u: goto label_2a8434;
        default: break;
    }

    ctx->pc = 0x2a8400u;

    // 0x2a8400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8404: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8408: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a840c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8410: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8414: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a841c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2a841cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2a8420: 0x34451b6c  ori         $a1, $v0, 0x1B6C
    ctx->pc = 0x2a8420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7020);
    // 0x2a8424: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a842c: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A842Cu;
    SET_GPR_U32(ctx, 31, 0x2A8434u);
    ctx->pc = 0x2A8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A842Cu;
    // 0x2a8430: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A842Cu, 0x2A8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8434u;
label_2a8434:
    // 0x2a8434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8438: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8438u;
        // 0x2a843c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8440u;
}
