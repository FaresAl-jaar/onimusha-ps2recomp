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

// Function: sub_00339A10
// Address: 0x339a10 - 0x339a44
void sub_00339A10_0x339a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A10_0x339a10");
#endif

    switch (ctx->pc) {
        case 0x339a34u: goto label_339a34;
        default: break;
    }

    ctx->pc = 0x339a10u;

    // 0x339a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339a18: 0x90830045  lbu         $v1, 0x45($a0)
    ctx->pc = 0x339a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 69)));
    // 0x339a1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339A1Cu;
    {
        const bool branch_taken_0x339a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a1c) {
            ctx->pc = 0x339A38u;
            goto label_339a38;
        }
    }
    ctx->pc = 0x339A24u;
    // 0x339a24: 0x90850044  lbu         $a1, 0x44($a0)
    ctx->pc = 0x339a24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x339a28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339a2c: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x339A2Cu;
    SET_GPR_U32(ctx, 31, 0x339A34u);
    ctx->pc = 0x339A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339A2Cu;
    // 0x339a30: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x339A2Cu, 0x339A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A34u;
label_339a34:
    // 0x339a34: 0x0  nop
    ctx->pc = 0x339a34u;
    // NOP
label_339a38:
    // 0x339a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x339A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A3Cu;
        // 0x339a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A44u;
}
