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

// Function: sub_0022EFD0
// Address: 0x22efd0 - 0x22f018
void sub_0022EFD0_0x22efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EFD0_0x22efd0");
#endif

    switch (ctx->pc) {
        case 0x22f008u: goto label_22f008;
        default: break;
    }

    ctx->pc = 0x22efd0u;

    // 0x22efd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22efd4: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x22efd4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x22efd8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EFD8u;
    {
        const bool branch_taken_0x22efd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFD8u;
        // 0x22efdc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efd8) {
            ctx->pc = 0x22EFF0u;
            goto label_22eff0;
        }
    }
    ctx->pc = 0x22EFE0u;
    // 0x22efe0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22efe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22EFE4u;
    {
        const bool branch_taken_0x22efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFE4u;
        // 0x22efe8: 0x2484a308  addiu       $a0, $a0, -0x5CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efe4) {
            ctx->pc = 0x22F000u;
            goto label_22f000;
        }
    }
    ctx->pc = 0x22EFECu;
    // 0x22efec: 0x0  nop
    ctx->pc = 0x22efecu;
    // NOP
label_22eff0:
    // 0x22eff0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EFF0u;
    {
        const bool branch_taken_0x22eff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFF0u;
        // 0x22eff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eff0) {
            ctx->pc = 0x22F00Cu;
            goto label_22f00c;
        }
    }
    ctx->pc = 0x22EFF8u;
    // 0x22eff8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22effc: 0x2484a340  addiu       $a0, $a0, -0x5CC0
    ctx->pc = 0x22effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943552));
label_22f000:
    // 0x22f000: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22F000u;
    SET_GPR_U32(ctx, 31, 0x22F008u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22F000u, 0x22F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F008u;
label_22f008:
    // 0x22f008: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_22f00c:
    // 0x22f00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f010: 0x3e00008  jr          $ra
    ctx->pc = 0x22F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F010u;
        // 0x22f014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F018u;
}
