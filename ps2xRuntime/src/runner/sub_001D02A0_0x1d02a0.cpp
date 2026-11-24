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

// Function: sub_001D02A0
// Address: 0x1d02a0 - 0x1d02f0
void sub_001D02A0_0x1d02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D02A0_0x1d02a0");
#endif

    ctx->pc = 0x1d02a0u;

    // 0x1d02a0: 0x90823024  lbu         $v0, 0x3024($a0)
    ctx->pc = 0x1d02a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12324)));
    // 0x1d02a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02A4u;
    {
        const bool branch_taken_0x1d02a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02A4u;
        // 0x1d02a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02a4) {
            ctx->pc = 0x1D02B8u;
            goto label_1d02b8;
        }
    }
    ctx->pc = 0x1D02ACu;
    // 0x1d02ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D02ACu;
    {
        const bool branch_taken_0x1d02ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02ac) {
            ctx->pc = 0x1D02E8u;
            goto label_1d02e8;
        }
    }
    ctx->pc = 0x1D02B4u;
    // 0x1d02b4: 0x0  nop
    ctx->pc = 0x1d02b4u;
    // NOP
label_1d02b8:
    // 0x1d02b8: 0x90823025  lbu         $v0, 0x3025($a0)
    ctx->pc = 0x1d02b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12325)));
    // 0x1d02bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D02BCu;
    {
        const bool branch_taken_0x1d02bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02bc) {
            ctx->pc = 0x1D02E0u;
            goto label_1d02e0;
        }
    }
    ctx->pc = 0x1D02C4u;
    // 0x1d02c4: 0x90823023  lbu         $v0, 0x3023($a0)
    ctx->pc = 0x1d02c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12323)));
    // 0x1d02c8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1d02c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d02cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02CCu;
    {
        const bool branch_taken_0x1d02cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02CCu;
        // 0x1d02d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02cc) {
            ctx->pc = 0x1D02E0u;
            goto label_1d02e0;
        }
    }
    ctx->pc = 0x1D02D4u;
    // 0x1d02d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02D4u;
    {
        const bool branch_taken_0x1d02d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02d4) {
            ctx->pc = 0x1D02E8u;
            goto label_1d02e8;
        }
    }
    ctx->pc = 0x1D02DCu;
    // 0x1d02dc: 0x0  nop
    ctx->pc = 0x1d02dcu;
    // NOP
label_1d02e0:
    // 0x1d02e0: 0xa0803025  sb          $zero, 0x3025($a0)
    ctx->pc = 0x1d02e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d02e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d02e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d02e8:
    // 0x1d02e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D02E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D02E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D02F0u;
}
