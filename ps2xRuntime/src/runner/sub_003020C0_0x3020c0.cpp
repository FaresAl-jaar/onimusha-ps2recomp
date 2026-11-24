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

// Function: sub_003020C0
// Address: 0x3020c0 - 0x302110
void sub_003020C0_0x3020c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003020C0_0x3020c0");
#endif

    ctx->pc = 0x3020c0u;

    // 0x3020c0: 0x90860539  lbu         $a2, 0x539($a0)
    ctx->pc = 0x3020c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1337)));
    // 0x3020c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3020c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3020c8: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3020C8u;
    {
        const bool branch_taken_0x3020c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3020c8) {
            ctx->pc = 0x3020E8u;
            goto label_3020e8;
        }
    }
    ctx->pc = 0x3020D0u;
    // 0x3020d0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3020d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3020d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3020d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3020d8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3020d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3020dc: 0xa0850539  sb          $a1, 0x539($a0)
    ctx->pc = 0x3020dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1337), (uint8_t)GPR_U32(ctx, 5));
    // 0x3020e0: 0xa480053c  sh          $zero, 0x53C($a0)
    ctx->pc = 0x3020e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x3020e4: 0x0  nop
    ctx->pc = 0x3020e4u;
    // NOP
label_3020e8:
    // 0x3020e8: 0x9085052f  lbu         $a1, 0x52F($a0)
    ctx->pc = 0x3020e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1327)));
    // 0x3020ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3020ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3020f0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3020F0u;
    {
        const bool branch_taken_0x3020f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3020f0) {
            ctx->pc = 0x302100u;
            goto label_302100;
        }
    }
    ctx->pc = 0x3020F8u;
    // 0x3020f8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3020F8u;
    {
        const bool branch_taken_0x3020f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3020f8) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x302100u;
label_302100:
    // 0x302100: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302104: 0xa083052f  sb          $v1, 0x52F($a0)
    ctx->pc = 0x302104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1327), (uint8_t)GPR_U32(ctx, 3));
label_302108:
    // 0x302108: 0x3e00008  jr          $ra
    ctx->pc = 0x302108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302110u;
}
