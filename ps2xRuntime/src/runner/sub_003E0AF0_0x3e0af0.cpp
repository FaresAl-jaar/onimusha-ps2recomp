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

// Function: sub_003E0AF0
// Address: 0x3e0af0 - 0x3e0b80
void sub_003E0AF0_0x3e0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0AF0_0x3e0af0");
#endif

    switch (ctx->pc) {
        case 0x3e0b18u: goto label_3e0b18;
        case 0x3e0b64u: goto label_3e0b64;
        default: break;
    }

    ctx->pc = 0x3e0af0u;

    // 0x3e0af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0afc: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x3e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x3e0b00: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E0B00u;
    {
        const bool branch_taken_0x3e0b00 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3e0b00) {
            ctx->pc = 0x3E0B70u;
            goto label_3e0b70;
        }
    }
    ctx->pc = 0x3E0B08u;
    // 0x3e0b08: 0x8f858ce8  lw          $a1, -0x7318($gp)
    ctx->pc = 0x3e0b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x3e0b0c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0B0Cu;
    {
        const bool branch_taken_0x3e0b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b0c) {
            ctx->pc = 0x3E0B70u;
            goto label_3e0b70;
        }
    }
    ctx->pc = 0x3E0B14u;
    // 0x3e0b14: 0x0  nop
    ctx->pc = 0x3e0b14u;
    // NOP
label_3e0b18:
    // 0x3e0b18: 0x90a4005d  lbu         $a0, 0x5D($a1)
    ctx->pc = 0x3e0b18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x3e0b1c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3e0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3e0b20: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E0B20u;
    {
        const bool branch_taken_0x3e0b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B20u;
        // 0x3e0b24: 0x8cb000c0  lw          $s0, 0xC0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b20) {
            ctx->pc = 0x3E0B58u;
            goto label_3e0b58;
        }
    }
    ctx->pc = 0x3E0B28u;
    // 0x3e0b28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e0b2c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E0B2Cu;
    {
        const bool branch_taken_0x3e0b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B2Cu;
        // 0x3e0b30: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b2c) {
            ctx->pc = 0x3E0B58u;
            goto label_3e0b58;
        }
    }
    ctx->pc = 0x3E0B34u;
    // 0x3e0b34: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0B34u;
    {
        const bool branch_taken_0x3e0b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0b34) {
            ctx->pc = 0x3E0B58u;
            goto label_3e0b58;
        }
    }
    ctx->pc = 0x3E0B3Cu;
    // 0x3e0b3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e0b40: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0B40u;
    {
        const bool branch_taken_0x3e0b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0b40) {
            ctx->pc = 0x3E0B58u;
            goto label_3e0b58;
        }
    }
    ctx->pc = 0x3E0B48u;
    // 0x3e0b48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0B48u;
    {
        const bool branch_taken_0x3e0b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b48) {
            ctx->pc = 0x3E0B58u;
            goto label_3e0b58;
        }
    }
    ctx->pc = 0x3E0B50u;
    // 0x3e0b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0B50u;
    {
        const bool branch_taken_0x3e0b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b50) {
            ctx->pc = 0x3E0B68u;
            goto label_3e0b68;
        }
    }
    ctx->pc = 0x3E0B58u;
label_3e0b58:
    // 0x3e0b58: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3e0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e0b5c: 0xc0f824c  jal         func_3E0930
    ctx->pc = 0x3E0B5Cu;
    SET_GPR_U32(ctx, 31, 0x3E0B64u);
    ctx->pc = 0x3E0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0B5Cu;
    // 0x3e0b60: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0930u, 0x3E0B5Cu, 0x3E0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0B64u;
label_3e0b64:
    // 0x3e0b64: 0x0  nop
    ctx->pc = 0x3e0b64u;
    // NOP
label_3e0b68:
    // 0x3e0b68: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3E0B68u;
    {
        const bool branch_taken_0x3e0b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B68u;
        // 0x3e0b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b68) {
            ctx->pc = 0x3E0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0b18;
        }
    }
    ctx->pc = 0x3E0B70u;
label_3e0b70:
    // 0x3e0b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e0b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0b78: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B78u;
        // 0x3e0b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0B80u;
}
