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

// Function: sub_00384ED0
// Address: 0x384ed0 - 0x384f10
void sub_00384ED0_0x384ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384ED0_0x384ed0");
#endif

    switch (ctx->pc) {
        case 0x384eecu: goto label_384eec;
        case 0x384efcu: goto label_384efc;
        default: break;
    }

    ctx->pc = 0x384ed0u;

    // 0x384ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ee0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384ee4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x384EE4u;
    SET_GPR_U32(ctx, 31, 0x384EECu);
    ctx->pc = 0x384EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384EE4u;
    // 0x384ee8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x384EE4u, 0x384EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EECu;
label_384eec:
    // 0x384eec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384EECu;
    {
        const bool branch_taken_0x384eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EECu;
        // 0x384ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384eec) {
            ctx->pc = 0x384F00u;
            goto label_384f00;
        }
    }
    ctx->pc = 0x384EF4u;
    // 0x384ef4: 0xc0ca3a8  jal         func_328EA0
    ctx->pc = 0x384EF4u;
    SET_GPR_U32(ctx, 31, 0x384EFCu);
    ctx->pc = 0x328EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328EA0u, 0x384EF4u, 0x384EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EFCu;
label_384efc:
    // 0x384efc: 0x0  nop
    ctx->pc = 0x384efcu;
    // NOP
label_384f00:
    // 0x384f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384f08: 0x3e00008  jr          $ra
    ctx->pc = 0x384F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F08u;
        // 0x384f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384F10u;
}
