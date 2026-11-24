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

// Function: sub_002CB5C0
// Address: 0x2cb5c0 - 0x2cb5fc
void sub_002CB5C0_0x2cb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB5C0_0x2cb5c0");
#endif

    switch (ctx->pc) {
        case 0x2cb5d0u: goto label_2cb5d0;
        default: break;
    }

    ctx->pc = 0x2cb5c0u;

    // 0x2cb5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb5c8: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2CB5C8u;
    SET_GPR_U32(ctx, 31, 0x2CB5D0u);
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2CB5C8u, 0x2CB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5D0u;
label_2cb5d0:
    // 0x2cb5d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cb5d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb5d8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2cb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb5dc: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb5e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb5e4: 0x24636586  addiu       $v1, $v1, 0x6586
    ctx->pc = 0x2cb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25990));
    // 0x2cb5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb5ec: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x2cb5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cb5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5F4u;
        // 0x2cb5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5FCu;
}
