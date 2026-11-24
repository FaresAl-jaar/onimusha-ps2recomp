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

// Function: sub_0020CB00
// Address: 0x20cb00 - 0x20cb28
void sub_0020CB00_0x20cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB00_0x20cb00");
#endif

    switch (ctx->pc) {
        case 0x20cb14u: goto label_20cb14;
        default: break;
    }

    ctx->pc = 0x20cb00u;

    // 0x20cb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cb08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20cb0c: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x20CB0Cu;
    SET_GPR_U32(ctx, 31, 0x20CB14u);
    ctx->pc = 0x20CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB0Cu;
    // 0x20cb10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x20CB0Cu, 0x20CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB14u;
label_20cb14:
    // 0x20cb14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20cb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cb20: 0x808dd62  j           func_237588
    ctx->pc = 0x20CB20u;
    ctx->pc = 0x20CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB20u;
    // 0x20cb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    sub_00237588_0x237588(rdram, ctx, runtime); return;
    ctx->pc = 0x20CB28u;
}
