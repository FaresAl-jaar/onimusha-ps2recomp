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

// Function: sub_0020CD18
// Address: 0x20cd18 - 0x20cd70
void sub_0020CD18_0x20cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CD18_0x20cd18");
#endif

    ctx->pc = 0x20cd18u;

    // 0x20cd18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20cd1c: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x20cd20: 0x24a5fb50  addiu       $a1, $a1, -0x4B0
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966096));
    // 0x20cd24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20cd28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20cd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x87FB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x87FB50u, _value); } while (0);
    // 0x20cd2c: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x20cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x20cd30: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x20cd34: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20cd38: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x20cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x20cd3c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x20cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x20cd40: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20cd44: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x20cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20cd48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20cd4c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x20cd50: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x20cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x20cd54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x20cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x20cd58: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x20cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x20cd5c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20cd60: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x20cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x20cd64: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x20cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x20CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD68u;
        // 0x20cd6c: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CD70u;
}
