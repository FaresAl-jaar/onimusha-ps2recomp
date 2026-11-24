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

// Function: sub_003493A0
// Address: 0x3493a0 - 0x349400
void sub_003493A0_0x3493a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003493A0_0x3493a0");
#endif

    ctx->pc = 0x3493a0u;

    // 0x3493a0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x3493a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3493a4: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x3493a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3493a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3493A8u;
    {
        const bool branch_taken_0x3493a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3493ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493A8u;
        // 0x3493ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3493a8) {
            ctx->pc = 0x3493B8u;
            goto label_3493b8;
        }
    }
    ctx->pc = 0x3493B0u;
    // 0x3493b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3493B0u;
    {
        const bool branch_taken_0x3493b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493b0) {
            ctx->pc = 0x3493F8u;
            goto label_3493f8;
        }
    }
    ctx->pc = 0x3493B8u;
label_3493b8:
    // 0x3493b8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x3493b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x3493bc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3493c0: 0x24630cd0  addiu       $v1, $v1, 0xCD0
    ctx->pc = 0x3493c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
    // 0x3493c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3493c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3493c8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3493cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3493d0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3493d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3493d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3493D4u;
    {
        const bool branch_taken_0x3493d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3493D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493D4u;
        // 0x3493d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3493d4) {
            ctx->pc = 0x3493E8u;
            goto label_3493e8;
        }
    }
    ctx->pc = 0x3493DCu;
    // 0x3493dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3493DCu;
    {
        const bool branch_taken_0x3493dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493dc) {
            ctx->pc = 0x3493F8u;
            goto label_3493f8;
        }
    }
    ctx->pc = 0x3493E4u;
    // 0x3493e4: 0x0  nop
    ctx->pc = 0x3493e4u;
    // NOP
label_3493e8:
    // 0x3493e8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3493e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3493ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3493ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3493f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493f4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_3493f8:
    // 0x3493f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3493F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349400u;
}
