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

// Function: sub_0034E130
// Address: 0x34e130 - 0x34e178
void sub_0034E130_0x34e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E130_0x34e130");
#endif

    switch (ctx->pc) {
        case 0x34e14cu: goto label_34e14c;
        default: break;
    }

    ctx->pc = 0x34e130u;

    // 0x34e130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34e134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e140: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34e140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e144: 0xc0d3818  jal         func_34E060
    ctx->pc = 0x34E144u;
    SET_GPR_U32(ctx, 31, 0x34E14Cu);
    ctx->pc = 0x34E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E144u;
    // 0x34e148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E060u, 0x34E144u, 0x34E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E14Cu;
label_34e14c:
    // 0x34e14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E14Cu;
    {
        const bool branch_taken_0x34e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e14c) {
            ctx->pc = 0x34E160u;
            goto label_34e160;
        }
    }
    ctx->pc = 0x34E154u;
    // 0x34e154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34E154u;
    {
        const bool branch_taken_0x34e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E154u;
        // 0x34e158: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e154) {
            ctx->pc = 0x34E168u;
            goto label_34e168;
        }
    }
    ctx->pc = 0x34E15Cu;
    // 0x34e15c: 0x0  nop
    ctx->pc = 0x34e15cu;
    // NOP
label_34e160:
    // 0x34e160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e164: 0x0  nop
    ctx->pc = 0x34e164u;
    // NOP
label_34e168:
    // 0x34e168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e170: 0x3e00008  jr          $ra
    ctx->pc = 0x34E170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E170u;
        // 0x34e174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E178u;
}
