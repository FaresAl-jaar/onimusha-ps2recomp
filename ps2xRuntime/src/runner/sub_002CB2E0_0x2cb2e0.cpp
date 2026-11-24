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

// Function: sub_002CB2E0
// Address: 0x2cb2e0 - 0x2cb338
void sub_002CB2E0_0x2cb2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB2E0_0x2cb2e0");
#endif

    switch (ctx->pc) {
        case 0x2cb2f8u: goto label_2cb2f8;
        default: break;
    }

    ctx->pc = 0x2cb2e0u;

    // 0x2cb2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb2e4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cb2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cb2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb2ec: 0x24846480  addiu       $a0, $a0, 0x6480
    ctx->pc = 0x2cb2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25728));
    // 0x2cb2f0: 0xc0b2c78  jal         func_2CB1E0
    ctx->pc = 0x2CB2F0u;
    SET_GPR_U32(ctx, 31, 0x2CB2F8u);
    ctx->pc = 0x2CB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2F0u;
    // 0x2cb2f4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB1E0u, 0x2CB2F0u, 0x2CB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2F8u;
label_2cb2f8:
    // 0x2cb2f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb2fc: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb300: 0xac206aa0  sw          $zero, 0x6AA0($at)
    ctx->pc = 0x2cb300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6AA0u, _value); } while (0);
    // 0x2cb304: 0x24636ab0  addiu       $v1, $v1, 0x6AB0
    ctx->pc = 0x2cb304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
    // 0x2cb308: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb30c: 0xa3808a28  sb          $zero, -0x75D8($gp)
    ctx->pc = 0x2cb30cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb310: 0xac236a9c  sw          $v1, 0x6A9C($at)
    ctx->pc = 0x2cb310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6A9Cu, _value); } while (0);
    // 0x2cb314: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb318: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb31c: 0x24636a90  addiu       $v1, $v1, 0x6A90
    ctx->pc = 0x2cb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27280));
    // 0x2cb320: 0xac236ac0  sw          $v1, 0x6AC0($at)
    ctx->pc = 0x2cb320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6AC0u, _value); } while (0);
    // 0x2cb324: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb328: 0xac206abc  sw          $zero, 0x6ABC($at)
    ctx->pc = 0x2cb328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6ABCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6ABCu, _value); } while (0);
    // 0x2cb32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb330: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB330u;
        // 0x2cb334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB338u;
}
