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

// Function: sub_002A1C50
// Address: 0x2a1c50 - 0x2a1c84
void sub_002A1C50_0x2a1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1C50_0x2a1c50");
#endif

    ctx->pc = 0x2a1c50u;

    // 0x2a1c50: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x2a1c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1c54: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x2a1c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2a1c58: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x2a1c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2a1c5c: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2a1c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1c60: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2a1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a1c64: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1c68: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2a1c6c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a1c70: 0x94c50040  lhu         $a1, 0x40($a2)
    ctx->pc = 0x2a1c70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a1c74: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2a1c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2a1c78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C7Cu;
        // 0x2a1c80: 0xa4c30040  sh          $v1, 0x40($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1C84u;
}
