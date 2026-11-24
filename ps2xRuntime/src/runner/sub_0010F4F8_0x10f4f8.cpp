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

// Function: sub_0010F4F8
// Address: 0x10f4f8 - 0x10f51c
void sub_0010F4F8_0x10f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F4F8_0x10f4f8");
#endif

    ctx->pc = 0x10f4f8u;

    // 0x10f4f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10f4fc: 0x2443ccc0  addiu       $v1, $v0, -0x3340
    ctx->pc = 0x10f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954176));
    // 0x10f500: 0xac44ccc0  sw          $a0, -0x3340($v0)
    ctx->pc = 0x10f500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x68CCC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68CCC0u, _value); } while (0);
    // 0x10f504: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x10f504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10f508: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10f508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f50c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10f50cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x68CCC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68CCC8u, _value); } while (0);
    // 0x10f510: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10f510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x68CCC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68CCC4u, _value); } while (0);
    // 0x10f514: 0x3e00008  jr          $ra
    ctx->pc = 0x10F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F514u;
        // 0x10f518: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F51Cu;
}
