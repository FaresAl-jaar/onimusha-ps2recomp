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

// Function: sub_002378E0
// Address: 0x2378e0 - 0x23790c
void sub_002378E0_0x2378e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002378E0_0x2378e0");
#endif

    switch (ctx->pc) {
        case 0x2378f4u: goto label_2378f4;
        case 0x2378fcu: goto label_2378fc;
        default: break;
    }

    ctx->pc = 0x2378e0u;

    // 0x2378e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2378e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2378e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2378e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2378e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2378ec: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2378ECu;
    SET_GPR_U32(ctx, 31, 0x2378F4u);
    ctx->pc = 0x2378F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378ECu;
    // 0x2378f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2378ECu, 0x2378F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378F4u;
label_2378f4:
    // 0x2378f4: 0xc08de44  jal         func_237910
    ctx->pc = 0x2378F4u;
    SET_GPR_U32(ctx, 31, 0x2378FCu);
    ctx->pc = 0x2378F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378F4u;
    // 0x2378f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237910u, 0x2378F4u, 0x2378FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378FCu;
label_2378fc:
    // 0x2378fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2378fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237904: 0x808e2c2  j           func_238B08
    ctx->pc = 0x237904u;
    ctx->pc = 0x237908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237904u;
    // 0x237908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x23790Cu;
}
