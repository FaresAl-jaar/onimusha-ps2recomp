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

// Function: sub_00209D20
// Address: 0x209d20 - 0x209d4c
void sub_00209D20_0x209d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D20_0x209d20");
#endif

    switch (ctx->pc) {
        case 0x209d34u: goto label_209d34;
        default: break;
    }

    ctx->pc = 0x209d20u;

    // 0x209d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209d2c: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209D2Cu;
    SET_GPR_U32(ctx, 31, 0x209D34u);
    ctx->pc = 0x209D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D2Cu;
    // 0x209d30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209D2Cu, 0x209D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D34u;
label_209d34:
    // 0x209d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209d38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d44: 0x80898d2  j           func_226348
    ctx->pc = 0x209D44u;
    ctx->pc = 0x209D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D44u;
    // 0x209d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    sub_00226348_0x226348(rdram, ctx, runtime); return;
    ctx->pc = 0x209D4Cu;
}
