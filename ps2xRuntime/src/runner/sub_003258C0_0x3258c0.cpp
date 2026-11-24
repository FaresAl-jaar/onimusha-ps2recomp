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

// Function: sub_003258C0
// Address: 0x3258c0 - 0x3258fc
void sub_003258C0_0x3258c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003258C0_0x3258c0");
#endif

    ctx->pc = 0x3258c0u;

    // 0x3258c0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3258c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3258c4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x3258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3258c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3258c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3258cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3258d0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3258d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x3258d4: 0xe420ae60  swc1        $f0, -0x51A0($at)
    ctx->pc = 0x3258d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946400), bits); }
    // 0x3258d8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3258d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3258dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3258dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3258e0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3258e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x3258e4: 0xe420ae64  swc1        $f0, -0x519C($at)
    ctx->pc = 0x3258e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946404), bits); }
    // 0x3258e8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3258e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3258ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3258f0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3258f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x3258f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3258F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258F4u;
        // 0x3258f8: 0xe420ae68  swc1        $f0, -0x5198($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294946408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258FCu;
}
