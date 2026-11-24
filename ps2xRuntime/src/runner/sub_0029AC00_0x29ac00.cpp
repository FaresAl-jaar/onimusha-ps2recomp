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

// Function: sub_0029AC00
// Address: 0x29ac00 - 0x29ac50
void sub_0029AC00_0x29ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC00_0x29ac00");
#endif

    ctx->pc = 0x29ac00u;

    // 0x29ac00: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29ac04: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x29ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x29ac08: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x29AC08u;
    {
        const bool branch_taken_0x29ac08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac08) {
            ctx->pc = 0x29AC48u;
            goto label_29ac48;
        }
    }
    ctx->pc = 0x29AC10u;
    // 0x29ac10: 0x90830084  lbu         $v1, 0x84($a0)
    ctx->pc = 0x29ac10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x29ac14: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AC14u;
    {
        const bool branch_taken_0x29ac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ac14) {
            ctx->pc = 0x29AC28u;
            goto label_29ac28;
        }
    }
    ctx->pc = 0x29AC1Cu;
    // 0x29ac1c: 0x90830085  lbu         $v1, 0x85($a0)
    ctx->pc = 0x29ac1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x29ac20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AC20u;
    {
        const bool branch_taken_0x29ac20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ac20) {
            ctx->pc = 0x29AC30u;
            goto label_29ac30;
        }
    }
    ctx->pc = 0x29AC28u;
label_29ac28:
    // 0x29ac28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29AC28u;
    {
        const bool branch_taken_0x29ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac28) {
            ctx->pc = 0x29AC48u;
            goto label_29ac48;
        }
    }
    ctx->pc = 0x29AC30u;
label_29ac30:
    // 0x29ac30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ac34: 0xa0830085  sb          $v1, 0x85($a0)
    ctx->pc = 0x29ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 133), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ac38: 0xa0830086  sb          $v1, 0x86($a0)
    ctx->pc = 0x29ac38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 134), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ac3c: 0xa0830084  sb          $v1, 0x84($a0)
    ctx->pc = 0x29ac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ac40: 0xa4850080  sh          $a1, 0x80($a0)
    ctx->pc = 0x29ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 5));
    // 0x29ac44: 0x0  nop
    ctx->pc = 0x29ac44u;
    // NOP
label_29ac48:
    // 0x29ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC50u;
}
