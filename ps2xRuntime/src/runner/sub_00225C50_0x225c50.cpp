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

// Function: sub_00225C50
// Address: 0x225c50 - 0x225c9c
void sub_00225C50_0x225c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C50_0x225c50");
#endif

    switch (ctx->pc) {
        case 0x225c78u: goto label_225c78;
        default: break;
    }

    ctx->pc = 0x225c50u;

    // 0x225c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225c64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225c6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225c70: 0xc089696  jal         func_225A58
    ctx->pc = 0x225C70u;
    SET_GPR_U32(ctx, 31, 0x225C78u);
    ctx->pc = 0x225C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C70u;
    // 0x225c74: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225A58u, 0x225C70u, 0x225C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225c88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x225c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c94: 0x8089728  j           func_225CA0
    ctx->pc = 0x225C94u;
    ctx->pc = 0x225C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C94u;
    // 0x225c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    sub_00225CA0_0x225ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x225C9Cu;
}
