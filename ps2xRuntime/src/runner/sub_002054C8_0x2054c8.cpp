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

// Function: sub_002054C8
// Address: 0x2054c8 - 0x205500
void sub_002054C8_0x2054c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002054C8_0x2054c8");
#endif

    switch (ctx->pc) {
        case 0x2054dcu: goto label_2054dc;
        default: break;
    }

    ctx->pc = 0x2054c8u;

    // 0x2054c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2054c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2054cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2054ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2054d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2054d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2054d4: 0xc081c12  jal         func_207048
    ctx->pc = 0x2054D4u;
    SET_GPR_U32(ctx, 31, 0x2054DCu);
    ctx->pc = 0x2054D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054D4u;
    // 0x2054d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x2054D4u, 0x2054DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054DCu;
label_2054dc:
    // 0x2054dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2054e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2054e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2054e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2054e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2054e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2054ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2054f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2054f4: 0x8c422528  lw          $v0, 0x2528($v0)
    ctx->pc = 0x2054f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9512)));
    // 0x2054f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2054F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F8u;
        // 0x2054fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205500u;
}
