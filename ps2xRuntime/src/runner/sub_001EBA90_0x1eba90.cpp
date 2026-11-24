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

// Function: sub_001EBA90
// Address: 0x1eba90 - 0x1ebae4
void sub_001EBA90_0x1eba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBA90_0x1eba90");
#endif

    switch (ctx->pc) {
        case 0x1eba90u: goto label_1eba90;
        case 0x1eba94u: goto label_1eba94;
        case 0x1eba98u: goto label_1eba98;
        case 0x1eba9cu: goto label_1eba9c;
        case 0x1ebaa0u: goto label_1ebaa0;
        case 0x1ebaa4u: goto label_1ebaa4;
        case 0x1ebaa8u: goto label_1ebaa8;
        case 0x1ebaacu: goto label_1ebaac;
        case 0x1ebab0u: goto label_1ebab0;
        case 0x1ebab4u: goto label_1ebab4;
        case 0x1ebab8u: goto label_1ebab8;
        case 0x1ebabcu: goto label_1ebabc;
        case 0x1ebac0u: goto label_1ebac0;
        case 0x1ebac4u: goto label_1ebac4;
        case 0x1ebac8u: goto label_1ebac8;
        case 0x1ebaccu: goto label_1ebacc;
        case 0x1ebad0u: goto label_1ebad0;
        case 0x1ebad4u: goto label_1ebad4;
        case 0x1ebad8u: goto label_1ebad8;
        case 0x1ebadcu: goto label_1ebadc;
        case 0x1ebae0u: goto label_1ebae0;
        default: break;
    }

    ctx->pc = 0x1eba90u;

label_1eba90:
    // 0x1eba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eba94:
    // 0x1eba94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eba98:
    // 0x1eba98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eba9c:
    // 0x1eba9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebaa0:
    // 0x1ebaa0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ebaa4:
    if (ctx->pc == 0x1EBAA4u) {
        ctx->pc = 0x1EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAA0u;
        // 0x1ebaa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAA8u;
        goto label_1ebaa8;
    }
    ctx->pc = 0x1EBAA0u;
    {
        const bool branch_taken_0x1ebaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAA0u;
        // 0x1ebaa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebaa0) {
            ctx->pc = 0x1EBAD0u;
            goto label_1ebad0;
        }
    }
    ctx->pc = 0x1EBAA8u;
label_1ebaa8:
    // 0x1ebaa8: 0x24427050  addiu       $v0, $v0, 0x7050
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28752));
label_1ebaac:
    // 0x1ebaac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ebaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ebab0:
    // 0x1ebab0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ebab4:
    // 0x1ebab4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ebab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ebab8:
    // 0x1ebab8: 0x320f809  jalr        $t9
label_1ebabc:
    if (ctx->pc == 0x1EBABCu) {
        ctx->pc = 0x1EBAC0u;
        goto label_1ebac0;
    }
    ctx->pc = 0x1EBAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EBAC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAB8u, 0x1EBAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBAC0u;
label_1ebac0:
    // 0x1ebac0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ebac4:
    if (ctx->pc == 0x1EBAC4u) {
        ctx->pc = 0x1EBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAC0u;
        // 0x1ebac4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAC8u;
        goto label_1ebac8;
    }
    ctx->pc = 0x1EBAC0u;
    {
        const bool branch_taken_0x1ebac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAC0u;
        // 0x1ebac4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebac0) {
            ctx->pc = 0x1EBAD0u;
            goto label_1ebad0;
        }
    }
    ctx->pc = 0x1EBAC8u;
label_1ebac8:
    // 0x1ebac8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ebacc:
    // 0x1ebacc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ebaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ebad0:
    // 0x1ebad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ebad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebad4:
    // 0x1ebad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebad8:
    // 0x1ebad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebadc:
    // 0x1ebadc: 0x3e00008  jr          $ra
label_1ebae0:
    if (ctx->pc == 0x1EBAE0u) {
        ctx->pc = 0x1EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBADCu;
        // 0x1ebae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAE4u;
        goto label_fallthrough_0x1ebadc;
    }
    ctx->pc = 0x1EBADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBADCu;
        // 0x1ebae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebadc:
    ctx->pc = 0x1EBAE4u;
}
