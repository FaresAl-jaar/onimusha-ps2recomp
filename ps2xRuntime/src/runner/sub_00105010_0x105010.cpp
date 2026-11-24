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

// Function: sub_00105010
// Address: 0x105010 - 0x105060
void sub_00105010_0x105010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105010_0x105010");
#endif

    ctx->pc = 0x105010u;

    // 0x105010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105014: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x105014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105018: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x105018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x10501c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x10501cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105020: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105024: 0x5383f  dsra32      $a3, $a1, 0
    ctx->pc = 0x105024u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x105028: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x105028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10502c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x10502cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x105030: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x105030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x105034: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x105034u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x105038: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x105038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x10503c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10503cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x105040: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x105044: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x105044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x105048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10504c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10504cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x105050: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x105050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x105054: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x105054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x105058: 0x3e00008  jr          $ra
    ctx->pc = 0x105058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105058u;
        // 0x10505c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105060u;
}
