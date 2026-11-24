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

// Function: sub_003E0B80
// Address: 0x3e0b80 - 0x3e0c10
void sub_003E0B80_0x3e0b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0B80_0x3e0b80");
#endif

    switch (ctx->pc) {
        case 0x3e0ba8u: goto label_3e0ba8;
        case 0x3e0bf4u: goto label_3e0bf4;
        default: break;
    }

    ctx->pc = 0x3e0b80u;

    // 0x3e0b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0b8c: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x3e0b90: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E0B90u;
    {
        const bool branch_taken_0x3e0b90 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3e0b90) {
            ctx->pc = 0x3E0C00u;
            goto label_3e0c00;
        }
    }
    ctx->pc = 0x3E0B98u;
    // 0x3e0b98: 0x8f858ce8  lw          $a1, -0x7318($gp)
    ctx->pc = 0x3e0b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x3e0b9c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0B9Cu;
    {
        const bool branch_taken_0x3e0b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b9c) {
            ctx->pc = 0x3E0C00u;
            goto label_3e0c00;
        }
    }
    ctx->pc = 0x3E0BA4u;
    // 0x3e0ba4: 0x0  nop
    ctx->pc = 0x3e0ba4u;
    // NOP
label_3e0ba8:
    // 0x3e0ba8: 0x90a4005d  lbu         $a0, 0x5D($a1)
    ctx->pc = 0x3e0ba8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x3e0bac: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3e0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3e0bb0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E0BB0u;
    {
        const bool branch_taken_0x3e0bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BB0u;
        // 0x3e0bb4: 0x8cb000c0  lw          $s0, 0xC0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0bb0) {
            ctx->pc = 0x3E0BE8u;
            goto label_3e0be8;
        }
    }
    ctx->pc = 0x3E0BB8u;
    // 0x3e0bb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e0bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e0bbc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E0BBCu;
    {
        const bool branch_taken_0x3e0bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BBCu;
        // 0x3e0bc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0bbc) {
            ctx->pc = 0x3E0BE8u;
            goto label_3e0be8;
        }
    }
    ctx->pc = 0x3E0BC4u;
    // 0x3e0bc4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0BC4u;
    {
        const bool branch_taken_0x3e0bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0bc4) {
            ctx->pc = 0x3E0BE8u;
            goto label_3e0be8;
        }
    }
    ctx->pc = 0x3E0BCCu;
    // 0x3e0bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e0bd0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0BD0u;
    {
        const bool branch_taken_0x3e0bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0bd0) {
            ctx->pc = 0x3E0BE8u;
            goto label_3e0be8;
        }
    }
    ctx->pc = 0x3E0BD8u;
    // 0x3e0bd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0BD8u;
    {
        const bool branch_taken_0x3e0bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0bd8) {
            ctx->pc = 0x3E0BE8u;
            goto label_3e0be8;
        }
    }
    ctx->pc = 0x3E0BE0u;
    // 0x3e0be0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0BE0u;
    {
        const bool branch_taken_0x3e0be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0be0) {
            ctx->pc = 0x3E0BF8u;
            goto label_3e0bf8;
        }
    }
    ctx->pc = 0x3E0BE8u;
label_3e0be8:
    // 0x3e0be8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3e0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e0bec: 0xc0f8264  jal         func_3E0990
    ctx->pc = 0x3E0BECu;
    SET_GPR_U32(ctx, 31, 0x3E0BF4u);
    ctx->pc = 0x3E0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0BECu;
    // 0x3e0bf0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0990u, 0x3E0BECu, 0x3E0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0BF4u;
label_3e0bf4:
    // 0x3e0bf4: 0x0  nop
    ctx->pc = 0x3e0bf4u;
    // NOP
label_3e0bf8:
    // 0x3e0bf8: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3E0BF8u;
    {
        const bool branch_taken_0x3e0bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BF8u;
        // 0x3e0bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0bf8) {
            ctx->pc = 0x3E0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0ba8;
        }
    }
    ctx->pc = 0x3E0C00u;
label_3e0c00:
    // 0x3e0c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e0c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0c08: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C08u;
        // 0x3e0c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0C10u;
}
