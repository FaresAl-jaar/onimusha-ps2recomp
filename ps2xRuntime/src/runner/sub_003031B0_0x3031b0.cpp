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

// Function: sub_003031B0
// Address: 0x3031b0 - 0x303200
void sub_003031B0_0x3031b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003031B0_0x3031b0");
#endif

    ctx->pc = 0x3031b0u;

    // 0x3031b0: 0x94821e0c  lhu         $v0, 0x1E0C($a0)
    ctx->pc = 0x3031b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7692)));
    // 0x3031b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3031b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3031b8: 0xa4821e0c  sh          $v0, 0x1E0C($a0)
    ctx->pc = 0x3031b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7692), (uint16_t)GPR_U32(ctx, 2));
    // 0x3031bc: 0x94821e0c  lhu         $v0, 0x1E0C($a0)
    ctx->pc = 0x3031bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7692)));
    // 0x3031c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3031C0u;
    {
        const bool branch_taken_0x3031c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3031c0) {
            ctx->pc = 0x3031D0u;
            goto label_3031d0;
        }
    }
    ctx->pc = 0x3031C8u;
    // 0x3031c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3031c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3031cc: 0xa4821e0c  sh          $v0, 0x1E0C($a0)
    ctx->pc = 0x3031ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7692), (uint16_t)GPR_U32(ctx, 2));
label_3031d0:
    // 0x3031d0: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x3031d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3031d4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3031d8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3031d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3031dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3031e0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3031e4: 0xa4650060  sh          $a1, 0x60($v1)
    ctx->pc = 0x3031e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 96), (uint16_t)GPR_U32(ctx, 5));
    // 0x3031e8: 0x94821e0c  lhu         $v0, 0x1E0C($a0)
    ctx->pc = 0x3031e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7692)));
    // 0x3031ec: 0xa4620062  sh          $v0, 0x62($v1)
    ctx->pc = 0x3031ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x3031f0: 0x94821e0c  lhu         $v0, 0x1E0C($a0)
    ctx->pc = 0x3031f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 7692)));
    // 0x3031f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3031f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3031f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3031F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3031FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031F8u;
        // 0x3031fc: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3031F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303200u;
}
