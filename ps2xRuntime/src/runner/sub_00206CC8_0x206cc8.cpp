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

// Function: sub_00206CC8
// Address: 0x206cc8 - 0x206cf0
void sub_00206CC8_0x206cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206CC8_0x206cc8");
#endif

    ctx->pc = 0x206cc8u;

    // 0x206cc8: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x206ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206cd0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x206cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x206cd4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x206cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x206cd8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x206cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x206cdc: 0xacc29f78  sw          $v0, -0x6088($a2)
    ctx->pc = 0x206cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B9F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F78u, _value); } while (0);
    // 0x206ce0: 0xac609f7c  sw          $zero, -0x6084($v1)
    ctx->pc = 0x206ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B9F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F7Cu, _value); } while (0);
    // 0x206ce4: 0xac809f80  sw          $zero, -0x6080($a0)
    ctx->pc = 0x206ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B9F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F80u, _value); } while (0);
    // 0x206ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x206CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CE8u;
        // 0x206cec: 0xaca09f84  sw          $zero, -0x607C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294942596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206CF0u;
}
