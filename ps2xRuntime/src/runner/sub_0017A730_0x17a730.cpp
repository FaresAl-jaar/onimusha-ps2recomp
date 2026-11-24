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

// Function: sub_0017A730
// Address: 0x17a730 - 0x17a794
void sub_0017A730_0x17a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A730_0x17a730");
#endif

    switch (ctx->pc) {
        case 0x17a76cu: goto label_17a76c;
        case 0x17a780u: goto label_17a780;
        default: break;
    }

    ctx->pc = 0x17a730u;

    // 0x17a730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a744: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A744u;
    {
        const bool branch_taken_0x17a744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A744u;
        // 0x17a748: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a744) {
            ctx->pc = 0x17A754u;
            goto label_17a754;
        }
    }
    ctx->pc = 0x17A74Cu;
    // 0x17a74c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A74Cu;
    {
        const bool branch_taken_0x17a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A74Cu;
        // 0x17a750: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a74c) {
            ctx->pc = 0x17A758u;
            goto label_17a758;
        }
    }
    ctx->pc = 0x17A754u;
label_17a754:
    // 0x17a754: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17a758:
    // 0x17a758: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a75c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a760: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x17a760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x17a764: 0xc0c9630  jal         func_3258C0
    ctx->pc = 0x17A764u;
    SET_GPR_U32(ctx, 31, 0x17A76Cu);
    ctx->pc = 0x17A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A764u;
    // 0x17a768: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258C0u, 0x17A764u, 0x17A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A76Cu;
label_17a76c:
    // 0x17a76c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a770: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x17a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a774: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a778: 0xc0c9630  jal         func_3258C0
    ctx->pc = 0x17A778u;
    SET_GPR_U32(ctx, 31, 0x17A780u);
    ctx->pc = 0x17A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A778u;
    // 0x17a77c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258C0u, 0x17A778u, 0x17A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A780u;
label_17a780:
    // 0x17a780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A78Cu;
        // 0x17a790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A794u;
}
