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

// Function: sub_002483E0
// Address: 0x2483e0 - 0x248418
void sub_002483E0_0x2483e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002483E0_0x2483e0");
#endif

    switch (ctx->pc) {
        case 0x2483fcu: goto label_2483fc;
        default: break;
    }

    ctx->pc = 0x2483e0u;

    // 0x2483e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2483e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2483e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2483e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2483E8u;
    {
        const bool branch_taken_0x2483e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483E8u;
        // 0x2483ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483e8) {
            ctx->pc = 0x248408u;
            goto label_248408;
        }
    }
    ctx->pc = 0x2483F0u;
    // 0x2483f0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2483f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2483f4: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x2483F4u;
    SET_GPR_U32(ctx, 31, 0x2483FCu);
    ctx->pc = 0x2483F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483F4u;
    // 0x2483f8: 0x24a5cfd8  addiu       $a1, $a1, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x2483F4u, 0x2483FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483FCu;
label_2483fc:
    // 0x2483fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2483FCu;
    {
        const bool branch_taken_0x2483fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483FCu;
        // 0x248400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483fc) {
            ctx->pc = 0x24840Cu;
            goto label_24840c;
        }
    }
    ctx->pc = 0x248404u;
    // 0x248404: 0x0  nop
    ctx->pc = 0x248404u;
    // NOP
label_248408:
    // 0x248408: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24840c:
    // 0x24840c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248410: 0x3e00008  jr          $ra
    ctx->pc = 0x248410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248410u;
        // 0x248414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248418u;
}
