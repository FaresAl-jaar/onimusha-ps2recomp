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

// Function: sub_0024A388
// Address: 0x24a388 - 0x24a3b4
void sub_0024A388_0x24a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A388_0x24a388");
#endif

    ctx->pc = 0x24a388u;

    // 0x24a388: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x24a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x24a38c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x24a390: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24a390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24a394: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x24a394u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24a398: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x24a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x24a39c: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x24a39cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24a3a0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x24a3a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x24a3a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24a3a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24a3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24A3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3ACu;
        // 0x24a3b0: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A3B4u;
}
