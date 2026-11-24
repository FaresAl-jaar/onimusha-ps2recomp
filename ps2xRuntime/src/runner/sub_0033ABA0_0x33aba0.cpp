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

// Function: sub_0033ABA0
// Address: 0x33aba0 - 0x33abc0
void sub_0033ABA0_0x33aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ABA0_0x33aba0");
#endif

    ctx->pc = 0x33aba0u;

    // 0x33aba0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33aba4: 0xac20f840  sw          $zero, -0x7C0($at)
    ctx->pc = 0x33aba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x90F840u, _value); } while (0);
    // 0x33aba8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abac: 0xfc20f8a0  sd          $zero, -0x760($at)
    ctx->pc = 0x33abacu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F8A0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x90F8A0u, _value); } while (0);
    // 0x33abb0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33abb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33abb4: 0x8c23f840  lw          $v1, -0x7C0($at)
    ctx->pc = 0x33abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x90F840u));
    // 0x33abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x33ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABB8u;
        // 0x33abbc: 0xa4830050  sh          $v1, 0x50($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ABC0u;
}
