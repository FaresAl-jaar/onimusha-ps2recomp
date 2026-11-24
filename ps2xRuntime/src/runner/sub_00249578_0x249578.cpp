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

// Function: sub_00249578
// Address: 0x249578 - 0x249598
void sub_00249578_0x249578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249578_0x249578");
#endif

    ctx->pc = 0x249578u;

    // 0x249578: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24957c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x249580: 0x24420b50  addiu       $v0, $v0, 0xB50
    ctx->pc = 0x249580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2896));
    // 0x249584: 0xac670b54  sw          $a3, 0xB54($v1)
    ctx->pc = 0x249584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4D0B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D0B54u, _value); } while (0);
    // 0x249588: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x249588u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4D0B52u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D0B52u, _value); } while (0);
    // 0x24958c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x24958cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D0B50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D0B50u, _value); } while (0);
    // 0x249590: 0x3e00008  jr          $ra
    ctx->pc = 0x249590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249590u;
        // 0x249594: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249598u;
}
