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

// Function: sub_00345950
// Address: 0x345950 - 0x345970
void sub_00345950_0x345950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345950_0x345950");
#endif

    switch (ctx->pc) {
        case 0x345950u: goto label_345950;
        case 0x345954u: goto label_345954;
        case 0x345958u: goto label_345958;
        case 0x34595cu: goto label_34595c;
        case 0x345960u: goto label_345960;
        case 0x345964u: goto label_345964;
        case 0x345968u: goto label_345968;
        case 0x34596cu: goto label_34596c;
        default: break;
    }

    ctx->pc = 0x345950u;

label_345950:
    // 0x345950: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x345950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_345954:
    // 0x345954: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x345954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_345958:
    // 0x345958: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x345958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_34595c:
    // 0x34595c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x34595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_345960:
    // 0x345960: 0x34470080  ori         $a3, $v0, 0x80
    ctx->pc = 0x345960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_345964:
    // 0x345964: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x345964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_345968:
    // 0x345968: 0x3200008  jr          $t9
label_34596c:
    if (ctx->pc == 0x34596Cu) {
        ctx->pc = 0x345970u;
        goto label_fallthrough_0x345968;
    }
    ctx->pc = 0x345968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345968u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x345968:
    ctx->pc = 0x345970u;
}
