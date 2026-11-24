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

// Function: sub_00233B48
// Address: 0x233b48 - 0x233bac
void sub_00233B48_0x233b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233B48_0x233b48");
#endif

    switch (ctx->pc) {
        case 0x233b6cu: goto label_233b6c;
        case 0x233b90u: goto label_233b90;
        default: break;
    }

    ctx->pc = 0x233b48u;

    // 0x233b48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233b4c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b54: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x233b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x233b58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x233b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b5c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x233B5Cu;
    {
        const bool branch_taken_0x233b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B5Cu;
        // 0x233b60: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b5c) {
            ctx->pc = 0x233B94u;
            goto label_233b94;
        }
    }
    ctx->pc = 0x233B64u;
    // 0x233b64: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x233B64u;
    SET_GPR_U32(ctx, 31, 0x233B6Cu);
    ctx->pc = 0x233B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B64u;
    // 0x233b68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x233B64u, 0x233B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x233b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x233b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x233b78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233B78u;
    {
        const bool branch_taken_0x233b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B78u;
        // 0x233b7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b78) {
            ctx->pc = 0x233B88u;
            goto label_233b88;
        }
    }
    ctx->pc = 0x233B80u;
    // 0x233b80: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233B80u;
    {
        const bool branch_taken_0x233b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x233B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B80u;
        // 0x233b84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b80) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233B88u;
label_233b88:
    // 0x233b88: 0xc0437dc  jal         func_10DF70
    ctx->pc = 0x233B88u;
    SET_GPR_U32(ctx, 31, 0x233B90u);
    ctx->pc = 0x10DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF70u, 0x233B88u, 0x233B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B90u;
label_233b90:
    // 0x233b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b94:
    // 0x233b94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233b98:
    // 0x233b98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233b9c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x233b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x233BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BA4u;
        // 0x233ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233BACu;
}
