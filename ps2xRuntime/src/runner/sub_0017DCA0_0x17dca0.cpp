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

// Function: sub_0017DCA0
// Address: 0x17dca0 - 0x17dd30
void sub_0017DCA0_0x17dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DCA0_0x17dca0");
#endif

    switch (ctx->pc) {
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcc8u: goto label_17dcc8;
        case 0x17dce0u: goto label_17dce0;
        default: break;
    }

    ctx->pc = 0x17dca0u;

    // 0x17dca0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17dca4: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x17dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x17dca8: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x17dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x17dcac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17dcb0: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x17dcb0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17dcb4: 0x248d0010  addiu       $t5, $a0, 0x10
    ctx->pc = 0x17dcb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_17dcb8:
    // 0x17dcb8: 0x8dac0020  lw          $t4, 0x20($t5)
    ctx->pc = 0x17dcb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x17dcbc: 0x8c6b0068  lw          $t3, 0x68($v1)
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x17dcc0: 0x91a90024  lbu         $t1, 0x24($t5)
    ctx->pc = 0x17dcc0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x17dcc4: 0x0  nop
    ctx->pc = 0x17dcc4u;
    // NOP
label_17dcc8:
    // 0x17dcc8: 0x8d870004  lw          $a3, 0x4($t4)
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17dccc: 0x8d860008  lw          $a2, 0x8($t4)
    ctx->pc = 0x17dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17dcd0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x17dcd4: 0x8d85000c  lw          $a1, 0xC($t4)
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x17dcd8: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x17dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17dcdc: 0x95880000  lhu         $t0, 0x0($t4)
    ctx->pc = 0x17dcdcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_17dce0:
    // 0x17dce0: 0xad640034  sw          $a0, 0x34($t3)
    ctx->pc = 0x17dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 4));
    // 0x17dce4: 0xad670044  sw          $a3, 0x44($t3)
    ctx->pc = 0x17dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 7));
    // 0x17dce8: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
    // 0x17dcec: 0xad650054  sw          $a1, 0x54($t3)
    ctx->pc = 0x17dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 84), GPR_U32(ctx, 5));
    // 0x17dcf0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x17dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x17dcf4: 0xad660064  sw          $a2, 0x64($t3)
    ctx->pc = 0x17dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 6));
    // 0x17dcf8: 0x24e70120  addiu       $a3, $a3, 0x120
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x17dcfc: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x17dd00: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x17dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x17dd04: 0x1d00fff6  bgtz        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17DD04u;
    {
        const bool branch_taken_0x17dd04 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x17DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD04u;
        // 0x17dd08: 0x256b0080  addiu       $t3, $t3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd04) {
            ctx->pc = 0x17DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dce0;
        }
    }
    ctx->pc = 0x17DD0Cu;
    // 0x17dd0c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17dd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17dd10: 0x1d20ffed  bgtz        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_S64(ctx, 9) > 0);
        ctx->pc = 0x17DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD10u;
        // 0x17dd14: 0x258c001c  addiu       $t4, $t4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dcc8;
        }
    }
    ctx->pc = 0x17DD18u;
    // 0x17dd18: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x17dd1c: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x17dd20: 0x1d40ffe5  bgtz        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17DD20u;
    {
        const bool branch_taken_0x17dd20 = (GPR_S64(ctx, 10) > 0);
        ctx->pc = 0x17DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD20u;
        // 0x17dd24: 0x25ad0050  addiu       $t5, $t5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd20) {
            ctx->pc = 0x17DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dcb8;
        }
    }
    ctx->pc = 0x17DD28u;
    // 0x17dd28: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD30u;
}
