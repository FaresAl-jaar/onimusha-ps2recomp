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

// Function: sub_00340870
// Address: 0x340870 - 0x3408c0
void sub_00340870_0x340870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340870_0x340870");
#endif

    ctx->pc = 0x340870u;

    // 0x340870: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x340870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x340874: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x340874u;
    {
        const bool branch_taken_0x340874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340874u;
        // 0x340878: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340874) {
            ctx->pc = 0x3408B0u;
            goto label_3408b0;
        }
    }
    ctx->pc = 0x34087Cu;
    // 0x34087c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x34087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x340880: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x340880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x340884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x340884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x340888: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x340888u;
    {
        const bool branch_taken_0x340888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340888) {
            ctx->pc = 0x3408B0u;
            goto label_3408b0;
        }
    }
    ctx->pc = 0x340890u;
    // 0x340890: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x340890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x340894: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340898: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x340898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FE0u));
    // 0x34089c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3408a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3408A0u;
    {
        const bool branch_taken_0x3408a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3408A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408A0u;
        // 0x3408a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408a0) {
            ctx->pc = 0x3408B0u;
            goto label_3408b0;
        }
    }
    ctx->pc = 0x3408A8u;
    // 0x3408a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3408A8u;
    {
        const bool branch_taken_0x3408a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3408a8) {
            ctx->pc = 0x3408B8u;
            goto label_3408b8;
        }
    }
    ctx->pc = 0x3408B0u;
label_3408b0:
    // 0x3408b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3408b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408b4: 0x0  nop
    ctx->pc = 0x3408b4u;
    // NOP
label_3408b8:
    // 0x3408b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3408B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3408C0u;
}
