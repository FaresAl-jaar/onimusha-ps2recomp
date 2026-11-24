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

// Function: sub_00100B50
// Address: 0x100b50 - 0x100b8c
void sub_00100B50_0x100b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B50_0x100b50");
#endif

    switch (ctx->pc) {
        case 0x100b50u: goto label_100b50;
        case 0x100b54u: goto label_100b54;
        case 0x100b58u: goto label_100b58;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b60u: goto label_100b60;
        case 0x100b64u: goto label_100b64;
        case 0x100b68u: goto label_100b68;
        case 0x100b6cu: goto label_100b6c;
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        default: break;
    }

    ctx->pc = 0x100b50u;

label_100b50:
    // 0x100b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100b54:
    // 0x100b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_100b58:
    // 0x100b58: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100b5c:
    // 0x100b5c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_100b60:
    if (ctx->pc == 0x100B60u) {
        ctx->pc = 0x100B64u;
        goto label_100b64;
    }
    ctx->pc = 0x100B5Cu;
    {
        const bool branch_taken_0x100b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b5c) {
            ctx->pc = 0x100B80u;
            goto label_100b80;
        }
    }
    ctx->pc = 0x100B64u;
label_100b64:
    // 0x100b64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x100b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_100b68:
    // 0x100b68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_100b6c:
    if (ctx->pc == 0x100B6Cu) {
        ctx->pc = 0x100B70u;
        goto label_100b70;
    }
    ctx->pc = 0x100B68u;
    {
        const bool branch_taken_0x100b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b68) {
            ctx->pc = 0x100B80u;
            goto label_100b80;
        }
    }
    ctx->pc = 0x100B70u;
label_100b70:
    // 0x100b70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100b74:
    // 0x100b74: 0x60f809  jalr        $v1
label_100b78:
    if (ctx->pc == 0x100B78u) {
        ctx->pc = 0x100B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B74u;
        // 0x100b78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B7Cu;
        goto label_100b7c;
    }
    ctx->pc = 0x100B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100B7Cu);
        ctx->pc = 0x100B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B74u;
        // 0x100b78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B74u, 0x100B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B7Cu;
label_100b7c:
    // 0x100b7c: 0x0  nop
    ctx->pc = 0x100b7cu;
    // NOP
label_100b80:
    // 0x100b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100b84:
    // 0x100b84: 0x3e00008  jr          $ra
label_100b88:
    if (ctx->pc == 0x100B88u) {
        ctx->pc = 0x100B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B84u;
        // 0x100b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B8Cu;
        goto label_fallthrough_0x100b84;
    }
    ctx->pc = 0x100B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B84u;
        // 0x100b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100b84:
    ctx->pc = 0x100B8Cu;
}
