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

// Function: sub_002354E0
// Address: 0x2354e0 - 0x235518
void sub_002354E0_0x2354e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002354E0_0x2354e0");
#endif

    switch (ctx->pc) {
        case 0x2354f8u: goto label_2354f8;
        case 0x235504u: goto label_235504;
        default: break;
    }

    ctx->pc = 0x2354e0u;

    // 0x2354e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2354e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2354e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2354e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2354e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2354ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2354ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2354f0: 0xc093c7e  jal         func_24F1F8
    ctx->pc = 0x2354F0u;
    SET_GPR_U32(ctx, 31, 0x2354F8u);
    ctx->pc = 0x2354F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354F0u;
    // 0x2354f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F1F8u, 0x2354F0u, 0x2354F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354F8u;
label_2354f8:
    // 0x2354f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2354f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354fc: 0xc093c58  jal         func_24F160
    ctx->pc = 0x2354FCu;
    SET_GPR_U32(ctx, 31, 0x235504u);
    ctx->pc = 0x235500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354FCu;
    // 0x235500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F160u, 0x2354FCu, 0x235504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235504u;
label_235504:
    // 0x235504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23550c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23550cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235510: 0x8093bf4  j           func_24EFD0
    ctx->pc = 0x235510u;
    ctx->pc = 0x235514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235510u;
    // 0x235514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EFD0u;
    sub_0024EFD0_0x24efd0(rdram, ctx, runtime); return;
    ctx->pc = 0x235518u;
}
