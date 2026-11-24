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

// Function: sub_00208708
// Address: 0x208708 - 0x208730
void sub_00208708_0x208708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208708_0x208708");
#endif

    switch (ctx->pc) {
        case 0x208718u: goto label_208718;
        default: break;
    }

    ctx->pc = 0x208708u;

    // 0x208708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20870c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208710: 0xc0897ca  jal         func_225F28
    ctx->pc = 0x208710u;
    SET_GPR_U32(ctx, 31, 0x208718u);
    ctx->pc = 0x225F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F28u, 0x208710u, 0x208718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208718u;
label_208718:
    // 0x208718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20871c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20871cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x208720: 0x24848730  addiu       $a0, $a0, -0x78D0
    ctx->pc = 0x208720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936368));
    // 0x208724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208728: 0x8089812  j           func_226048
    ctx->pc = 0x208728u;
    ctx->pc = 0x20872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208728u;
    // 0x20872c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226048u;
    sub_00226048_0x226048(rdram, ctx, runtime); return;
    ctx->pc = 0x208730u;
}
