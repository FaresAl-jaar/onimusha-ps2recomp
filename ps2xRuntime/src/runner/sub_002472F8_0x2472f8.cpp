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

// Function: sub_002472F8
// Address: 0x2472f8 - 0x247320
void sub_002472F8_0x2472f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002472F8_0x2472f8");
#endif

    switch (ctx->pc) {
        case 0x24730cu: goto label_24730c;
        default: break;
    }

    ctx->pc = 0x2472f8u;

    // 0x2472f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2472fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2472fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247304: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247304u;
    // 0x247308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x247304u, 0x24730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247310: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x247310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x247314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247318: 0x8093f40  j           func_24FD00
    ctx->pc = 0x247318u;
    ctx->pc = 0x24731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247318u;
    // 0x24731c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x247320u;
}
