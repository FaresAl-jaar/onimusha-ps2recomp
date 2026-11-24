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

// Function: sub_00209488
// Address: 0x209488 - 0x2094b8
void sub_00209488_0x209488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209488_0x209488");
#endif

    switch (ctx->pc) {
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        default: break;
    }

    ctx->pc = 0x209488u;

label_209488:
    // 0x209488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20948c:
    // 0x20948c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209490:
    // 0x209490: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x209490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_209494:
    // 0x209494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_209498:
    if (ctx->pc == 0x209498u) {
        ctx->pc = 0x209498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209494u;
        // 0x209498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20949Cu;
        goto label_20949c;
    }
    ctx->pc = 0x209494u;
    {
        const bool branch_taken_0x209494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209494u;
        // 0x209498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209494) {
            ctx->pc = 0x2094ACu;
            goto label_2094ac;
        }
    }
    ctx->pc = 0x20949Cu;
label_20949c:
    // 0x20949c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2094a0:
    // 0x2094a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2094a4:
    // 0x2094a4: 0x60f809  jalr        $v1
label_2094a8:
    if (ctx->pc == 0x2094A8u) {
        ctx->pc = 0x2094ACu;
        goto label_2094ac;
    }
    ctx->pc = 0x2094A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2094ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094A4u, 0x2094ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2094ACu;
label_2094ac:
    // 0x2094ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2094acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2094b0:
    // 0x2094b0: 0x3e00008  jr          $ra
label_2094b4:
    if (ctx->pc == 0x2094B4u) {
        ctx->pc = 0x2094B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094B0u;
        // 0x2094b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094B8u;
        goto label_fallthrough_0x2094b0;
    }
    ctx->pc = 0x2094B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094B0u;
        // 0x2094b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2094b0:
    ctx->pc = 0x2094B8u;
}
