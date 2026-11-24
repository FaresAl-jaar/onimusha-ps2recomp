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

// Function: sub_0036B0D0
// Address: 0x36b0d0 - 0x36b108
void sub_0036B0D0_0x36b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B0D0_0x36b0d0");
#endif

    switch (ctx->pc) {
        case 0x36b0ecu: goto label_36b0ec;
        default: break;
    }

    ctx->pc = 0x36b0d0u;

    // 0x36b0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b0d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b0dc: 0x948501a0  lhu         $a1, 0x1A0($a0)
    ctx->pc = 0x36b0dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x36b0e0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36b0e4: 0xc0bd064  jal         func_2F4190
    ctx->pc = 0x36B0E4u;
    SET_GPR_U32(ctx, 31, 0x36B0ECu);
    ctx->pc = 0x36B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0E4u;
    // 0x36b0e8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4190u, 0x36B0E4u, 0x36B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0ECu;
label_36b0ec:
    // 0x36b0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b0f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b0f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36b0f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36b0f8: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x36b0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x36b0fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x36b100: 0x3e00008  jr          $ra
    ctx->pc = 0x36B100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B100u;
        // 0x36b104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B108u;
}
