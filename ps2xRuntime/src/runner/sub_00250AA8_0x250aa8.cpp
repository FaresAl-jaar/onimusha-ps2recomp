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

// Function: sub_00250AA8
// Address: 0x250aa8 - 0x250ad4
void sub_00250AA8_0x250aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250AA8_0x250aa8");
#endif

    switch (ctx->pc) {
        case 0x250abcu: goto label_250abc;
        case 0x250ac4u: goto label_250ac4;
        default: break;
    }

    ctx->pc = 0x250aa8u;

    // 0x250aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x250ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x250ab4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x250AB4u;
    SET_GPR_U32(ctx, 31, 0x250ABCu);
    ctx->pc = 0x250AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AB4u;
    // 0x250ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x250AB4u, 0x250ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250ABCu;
label_250abc:
    // 0x250abc: 0xc0942b6  jal         func_250AD8
    ctx->pc = 0x250ABCu;
    SET_GPR_U32(ctx, 31, 0x250AC4u);
    ctx->pc = 0x250AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250ABCu;
    // 0x250ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250AD8u, 0x250ABCu, 0x250AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AC4u;
label_250ac4:
    // 0x250ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250acc: 0x8093f40  j           func_24FD00
    ctx->pc = 0x250ACCu;
    ctx->pc = 0x250AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250ACCu;
    // 0x250ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x250AD4u;
}
