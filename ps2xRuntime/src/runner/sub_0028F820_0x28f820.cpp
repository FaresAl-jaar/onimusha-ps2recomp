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

// Function: sub_0028F820
// Address: 0x28f820 - 0x28f870
void sub_0028F820_0x28f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F820_0x28f820");
#endif

    switch (ctx->pc) {
        case 0x28f860u: goto label_28f860;
        default: break;
    }

    ctx->pc = 0x28f820u;

    // 0x28f820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f824: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28f824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f82c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28f82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f830: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x28f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x28f834: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x28f834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f838: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x28f838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f83c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x28f83cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f840: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x28f840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x28f844: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x28f844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x28f848: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x28f848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f84c: 0x24843900  addiu       $a0, $a0, 0x3900
    ctx->pc = 0x28f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    // 0x28f850: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x28f850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f854: 0x24c6efd0  addiu       $a2, $a2, -0x1030
    ctx->pc = 0x28f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963152));
    // 0x28f858: 0xc065758  jal         func_195D60
    ctx->pc = 0x28F858u;
    SET_GPR_U32(ctx, 31, 0x28F860u);
    ctx->pc = 0x28F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F858u;
    // 0x28f85c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D60u, 0x28F858u, 0x28F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F860u;
label_28f860:
    // 0x28f860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f868: 0x3e00008  jr          $ra
    ctx->pc = 0x28F868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F868u;
        // 0x28f86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F870u;
}
