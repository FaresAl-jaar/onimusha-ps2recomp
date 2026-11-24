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

// Function: sub_00223138
// Address: 0x223138 - 0x22317c
void sub_00223138_0x223138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223138_0x223138");
#endif

    switch (ctx->pc) {
        case 0x223150u: goto label_223150;
        case 0x223158u: goto label_223158;
        case 0x223164u: goto label_223164;
        default: break;
    }

    ctx->pc = 0x223138u;

    // 0x223138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22313c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223148: 0xc088c60  jal         func_223180
    ctx->pc = 0x223148u;
    SET_GPR_U32(ctx, 31, 0x223150u);
    ctx->pc = 0x22314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223148u;
    // 0x22314c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223180u, 0x223148u, 0x223150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223150u;
label_223150:
    // 0x223150: 0xc088ca4  jal         func_223290
    ctx->pc = 0x223150u;
    SET_GPR_U32(ctx, 31, 0x223158u);
    ctx->pc = 0x223154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223150u;
    // 0x223154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223290u, 0x223150u, 0x223158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223158u;
label_223158:
    // 0x223158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22315c: 0xc088c82  jal         func_223208
    ctx->pc = 0x22315Cu;
    SET_GPR_U32(ctx, 31, 0x223164u);
    ctx->pc = 0x223160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22315Cu;
    // 0x223160: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223208u, 0x22315Cu, 0x223164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223164u;
label_223164:
    // 0x223164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22316c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223174: 0x3e00008  jr          $ra
    ctx->pc = 0x223174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223174u;
        // 0x223178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22317Cu;
}
