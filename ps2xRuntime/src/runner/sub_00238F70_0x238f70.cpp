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

// Function: sub_00238F70
// Address: 0x238f70 - 0x238f9c
void sub_00238F70_0x238f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238F70_0x238f70");
#endif

    switch (ctx->pc) {
        case 0x238f84u: goto label_238f84;
        case 0x238f8cu: goto label_238f8c;
        default: break;
    }

    ctx->pc = 0x238f70u;

    // 0x238f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x238f7c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x238F7Cu;
    SET_GPR_U32(ctx, 31, 0x238F84u);
    ctx->pc = 0x238F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F7Cu;
    // 0x238f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x238F7Cu, 0x238F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F84u;
label_238f84:
    // 0x238f84: 0xc08e3e8  jal         func_238FA0
    ctx->pc = 0x238F84u;
    SET_GPR_U32(ctx, 31, 0x238F8Cu);
    ctx->pc = 0x238F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F84u;
    // 0x238f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238FA0u, 0x238F84u, 0x238F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F8Cu;
label_238f8c:
    // 0x238f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238f94: 0x808b536  j           func_22D4D8
    ctx->pc = 0x238F94u;
    ctx->pc = 0x238F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F94u;
    // 0x238f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x238F9Cu;
}
