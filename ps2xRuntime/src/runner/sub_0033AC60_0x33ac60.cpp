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

// Function: sub_0033AC60
// Address: 0x33ac60 - 0x33ac8c
void sub_0033AC60_0x33ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AC60_0x33ac60");
#endif

    ctx->pc = 0x33ac60u;

    // 0x33ac60: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac64: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33ac68: 0xa020f82a  sb          $zero, -0x7D6($at)
    ctx->pc = 0x33ac68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F82Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Au, _value); } while (0);
    // 0x33ac6c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x33ac6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x33ac70: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac74: 0xa020f846  sb          $zero, -0x7BA($at)
    ctx->pc = 0x33ac74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F846u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F846u, _value); } while (0);
    // 0x33ac78: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac7c: 0xa020f82b  sb          $zero, -0x7D5($at)
    ctx->pc = 0x33ac7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F82Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Bu, _value); } while (0);
    // 0x33ac80: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x33AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC84u;
        // 0x33ac88: 0xfc23f888  sd          $v1, -0x778($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294965384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AC8Cu;
}
