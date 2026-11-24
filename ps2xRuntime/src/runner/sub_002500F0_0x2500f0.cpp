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

// Function: sub_002500F0
// Address: 0x2500f0 - 0x25013c
void sub_002500F0_0x2500f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002500F0_0x2500f0");
#endif

    switch (ctx->pc) {
        case 0x250114u: goto label_250114;
        case 0x250124u: goto label_250124;
        default: break;
    }

    ctx->pc = 0x2500f0u;

    // 0x2500f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2500f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2500f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2500f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2500f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2500f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2500fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250108: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x250108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25010c: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x25010Cu;
    SET_GPR_U32(ctx, 31, 0x250114u);
    ctx->pc = 0x250110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25010Cu;
    // 0x250110: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x25010Cu, 0x250114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250114u;
label_250114:
    // 0x250114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25011c: 0xc094050  jal         func_250140
    ctx->pc = 0x25011Cu;
    SET_GPR_U32(ctx, 31, 0x250124u);
    ctx->pc = 0x250120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25011Cu;
    // 0x250120: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250140u, 0x25011Cu, 0x250124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250124u;
label_250124:
    // 0x250124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25012c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25012cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250130: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x250130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250134: 0x8093f40  j           func_24FD00
    ctx->pc = 0x250134u;
    ctx->pc = 0x250138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250134u;
    // 0x250138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x25013Cu;
}
