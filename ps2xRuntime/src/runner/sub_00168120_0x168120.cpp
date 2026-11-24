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

// Function: sub_00168120
// Address: 0x168120 - 0x16817c
void sub_00168120_0x168120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168120_0x168120");
#endif

    switch (ctx->pc) {
        case 0x16816cu: goto label_16816c;
        default: break;
    }

    ctx->pc = 0x168120u;

    // 0x168120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168124: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168124u;
    {
        const bool branch_taken_0x168124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x168128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168124u;
        // 0x168128: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168124) {
            ctx->pc = 0x168130u;
            goto label_168130;
        }
    }
    ctx->pc = 0x16812Cu;
    // 0x16812c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x16812cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_168130:
    // 0x168130: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x168130u;
    {
        const bool branch_taken_0x168130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x168130) {
            ctx->pc = 0x168170u;
            goto label_168170;
        }
    }
    ctx->pc = 0x168138u;
    // 0x168138: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16813c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168140: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x168140u;
    {
        const bool branch_taken_0x168140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x168144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168140u;
        // 0x168144: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168140) {
            ctx->pc = 0x168170u;
            goto label_168170;
        }
    }
    ctx->pc = 0x168148u;
    // 0x168148: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168148u;
    {
        const bool branch_taken_0x168148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x168148) {
            ctx->pc = 0x168160u;
            goto label_168160;
        }
    }
    ctx->pc = 0x168150u;
    // 0x168150: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x168150u;
    {
        const bool branch_taken_0x168150 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168150) {
            ctx->pc = 0x168170u;
            goto label_168170;
        }
    }
    ctx->pc = 0x168158u;
    // 0x168158: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168158u;
    {
        const bool branch_taken_0x168158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168158) {
            ctx->pc = 0x168170u;
            goto label_168170;
        }
    }
    ctx->pc = 0x168160u;
label_168160:
    // 0x168160: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x168160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x168164: 0xc05a074  jal         func_1681D0
    ctx->pc = 0x168164u;
    SET_GPR_U32(ctx, 31, 0x16816Cu);
    ctx->pc = 0x168168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168164u;
    // 0x168168: 0x2784861c  addiu       $a0, $gp, -0x79E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681D0u, 0x168164u, 0x16816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16816Cu;
label_16816c:
    // 0x16816c: 0x0  nop
    ctx->pc = 0x16816cu;
    // NOP
label_168170:
    // 0x168170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168174: 0x3e00008  jr          $ra
    ctx->pc = 0x168174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168174u;
        // 0x168178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16817Cu;
}
