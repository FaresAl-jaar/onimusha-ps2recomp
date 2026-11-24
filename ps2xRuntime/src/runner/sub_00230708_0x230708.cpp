#include <cstdio>
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

// Function: sub_00230708
// Address: 0x230708 - 0x230734
void sub_00230708_0x230708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230708_0x230708");
#endif
    { static uint32_t n=0; ++n; if (n<=40) fprintf(stderr,"[probe adxf_close] call %u a0=0x%x a1=0x%x a2=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,5),GPR_U32(ctx,6),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x23071cu: goto label_23071c;
        case 0x230724u: goto label_230724;
        default: break;
    }

    ctx->pc = 0x230708u;

    // 0x230708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23070c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x230714: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230714u;
    SET_GPR_U32(ctx, 31, 0x23071Cu);
    ctx->pc = 0x230718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230714u;
    // 0x230718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230714u, 0x23071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23071Cu;
label_23071c:
    // 0x23071c: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x23071Cu;
    SET_GPR_U32(ctx, 31, 0x230724u);
    ctx->pc = 0x230720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23071Cu;
    // 0x230720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x23071Cu, 0x230724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230724u;
label_230724:
    // 0x230724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230728: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23072c: 0x808c738  j           func_231CE0
    ctx->pc = 0x23072Cu;
    ctx->pc = 0x230730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23072Cu;
    // 0x230730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    sub_00231CE0_0x231ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x230734u;
}
