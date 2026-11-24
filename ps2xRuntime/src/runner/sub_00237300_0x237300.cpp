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

// Function: sub_00237300
// Address: 0x237300 - 0x23732c
void sub_00237300_0x237300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237300_0x237300");
#endif

    switch (ctx->pc) {
        case 0x237314u: goto label_237314;
        case 0x23731cu: goto label_23731c;
        default: break;
    }

    ctx->pc = 0x237300u;

    // 0x237300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23730c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23730Cu;
    SET_GPR_U32(ctx, 31, 0x237314u);
    ctx->pc = 0x237310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23730Cu;
    // 0x237310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23730Cu, 0x237314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237314u;
label_237314:
    // 0x237314: 0xc08dccc  jal         func_237330
    ctx->pc = 0x237314u;
    SET_GPR_U32(ctx, 31, 0x23731Cu);
    ctx->pc = 0x237318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237314u;
    // 0x237318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237330u, 0x237314u, 0x23731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23731Cu;
label_23731c:
    // 0x23731c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23731cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237324: 0x808e2c2  j           func_238B08
    ctx->pc = 0x237324u;
    ctx->pc = 0x237328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237324u;
    // 0x237328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x23732Cu;
}
