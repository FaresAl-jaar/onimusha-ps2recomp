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

// Function: sub_00220B90
// Address: 0x220b90 - 0x220be0
void sub_00220B90_0x220b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220B90_0x220b90");
#endif

    ctx->pc = 0x220b90u;

    // 0x220b90: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x220b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x220b94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x220b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x220b98: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x220B98u;
    {
        const bool branch_taken_0x220b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220b98) {
            ctx->pc = 0x220BD8u;
            goto label_220bd8;
        }
    }
    ctx->pc = 0x220BA0u;
    // 0x220ba0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x220ba4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x220BA4u;
    {
        const bool branch_taken_0x220ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220ba4) {
            ctx->pc = 0x220BD8u;
            goto label_220bd8;
        }
    }
    ctx->pc = 0x220BACu;
    // 0x220bac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x220bb0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220BB0u;
    {
        const bool branch_taken_0x220bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bb0) {
            ctx->pc = 0x220BD8u;
            goto label_220bd8;
        }
    }
    ctx->pc = 0x220BB8u;
    // 0x220bb8: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x220bbc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220BBCu;
    {
        const bool branch_taken_0x220bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x220BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BBCu;
        // 0x220bc0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bbc) {
            ctx->pc = 0x220BD8u;
            goto label_220bd8;
        }
    }
    ctx->pc = 0x220BC4u;
    // 0x220bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220bc8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x220bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x220bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x220BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BD0u;
        // 0x220bd4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220BD8u;
label_220bd8:
    // 0x220bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x220BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BD8u;
        // 0x220bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220BE0u;
}
