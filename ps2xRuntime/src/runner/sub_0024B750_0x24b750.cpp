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

// Function: sub_0024B750
// Address: 0x24b750 - 0x24b7b8
void sub_0024B750_0x24b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B750_0x24b750");
#endif

    switch (ctx->pc) {
        case 0x24b794u: goto label_24b794;
        default: break;
    }

    ctx->pc = 0x24b750u;

    // 0x24b750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b75c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B75Cu;
    {
        const bool branch_taken_0x24b75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B75Cu;
        // 0x24b760: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b75c) {
            ctx->pc = 0x24B780u;
            goto label_24b780;
        }
    }
    ctx->pc = 0x24B764u;
    // 0x24b764: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b76c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b770: 0x2484d828  addiu       $a0, $a0, -0x27D8
    ctx->pc = 0x24b770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957096));
    // 0x24b774: 0x8093008  j           func_24C020
    ctx->pc = 0x24B774u;
    ctx->pc = 0x24B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B774u;
    // 0x24b778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24B77Cu;
    // 0x24b77c: 0x0  nop
    ctx->pc = 0x24b77cu;
    // NOP
label_24b780:
    // 0x24b780: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x24b780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x24b784: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B784u;
    {
        const bool branch_taken_0x24b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b784) {
            ctx->pc = 0x24B788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B784u;
            // 0x24b788: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B798u;
            goto label_24b798;
        }
    }
    ctx->pc = 0x24B78Cu;
    // 0x24b78c: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x24B78Cu;
    SET_GPR_U32(ctx, 31, 0x24B794u);
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x24B78Cu, 0x24B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B794u;
label_24b794:
    // 0x24b794: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x24b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_24b798:
    // 0x24b798: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B798u;
    {
        const bool branch_taken_0x24b798 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x24b798) {
            ctx->pc = 0x24B79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B798u;
            // 0x24b79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B7A4u;
            goto label_24b7a4;
        }
    }
    ctx->pc = 0x24B7A0u;
    // 0x24b7a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b7a4:
    // 0x24b7a4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x24b7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b7a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b7ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7B0u;
        // 0x24b7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B7B8u;
}
