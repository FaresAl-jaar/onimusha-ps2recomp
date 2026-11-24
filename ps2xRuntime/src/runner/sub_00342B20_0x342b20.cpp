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

// Function: sub_00342B20
// Address: 0x342b20 - 0x342b7c
void sub_00342B20_0x342b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B20_0x342b20");
#endif

    switch (ctx->pc) {
        case 0x342b20u: goto label_342b20;
        case 0x342b24u: goto label_342b24;
        case 0x342b28u: goto label_342b28;
        case 0x342b2cu: goto label_342b2c;
        case 0x342b30u: goto label_342b30;
        case 0x342b34u: goto label_342b34;
        case 0x342b38u: goto label_342b38;
        case 0x342b3cu: goto label_342b3c;
        case 0x342b40u: goto label_342b40;
        case 0x342b44u: goto label_342b44;
        case 0x342b48u: goto label_342b48;
        case 0x342b4cu: goto label_342b4c;
        case 0x342b50u: goto label_342b50;
        case 0x342b54u: goto label_342b54;
        case 0x342b58u: goto label_342b58;
        case 0x342b5cu: goto label_342b5c;
        case 0x342b60u: goto label_342b60;
        case 0x342b64u: goto label_342b64;
        case 0x342b68u: goto label_342b68;
        case 0x342b6cu: goto label_342b6c;
        case 0x342b70u: goto label_342b70;
        case 0x342b74u: goto label_342b74;
        case 0x342b78u: goto label_342b78;
        default: break;
    }

    ctx->pc = 0x342b20u;

label_342b20:
    // 0x342b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_342b24:
    // 0x342b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342b28:
    // 0x342b28: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x342b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_342b2c:
    // 0x342b2c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_342b30:
    if (ctx->pc == 0x342B30u) {
        ctx->pc = 0x342B34u;
        goto label_342b34;
    }
    ctx->pc = 0x342B2Cu;
    {
        const bool branch_taken_0x342b2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x342b2c) {
            ctx->pc = 0x342B68u;
            goto label_342b68;
        }
    }
    ctx->pc = 0x342B34u;
label_342b34:
    // 0x342b34: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x342b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_342b38:
    // 0x342b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x342b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342b3c:
    // 0x342b3c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_342b40:
    if (ctx->pc == 0x342B40u) {
        ctx->pc = 0x342B44u;
        goto label_342b44;
    }
    ctx->pc = 0x342B3Cu;
    {
        const bool branch_taken_0x342b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x342b3c) {
            ctx->pc = 0x342B58u;
            goto label_342b58;
        }
    }
    ctx->pc = 0x342B44u;
label_342b44:
    // 0x342b44: 0xc0f809  jalr        $a2
label_342b48:
    if (ctx->pc == 0x342B48u) {
        ctx->pc = 0x342B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B44u;
        // 0x342b48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B4Cu;
        goto label_342b4c;
    }
    ctx->pc = 0x342B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x342B4Cu);
        ctx->pc = 0x342B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B44u;
        // 0x342b48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B44u, 0x342B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342B4Cu;
label_342b4c:
    // 0x342b4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_342b50:
    if (ctx->pc == 0x342B50u) {
        ctx->pc = 0x342B54u;
        goto label_342b54;
    }
    ctx->pc = 0x342B4Cu;
    {
        const bool branch_taken_0x342b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342b4c) {
            ctx->pc = 0x342B70u;
            goto label_342b70;
        }
    }
    ctx->pc = 0x342B54u;
label_342b54:
    // 0x342b54: 0x0  nop
    ctx->pc = 0x342b54u;
    // NOP
label_342b58:
    // 0x342b58: 0xc0f809  jalr        $a2
label_342b5c:
    if (ctx->pc == 0x342B5Cu) {
        ctx->pc = 0x342B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B58u;
        // 0x342b5c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B60u;
        goto label_342b60;
    }
    ctx->pc = 0x342B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x342B60u);
        ctx->pc = 0x342B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B58u;
        // 0x342b5c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B58u, 0x342B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342B60u;
label_342b60:
    // 0x342b60: 0x10000003  b           . + 4 + (0x3 << 2)
label_342b64:
    if (ctx->pc == 0x342B64u) {
        ctx->pc = 0x342B68u;
        goto label_342b68;
    }
    ctx->pc = 0x342B60u;
    {
        const bool branch_taken_0x342b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342b60) {
            ctx->pc = 0x342B70u;
            goto label_342b70;
        }
    }
    ctx->pc = 0x342B68u;
label_342b68:
    // 0x342b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342b6c:
    // 0x342b6c: 0x0  nop
    ctx->pc = 0x342b6cu;
    // NOP
label_342b70:
    // 0x342b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342b74:
    // 0x342b74: 0x3e00008  jr          $ra
label_342b78:
    if (ctx->pc == 0x342B78u) {
        ctx->pc = 0x342B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B74u;
        // 0x342b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B7Cu;
        goto label_fallthrough_0x342b74;
    }
    ctx->pc = 0x342B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B74u;
        // 0x342b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342b74:
    ctx->pc = 0x342B7Cu;
}
