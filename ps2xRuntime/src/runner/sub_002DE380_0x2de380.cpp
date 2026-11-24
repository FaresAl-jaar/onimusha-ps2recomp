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

// Function: sub_002DE380
// Address: 0x2de380 - 0x2de3b0
void sub_002DE380_0x2de380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE380_0x2de380");
#endif

    ctx->pc = 0x2de380u;

    // 0x2de380: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2de380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2de384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE384u;
    {
        const bool branch_taken_0x2de384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de384) {
            ctx->pc = 0x2DE398u;
            goto label_2de398;
        }
    }
    ctx->pc = 0x2DE38Cu;
    // 0x2de38c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE390u;
    {
        const bool branch_taken_0x2de390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE390u;
        // 0x2de394: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de390) {
            ctx->pc = 0x2DE3A8u;
            goto label_2de3a8;
        }
    }
    ctx->pc = 0x2DE398u;
label_2de398:
    // 0x2de398: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2de398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2de39c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2de3a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2de3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2de3a4: 0x0  nop
    ctx->pc = 0x2de3a4u;
    // NOP
label_2de3a8:
    // 0x2de3a8: 0x80b78ec  j           func_2DE3B0
    ctx->pc = 0x2DE3A8u;
    ctx->pc = 0x2DE3B0u;
    sub_002DE3B0_0x2de3b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE3B0u;
}
