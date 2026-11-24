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

// Function: sub_001E9B70
// Address: 0x1e9b70 - 0x1e9bc4
void sub_001E9B70_0x1e9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9B70_0x1e9b70");
#endif

    switch (ctx->pc) {
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        default: break;
    }

    ctx->pc = 0x1e9b70u;

label_1e9b70:
    // 0x1e9b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9b74:
    // 0x1e9b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9b78:
    // 0x1e9b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9b7c:
    // 0x1e9b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b80:
    // 0x1e9b80: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e9b84:
    if (ctx->pc == 0x1E9B84u) {
        ctx->pc = 0x1E9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B80u;
        // 0x1e9b84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B88u;
        goto label_1e9b88;
    }
    ctx->pc = 0x1E9B80u;
    {
        const bool branch_taken_0x1e9b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B80u;
        // 0x1e9b84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b80) {
            ctx->pc = 0x1E9BB0u;
            goto label_1e9bb0;
        }
    }
    ctx->pc = 0x1E9B88u;
label_1e9b88:
    // 0x1e9b88: 0x24426ed0  addiu       $v0, $v0, 0x6ED0
    ctx->pc = 0x1e9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28368));
label_1e9b8c:
    // 0x1e9b8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9b90:
    // 0x1e9b90: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e9b94:
    // 0x1e9b94: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9b98:
    // 0x1e9b98: 0x320f809  jalr        $t9
label_1e9b9c:
    if (ctx->pc == 0x1E9B9Cu) {
        ctx->pc = 0x1E9BA0u;
        goto label_1e9ba0;
    }
    ctx->pc = 0x1E9B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9BA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B98u, 0x1E9BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9BA0u;
label_1e9ba0:
    // 0x1e9ba0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e9ba4:
    if (ctx->pc == 0x1E9BA4u) {
        ctx->pc = 0x1E9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BA0u;
        // 0x1e9ba4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BA8u;
        goto label_1e9ba8;
    }
    ctx->pc = 0x1E9BA0u;
    {
        const bool branch_taken_0x1e9ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BA0u;
        // 0x1e9ba4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ba0) {
            ctx->pc = 0x1E9BB0u;
            goto label_1e9bb0;
        }
    }
    ctx->pc = 0x1E9BA8u;
label_1e9ba8:
    // 0x1e9ba8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e9bac:
    // 0x1e9bac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9bb0:
    // 0x1e9bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bb4:
    // 0x1e9bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9bb8:
    // 0x1e9bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9bbc:
    // 0x1e9bbc: 0x3e00008  jr          $ra
label_1e9bc0:
    if (ctx->pc == 0x1E9BC0u) {
        ctx->pc = 0x1E9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BBCu;
        // 0x1e9bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BC4u;
        goto label_fallthrough_0x1e9bbc;
    }
    ctx->pc = 0x1E9BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BBCu;
        // 0x1e9bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9bbc:
    ctx->pc = 0x1E9BC4u;
}
