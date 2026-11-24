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

// Function: sub_0024B870
// Address: 0x24b870 - 0x24b8ac
void sub_0024B870_0x24b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B870_0x24b870");
#endif

    switch (ctx->pc) {
        case 0x24b88cu: goto label_24b88c;
        case 0x24b898u: goto label_24b898;
        default: break;
    }

    ctx->pc = 0x24b870u;

    // 0x24b870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b87c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b884: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B884u;
    SET_GPR_U32(ctx, 31, 0x24B88Cu);
    ctx->pc = 0x24B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B884u;
    // 0x24b888: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B884u, 0x24B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B88Cu;
label_24b88c:
    // 0x24b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b890: 0xc092e2c  jal         func_24B8B0
    ctx->pc = 0x24B890u;
    SET_GPR_U32(ctx, 31, 0x24B898u);
    ctx->pc = 0x24B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B890u;
    // 0x24b894: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B8B0u, 0x24B890u, 0x24B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B898u;
label_24b898:
    // 0x24b898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b89c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b8a4: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B8A4u;
    ctx->pc = 0x24B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8A4u;
    // 0x24b8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B8ACu;
}
