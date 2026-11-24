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

// Function: sub_00232CC0
// Address: 0x232cc0 - 0x232cfc
void sub_00232CC0_0x232cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232CC0_0x232cc0");
#endif

    switch (ctx->pc) {
        case 0x232cdcu: goto label_232cdc;
        case 0x232ce8u: goto label_232ce8;
        default: break;
    }

    ctx->pc = 0x232cc0u;

    // 0x232cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232cd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232cd4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232CD4u;
    SET_GPR_U32(ctx, 31, 0x232CDCu);
    ctx->pc = 0x232CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CD4u;
    // 0x232cd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232CD4u, 0x232CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CDCu;
label_232cdc:
    // 0x232cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ce0: 0xc08cb40  jal         func_232D00
    ctx->pc = 0x232CE0u;
    SET_GPR_U32(ctx, 31, 0x232CE8u);
    ctx->pc = 0x232CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CE0u;
    // 0x232ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D00u, 0x232CE0u, 0x232CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CE8u;
label_232ce8:
    // 0x232ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cf4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x232CF4u;
    ctx->pc = 0x232CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CF4u;
    // 0x232cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232CFCu;
}
