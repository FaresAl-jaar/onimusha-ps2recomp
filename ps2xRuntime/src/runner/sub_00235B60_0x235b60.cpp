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

// Function: sub_00235B60
// Address: 0x235b60 - 0x235b8c
void sub_00235B60_0x235b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235B60_0x235b60");
#endif

    switch (ctx->pc) {
        case 0x235b78u: goto label_235b78;
        default: break;
    }

    ctx->pc = 0x235b60u;

    // 0x235b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x235b70: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x235B70u;
    SET_GPR_U32(ctx, 31, 0x235B78u);
    ctx->pc = 0x235B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B70u;
    // 0x235b74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229CC8u, 0x235B70u, 0x235B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B78u;
label_235b78:
    // 0x235b78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235b7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b84: 0x808a69c  j           func_229A70
    ctx->pc = 0x235B84u;
    ctx->pc = 0x235B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B84u;
    // 0x235b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A70u;
    sub_00229A70_0x229a70(rdram, ctx, runtime); return;
    ctx->pc = 0x235B8Cu;
}
