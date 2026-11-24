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

// Function: sub_0021DA68
// Address: 0x21da68 - 0x21dacc
void sub_0021DA68_0x21da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DA68_0x21da68");
#endif

    switch (ctx->pc) {
        case 0x21da90u: goto label_21da90;
        case 0x21daa4u: goto label_21daa4;
        case 0x21daacu: goto label_21daac;
        case 0x21dab8u: goto label_21dab8;
        default: break;
    }

    ctx->pc = 0x21da68u;

    // 0x21da68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21da6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21da70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21da70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21da74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21da74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21da7c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21da80: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x21DA80u;
    {
        const bool branch_taken_0x21da80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x21DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA80u;
        // 0x21da84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da80) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DA88u;
    // 0x21da88: 0xc0876bc  jal         func_21DAF0
    ctx->pc = 0x21DA88u;
    SET_GPR_U32(ctx, 31, 0x21DA90u);
    ctx->pc = 0x21DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAF0u, 0x21DA88u, 0x21DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA90u;
label_21da90:
    // 0x21da90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21DA90u;
    {
        const bool branch_taken_0x21da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA90u;
        // 0x21da94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da90) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DA98u;
    // 0x21da98: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x21da98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x21da9c: 0xc0876b4  jal         func_21DAD0
    ctx->pc = 0x21DA9Cu;
    SET_GPR_U32(ctx, 31, 0x21DAA4u);
    ctx->pc = 0x21DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA9Cu;
    // 0x21daa0: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAD0u, 0x21DA9Cu, 0x21DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAA4u;
label_21daa4:
    // 0x21daa4: 0xc0876d4  jal         func_21DB50
    ctx->pc = 0x21DAA4u;
    SET_GPR_U32(ctx, 31, 0x21DAACu);
    ctx->pc = 0x21DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAA4u;
    // 0x21daa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DB50u, 0x21DAA4u, 0x21DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAACu;
label_21daac:
    // 0x21daac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dab0: 0xc0876b4  jal         func_21DAD0
    ctx->pc = 0x21DAB0u;
    SET_GPR_U32(ctx, 31, 0x21DAB8u);
    ctx->pc = 0x21DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAB0u;
    // 0x21dab4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAD0u, 0x21DAB0u, 0x21DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAB8u;
label_21dab8:
    // 0x21dab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21dab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21dabc:
    // 0x21dabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dac0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21dac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21dac4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAC4u;
        // 0x21dac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DACCu;
}
