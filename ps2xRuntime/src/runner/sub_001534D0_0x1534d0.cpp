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

// Function: sub_001534D0
// Address: 0x1534d0 - 0x153508
void sub_001534D0_0x1534d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001534D0_0x1534d0");
#endif

    switch (ctx->pc) {
        case 0x1534f0u: goto label_1534f0;
        default: break;
    }

    ctx->pc = 0x1534d0u;

    // 0x1534d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1534d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1534d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1534d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1534dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1534dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e0: 0x8f8685b8  lw          $a2, -0x7A48($gp)
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
    // 0x1534e4: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x1534e8: 0xc0554c0  jal         func_155300
    ctx->pc = 0x1534E8u;
    SET_GPR_U32(ctx, 31, 0x1534F0u);
    ctx->pc = 0x1534ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534E8u;
    // 0x1534ec: 0x5287e  dsrl32      $a1, $a1, 1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155300u, 0x1534E8u, 0x1534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534F0u;
label_1534f0:
    // 0x1534f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1534f4: 0x401027  not         $v0, $v0
    ctx->pc = 0x1534f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1534f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1534fc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x153500: 0x3e00008  jr          $ra
    ctx->pc = 0x153500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153500u;
        // 0x153504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153508u;
}
