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

// Function: sub_00145820
// Address: 0x145820 - 0x145870
void sub_00145820_0x145820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145820_0x145820");
#endif

    switch (ctx->pc) {
        case 0x145848u: goto label_145848;
        case 0x14585cu: goto label_14585c;
        default: break;
    }

    ctx->pc = 0x145820u;

    // 0x145820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145824: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x145824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14582c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145830: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145830u;
    {
        const bool branch_taken_0x145830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145830u;
        // 0x145834: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145830) {
            ctx->pc = 0x145840u;
            goto label_145840;
        }
    }
    ctx->pc = 0x145838u;
    // 0x145838: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x145838u;
    {
        const bool branch_taken_0x145838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145838) {
            ctx->pc = 0x145860u;
            goto label_145860;
        }
    }
    ctx->pc = 0x145840u;
label_145840:
    // 0x145840: 0xc051594  jal         func_145650
    ctx->pc = 0x145840u;
    SET_GPR_U32(ctx, 31, 0x145848u);
    ctx->pc = 0x145650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145650u, 0x145840u, 0x145848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145848u;
label_145848:
    // 0x145848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14584c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14584Cu;
    {
        const bool branch_taken_0x14584c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14584Cu;
        // 0x145850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14584c) {
            ctx->pc = 0x145860u;
            goto label_145860;
        }
    }
    ctx->pc = 0x145854u;
    // 0x145854: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x145854u;
    SET_GPR_U32(ctx, 31, 0x14585Cu);
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x145854u, 0x14585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14585Cu;
label_14585c:
    // 0x14585c: 0x0  nop
    ctx->pc = 0x14585cu;
    // NOP
label_145860:
    // 0x145860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145868: 0x3e00008  jr          $ra
    ctx->pc = 0x145868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145868u;
        // 0x14586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145870u;
}
