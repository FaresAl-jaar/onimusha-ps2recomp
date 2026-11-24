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

// Function: sub_0034BE30
// Address: 0x34be30 - 0x34bea0
void sub_0034BE30_0x34be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BE30_0x34be30");
#endif

    switch (ctx->pc) {
        case 0x34be70u: goto label_34be70;
        case 0x34be88u: goto label_34be88;
        default: break;
    }

    ctx->pc = 0x34be30u;

    // 0x34be30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34be34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34be38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34be3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34be3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34be40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34be40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34BE44u;
    {
        const bool branch_taken_0x34be44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE44u;
        // 0x34be48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be44) {
            ctx->pc = 0x34BE88u;
            goto label_34be88;
        }
    }
    ctx->pc = 0x34BE4Cu;
    // 0x34be4c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x34be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x34be50: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x34be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
    // 0x34be54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34BE54u;
    {
        const bool branch_taken_0x34be54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE54u;
        // 0x34be58: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be54) {
            ctx->pc = 0x34BE70u;
            goto label_34be70;
        }
    }
    ctx->pc = 0x34BE5Cu;
    // 0x34be5c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34be60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34be60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be64: 0x24427f80  addiu       $v0, $v0, 0x7F80
    ctx->pc = 0x34be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x34be68: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x34BE68u;
    SET_GPR_U32(ctx, 31, 0x34BE70u);
    ctx->pc = 0x34BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BE68u;
    // 0x34be6c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x34BE68u, 0x34BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE70u;
label_34be70:
    // 0x34be70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x34be74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34be74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34be78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BE78u;
    {
        const bool branch_taken_0x34be78 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x34BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE78u;
        // 0x34be7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be78) {
            ctx->pc = 0x34BE88u;
            goto label_34be88;
        }
    }
    ctx->pc = 0x34BE80u;
    // 0x34be80: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x34BE80u;
    SET_GPR_U32(ctx, 31, 0x34BE88u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x34BE80u, 0x34BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE88u;
label_34be88:
    // 0x34be88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34be88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34be8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34be90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34be90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34be94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34be94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34be98: 0x3e00008  jr          $ra
    ctx->pc = 0x34BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE98u;
        // 0x34be9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BEA0u;
}
