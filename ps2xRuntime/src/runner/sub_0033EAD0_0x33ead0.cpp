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

// Function: sub_0033EAD0
// Address: 0x33ead0 - 0x33eaf8
void sub_0033EAD0_0x33ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EAD0_0x33ead0");
#endif

    ctx->pc = 0x33ead0u;

    // 0x33ead0: 0x9485078c  lhu         $a1, 0x78C($a0)
    ctx->pc = 0x33ead0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
    // 0x33ead4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ead8: 0x30a5efff  andi        $a1, $a1, 0xEFFF
    ctx->pc = 0x33ead8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61439);
    // 0x33eadc: 0xa485078c  sh          $a1, 0x78C($a0)
    ctx->pc = 0x33eadcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 5));
    // 0x33eae0: 0x9485078e  lhu         $a1, 0x78E($a0)
    ctx->pc = 0x33eae0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1934)));
    // 0x33eae4: 0x30a5feff  andi        $a1, $a1, 0xFEFF
    ctx->pc = 0x33eae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65279);
    // 0x33eae8: 0xa485078e  sh          $a1, 0x78E($a0)
    ctx->pc = 0x33eae8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1934), (uint16_t)GPR_U32(ctx, 5));
    // 0x33eaec: 0xa0800235  sb          $zero, 0x235($a0)
    ctx->pc = 0x33eaecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 565), (uint8_t)GPR_U32(ctx, 0));
    // 0x33eaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x33EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAF0u;
        // 0x33eaf4: 0xa0832ad8  sb          $v1, 0x2AD8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10968), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EAF8u;
}
