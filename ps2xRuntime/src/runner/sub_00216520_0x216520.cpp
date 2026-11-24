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

// Function: sub_00216520
// Address: 0x216520 - 0x216564
void sub_00216520_0x216520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216520_0x216520");
#endif

    switch (ctx->pc) {
        case 0x216548u: goto label_216548;
        default: break;
    }

    ctx->pc = 0x216520u;

    // 0x216520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216524: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x216528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21652c: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x21652cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x216530: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216530u;
    {
        const bool branch_taken_0x216530 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x216534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216530u;
        // 0x216534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216530) {
            ctx->pc = 0x216558u;
            goto label_216558;
        }
    }
    ctx->pc = 0x216538u;
    // 0x216538: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x216538u;
    {
        const bool branch_taken_0x216538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x216538) {
            ctx->pc = 0x21653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216538u;
            // 0x21653c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216558u;
            goto label_216558;
        }
    }
    ctx->pc = 0x216540u;
    // 0x216540: 0xc08595a  jal         func_216568
    ctx->pc = 0x216540u;
    SET_GPR_U32(ctx, 31, 0x216548u);
    ctx->pc = 0x216568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216568u, 0x216540u, 0x216548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216548u;
label_216548:
    // 0x216548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21654c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21654Cu;
    {
        const bool branch_taken_0x21654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21654Cu;
        // 0x216550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21654c) {
            ctx->pc = 0x21655Cu;
            goto label_21655c;
        }
    }
    ctx->pc = 0x216554u;
    // 0x216554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216558:
    // 0x216558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21655c:
    // 0x21655c: 0x3e00008  jr          $ra
    ctx->pc = 0x21655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21655Cu;
        // 0x216560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216564u;
}
