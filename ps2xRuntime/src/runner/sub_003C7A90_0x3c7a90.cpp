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

// Function: sub_003C7A90
// Address: 0x3c7a90 - 0x3c7b00
void sub_003C7A90_0x3c7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7A90_0x3c7a90");
#endif

    ctx->pc = 0x3c7a90u;

    // 0x3c7a90: 0x8c8505b8  lw          $a1, 0x5B8($a0)
    ctx->pc = 0x3c7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x3c7a94: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7A94u;
    {
        const bool branch_taken_0x3c7a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7a94) {
            ctx->pc = 0x3C7AA8u;
            goto label_3c7aa8;
        }
    }
    ctx->pc = 0x3C7A9Cu;
    // 0x3c7a9c: 0x8c8305bc  lw          $v1, 0x5BC($a0)
    ctx->pc = 0x3c7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x3c7aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7AA0u;
    {
        const bool branch_taken_0x3c7aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7AA0u;
        // 0x3c7aa4: 0xaca305bc  sw          $v1, 0x5BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7aa0) {
            ctx->pc = 0x3C7AC0u;
            goto label_3c7ac0;
        }
    }
    ctx->pc = 0x3C7AA8u;
label_3c7aa8:
    // 0x3c7aa8: 0x8c8305bc  lw          $v1, 0x5BC($a0)
    ctx->pc = 0x3c7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x3c7aac: 0xaf838cb0  sw          $v1, -0x7350($gp)
    ctx->pc = 0x3c7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
    // 0x3c7ab0: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x3c7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x3c7ab4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C7AB4u;
    {
        const bool branch_taken_0x3c7ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ab4) {
            ctx->pc = 0x3C7AC0u;
            goto label_3c7ac0;
        }
    }
    ctx->pc = 0x3C7ABCu;
    // 0x3c7abc: 0xac6005b8  sw          $zero, 0x5B8($v1)
    ctx->pc = 0x3c7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 0));
label_3c7ac0:
    // 0x3c7ac0: 0x8c8505bc  lw          $a1, 0x5BC($a0)
    ctx->pc = 0x3c7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x3c7ac4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7AC4u;
    {
        const bool branch_taken_0x3c7ac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ac4) {
            ctx->pc = 0x3C7AD8u;
            goto label_3c7ad8;
        }
    }
    ctx->pc = 0x3C7ACCu;
    // 0x3c7acc: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x3c7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x3c7ad0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7AD0u;
    {
        const bool branch_taken_0x3c7ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7AD0u;
        // 0x3c7ad4: 0xaca305b8  sw          $v1, 0x5B8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ad0) {
            ctx->pc = 0x3C7AF0u;
            goto label_3c7af0;
        }
    }
    ctx->pc = 0x3C7AD8u;
label_3c7ad8:
    // 0x3c7ad8: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x3c7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x3c7adc: 0xaf838cb4  sw          $v1, -0x734C($gp)
    ctx->pc = 0x3c7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 3));
    // 0x3c7ae0: 0x8f838cb4  lw          $v1, -0x734C($gp)
    ctx->pc = 0x3c7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
    // 0x3c7ae4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C7AE4u;
    {
        const bool branch_taken_0x3c7ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ae4) {
            ctx->pc = 0x3C7AF0u;
            goto label_3c7af0;
        }
    }
    ctx->pc = 0x3C7AECu;
    // 0x3c7aec: 0xac6005bc  sw          $zero, 0x5BC($v1)
    ctx->pc = 0x3c7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 0));
label_3c7af0:
    // 0x3c7af0: 0x8f838cb8  lw          $v1, -0x7348($gp)
    ctx->pc = 0x3c7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x3c7af4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c7af8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7AF8u;
        // 0x3c7afc: 0xaf838cb8  sw          $v1, -0x7348($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7B00u;
}
