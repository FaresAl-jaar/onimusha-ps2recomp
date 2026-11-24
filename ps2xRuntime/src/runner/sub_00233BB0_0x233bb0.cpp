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

// Function: sub_00233BB0
// Address: 0x233bb0 - 0x233c10
void sub_00233BB0_0x233bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233BB0_0x233bb0");
#endif

    switch (ctx->pc) {
        case 0x233bd4u: goto label_233bd4;
        case 0x233bf4u: goto label_233bf4;
        default: break;
    }

    ctx->pc = 0x233bb0u;

    // 0x233bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233bb4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bbc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x233bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x233bc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bc4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x233BC4u;
    {
        const bool branch_taken_0x233bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BC4u;
        // 0x233bc8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bc4) {
            ctx->pc = 0x233BF8u;
            goto label_233bf8;
        }
    }
    ctx->pc = 0x233BCCu;
    // 0x233bcc: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x233BCCu;
    SET_GPR_U32(ctx, 31, 0x233BD4u);
    ctx->pc = 0x233BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BCCu;
    // 0x233bd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x233BCCu, 0x233BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BD4u;
label_233bd4:
    // 0x233bd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x233bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233bd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x233bdc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233BDCu;
    {
        const bool branch_taken_0x233bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BDCu;
        // 0x233be0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bdc) {
            ctx->pc = 0x233BF8u;
            goto label_233bf8;
        }
    }
    ctx->pc = 0x233BE4u;
    // 0x233be4: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233BE4u;
    {
        const bool branch_taken_0x233be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x233be4) {
            ctx->pc = 0x233BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233BE4u;
            // 0x233be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233BFCu;
            goto label_233bfc;
        }
    }
    ctx->pc = 0x233BECu;
    // 0x233bec: 0xc0437d4  jal         func_10DF50
    ctx->pc = 0x233BECu;
    SET_GPR_U32(ctx, 31, 0x233BF4u);
    ctx->pc = 0x233BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BECu;
    // 0x233bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF50u, 0x233BECu, 0x233BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BF4u;
label_233bf4:
    // 0x233bf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233bf8:
    // 0x233bf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233bfc:
    // 0x233bfc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233c00: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x233c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233c04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233c08: 0x3e00008  jr          $ra
    ctx->pc = 0x233C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C08u;
        // 0x233c0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C10u;
}
