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

// Function: sub_00308460
// Address: 0x308460 - 0x3084c0
void sub_00308460_0x308460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308460_0x308460");
#endif

    switch (ctx->pc) {
        case 0x308490u: goto label_308490;
        case 0x3084a8u: goto label_3084a8;
        default: break;
    }

    ctx->pc = 0x308460u;

    // 0x308460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30846c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308474: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x308474u;
    {
        const bool branch_taken_0x308474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308474u;
        // 0x308478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308474) {
            ctx->pc = 0x3084A8u;
            goto label_3084a8;
        }
    }
    ctx->pc = 0x30847Cu;
    // 0x30847c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x30847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x308480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308484: 0x24428330  addiu       $v0, $v0, -0x7CD0
    ctx->pc = 0x308484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935344));
    // 0x308488: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x308488u;
    SET_GPR_U32(ctx, 31, 0x308490u);
    ctx->pc = 0x30848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308488u;
    // 0x30848c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x308488u, 0x308490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308490u;
label_308490:
    // 0x308490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x308490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x308494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x308494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x308498: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308498u;
    {
        const bool branch_taken_0x308498 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308498u;
        // 0x30849c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308498) {
            ctx->pc = 0x3084A8u;
            goto label_3084a8;
        }
    }
    ctx->pc = 0x3084A0u;
    // 0x3084a0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x3084A0u;
    SET_GPR_U32(ctx, 31, 0x3084A8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x3084A0u, 0x3084A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084A8u;
label_3084a8:
    // 0x3084a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3084a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3084acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3084b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3084b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3084b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3084b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3084b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3084B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3084BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084B8u;
        // 0x3084bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3084C0u;
}
