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

// Function: sub_002093D8
// Address: 0x2093d8 - 0x209408
void sub_002093D8_0x2093d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002093D8_0x2093d8");
#endif

    switch (ctx->pc) {
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        default: break;
    }

    ctx->pc = 0x2093d8u;

label_2093d8:
    // 0x2093d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2093d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2093dc:
    // 0x2093dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2093dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2093e0:
    // 0x2093e0: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x2093e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_2093e4:
    // 0x2093e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2093e8:
    if (ctx->pc == 0x2093E8u) {
        ctx->pc = 0x2093E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093E4u;
        // 0x2093e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093ECu;
        goto label_2093ec;
    }
    ctx->pc = 0x2093E4u;
    {
        const bool branch_taken_0x2093e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093E4u;
        // 0x2093e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093e4) {
            ctx->pc = 0x2093FCu;
            goto label_2093fc;
        }
    }
    ctx->pc = 0x2093ECu;
label_2093ec:
    // 0x2093ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2093ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2093f0:
    // 0x2093f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2093f4:
    // 0x2093f4: 0x60f809  jalr        $v1
label_2093f8:
    if (ctx->pc == 0x2093F8u) {
        ctx->pc = 0x2093FCu;
        goto label_2093fc;
    }
    ctx->pc = 0x2093F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2093FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093F4u, 0x2093FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2093FCu;
label_2093fc:
    // 0x2093fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2093fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209400:
    // 0x209400: 0x3e00008  jr          $ra
label_209404:
    if (ctx->pc == 0x209404u) {
        ctx->pc = 0x209404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209400u;
        // 0x209404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209408u;
        goto label_fallthrough_0x209400;
    }
    ctx->pc = 0x209400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209400u;
        // 0x209404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209400:
    ctx->pc = 0x209408u;
}
