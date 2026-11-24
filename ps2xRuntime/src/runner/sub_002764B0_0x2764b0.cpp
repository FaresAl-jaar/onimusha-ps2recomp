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

// Function: sub_002764B0
// Address: 0x2764b0 - 0x276510
void sub_002764B0_0x2764b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002764B0_0x2764b0");
#endif

    ctx->pc = 0x2764b0u;

    // 0x2764b0: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x2764b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x2764b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2764B4u;
    {
        const bool branch_taken_0x2764b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2764b4) {
            ctx->pc = 0x2764D0u;
            goto label_2764d0;
        }
    }
    ctx->pc = 0x2764BCu;
    // 0x2764bc: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x2764bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
    // 0x2764c0: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x2764c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x2764c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2764C4u;
    {
        const bool branch_taken_0x2764c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764C4u;
        // 0x2764c8: 0xac6400b8  sw          $a0, 0xB8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764c4) {
            ctx->pc = 0x2764D8u;
            goto label_2764d8;
        }
    }
    ctx->pc = 0x2764CCu;
    // 0x2764cc: 0x0  nop
    ctx->pc = 0x2764ccu;
    // NOP
label_2764d0:
    // 0x2764d0: 0xaf848910  sw          $a0, -0x76F0($gp)
    ctx->pc = 0x2764d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 4));
    // 0x2764d4: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x2764d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
label_2764d8:
    // 0x2764d8: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x2764d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x2764dc: 0xaf848914  sw          $a0, -0x76EC($gp)
    ctx->pc = 0x2764dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 4));
    // 0x2764e0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x2764e4: 0x908400b3  lbu         $a0, 0xB3($a0)
    ctx->pc = 0x2764e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 179)));
    // 0x2764e8: 0x24630910  addiu       $v1, $v1, 0x910
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2320));
    // 0x2764ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2764ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2764f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2764f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2764f4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2764f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2764f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2764f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2764fc: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2764fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x276500: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x276500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x276504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x276508: 0x3e00008  jr          $ra
    ctx->pc = 0x276508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276508u;
        // 0x27650c: 0xaf838904  sw          $v1, -0x76FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276510u;
}
