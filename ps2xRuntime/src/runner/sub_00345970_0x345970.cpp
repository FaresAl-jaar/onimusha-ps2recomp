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

// Function: sub_00345970
// Address: 0x345970 - 0x345990
void sub_00345970_0x345970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345970_0x345970");
#endif

    switch (ctx->pc) {
        case 0x345970u: goto label_345970;
        case 0x345974u: goto label_345974;
        case 0x345978u: goto label_345978;
        case 0x34597cu: goto label_34597c;
        case 0x345980u: goto label_345980;
        case 0x345984u: goto label_345984;
        case 0x345988u: goto label_345988;
        case 0x34598cu: goto label_34598c;
        default: break;
    }

    ctx->pc = 0x345970u;

label_345970:
    // 0x345970: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x345970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_345974:
    // 0x345974: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x345974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_345978:
    // 0x345978: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x345978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34597c:
    // 0x34597c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x34597cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_345980:
    // 0x345980: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x345980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_345984:
    // 0x345984: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x345984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_345988:
    // 0x345988: 0x3200008  jr          $t9
label_34598c:
    if (ctx->pc == 0x34598Cu) {
        ctx->pc = 0x345990u;
        goto label_fallthrough_0x345988;
    }
    ctx->pc = 0x345988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x345988:
    ctx->pc = 0x345990u;
}
