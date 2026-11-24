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

// Function: sub_0023AD50
// Address: 0x23ad50 - 0x23ad8c
void sub_0023AD50_0x23ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD50_0x23ad50");
#endif

    switch (ctx->pc) {
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad78u: goto label_23ad78;
        default: break;
    }

    ctx->pc = 0x23ad50u;

    // 0x23ad50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ad54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ad58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ad58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ad60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ad64: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AD64u;
    SET_GPR_U32(ctx, 31, 0x23AD6Cu);
    ctx->pc = 0x23AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD64u;
    // 0x23ad68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AD64u, 0x23AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD6Cu;
label_23ad6c:
    // 0x23ad6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad70: 0xc08eb64  jal         func_23AD90
    ctx->pc = 0x23AD70u;
    SET_GPR_U32(ctx, 31, 0x23AD78u);
    ctx->pc = 0x23AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD70u;
    // 0x23ad74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD90u, 0x23AD70u, 0x23AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD78u;
label_23ad78:
    // 0x23ad78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ad78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ad7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ad7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ad80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ad80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad84: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AD84u;
    ctx->pc = 0x23AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD84u;
    // 0x23ad88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AD8Cu;
}
