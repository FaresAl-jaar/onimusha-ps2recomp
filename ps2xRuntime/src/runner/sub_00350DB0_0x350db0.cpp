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

// Function: sub_00350DB0
// Address: 0x350db0 - 0x350e18
void sub_00350DB0_0x350db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350DB0_0x350db0");
#endif

    switch (ctx->pc) {
        case 0x350de0u: goto label_350de0;
        case 0x350de8u: goto label_350de8;
        default: break;
    }

    ctx->pc = 0x350db0u;

    // 0x350db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x350dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dc4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x350dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350dc8: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x350dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x350dcc: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x350dccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x350dd0: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x350dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x350dd4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x350dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x350dd8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x350DD8u;
    {
        const bool branch_taken_0x350dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350dd8) {
            ctx->pc = 0x350E00u;
            goto label_350e00;
        }
    }
    ctx->pc = 0x350DE0u;
label_350de0:
    // 0x350de0: 0xc0d45a4  jal         func_351690
    ctx->pc = 0x350DE0u;
    SET_GPR_U32(ctx, 31, 0x350DE8u);
    ctx->pc = 0x350DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DE0u;
    // 0x350de4: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351690u, 0x350DE0u, 0x350DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DE8u;
label_350de8:
    // 0x350de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dec: 0x0  nop
    ctx->pc = 0x350decu;
    // NOP
    // 0x350df0: 0x0  nop
    ctx->pc = 0x350df0u;
    // NOP
    // 0x350df4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x350DF4u;
    {
        const bool branch_taken_0x350df4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x350df4) {
            ctx->pc = 0x350DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350de0;
        }
    }
    ctx->pc = 0x350DFCu;
    // 0x350dfc: 0x0  nop
    ctx->pc = 0x350dfcu;
    // NOP
label_350e00:
    // 0x350e00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x350e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x350e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350e10: 0x3e00008  jr          $ra
    ctx->pc = 0x350E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E10u;
        // 0x350e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350E18u;
}
