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

// Function: sub_003A08A0
// Address: 0x3a08a0 - 0x3a08d8
void sub_003A08A0_0x3a08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A08A0_0x3a08a0");
#endif

    ctx->pc = 0x3a08a0u;

    // 0x3a08a0: 0x8f858c54  lw          $a1, -0x73AC($gp)
    ctx->pc = 0x3a08a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x3a08a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a08a8: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x3a08a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3a08ac: 0x90a50020  lbu         $a1, 0x20($a1)
    ctx->pc = 0x3a08acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3a08b0: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A08B0u;
    {
        const bool branch_taken_0x3a08b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A08B0u;
        // 0x3a08b4: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a08b0) {
            ctx->pc = 0x3A08D0u;
            goto label_3a08d0;
        }
    }
    ctx->pc = 0x3A08B8u;
    // 0x3a08b8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3a08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a08bc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3a08bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a08c0: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x3a08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x3a08c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a08c8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3a08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a08cc: 0x0  nop
    ctx->pc = 0x3a08ccu;
    // NOP
label_3a08d0:
    // 0x3a08d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A08D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A08D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A08D8u;
}
