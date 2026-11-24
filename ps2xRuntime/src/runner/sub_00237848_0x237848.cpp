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

// Function: sub_00237848
// Address: 0x237848 - 0x237874
void sub_00237848_0x237848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237848_0x237848");
#endif

    switch (ctx->pc) {
        case 0x23785cu: goto label_23785c;
        case 0x237864u: goto label_237864;
        default: break;
    }

    ctx->pc = 0x237848u;

    // 0x237848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23784c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237854: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x237854u;
    SET_GPR_U32(ctx, 31, 0x23785Cu);
    ctx->pc = 0x237858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237854u;
    // 0x237858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x237854u, 0x23785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23785Cu;
label_23785c:
    // 0x23785c: 0xc08de1e  jal         func_237878
    ctx->pc = 0x23785Cu;
    SET_GPR_U32(ctx, 31, 0x237864u);
    ctx->pc = 0x237860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23785Cu;
    // 0x237860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237878u, 0x23785Cu, 0x237864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237864u;
label_237864:
    // 0x237864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237868: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23786c: 0x808e2c2  j           func_238B08
    ctx->pc = 0x23786Cu;
    ctx->pc = 0x237870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23786Cu;
    // 0x237870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x237874u;
}
