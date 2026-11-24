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

// Function: sub_002D1C20
// Address: 0x2d1c20 - 0x2d1c64
void sub_002D1C20_0x2d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C20_0x2d1c20");
#endif

    switch (ctx->pc) {
        case 0x2d1c54u: goto label_2d1c54;
        default: break;
    }

    ctx->pc = 0x2d1c20u;

    // 0x2d1c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1c28: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x2d1c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1c2c: 0xa480005e  sh          $zero, 0x5E($a0)
    ctx->pc = 0x2d1c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1c30: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x2d1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x2d1c34: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d1c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d1c38: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x2d1c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x2d1c3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1C3Cu;
    {
        const bool branch_taken_0x2d1c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c3c) {
            ctx->pc = 0x2D1C58u;
            goto label_2d1c58;
        }
    }
    ctx->pc = 0x2D1C44u;
    // 0x2d1c44: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x2d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2d1c48: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2d1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2d1c4c: 0xc0b4550  jal         func_2D1540
    ctx->pc = 0x2D1C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C54u);
    ctx->pc = 0x2D1C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C4Cu;
    // 0x2d1c50: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1540u, 0x2D1C4Cu, 0x2D1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C54u;
label_2d1c54:
    // 0x2d1c54: 0x0  nop
    ctx->pc = 0x2d1c54u;
    // NOP
label_2d1c58:
    // 0x2d1c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C5Cu;
        // 0x2d1c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C64u;
}
