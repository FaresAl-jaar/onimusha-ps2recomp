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

// Function: sub_0033ABC0
// Address: 0x33abc0 - 0x33abe8
void sub_0033ABC0_0x33abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ABC0_0x33abc0");
#endif

    ctx->pc = 0x33abc0u;

    // 0x33abc0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33abc8: 0xa020f846  sb          $zero, -0x7BA($at)
    ctx->pc = 0x33abc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F846u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F846u, _value); } while (0);
    // 0x33abcc: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33abd0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33abd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abd4: 0xa023f82a  sb          $v1, -0x7D6($at)
    ctx->pc = 0x33abd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x90F82Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x90F82Au, _value); } while (0);
    // 0x33abd8: 0x70041b89  pcpyld      $v1, $zero, $a0
    ctx->pc = 0x33abd8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x33abdc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33abdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x33ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABE0u;
        // 0x33abe4: 0xfc23f888  sd          $v1, -0x778($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294965384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ABE8u;
}
