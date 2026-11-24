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

// Function: sub_00233A90
// Address: 0x233a90 - 0x233ae0
void sub_00233A90_0x233a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233A90_0x233a90");
#endif

    switch (ctx->pc) {
        case 0x233aacu: goto label_233aac;
        case 0x233ad0u: goto label_233ad0;
        default: break;
    }

    ctx->pc = 0x233a90u;

    // 0x233a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233a94: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a9c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A9Cu;
        // 0x233aa0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233AD0u;
            goto label_233ad0;
        }
    }
    ctx->pc = 0x233AA4u;
    // 0x233aa4: 0xc0437bc  jal         func_10DEF0
    ctx->pc = 0x233AA4u;
    SET_GPR_U32(ctx, 31, 0x233AACu);
    ctx->pc = 0x233AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AA4u;
    // 0x233aa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEF0u, 0x233AA4u, 0x233AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AACu;
label_233aac:
    // 0x233aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ab0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233ab4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x233ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x233ab8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233AB8u;
    {
        const bool branch_taken_0x233ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AB8u;
        // 0x233abc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ab8) {
            ctx->pc = 0x233AC8u;
            goto label_233ac8;
        }
    }
    ctx->pc = 0x233AC0u;
    // 0x233ac0: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x233AC0u;
    {
        const bool branch_taken_0x233ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x233AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC0u;
        // 0x233ac4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac0) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233AC8u;
label_233ac8:
    // 0x233ac8: 0xc043baa  jal         func_10EEA8
    ctx->pc = 0x233AC8u;
    SET_GPR_U32(ctx, 31, 0x233AD0u);
    ctx->pc = 0x10EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EEA8u, 0x233AC8u, 0x233AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AD0u;
label_233ad0:
    // 0x233ad0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233ad4:
    // 0x233ad4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x233AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD8u;
        // 0x233adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233AE0u;
}
