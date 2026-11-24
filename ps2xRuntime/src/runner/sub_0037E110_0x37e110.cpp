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

// Function: sub_0037E110
// Address: 0x37e110 - 0x37e13c
void sub_0037E110_0x37e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E110_0x37e110");
#endif

    ctx->pc = 0x37e110u;

    // 0x37e110: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x37e110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x37e114: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37e114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37e118: 0x2484afa0  addiu       $a0, $a0, -0x5060
    ctx->pc = 0x37e118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946720));
    // 0x37e11c: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x37e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x37e120: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x37e120u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x65AFA0u));
    // 0x37e124: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x37e124u;
    { uint32_t bits = FAST_READ32(0x65AFA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e128: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x37e128u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x37e12c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x37e12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x37e130: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e134: 0x3e00008  jr          $ra
    ctx->pc = 0x37E134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E134u;
        // 0x37e138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E13Cu;
}
