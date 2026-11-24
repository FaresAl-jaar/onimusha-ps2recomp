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

// Function: sub_0020CAD8
// Address: 0x20cad8 - 0x20cb00
void sub_0020CAD8_0x20cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CAD8_0x20cad8");
#endif

    switch (ctx->pc) {
        case 0x20caecu: goto label_20caec;
        default: break;
    }

    ctx->pc = 0x20cad8u;

    // 0x20cad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cae0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20cae4: 0xc08de12  jal         func_237848
    ctx->pc = 0x20CAE4u;
    SET_GPR_U32(ctx, 31, 0x20CAECu);
    ctx->pc = 0x20CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAE4u;
    // 0x20cae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x20CAE4u, 0x20CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAECu;
label_20caec:
    // 0x20caec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20caecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20caf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20caf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20caf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20caf8: 0x808dd46  j           func_237518
    ctx->pc = 0x20CAF8u;
    ctx->pc = 0x20CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAF8u;
    // 0x20cafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237518u;
    sub_00237518_0x237518(rdram, ctx, runtime); return;
    ctx->pc = 0x20CB00u;
}
