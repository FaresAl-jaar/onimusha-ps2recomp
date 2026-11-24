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

// Function: sub_00298BC0
// Address: 0x298bc0 - 0x298bf8
void sub_00298BC0_0x298bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298BC0_0x298bc0");
#endif

    switch (ctx->pc) {
        case 0x298be0u: goto label_298be0;
        default: break;
    }

    ctx->pc = 0x298bc0u;

    // 0x298bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298bcc: 0x908308e6  lbu         $v1, 0x8E6($a0)
    ctx->pc = 0x298bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2278)));
    // 0x298bd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298BD0u;
    {
        const bool branch_taken_0x298bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BD0u;
        // 0x298bd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bd0) {
            ctx->pc = 0x298BE8u;
            goto label_298be8;
        }
    }
    ctx->pc = 0x298BD8u;
    // 0x298bd8: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x298BD8u;
    SET_GPR_U32(ctx, 31, 0x298BE0u);
    ctx->pc = 0x298BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BD8u;
    // 0x298bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x298BD8u, 0x298BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BE0u;
label_298be0:
    // 0x298be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298be4: 0xa20308e6  sb          $v1, 0x8E6($s0)
    ctx->pc = 0x298be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2278), (uint8_t)GPR_U32(ctx, 3));
label_298be8:
    // 0x298be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x298BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BF0u;
        // 0x298bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298BF8u;
}
