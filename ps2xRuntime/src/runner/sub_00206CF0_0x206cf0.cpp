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

// Function: sub_00206CF0
// Address: 0x206cf0 - 0x206d10
void sub_00206CF0_0x206cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206CF0_0x206cf0");
#endif

    switch (ctx->pc) {
        case 0x206d00u: goto label_206d00;
        default: break;
    }

    ctx->pc = 0x206cf0u;

    // 0x206cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206cf8: 0xc081bba  jal         func_206EE8
    ctx->pc = 0x206CF8u;
    SET_GPR_U32(ctx, 31, 0x206D00u);
    ctx->pc = 0x206CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CF8u;
    // 0x206cfc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206EE8u, 0x206CF8u, 0x206D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D00u;
label_206d00:
    // 0x206d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206d04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206d08: 0x8081bba  j           func_206EE8
    ctx->pc = 0x206D08u;
    ctx->pc = 0x206D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D08u;
    // 0x206d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EE8u;
    sub_00206EE8_0x206ee8(rdram, ctx, runtime); return;
    ctx->pc = 0x206D10u;
}
