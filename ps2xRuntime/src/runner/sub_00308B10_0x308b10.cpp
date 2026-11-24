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

// Function: sub_00308B10
// Address: 0x308b10 - 0x308b80
void sub_00308B10_0x308b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308B10_0x308b10");
#endif

    switch (ctx->pc) {
        case 0x308b50u: goto label_308b50;
        case 0x308b68u: goto label_308b68;
        default: break;
    }

    ctx->pc = 0x308b10u;

    // 0x308b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x308B24u;
    {
        const bool branch_taken_0x308b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B24u;
        // 0x308b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b24) {
            ctx->pc = 0x308B68u;
            goto label_308b68;
        }
    }
    ctx->pc = 0x308B2Cu;
    // 0x308b2c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x308b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x308b30: 0x24428310  addiu       $v0, $v0, -0x7CF0
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935312));
    // 0x308b34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x308B34u;
    {
        const bool branch_taken_0x308b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B34u;
        // 0x308b38: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b34) {
            ctx->pc = 0x308B50u;
            goto label_308b50;
        }
    }
    ctx->pc = 0x308B3Cu;
    // 0x308b3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x308b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x308b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b44: 0x24428330  addiu       $v0, $v0, -0x7CD0
    ctx->pc = 0x308b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935344));
    // 0x308b48: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x308B48u;
    SET_GPR_U32(ctx, 31, 0x308B50u);
    ctx->pc = 0x308B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B48u;
    // 0x308b4c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x308B48u, 0x308B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B50u;
label_308b50:
    // 0x308b50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x308b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x308b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x308b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x308b58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308B58u;
    {
        const bool branch_taken_0x308b58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x308B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B58u;
        // 0x308b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b58) {
            ctx->pc = 0x308B68u;
            goto label_308b68;
        }
    }
    ctx->pc = 0x308B60u;
    // 0x308b60: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x308B60u;
    SET_GPR_U32(ctx, 31, 0x308B68u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x308B60u, 0x308B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B68u;
label_308b68:
    // 0x308b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x308b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x308b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308b78: 0x3e00008  jr          $ra
    ctx->pc = 0x308B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B78u;
        // 0x308b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308B80u;
}
