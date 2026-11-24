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

// Function: sub_0024D750
// Address: 0x24d750 - 0x24d78c
void sub_0024D750_0x24d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D750_0x24d750");
#endif

    switch (ctx->pc) {
        case 0x24d76cu: goto label_24d76c;
        case 0x24d778u: goto label_24d778;
        default: break;
    }

    ctx->pc = 0x24d750u;

    // 0x24d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d75c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d764: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D764u;
    SET_GPR_U32(ctx, 31, 0x24D76Cu);
    ctx->pc = 0x24D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D764u;
    // 0x24d768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D764u, 0x24D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D76Cu;
label_24d76c:
    // 0x24d76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d770: 0xc0935e4  jal         func_24D790
    ctx->pc = 0x24D770u;
    SET_GPR_U32(ctx, 31, 0x24D778u);
    ctx->pc = 0x24D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D770u;
    // 0x24d774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D790u, 0x24D770u, 0x24D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D778u;
label_24d778:
    // 0x24d778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d77c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d784: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D784u;
    ctx->pc = 0x24D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D784u;
    // 0x24d788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D78Cu;
}
