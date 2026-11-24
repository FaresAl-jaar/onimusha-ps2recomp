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

// Function: sub_0014E260
// Address: 0x14e260 - 0x14e288
void sub_0014E260_0x14e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E260_0x14e260");
#endif

    ctx->pc = 0x14e260u;

    // 0x14e260: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x14e264: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x14e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14e268: 0x942568c0  lhu         $a1, 0x68C0($at)
    ctx->pc = 0x14e268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E68C0u));
    // 0x14e26c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x14e26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14e270: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E270u;
    {
        const bool branch_taken_0x14e270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E270u;
        // 0x14e274: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e270) {
            ctx->pc = 0x14E280u;
            goto label_14e280;
        }
    }
    ctx->pc = 0x14E278u;
    // 0x14e278: 0xa42468c0  sh          $a0, 0x68C0($at)
    ctx->pc = 0x14e278u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26816), (uint16_t)GPR_U32(ctx, 4));
    // 0x14e27c: 0x0  nop
    ctx->pc = 0x14e27cu;
    // NOP
label_14e280:
    // 0x14e280: 0x3e00008  jr          $ra
    ctx->pc = 0x14E280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E288u;
}
