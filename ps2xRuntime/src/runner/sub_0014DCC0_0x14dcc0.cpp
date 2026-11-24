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

// Function: sub_0014DCC0
// Address: 0x14dcc0 - 0x14dd28
void sub_0014DCC0_0x14dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DCC0_0x14dcc0");
#endif

    switch (ctx->pc) {
        case 0x14dcf0u: goto label_14dcf0;
        default: break;
    }

    ctx->pc = 0x14dcc0u;

    // 0x14dcc0: 0x94830858  lhu         $v1, 0x858($a0)
    ctx->pc = 0x14dcc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x14dcc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DCC4u;
    {
        const bool branch_taken_0x14dcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCC4u;
        // 0x14dcc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcc4) {
            ctx->pc = 0x14DCD8u;
            goto label_14dcd8;
        }
    }
    ctx->pc = 0x14DCCCu;
    // 0x14dccc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14DCCCu;
    {
        const bool branch_taken_0x14dccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dccc) {
            ctx->pc = 0x14DD20u;
            goto label_14dd20;
        }
    }
    ctx->pc = 0x14DCD4u;
    // 0x14dcd4: 0x0  nop
    ctx->pc = 0x14dcd4u;
    // NOP
label_14dcd8:
    // 0x14dcd8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x14dcd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dcdc: 0x24870058  addiu       $a3, $a0, 0x58
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x14dce0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DCE0u;
    {
        const bool branch_taken_0x14dce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCE0u;
        // 0x14dce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dce0) {
            ctx->pc = 0x14DD18u;
            goto label_14dd18;
        }
    }
    ctx->pc = 0x14DCE8u;
    // 0x14dce8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x14dce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14dcec: 0x0  nop
    ctx->pc = 0x14dcecu;
    // NOP
label_14dcf0:
    // 0x14dcf0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14dcf4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DCF4u;
    {
        const bool branch_taken_0x14dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x14DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCF4u;
        // 0x14dcf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcf4) {
            ctx->pc = 0x14DD08u;
            goto label_14dd08;
        }
    }
    ctx->pc = 0x14DCFCu;
    // 0x14dcfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DCFCu;
    {
        const bool branch_taken_0x14dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dcfc) {
            ctx->pc = 0x14DD20u;
            goto label_14dd20;
        }
    }
    ctx->pc = 0x14DD04u;
    // 0x14dd04: 0x0  nop
    ctx->pc = 0x14dd04u;
    // NOP
label_14dd08:
    // 0x14dd08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14dd0c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x14dd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dd10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14DD10u;
    {
        const bool branch_taken_0x14dd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD10u;
        // 0x14dd14: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd10) {
            ctx->pc = 0x14DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dcf0;
        }
    }
    ctx->pc = 0x14DD18u;
label_14dd18:
    // 0x14dd18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14dd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd1c: 0x0  nop
    ctx->pc = 0x14dd1cu;
    // NOP
label_14dd20:
    // 0x14dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DD28u;
}
