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

// Function: sub_00221478
// Address: 0x221478 - 0x2214b4
void sub_00221478_0x221478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221478_0x221478");
#endif

    ctx->pc = 0x221478u;

    // 0x221478: 0x8c820920  lw          $v0, 0x920($a0)
    ctx->pc = 0x221478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2336)));
    // 0x22147c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22147Cu;
    {
        const bool branch_taken_0x22147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22147Cu;
        // 0x221480: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22147c) {
            ctx->pc = 0x221498u;
            goto label_221498;
        }
    }
    ctx->pc = 0x221484u;
    // 0x221484: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x221484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x221488: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x221488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x22148c: 0x3e00008  jr          $ra
    ctx->pc = 0x22148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22148Cu;
        // 0x221490: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22148Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221494u;
    // 0x221494: 0x0  nop
    ctx->pc = 0x221494u;
    // NOP
label_221498:
    // 0x221498: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x221498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x22149c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x22149cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2214a0: 0x8c238c70  lw          $v1, -0x7390($at)
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937712)));
    // 0x2214a4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2214a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2214a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2214a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2214ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2214ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2214B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214ACu;
        // 0x2214b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2214ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2214B4u;
}
