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

// Function: sub_001DA050
// Address: 0x1da050 - 0x1da068
void sub_001DA050_0x1da050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA050_0x1da050");
#endif

    ctx->pc = 0x1da050u;

    // 0x1da050: 0x70e64389  pcpyld      $t0, $a3, $a2
    ctx->pc = 0x1da050u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1da054: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x1da054u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
    // 0x1da058: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x1da058u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da05c: 0x71284848  psubw       $t1, $t1, $t0
    ctx->pc = 0x1da05cu;
    SET_GPR_VEC(ctx, 9, PS2_PSUBW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1da060: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA060u;
        // 0x1da064: 0x7c890000  sq          $t1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA068u;
}
