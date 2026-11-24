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

// Function: sub_0033ABF0
// Address: 0x33abf0 - 0x33ac1c
void sub_0033ABF0_0x33abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ABF0_0x33abf0");
#endif

    ctx->pc = 0x33abf0u;

    // 0x33abf0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33abf4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33abf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abf8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x33abf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x33abfc: 0xfc23f888  sd          $v1, -0x778($at)
    ctx->pc = 0x33abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965384), GPR_U64(ctx, 3));
    // 0x33ac00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33ac04: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac08: 0xa023f82a  sb          $v1, -0x7D6($at)
    ctx->pc = 0x33ac08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F82Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Au, _value); } while (0);
    // 0x33ac0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x33ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ac10: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33ac14: 0x3e00008  jr          $ra
    ctx->pc = 0x33AC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC14u;
        // 0x33ac18: 0xa023f846  sb          $v1, -0x7BA($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965318), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AC1Cu;
}
