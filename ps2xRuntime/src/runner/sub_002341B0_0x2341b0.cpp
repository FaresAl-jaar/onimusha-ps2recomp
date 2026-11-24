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

// Function: sub_002341B0
// Address: 0x2341b0 - 0x234200
void sub_002341B0_0x2341b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002341B0_0x2341b0");
#endif

    ctx->pc = 0x2341b0u;

    // 0x2341b0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2341b4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2341b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2341b8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2341bc: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x2341bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x2341c0: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x2341c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x2341c4: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x2341c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x2341c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2341cc: 0x2463fcc8  addiu       $v1, $v1, -0x338
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966472));
    // 0x2341d0: 0x2484fcd8  addiu       $a0, $a0, -0x328
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966488));
    // 0x2341d4: 0x24a5fce8  addiu       $a1, $a1, -0x318
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966504));
    // 0x2341d8: 0x24c6fcf8  addiu       $a2, $a2, -0x308
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966520));
    // 0x2341dc: 0x24e7fd08  addiu       $a3, $a3, -0x2F8
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966536));
    // 0x2341e0: 0x2508fd18  addiu       $t0, $t0, -0x2E8
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966552));
    // 0x2341e4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2341e4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFCC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4BFCC8u, _value); } while (0);
    // 0x2341e8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2341e8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFCD8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4BFCD8u, _value); } while (0);
    // 0x2341ec: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2341ecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFCE8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4BFCE8u, _value); } while (0);
    // 0x2341f0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2341f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFCF8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4BFCF8u, _value); } while (0);
    // 0x2341f4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2341f4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFD08u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4BFD08u, _value); } while (0);
    // 0x2341f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2341F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2341FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F8u;
        // 0x2341fc: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2341F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234200u;
}
