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

// Function: sub_00274040
// Address: 0x274040 - 0x274098
void sub_00274040_0x274040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274040_0x274040");
#endif

    ctx->pc = 0x274040u;

    // 0x274040: 0x838588a4  lb          $a1, -0x775C($gp)
    ctx->pc = 0x274040u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x274044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274048: 0x14a30011  bne         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x274048u;
    {
        const bool branch_taken_0x274048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x274048) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274050u;
    // 0x274050: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x274050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x274054: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x274054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274058: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x274058u;
    {
        const bool branch_taken_0x274058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274058) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274060u;
    // 0x274060: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x274064: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x274064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274068: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274068u;
    {
        const bool branch_taken_0x274068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x274068) {
            ctx->pc = 0x274078u;
            goto label_274078;
        }
    }
    ctx->pc = 0x274070u;
    // 0x274070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274070u;
    {
        const bool branch_taken_0x274070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274070) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274078u;
label_274078:
    // 0x274078: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x274078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x27407c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27407Cu;
    {
        const bool branch_taken_0x27407c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27407c) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274084u;
    // 0x274084: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x274088: 0xa78388bc  sh          $v1, -0x7744($gp)
    ctx->pc = 0x274088u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
    // 0x27408c: 0x0  nop
    ctx->pc = 0x27408cu;
    // NOP
label_274090:
    // 0x274090: 0x3e00008  jr          $ra
    ctx->pc = 0x274090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274098u;
}
