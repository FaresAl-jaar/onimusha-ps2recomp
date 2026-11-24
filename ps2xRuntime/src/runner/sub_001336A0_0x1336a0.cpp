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

// Function: sub_001336A0
// Address: 0x1336a0 - 0x133710
void sub_001336A0_0x1336a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001336A0_0x1336a0");
#endif

    switch (ctx->pc) {
        case 0x1336d0u: goto label_1336d0;
        default: break;
    }

    ctx->pc = 0x1336a0u;

    // 0x1336a0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1336A0u;
    {
        const bool branch_taken_0x1336a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336A0u;
        // 0x1336a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336a0) {
            ctx->pc = 0x1336B0u;
            goto label_1336b0;
        }
    }
    ctx->pc = 0x1336A8u;
    // 0x1336a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1336A8u;
    {
        const bool branch_taken_0x1336a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336a8) {
            ctx->pc = 0x133708u;
            goto label_133708;
        }
    }
    ctx->pc = 0x1336B0u;
label_1336b0:
    // 0x1336b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1336b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1336b4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1336b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1336b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1336b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1336bc: 0x8c26cd90  lw          $a2, -0x3270($at)
    ctx->pc = 0x1336bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954384)));
    // 0x1336c0: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x1336c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1336c4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1336C4u;
    {
        const bool branch_taken_0x1336c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336C4u;
        // 0x1336c8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336c4) {
            ctx->pc = 0x1336E8u;
            goto label_1336e8;
        }
    }
    ctx->pc = 0x1336CCu;
    // 0x1336cc: 0x0  nop
    ctx->pc = 0x1336ccu;
    // NOP
label_1336d0:
    // 0x1336d0: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1336D0u;
    {
        const bool branch_taken_0x1336d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1336d0) {
            ctx->pc = 0x1336E8u;
            goto label_1336e8;
        }
    }
    ctx->pc = 0x1336D8u;
    // 0x1336d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1336d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1336dc: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x1336dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1336e0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1336E0u;
    {
        const bool branch_taken_0x1336e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336E0u;
        // 0x1336e4: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336e0) {
            ctx->pc = 0x1336D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1336d0;
        }
    }
    ctx->pc = 0x1336E8u;
label_1336e8:
    // 0x1336e8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1336E8u;
    {
        const bool branch_taken_0x1336e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336e8) {
            ctx->pc = 0x133708u;
            goto label_133708;
        }
    }
    ctx->pc = 0x1336F0u;
    // 0x1336f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1336f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1336f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1336f8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1336f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1336fc: 0xac23cd90  sw          $v1, -0x3270($at)
    ctx->pc = 0x1336fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954384), GPR_U32(ctx, 3));
    // 0x133700: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x133700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x133704: 0x0  nop
    ctx->pc = 0x133704u;
    // NOP
label_133708:
    // 0x133708: 0x3e00008  jr          $ra
    ctx->pc = 0x133708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133710u;
}
