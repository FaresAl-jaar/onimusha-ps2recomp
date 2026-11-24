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

// Function: sub_00153040
// Address: 0x153040 - 0x153090
void sub_00153040_0x153040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153040_0x153040");
#endif

    ctx->pc = 0x153040u;

    // 0x153040: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x153044: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x153044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x153048: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x153048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x15304c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x15304cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x153050: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x153054: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x153054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x153058: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x15305c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x15305cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x153060: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x153064: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153064u;
    {
        const bool branch_taken_0x153064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153064) {
            ctx->pc = 0x153078u;
            goto label_153078;
        }
    }
    ctx->pc = 0x15306Cu;
    // 0x15306c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15306Cu;
    {
        const bool branch_taken_0x15306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15306Cu;
        // 0x153070: 0xa4800012  sh          $zero, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15306c) {
            ctx->pc = 0x153088u;
            goto label_153088;
        }
    }
    ctx->pc = 0x153074u;
    // 0x153074: 0x0  nop
    ctx->pc = 0x153074u;
    // NOP
label_153078:
    // 0x153078: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15307c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x153080: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x153080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x153084: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x153084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
label_153088:
    // 0x153088: 0x3e00008  jr          $ra
    ctx->pc = 0x153088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153090u;
}
