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

// Function: sub_00111E98
// Address: 0x111e98 - 0x111f24
void sub_00111E98_0x111e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111E98_0x111e98");
#endif

    ctx->pc = 0x111e98u;

    // 0x111e98: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x111e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x111e9c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x111e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x111ea0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x111ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x111ea4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x111EA4u;
    {
        const bool branch_taken_0x111ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111ea4) {
            ctx->pc = 0x111EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111EA4u;
            // 0x111ea8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111EB4u;
            goto label_111eb4;
        }
    }
    ctx->pc = 0x111EACu;
    // 0x111eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111EACu;
    {
        const bool branch_taken_0x111eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EACu;
        // 0x111eb0: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111eac) {
            ctx->pc = 0x111EB8u;
            goto label_111eb8;
        }
    }
    ctx->pc = 0x111EB4u;
label_111eb4:
    // 0x111eb4: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x111eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_111eb8:
    // 0x111eb8: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x111eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x111ebc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x111ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x111ec0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x111ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x111ec4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x111ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x111ec8: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x111ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x111ecc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x111eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x111ed0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x111ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x111ed4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x111ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x111ed8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x111ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x111edc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x111ee0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x111ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x111ee4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x111ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x111ee8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x111ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x111eec: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x111eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x111ef0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x111ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x111ef4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x111ef8: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x111ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x111efc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x111efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111f00: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111F00u;
    {
        const bool branch_taken_0x111f00 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x111f00) {
            ctx->pc = 0x111F1Cu;
            goto label_111f1c;
        }
    }
    ctx->pc = 0x111F08u;
    // 0x111f08: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x111f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x111f0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F0Cu;
    {
        const bool branch_taken_0x111f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f0c) {
            ctx->pc = 0x111F1Cu;
            goto label_111f1c;
        }
    }
    ctx->pc = 0x111F14u;
    // 0x111f14: 0x8043baa  j           func_10EEA8
    ctx->pc = 0x111F14u;
    ctx->pc = 0x10EEA8u;
    sub_0010EEA8_0x10eea8(rdram, ctx, runtime); return;
    ctx->pc = 0x111F1Cu;
label_111f1c:
    // 0x111f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x111F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F24u;
}
