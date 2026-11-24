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

// Function: sub_003E82F0
// Address: 0x3e82f0 - 0x3e8348
void sub_003E82F0_0x3e82f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E82F0_0x3e82f0");
#endif

    ctx->pc = 0x3e82f0u;

    // 0x3e82f0: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x3e82f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x3e82f4: 0x24a53456  addiu       $a1, $a1, 0x3456
    ctx->pc = 0x3e82f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13398));
    // 0x3e82f8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3e82f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x923456u));
    // 0x3e82fc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e82fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e8300: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x3e8300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8304: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3e8304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x923456u));
    // 0x3e8308: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3e8308u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3e830c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e8310: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x3e8310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8314: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3e8314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e8318: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x3e8318u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x3e831c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e8320: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x3e8320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8324: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3e8324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e8328: 0x31a43  sra         $v1, $v1, 9
    ctx->pc = 0x3e8328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 9));
    // 0x3e832c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e832cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e8330: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x3e8330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8334: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3e8334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e8338: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3e8338u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3e833c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e8340: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8340u;
        // 0x3e8344: 0xa0830013  sb          $v1, 0x13($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8348u;
}
