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

// Function: sub_003DD9E0
// Address: 0x3dd9e0 - 0x3dda20
void sub_003DD9E0_0x3dd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD9E0_0x3dd9e0");
#endif

    ctx->pc = 0x3dd9e0u;

    // 0x3dd9e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3dd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dd9e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3dd9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3dd9e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3dd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dd9ec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3dd9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dd9f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3dd9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3dd9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dd9f8: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x3dd9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dd9fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3dd9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dda00: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x3dda00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x3dda04: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x3dda04u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dda08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3dda08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3dda0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dda0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dda10: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x3dda10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x3dda14: 0xe4e0003c  swc1        $f0, 0x3C($a3)
    ctx->pc = 0x3dda14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
    // 0x3dda18: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA18u;
        // 0x3dda1c: 0xe4ec000c  swc1        $f12, 0xC($a3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDA20u;
}
