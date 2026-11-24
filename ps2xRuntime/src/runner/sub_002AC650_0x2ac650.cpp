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

// Function: sub_002AC650
// Address: 0x2ac650 - 0x2ac6b0
void sub_002AC650_0x2ac650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC650_0x2ac650");
#endif

    ctx->pc = 0x2ac650u;

    // 0x2ac650: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2ac650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ac654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac658: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC658u;
    {
        const bool branch_taken_0x2ac658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ac658) {
            ctx->pc = 0x2AC698u;
            goto label_2ac698;
        }
    }
    ctx->pc = 0x2AC660u;
    // 0x2ac660: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC660u;
    {
        const bool branch_taken_0x2ac660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac660) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC668u;
    // 0x2ac668: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AC668u;
    {
        const bool branch_taken_0x2ac668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac668) {
            ctx->pc = 0x2AC6A8u;
            goto label_2ac6a8;
        }
    }
    ctx->pc = 0x2AC670u;
label_2ac670:
    // 0x2ac670: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x2ac670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ac674: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2ac674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac678: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ac678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac67c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2ac67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2ac680: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2ac680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac684: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x2ac684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac688: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ac688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ac68c: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x2ac68cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac690: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC690u;
    {
        const bool branch_taken_0x2ac690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC690u;
        // 0x2ac694: 0xac8307ec  sw          $v1, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac690) {
            ctx->pc = 0x2AC6A8u;
            goto label_2ac6a8;
        }
    }
    ctx->pc = 0x2AC698u;
label_2ac698:
    // 0x2ac698: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x2ac698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x2ac69c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC69Cu;
    {
        const bool branch_taken_0x2ac69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac69c) {
            ctx->pc = 0x2AC6A8u;
            goto label_2ac6a8;
        }
    }
    ctx->pc = 0x2AC6A4u;
    // 0x2ac6a4: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x2ac6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
label_2ac6a8:
    // 0x2ac6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC6B0u;
}
