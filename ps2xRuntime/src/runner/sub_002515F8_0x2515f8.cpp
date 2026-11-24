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

// Function: sub_002515F8
// Address: 0x2515f8 - 0x251624
void sub_002515F8_0x2515f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002515F8_0x2515f8");
#endif

    switch (ctx->pc) {
        case 0x25160cu: goto label_25160c;
        case 0x251614u: goto label_251614;
        default: break;
    }

    ctx->pc = 0x2515f8u;

    // 0x2515f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2515f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2515fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2515fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x251600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x251604: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251604u;
    SET_GPR_U32(ctx, 31, 0x25160Cu);
    ctx->pc = 0x251608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251604u;
    // 0x251608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251604u, 0x25160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25160Cu;
label_25160c:
    // 0x25160c: 0xc09458a  jal         func_251628
    ctx->pc = 0x25160Cu;
    SET_GPR_U32(ctx, 31, 0x251614u);
    ctx->pc = 0x251610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25160Cu;
    // 0x251610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251628u, 0x25160Cu, 0x251614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251614u;
label_251614:
    // 0x251614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x251618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25161c: 0x8093f40  j           func_24FD00
    ctx->pc = 0x25161Cu;
    ctx->pc = 0x251620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25161Cu;
    // 0x251620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x251624u;
}
