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

// Function: sub_0023EC08
// Address: 0x23ec08 - 0x23ec60
void sub_0023EC08_0x23ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EC08_0x23ec08");
#endif

    switch (ctx->pc) {
        case 0x23ec08u: goto label_23ec08;
        case 0x23ec0cu: goto label_23ec0c;
        case 0x23ec10u: goto label_23ec10;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec1cu: goto label_23ec1c;
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec24u: goto label_23ec24;
        case 0x23ec28u: goto label_23ec28;
        case 0x23ec2cu: goto label_23ec2c;
        case 0x23ec30u: goto label_23ec30;
        case 0x23ec34u: goto label_23ec34;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec40u: goto label_23ec40;
        case 0x23ec44u: goto label_23ec44;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec4cu: goto label_23ec4c;
        case 0x23ec50u: goto label_23ec50;
        case 0x23ec54u: goto label_23ec54;
        case 0x23ec58u: goto label_23ec58;
        case 0x23ec5cu: goto label_23ec5c;
        default: break;
    }

    ctx->pc = 0x23ec08u;

label_23ec08:
    // 0x23ec08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23ec0c:
    // 0x23ec0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ec10:
    // 0x23ec10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ec10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ec14:
    // 0x23ec14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23ec18:
    // 0x23ec18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ec1c:
    // 0x23ec1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ec20:
    // 0x23ec20: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23ec24:
    // 0x23ec24: 0x40f809  jalr        $v0
label_23ec28:
    if (ctx->pc == 0x23EC28u) {
        ctx->pc = 0x23EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC24u;
        // 0x23ec28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC2Cu;
        goto label_23ec2c;
    }
    ctx->pc = 0x23EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EC2Cu);
        ctx->pc = 0x23EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC24u;
        // 0x23ec28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EC24u, 0x23EC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EC2Cu;
label_23ec2c:
    // 0x23ec2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23ec30:
    if (ctx->pc == 0x23EC30u) {
        ctx->pc = 0x23EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC2Cu;
        // 0x23ec30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC34u;
        goto label_23ec34;
    }
    ctx->pc = 0x23EC2Cu;
    {
        const bool branch_taken_0x23ec2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC2Cu;
        // 0x23ec30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec2c) {
            ctx->pc = 0x23EC50u;
            goto label_23ec50;
        }
    }
    ctx->pc = 0x23EC34u;
label_23ec34:
    // 0x23ec34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23ec38:
    // 0x23ec38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23ec3c:
    if (ctx->pc == 0x23EC3Cu) {
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC40u;
        goto label_23ec40;
    }
    ctx->pc = 0x23EC38u;
    {
        const bool branch_taken_0x23ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC38u;
        // 0x23ec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec38) {
            ctx->pc = 0x23EC50u;
            goto label_23ec50;
        }
    }
    ctx->pc = 0x23EC40u;
label_23ec40:
    // 0x23ec40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_23ec44:
    // 0x23ec44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_23ec48:
    if (ctx->pc == 0x23EC48u) {
        ctx->pc = 0x23EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC44u;
        // 0x23ec48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC4Cu;
        goto label_23ec4c;
    }
    ctx->pc = 0x23EC44u;
    {
        const bool branch_taken_0x23ec44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC44u;
        // 0x23ec48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec44) {
            ctx->pc = 0x23EC50u;
            goto label_23ec50;
        }
    }
    ctx->pc = 0x23EC4Cu;
label_23ec4c:
    // 0x23ec4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23ec4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ec50:
    // 0x23ec50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ec50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ec54:
    // 0x23ec54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23ec58:
    // 0x23ec58: 0x3e00008  jr          $ra
label_23ec5c:
    if (ctx->pc == 0x23EC5Cu) {
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC58u;
        // 0x23ec5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC60u;
        goto label_fallthrough_0x23ec58;
    }
    ctx->pc = 0x23EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC58u;
        // 0x23ec5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ec58:
    ctx->pc = 0x23EC60u;
}
