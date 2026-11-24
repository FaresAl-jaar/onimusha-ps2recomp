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

// Function: sub_002F5260
// Address: 0x2f5260 - 0x2f52a0
void sub_002F5260_0x2f5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5260_0x2f5260");
#endif

    ctx->pc = 0x2f5260u;

    // 0x2f5260: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5264: 0x3c0268c0  lui         $v0, 0x68C0
    ctx->pc = 0x2f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26816 << 16));
    // 0x2f5268: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f5268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f526c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5270u;
    {
        const bool branch_taken_0x2f5270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5270u;
        // 0x2f5274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5270) {
            ctx->pc = 0x2F5280u;
            goto label_2f5280;
        }
    }
    ctx->pc = 0x2F5278u;
    // 0x2f5278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5278u;
    {
        const bool branch_taken_0x2f5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5278) {
            ctx->pc = 0x2F5298u;
            goto label_2f5298;
        }
    }
    ctx->pc = 0x2F5280u;
label_2f5280:
    // 0x2f5280: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5284: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2f5284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2f5288: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x2f5288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x2f528c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5290: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f5290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f5294: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f5294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f5298:
    // 0x2f5298: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52A0u;
}
