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

// Function: sub_00208BE8
// Address: 0x208be8 - 0x208c54
void sub_00208BE8_0x208be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208BE8_0x208be8");
#endif

    switch (ctx->pc) {
        case 0x208c40u: goto label_208c40;
        default: break;
    }

    ctx->pc = 0x208be8u;

    // 0x208be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208bf4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x208bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208bfc: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x208c00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208C00u;
    {
        const bool branch_taken_0x208c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C00u;
        // 0x208c04: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c00) {
            ctx->pc = 0x208C30u;
            goto label_208c30;
        }
    }
    ctx->pc = 0x208C08u;
    // 0x208c08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C08u;
    {
        const bool branch_taken_0x208c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C08u;
        // 0x208c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c08) {
            ctx->pc = 0x208C20u;
            goto label_208c20;
        }
    }
    ctx->pc = 0x208C10u;
    // 0x208c10: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208C10u;
    {
        const bool branch_taken_0x208c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x208c10) {
            ctx->pc = 0x208C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C10u;
            // 0x208c14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C40u;
            goto label_208c40;
        }
    }
    ctx->pc = 0x208C18u;
    // 0x208c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208C18u;
    {
        const bool branch_taken_0x208c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C18u;
        // 0x208c1c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c18) {
            ctx->pc = 0x208C38u;
            goto label_208c38;
        }
    }
    ctx->pc = 0x208C20u;
label_208c20:
    // 0x208c20: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208C20u;
    {
        const bool branch_taken_0x208c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x208C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C20u;
        // 0x208c24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c20) {
            ctx->pc = 0x208C44u;
            goto label_208c44;
        }
    }
    ctx->pc = 0x208C28u;
    // 0x208c28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208C28u;
    {
        const bool branch_taken_0x208c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c28) {
            ctx->pc = 0x208C38u;
            goto label_208c38;
        }
    }
    ctx->pc = 0x208C30u;
label_208c30:
    // 0x208c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208C30u;
    {
        const bool branch_taken_0x208c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c30) {
            ctx->pc = 0x208C40u;
            goto label_208c40;
        }
    }
    ctx->pc = 0x208C38u;
label_208c38:
    // 0x208c38: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208C38u;
    SET_GPR_U32(ctx, 31, 0x208C40u);
    ctx->pc = 0x208C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C38u;
    // 0x208c3c: 0x24847c28  addiu       $a0, $a0, 0x7C28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208C38u, 0x208C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C40u;
label_208c40:
    // 0x208c40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c44:
    // 0x208c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208c48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x208C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C4Cu;
        // 0x208c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208C54u;
}
