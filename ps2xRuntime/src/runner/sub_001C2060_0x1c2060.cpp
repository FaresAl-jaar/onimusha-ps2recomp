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

// Function: sub_001C2060
// Address: 0x1c2060 - 0x1c2098
void sub_001C2060_0x1c2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2060_0x1c2060");
#endif

    ctx->pc = 0x1c2060u;

    // 0x1c2060: 0x8c867840  lw          $a2, 0x7840($a0)
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c2064: 0x94c3000e  lhu         $v1, 0xE($a2)
    ctx->pc = 0x1c2064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1c2068: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c2068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c206c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c206cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c2070: 0xa4c4000e  sh          $a0, 0xE($a2)
    ctx->pc = 0x1c2070u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c2074: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c2078: 0x94640010  lhu         $a0, 0x10($v1)
    ctx->pc = 0x1c2078u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c207c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c2080: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c2084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2088: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x1c2088u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c208c: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x1c208cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c2090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2090u;
        // 0x1c2094: 0xfc650008  sd          $a1, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2098u;
}
