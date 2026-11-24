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

// Function: sub_002F4D00
// Address: 0x2f4d00 - 0x2f4d28
void sub_002F4D00_0x2f4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D00_0x2f4d00");
#endif

    ctx->pc = 0x2f4d00u;

    // 0x2f4d00: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2f4d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2f4d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4d08: 0xa020e023  sb          $zero, -0x1FDD($at)
    ctx->pc = 0x2f4d08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DE023u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE023u, _value); } while (0);
    // 0x2f4d0c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2f4d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2f4d10: 0xa023e020  sb          $v1, -0x1FE0($at)
    ctx->pc = 0x2f4d10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE020u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE020u, _value); } while (0);
    // 0x2f4d14: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2f4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2f4d18: 0xa023e021  sb          $v1, -0x1FDF($at)
    ctx->pc = 0x2f4d18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE021u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE021u, _value); } while (0);
    // 0x2f4d1c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2f4d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2f4d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D20u;
        // 0x2f4d24: 0xa023e022  sb          $v1, -0x1FDE($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294959138), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4D28u;
}
