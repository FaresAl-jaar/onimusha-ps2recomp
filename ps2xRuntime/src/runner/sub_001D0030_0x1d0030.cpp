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

// Function: sub_001D0030
// Address: 0x1d0030 - 0x1d0080
void sub_001D0030_0x1d0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0030_0x1d0030");
#endif

    ctx->pc = 0x1d0030u;

    // 0x1d0030: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1d0030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d0034: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1d0034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d0038: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0038u;
    {
        const bool branch_taken_0x1d0038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0038u;
        // 0x1d003c: 0xa0853020  sb          $a1, 0x3020($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12320), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0038) {
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1D0040u;
    // 0x1d0040: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1d0040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1d0044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d0044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d0048: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x1d0048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
    // 0x1d004c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d0050: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0054: 0x600008  jr          $v1
    ctx->pc = 0x1D0054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0060u: goto label_1d0060;
            case 0x1D0070u: goto label_1d0070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D005Cu;
    // 0x1d005c: 0x0  nop
    ctx->pc = 0x1d005cu;
    // NOP
label_1d0060:
    // 0x1d0060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0064u;
    {
        const bool branch_taken_0x1d0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0064u;
        // 0x1d0068: 0xa0833024  sb          $v1, 0x3024($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12324), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0064) {
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1D006Cu;
    // 0x1d006c: 0x0  nop
    ctx->pc = 0x1d006cu;
    // NOP
label_1d0070:
    // 0x1d0070: 0xa0803024  sb          $zero, 0x3024($a0)
    ctx->pc = 0x1d0070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12324), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0074: 0x0  nop
    ctx->pc = 0x1d0074u;
    // NOP
label_1d0078:
    // 0x1d0078: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0080u;
}
