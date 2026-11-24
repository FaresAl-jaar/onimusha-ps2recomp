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

// Function: sub_00254060
// Address: 0x254060 - 0x2540a0
void sub_00254060_0x254060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254060_0x254060");
#endif

    ctx->pc = 0x254060u;

    // 0x254060: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x254060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x254064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x254064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254068: 0x9025fc8f  lbu         $a1, -0x371($at)
    ctx->pc = 0x254068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x25406c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x25406Cu;
    {
        const bool branch_taken_0x25406c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x254070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25406Cu;
        // 0x254070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25406c) {
            ctx->pc = 0x254098u;
            goto label_254098;
        }
    }
    ctx->pc = 0x254074u;
    // 0x254074: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x254074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x254078: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x254078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x25407c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25407Cu;
    {
        const bool branch_taken_0x25407c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25407Cu;
        // 0x254080: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25407c) {
            ctx->pc = 0x254098u;
            goto label_254098;
        }
    }
    ctx->pc = 0x254084u;
    // 0x254084: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254084u;
    {
        const bool branch_taken_0x254084 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x254088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254084u;
        // 0x254088: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254084) {
            ctx->pc = 0x254094u;
            goto label_254094;
        }
    }
    ctx->pc = 0x25408Cu;
    // 0x25408c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254090: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x254090u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_254094:
    // 0x254094: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x254094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_254098:
    // 0x254098: 0x3e00008  jr          $ra
    ctx->pc = 0x254098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2540A0u;
}
