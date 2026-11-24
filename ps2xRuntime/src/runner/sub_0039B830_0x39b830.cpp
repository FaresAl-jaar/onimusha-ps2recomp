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

// Function: sub_0039B830
// Address: 0x39b830 - 0x39b8a8
void sub_0039B830_0x39b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B830_0x39b830");
#endif

    ctx->pc = 0x39b830u;

    // 0x39b830: 0x8c8606cc  lw          $a2, 0x6CC($a0)
    ctx->pc = 0x39b830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x39b834: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x39b834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x39b838: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x39b838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x39b83c: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x39b83cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x39b840: 0xac8606cc  sw          $a2, 0x6CC($a0)
    ctx->pc = 0x39b840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 6));
    // 0x39b844: 0x8c8606cc  lw          $a2, 0x6CC($a0)
    ctx->pc = 0x39b844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x39b848: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x39b848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x39b84c: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x39b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x39b850: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b854: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x39b854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x39b858: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b85c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b860: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x39b860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x39b864: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b868: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b86c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x39b86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x39b870: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b874: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b878: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x39b878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x39b87c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b880: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b884: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x39b884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x39b888: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b88c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b890: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x39b890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x39b894: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b898: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b89c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x39b89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39b8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x39B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8A0u;
        // 0x39b8a4: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8A8u;
}
