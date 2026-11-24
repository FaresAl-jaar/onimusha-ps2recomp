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

// Function: sub_0023C528
// Address: 0x23c528 - 0x23c554
void sub_0023C528_0x23c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C528_0x23c528");
#endif

    switch (ctx->pc) {
        case 0x23c53cu: goto label_23c53c;
        case 0x23c544u: goto label_23c544;
        default: break;
    }

    ctx->pc = 0x23c528u;

    // 0x23c528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c534: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C534u;
    SET_GPR_U32(ctx, 31, 0x23C53Cu);
    ctx->pc = 0x23C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C534u;
    // 0x23c538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C534u, 0x23C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C53Cu;
label_23c53c:
    // 0x23c53c: 0xc08f156  jal         func_23C558
    ctx->pc = 0x23C53Cu;
    SET_GPR_U32(ctx, 31, 0x23C544u);
    ctx->pc = 0x23C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C53Cu;
    // 0x23c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C558u, 0x23C53Cu, 0x23C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C544u;
label_23c544:
    // 0x23c544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c54c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23C54Cu;
    ctx->pc = 0x23C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C54Cu;
    // 0x23c550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C554u;
}
