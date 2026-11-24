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

// Function: sub_003E0A60
// Address: 0x3e0a60 - 0x3e0ae8
void sub_003E0A60_0x3e0a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0A60_0x3e0a60");
#endif

    ctx->pc = 0x3e0a60u;

    // 0x3e0a60: 0x908300c4  lbu         $v1, 0xC4($a0)
    ctx->pc = 0x3e0a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x3e0a64: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E0A64u;
    {
        const bool branch_taken_0x3e0a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a64) {
            ctx->pc = 0x3E0AE0u;
            goto label_3e0ae0;
        }
    }
    ctx->pc = 0x3E0A6Cu;
    // 0x3e0a6c: 0xa08000c4  sb          $zero, 0xC4($a0)
    ctx->pc = 0x3e0a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e0a70: 0x8c8500bc  lw          $a1, 0xBC($a0)
    ctx->pc = 0x3e0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0a74: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0A74u;
    {
        const bool branch_taken_0x3e0a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a74) {
            ctx->pc = 0x3E0A88u;
            goto label_3e0a88;
        }
    }
    ctx->pc = 0x3E0A7Cu;
    // 0x3e0a7c: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x3e0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x3e0a80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0A80u;
    {
        const bool branch_taken_0x3e0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A80u;
        // 0x3e0a84: 0xaca300c0  sw          $v1, 0xC0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a80) {
            ctx->pc = 0x3E0AA0u;
            goto label_3e0aa0;
        }
    }
    ctx->pc = 0x3E0A88u;
label_3e0a88:
    // 0x3e0a88: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x3e0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x3e0a8c: 0xaf838ce8  sw          $v1, -0x7318($gp)
    ctx->pc = 0x3e0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 3));
    // 0x3e0a90: 0x8f838ce8  lw          $v1, -0x7318($gp)
    ctx->pc = 0x3e0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x3e0a94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E0A94u;
    {
        const bool branch_taken_0x3e0a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a94) {
            ctx->pc = 0x3E0AA0u;
            goto label_3e0aa0;
        }
    }
    ctx->pc = 0x3E0A9Cu;
    // 0x3e0a9c: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x3e0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
label_3e0aa0:
    // 0x3e0aa0: 0x8c8500c0  lw          $a1, 0xC0($a0)
    ctx->pc = 0x3e0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x3e0aa4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0AA4u;
    {
        const bool branch_taken_0x3e0aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0aa4) {
            ctx->pc = 0x3E0AB8u;
            goto label_3e0ab8;
        }
    }
    ctx->pc = 0x3E0AACu;
    // 0x3e0aac: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0ab0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0AB0u;
    {
        const bool branch_taken_0x3e0ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AB0u;
        // 0x3e0ab4: 0xaca300bc  sw          $v1, 0xBC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ab0) {
            ctx->pc = 0x3E0AD0u;
            goto label_3e0ad0;
        }
    }
    ctx->pc = 0x3E0AB8u;
label_3e0ab8:
    // 0x3e0ab8: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0abc: 0xaf838cec  sw          $v1, -0x7314($gp)
    ctx->pc = 0x3e0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 3));
    // 0x3e0ac0: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x3e0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x3e0ac4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E0AC4u;
    {
        const bool branch_taken_0x3e0ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0ac4) {
            ctx->pc = 0x3E0AD0u;
            goto label_3e0ad0;
        }
    }
    ctx->pc = 0x3E0ACCu;
    // 0x3e0acc: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x3e0accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
label_3e0ad0:
    // 0x3e0ad0: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x3e0ad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e0ad8: 0xaf838cf0  sw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 3));
    // 0x3e0adc: 0x0  nop
    ctx->pc = 0x3e0adcu;
    // NOP
label_3e0ae0:
    // 0x3e0ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0AE8u;
}
