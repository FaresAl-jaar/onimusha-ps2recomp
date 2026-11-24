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

// Function: sub_0033AC20
// Address: 0x33ac20 - 0x33ac5c
void sub_0033AC20_0x33ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AC20_0x33ac20");
#endif

    ctx->pc = 0x33ac20u;

    // 0x33ac20: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33ac24: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac28: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x33ac28u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x33ac2c: 0xfc23f888  sd          $v1, -0x778($at)
    ctx->pc = 0x33ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965384), GPR_U64(ctx, 3));
    // 0x33ac30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33ac34: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac38: 0xa023f82a  sb          $v1, -0x7D6($at)
    ctx->pc = 0x33ac38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F82Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Au, _value); } while (0);
    // 0x33ac3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x33ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ac40: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac44: 0xa023f846  sb          $v1, -0x7BA($at)
    ctx->pc = 0x33ac44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F846u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F846u, _value); } while (0);
    // 0x33ac48: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac4c: 0xa023f82c  sb          $v1, -0x7D4($at)
    ctx->pc = 0x33ac4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F82Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Cu, _value); } while (0);
    // 0x33ac50: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x33AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC54u;
        // 0x33ac58: 0xa023f82b  sb          $v1, -0x7D5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965291), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AC5Cu;
}
