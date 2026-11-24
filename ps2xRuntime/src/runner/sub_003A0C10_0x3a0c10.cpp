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

// Function: sub_003A0C10
// Address: 0x3a0c10 - 0x3a0ca4
void sub_003A0C10_0x3a0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0C10_0x3a0c10");
#endif

    switch (ctx->pc) {
        case 0x3a0c48u: goto label_3a0c48;
        case 0x3a0c58u: goto label_3a0c58;
        case 0x3a0c68u: goto label_3a0c68;
        case 0x3a0c78u: goto label_3a0c78;
        case 0x3a0c88u: goto label_3a0c88;
        case 0x3a0c98u: goto label_3a0c98;
        default: break;
    }

    ctx->pc = 0x3a0c10u;

    // 0x3a0c10: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3a0c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3a0c14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a0c18: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3a0c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a0c1c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A0C1Cu;
    {
        const bool branch_taken_0x3a0c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C1Cu;
        // 0x3a0c20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c1c) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C24u;
    // 0x3a0c24: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3a0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3a0c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a0c2c: 0x24842760  addiu       $a0, $a0, 0x2760
    ctx->pc = 0x3a0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
    // 0x3a0c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0c34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a0c38: 0x600008  jr          $v1
    ctx->pc = 0x3A0C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A0C40u: goto label_3a0c40;
            case 0x3A0C50u: goto label_3a0c50;
            case 0x3A0C60u: goto label_3a0c60;
            case 0x3A0C70u: goto label_3a0c70;
            case 0x3A0C80u: goto label_3a0c80;
            case 0x3A0C90u: goto label_3a0c90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0C38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A0C40u;
label_3a0c40:
    // 0x3a0c40: 0xc0e8228  jal         func_3A08A0
    ctx->pc = 0x3A0C40u;
    SET_GPR_U32(ctx, 31, 0x3A0C48u);
    ctx->pc = 0x3A0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C40u;
    // 0x3a0c44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A08A0u, 0x3A0C40u, 0x3A0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C48u;
label_3a0c48:
    // 0x3a0c48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A0C48u;
    {
        const bool branch_taken_0x3a0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c48) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C50u;
label_3a0c50:
    // 0x3a0c50: 0xc0e8238  jal         func_3A08E0
    ctx->pc = 0x3A0C50u;
    SET_GPR_U32(ctx, 31, 0x3A0C58u);
    ctx->pc = 0x3A08E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A08E0u, 0x3A0C50u, 0x3A0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C58u;
label_3a0c58:
    // 0x3a0c58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A0C58u;
    {
        const bool branch_taken_0x3a0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c58) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C60u;
label_3a0c60:
    // 0x3a0c60: 0xc0e825c  jal         func_3A0970
    ctx->pc = 0x3A0C60u;
    SET_GPR_U32(ctx, 31, 0x3A0C68u);
    ctx->pc = 0x3A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0970u, 0x3A0C60u, 0x3A0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C68u;
label_3a0c68:
    // 0x3a0c68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A0C68u;
    {
        const bool branch_taken_0x3a0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c68) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C70u;
label_3a0c70:
    // 0x3a0c70: 0xc0e8260  jal         func_3A0980
    ctx->pc = 0x3A0C70u;
    SET_GPR_U32(ctx, 31, 0x3A0C78u);
    ctx->pc = 0x3A0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0980u, 0x3A0C70u, 0x3A0C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C78u;
label_3a0c78:
    // 0x3a0c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0C78u;
    {
        const bool branch_taken_0x3a0c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c78) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C80u;
label_3a0c80:
    // 0x3a0c80: 0xc0e8288  jal         func_3A0A20
    ctx->pc = 0x3A0C80u;
    SET_GPR_U32(ctx, 31, 0x3A0C88u);
    ctx->pc = 0x3A0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A20u, 0x3A0C80u, 0x3A0C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C88u;
label_3a0c88:
    // 0x3a0c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0C88u;
    {
        const bool branch_taken_0x3a0c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c88) {
            ctx->pc = 0x3A0C98u;
            goto label_3a0c98;
        }
    }
    ctx->pc = 0x3A0C90u;
label_3a0c90:
    // 0x3a0c90: 0xc0e8290  jal         func_3A0A40
    ctx->pc = 0x3A0C90u;
    SET_GPR_U32(ctx, 31, 0x3A0C98u);
    ctx->pc = 0x3A0C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C90u;
    // 0x3a0c94: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A40u, 0x3A0C90u, 0x3A0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C98u;
label_3a0c98:
    // 0x3a0c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C9Cu;
        // 0x3a0ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0CA4u;
}
