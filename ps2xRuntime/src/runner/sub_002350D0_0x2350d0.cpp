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

// Function: sub_002350D0
// Address: 0x2350d0 - 0x235100
void sub_002350D0_0x2350d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350D0_0x2350d0");
#endif

    switch (ctx->pc) {
        case 0x2350ecu: goto label_2350ec;
        default: break;
    }

    ctx->pc = 0x2350d0u;

    // 0x2350d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2350d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2350d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2350d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2350dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2350dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2350e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2350e4: 0xc092c6a  jal         func_24B1A8
    ctx->pc = 0x2350E4u;
    SET_GPR_U32(ctx, 31, 0x2350ECu);
    ctx->pc = 0x2350E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350E4u;
    // 0x2350e8: 0xac507550  sw          $s0, 0x7550($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 30032), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B1A8u, 0x2350E4u, 0x2350ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2350ECu;
label_2350ec:
    // 0x2350ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2350ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2350f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2350f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2350f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2350f8: 0x80921ce  j           func_248738
    ctx->pc = 0x2350F8u;
    ctx->pc = 0x2350FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350F8u;
    // 0x2350fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248738u;
    sub_00248738_0x248738(rdram, ctx, runtime); return;
    ctx->pc = 0x235100u;
}
