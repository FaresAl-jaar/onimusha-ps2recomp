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

// Function: sub_001E8B50
// Address: 0x1e8b50 - 0x1e8ba4
void sub_001E8B50_0x1e8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8B50_0x1e8b50");
#endif

    switch (ctx->pc) {
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        default: break;
    }

    ctx->pc = 0x1e8b50u;

label_1e8b50:
    // 0x1e8b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e8b54:
    // 0x1e8b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e8b58:
    // 0x1e8b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8b5c:
    // 0x1e8b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b60:
    // 0x1e8b60: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e8b64:
    if (ctx->pc == 0x1E8B64u) {
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B68u;
        goto label_1e8b68;
    }
    ctx->pc = 0x1E8B60u;
    {
        const bool branch_taken_0x1e8b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b60) {
            ctx->pc = 0x1E8B90u;
            goto label_1e8b90;
        }
    }
    ctx->pc = 0x1E8B68u;
label_1e8b68:
    // 0x1e8b68: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_1e8b6c:
    // 0x1e8b6c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e8b70:
    // 0x1e8b70: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e8b74:
    // 0x1e8b74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e8b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e8b78:
    // 0x1e8b78: 0x320f809  jalr        $t9
label_1e8b7c:
    if (ctx->pc == 0x1E8B7Cu) {
        ctx->pc = 0x1E8B80u;
        goto label_1e8b80;
    }
    ctx->pc = 0x1E8B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8B80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8B78u, 0x1E8B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8B80u;
label_1e8b80:
    // 0x1e8b80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e8b84:
    if (ctx->pc == 0x1E8B84u) {
        ctx->pc = 0x1E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B80u;
        // 0x1e8b84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B88u;
        goto label_1e8b88;
    }
    ctx->pc = 0x1E8B80u;
    {
        const bool branch_taken_0x1e8b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B80u;
        // 0x1e8b84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b80) {
            ctx->pc = 0x1E8B90u;
            goto label_1e8b90;
        }
    }
    ctx->pc = 0x1E8B88u;
label_1e8b88:
    // 0x1e8b88: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e8b8c:
    // 0x1e8b8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e8b90:
    // 0x1e8b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b94:
    // 0x1e8b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8b98:
    // 0x1e8b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8b9c:
    // 0x1e8b9c: 0x3e00008  jr          $ra
label_1e8ba0:
    if (ctx->pc == 0x1E8BA0u) {
        ctx->pc = 0x1E8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B9Cu;
        // 0x1e8ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8BA4u;
        goto label_fallthrough_0x1e8b9c;
    }
    ctx->pc = 0x1E8B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B9Cu;
        // 0x1e8ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8b9c:
    ctx->pc = 0x1E8BA4u;
}
