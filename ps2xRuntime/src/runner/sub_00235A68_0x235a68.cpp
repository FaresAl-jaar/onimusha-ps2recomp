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

// Function: sub_00235A68
// Address: 0x235a68 - 0x235ac8
void sub_00235A68_0x235a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235A68_0x235a68");
#endif

    switch (ctx->pc) {
        case 0x235a90u: goto label_235a90;
        case 0x235a98u: goto label_235a98;
        case 0x235aa8u: goto label_235aa8;
        default: break;
    }

    ctx->pc = 0x235a68u;

    // 0x235a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x235A74u;
    {
        const bool branch_taken_0x235a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A74u;
        // 0x235a78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a74) {
            ctx->pc = 0x235AB8u;
            goto label_235ab8;
        }
    }
    ctx->pc = 0x235A7Cu;
    // 0x235a7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235A80u;
    {
        const bool branch_taken_0x235a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A80u;
        // 0x235a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a80) {
            ctx->pc = 0x235A90u;
            goto label_235a90;
        }
    }
    ctx->pc = 0x235A88u;
    // 0x235a88: 0xc08ad86  jal         func_22B618
    ctx->pc = 0x235A88u;
    SET_GPR_U32(ctx, 31, 0x235A90u);
    ctx->pc = 0x235A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A88u;
    // 0x235a8c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B618u, 0x235A88u, 0x235A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A90u;
label_235a90:
    // 0x235a90: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x235A90u;
    SET_GPR_U32(ctx, 31, 0x235A98u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x235A90u, 0x235A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A98u;
label_235a98:
    // 0x235a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235aa0: 0xc049590  jal         func_125640
    ctx->pc = 0x235AA0u;
    SET_GPR_U32(ctx, 31, 0x235AA8u);
    ctx->pc = 0x235AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AA0u;
    // 0x235aa4: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x235AA0u, 0x235AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AA8u;
label_235aa8:
    // 0x235aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235aac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235ab0: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x235AB0u;
    ctx->pc = 0x235AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AB0u;
    // 0x235ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235abc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x235AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AC0u;
        // 0x235ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235AC8u;
}
