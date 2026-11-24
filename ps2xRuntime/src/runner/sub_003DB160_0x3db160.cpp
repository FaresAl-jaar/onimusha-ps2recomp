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

// Function: sub_003DB160
// Address: 0x3db160 - 0x3db188
void sub_003DB160_0x3db160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB160_0x3db160");
#endif

    ctx->pc = 0x3db160u;

    // 0x3db160: 0x94872be6  lhu         $a3, 0x2BE6($a0)
    ctx->pc = 0x3db160u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11238)));
    // 0x3db164: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3db164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3db168: 0x94862bea  lhu         $a2, 0x2BEA($a0)
    ctx->pc = 0x3db168u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11242)));
    // 0x3db16c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3db16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3db170: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3db170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db174: 0xa08707f4  sb          $a3, 0x7F4($a0)
    ctx->pc = 0x3db174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 7));
    // 0x3db178: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3db178u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3db17c: 0xa08607f5  sb          $a2, 0x7F5($a0)
    ctx->pc = 0x3db17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3db180: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB180u;
        // 0x3db184: 0xac8307ec  sw          $v1, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB188u;
}
