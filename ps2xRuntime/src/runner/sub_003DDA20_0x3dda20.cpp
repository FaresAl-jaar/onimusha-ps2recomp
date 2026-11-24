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

// Function: sub_003DDA20
// Address: 0x3dda20 - 0x3dda64
void sub_003DDA20_0x3dda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDA20_0x3dda20");
#endif

    ctx->pc = 0x3dda20u;

    // 0x3dda20: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3dda20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dda24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3dda24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3dda28: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3dda28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dda2c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3dda2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dda30: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3dda30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3dda34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dda38: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x3dda38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dda3c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3dda3cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dda40: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x3dda40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3dda44: 0xa1060001  sb          $a2, 0x1($t0)
    ctx->pc = 0x3dda44u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3dda48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3dda48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3dda4c: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x3dda4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3dda50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dda50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dda54: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x3dda54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x3dda58: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x3dda58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x3dda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA5Cu;
        // 0x3dda60: 0xe50c000c  swc1        $f12, 0xC($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDA64u;
}
