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

// Function: sub_003E0A00
// Address: 0x3e0a00 - 0x3e0a58
void sub_003E0A00_0x3e0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0A00_0x3e0a00");
#endif

    ctx->pc = 0x3e0a00u;

    // 0x3e0a00: 0x908300c4  lbu         $v1, 0xC4($a0)
    ctx->pc = 0x3e0a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x3e0a04: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0A04u;
    {
        const bool branch_taken_0x3e0a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A04u;
        // 0x3e0a08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a04) {
            ctx->pc = 0x3E0A50u;
            goto label_3e0a50;
        }
    }
    ctx->pc = 0x3E0A0Cu;
    // 0x3e0a0c: 0xa08300c4  sb          $v1, 0xC4($a0)
    ctx->pc = 0x3e0a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e0a10: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x3e0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x3e0a14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0A14u;
    {
        const bool branch_taken_0x3e0a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a14) {
            ctx->pc = 0x3E0A30u;
            goto label_3e0a30;
        }
    }
    ctx->pc = 0x3E0A1Cu;
    // 0x3e0a1c: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
    // 0x3e0a20: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x3e0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x3e0a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0A24u;
    {
        const bool branch_taken_0x3e0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A24u;
        // 0x3e0a28: 0xac6400c0  sw          $a0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a24) {
            ctx->pc = 0x3E0A38u;
            goto label_3e0a38;
        }
    }
    ctx->pc = 0x3E0A2Cu;
    // 0x3e0a2c: 0x0  nop
    ctx->pc = 0x3e0a2cu;
    // NOP
label_3e0a30:
    // 0x3e0a30: 0xaf848ce8  sw          $a0, -0x7318($gp)
    ctx->pc = 0x3e0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 4));
    // 0x3e0a34: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x3e0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
label_3e0a38:
    // 0x3e0a38: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x3e0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x3e0a3c: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x3e0a40: 0xaf848cec  sw          $a0, -0x7314($gp)
    ctx->pc = 0x3e0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 4));
    // 0x3e0a44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e0a48: 0xaf838cf0  sw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 3));
    // 0x3e0a4c: 0x0  nop
    ctx->pc = 0x3e0a4cu;
    // NOP
label_3e0a50:
    // 0x3e0a50: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0A58u;
}
