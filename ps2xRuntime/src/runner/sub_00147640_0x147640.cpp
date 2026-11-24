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

// Function: sub_00147640
// Address: 0x147640 - 0x14769c
void sub_00147640_0x147640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147640_0x147640");
#endif

    switch (ctx->pc) {
        case 0x147684u: goto label_147684;
        default: break;
    }

    ctx->pc = 0x147640u;

    // 0x147640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147644: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x147648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14764c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x147650: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147654: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x147654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x147658: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x147658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x14765c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x14765cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x147660: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x147664: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x147668: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x147668u;
    {
        const bool branch_taken_0x147668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147668) {
            ctx->pc = 0x147690u;
            goto label_147690;
        }
    }
    ctx->pc = 0x147670u;
    // 0x147670: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x147674: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147678: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x14767c: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x14767Cu;
    SET_GPR_U32(ctx, 31, 0x147684u);
    ctx->pc = 0x147680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14767Cu;
    // 0x147680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x14767Cu, 0x147684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147684u;
label_147684:
    // 0x147684: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x147684u;
    {
        const bool branch_taken_0x147684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147684) {
            ctx->pc = 0x147690u;
            goto label_147690;
        }
    }
    ctx->pc = 0x14768Cu;
    // 0x14768c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x14768cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_147690:
    // 0x147690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147694: 0x3e00008  jr          $ra
    ctx->pc = 0x147694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147694u;
        // 0x147698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14769Cu;
}
