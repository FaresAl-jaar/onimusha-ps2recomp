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

// Function: sub_0033EF20
// Address: 0x33ef20 - 0x33ef7c
void sub_0033EF20_0x33ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EF20_0x33ef20");
#endif

    switch (ctx->pc) {
        case 0x33ef44u: goto label_33ef44;
        case 0x33ef58u: goto label_33ef58;
        default: break;
    }

    ctx->pc = 0x33ef20u;

    // 0x33ef20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ef24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33ef28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ef2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ef2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ef34: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33ef38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33ef38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef3c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x33EF3Cu;
    SET_GPR_U32(ctx, 31, 0x33EF44u);
    ctx->pc = 0x33EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF3Cu;
    // 0x33ef40: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33EF3Cu, 0x33EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF44u;
label_33ef44:
    // 0x33ef44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33ef44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33ef48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ef4c: 0xaf908b90  sw          $s0, -0x7470($gp)
    ctx->pc = 0x33ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937488), GPR_U32(ctx, 16));
    // 0x33ef50: 0xc0c82c8  jal         func_320B20
    ctx->pc = 0x33EF50u;
    SET_GPR_U32(ctx, 31, 0x33EF58u);
    ctx->pc = 0x33EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF50u;
    // 0x33ef54: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B20u, 0x33EF50u, 0x33EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF58u;
label_33ef58:
    // 0x33ef58: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EF58u;
    {
        const bool branch_taken_0x33ef58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ef58) {
            ctx->pc = 0x33EF68u;
            goto label_33ef68;
        }
    }
    ctx->pc = 0x33EF60u;
    // 0x33ef60: 0xae1108cc  sw          $s1, 0x8CC($s0)
    ctx->pc = 0x33ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2252), GPR_U32(ctx, 17));
    // 0x33ef64: 0x0  nop
    ctx->pc = 0x33ef64u;
    // NOP
label_33ef68:
    // 0x33ef68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ef6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ef6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ef70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x33EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF74u;
        // 0x33ef78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EF7Cu;
}
