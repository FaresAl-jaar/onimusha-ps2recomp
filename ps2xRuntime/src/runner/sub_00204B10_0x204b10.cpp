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

// Function: sub_00204B10
// Address: 0x204b10 - 0x204b78
void sub_00204B10_0x204b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204B10_0x204b10");
#endif

    switch (ctx->pc) {
        case 0x204b64u: goto label_204b64;
        default: break;
    }

    ctx->pc = 0x204b10u;

    // 0x204b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204b1c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x204b1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x204b20: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204B20u;
    {
        const bool branch_taken_0x204b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B20u;
        // 0x204b24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b20) {
            ctx->pc = 0x204B68u;
            goto label_204b68;
        }
    }
    ctx->pc = 0x204B28u;
    // 0x204b28: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204B28u;
    {
        const bool branch_taken_0x204b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b28) {
            ctx->pc = 0x204B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204B28u;
            // 0x204b2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204B40u;
            goto label_204b40;
        }
    }
    ctx->pc = 0x204B30u;
    // 0x204b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204B34u;
    {
        const bool branch_taken_0x204b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B34u;
        // 0x204b38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b34) {
            ctx->pc = 0x204B50u;
            goto label_204b50;
        }
    }
    ctx->pc = 0x204B3Cu;
    // 0x204b3c: 0x0  nop
    ctx->pc = 0x204b3cu;
    // NOP
label_204b40:
    // 0x204b40: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204B40u;
    {
        const bool branch_taken_0x204b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B40u;
        // 0x204b44: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b40) {
            ctx->pc = 0x204B68u;
            goto label_204b68;
        }
    }
    ctx->pc = 0x204B48u;
    // 0x204b48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x204b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204b4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204b50:
    // 0x204b50: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204B50u;
    {
        const bool branch_taken_0x204b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B50u;
        // 0x204b54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b50) {
            ctx->pc = 0x204B6Cu;
            goto label_204b6c;
        }
    }
    ctx->pc = 0x204B58u;
    // 0x204b58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204b5c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x204B5Cu;
    SET_GPR_U32(ctx, 31, 0x204B64u);
    ctx->pc = 0x204B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B5Cu;
    // 0x204b60: 0x24846c40  addiu       $a0, $a0, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x204B5Cu, 0x204B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B64u;
label_204b64:
    // 0x204b64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204b68:
    // 0x204b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204b6c:
    // 0x204b6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x204b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b70: 0x3e00008  jr          $ra
    ctx->pc = 0x204B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B70u;
        // 0x204b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204B78u;
}
