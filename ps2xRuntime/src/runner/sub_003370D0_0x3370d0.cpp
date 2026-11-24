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

// Function: sub_003370D0
// Address: 0x3370d0 - 0x337124
void sub_003370D0_0x3370d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003370D0_0x3370d0");
#endif

    switch (ctx->pc) {
        case 0x337114u: goto label_337114;
        default: break;
    }

    ctx->pc = 0x3370d0u;

    // 0x3370d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3370d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3370d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3370d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3370d8: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3370d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3370dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3370dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3370e0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3370e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3370e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3370E4u;
    {
        const bool branch_taken_0x3370e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370e4) {
            ctx->pc = 0x3370F8u;
            goto label_3370f8;
        }
    }
    ctx->pc = 0x3370ECu;
    // 0x3370ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3370ECu;
    {
        const bool branch_taken_0x3370ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370ECu;
        // 0x3370f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370ec) {
            ctx->pc = 0x337118u;
            goto label_337118;
        }
    }
    ctx->pc = 0x3370F4u;
    // 0x3370f4: 0x0  nop
    ctx->pc = 0x3370f4u;
    // NOP
label_3370f8:
    // 0x3370f8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3370f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3370fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3370FCu;
    {
        const bool branch_taken_0x3370fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370fc) {
            ctx->pc = 0x33710Cu;
            goto label_33710c;
        }
    }
    ctx->pc = 0x337104u;
    // 0x337104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337104u;
    {
        const bool branch_taken_0x337104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337104u;
        // 0x337108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337104) {
            ctx->pc = 0x337114u;
            goto label_337114;
        }
    }
    ctx->pc = 0x33710Cu;
label_33710c:
    // 0x33710c: 0xc0cdc28  jal         func_3370A0
    ctx->pc = 0x33710Cu;
    SET_GPR_U32(ctx, 31, 0x337114u);
    ctx->pc = 0x3370A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370A0u, 0x33710Cu, 0x337114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337114u;
label_337114:
    // 0x337114: 0x0  nop
    ctx->pc = 0x337114u;
    // NOP
label_337118:
    // 0x337118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33711c: 0x3e00008  jr          $ra
    ctx->pc = 0x33711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33711Cu;
        // 0x337120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337124u;
}
