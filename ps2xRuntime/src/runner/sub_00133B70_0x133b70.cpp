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

// Function: sub_00133B70
// Address: 0x133b70 - 0x133bd8
void sub_00133B70_0x133b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133B70_0x133b70");
#endif

    switch (ctx->pc) {
        case 0x133b88u: goto label_133b88;
        default: break;
    }

    ctx->pc = 0x133b70u;

    // 0x133b70: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x133b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x133b74: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x133B74u;
    {
        const bool branch_taken_0x133b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b74) {
            ctx->pc = 0x133BD0u;
            goto label_133bd0;
        }
    }
    ctx->pc = 0x133B7Cu;
    // 0x133b7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x133b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133b80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x133B80u;
    {
        const bool branch_taken_0x133b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b80) {
            ctx->pc = 0x133BA8u;
            goto label_133ba8;
        }
    }
    ctx->pc = 0x133B88u;
label_133b88:
    // 0x133b88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x133b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133b90: 0x0  nop
    ctx->pc = 0x133b90u;
    // NOP
    // 0x133b94: 0x0  nop
    ctx->pc = 0x133b94u;
    // NOP
    // 0x133b98: 0x0  nop
    ctx->pc = 0x133b98u;
    // NOP
    // 0x133b9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133B9Cu;
    {
        const bool branch_taken_0x133b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133b9c) {
            ctx->pc = 0x133B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133b88;
        }
    }
    ctx->pc = 0x133BA4u;
    // 0x133ba4: 0x0  nop
    ctx->pc = 0x133ba4u;
    // NOP
label_133ba8:
    // 0x133ba8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x133ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x133bac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x133bacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x133bb0: 0x8c23cd90  lw          $v1, -0x3270($at)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954384)));
    // 0x133bb4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x133bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x133bb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x133bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x133bbc: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x133bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x133bc0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x133bc4: 0xac23cd90  sw          $v1, -0x3270($at)
    ctx->pc = 0x133bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954384), GPR_U32(ctx, 3));
    // 0x133bc8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x133bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x133bcc: 0x0  nop
    ctx->pc = 0x133bccu;
    // NOP
label_133bd0:
    // 0x133bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x133BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133BD8u;
}
