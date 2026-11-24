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

// Function: sub_00263D80
// Address: 0x263d80 - 0x263db4
void sub_00263D80_0x263d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263D80_0x263d80");
#endif

    switch (ctx->pc) {
        case 0x263da4u: goto label_263da4;
        default: break;
    }

    ctx->pc = 0x263d80u;

    // 0x263d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263d84: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x263d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263d8c: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x263d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x263d90: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x263d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x263d94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x263D94u;
    {
        const bool branch_taken_0x263d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263d94) {
            ctx->pc = 0x263DA8u;
            goto label_263da8;
        }
    }
    ctx->pc = 0x263D9Cu;
    // 0x263d9c: 0xc0a72c4  jal         func_29CB10
    ctx->pc = 0x263D9Cu;
    SET_GPR_U32(ctx, 31, 0x263DA4u);
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x263D9Cu, 0x263DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DA4u;
label_263da4:
    // 0x263da4: 0x0  nop
    ctx->pc = 0x263da4u;
    // NOP
label_263da8:
    // 0x263da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263dac: 0x3e00008  jr          $ra
    ctx->pc = 0x263DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DACu;
        // 0x263db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263DB4u;
}
