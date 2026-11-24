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

// Function: sub_0023C910
// Address: 0x23c910 - 0x23c94c
void sub_0023C910_0x23c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C910_0x23c910");
#endif

    switch (ctx->pc) {
        case 0x23c92cu: goto label_23c92c;
        case 0x23c938u: goto label_23c938;
        default: break;
    }

    ctx->pc = 0x23c910u;

    // 0x23c910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c91c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c924: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C924u;
    SET_GPR_U32(ctx, 31, 0x23C92Cu);
    ctx->pc = 0x23C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C924u;
    // 0x23c928: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C924u, 0x23C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c930: 0xc08f254  jal         func_23C950
    ctx->pc = 0x23C930u;
    SET_GPR_U32(ctx, 31, 0x23C938u);
    ctx->pc = 0x23C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C930u;
    // 0x23c934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C950u, 0x23C930u, 0x23C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C938u;
label_23c938:
    // 0x23c938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c93c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c944: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23C944u;
    ctx->pc = 0x23C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C944u;
    // 0x23c948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C94Cu;
}
