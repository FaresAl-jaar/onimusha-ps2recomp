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

// Function: sub_003198F0
// Address: 0x3198f0 - 0x319940
void sub_003198F0_0x3198f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003198F0_0x3198f0");
#endif

    ctx->pc = 0x3198f0u;

    // 0x3198f0: 0x8cc80078  lw          $t0, 0x78($a2)
    ctx->pc = 0x3198f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x3198f4: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x3198f8: 0x8cc40128  lw          $a0, 0x128($a2)
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x3198fc: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x3198fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x319900: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x319900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319904: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x319904u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x319908: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x319908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x31990c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x31990cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x319910: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x319910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x319914: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x319914u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x319918: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x319918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x31991c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x31991cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x319920: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x319920u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x319924: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x319924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x319928: 0x8cc40078  lw          $a0, 0x78($a2)
    ctx->pc = 0x319928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x31992c: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x31992cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x319930: 0x42480  sll         $a0, $a0, 18
    ctx->pc = 0x319930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 18));
    // 0x319934: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x319934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x319938: 0x3e00008  jr          $ra
    ctx->pc = 0x319938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319938u;
        // 0x31993c: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319940u;
}
