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

// Function: sub_0020E4B0
// Address: 0x20e4b0 - 0x20e4ec
void sub_0020E4B0_0x20e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E4B0_0x20e4b0");
#endif

    switch (ctx->pc) {
        case 0x20e4d0u: goto label_20e4d0;
        default: break;
    }

    ctx->pc = 0x20e4b0u;

    // 0x20e4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20e4b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20e4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e4c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e4c8: 0xc08ee50  jal         func_23B940
    ctx->pc = 0x20E4C8u;
    SET_GPR_U32(ctx, 31, 0x20E4D0u);
    ctx->pc = 0x20E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4C8u;
    // 0x20e4cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B940u, 0x20E4C8u, 0x20E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4D0u;
label_20e4d0:
    // 0x20e4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e4e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e4e4: 0x8088970  j           func_2225C0
    ctx->pc = 0x20E4E4u;
    ctx->pc = 0x20E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4E4u;
    // 0x20e4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225C0u;
    sub_002225C0_0x2225c0(rdram, ctx, runtime); return;
    ctx->pc = 0x20E4ECu;
}
