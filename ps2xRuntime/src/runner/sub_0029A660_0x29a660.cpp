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

// Function: sub_0029A660
// Address: 0x29a660 - 0x29a698
void sub_0029A660_0x29a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A660_0x29a660");
#endif

    switch (ctx->pc) {
        case 0x29a68cu: goto label_29a68c;
        default: break;
    }

    ctx->pc = 0x29a660u;

    // 0x29a660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a664: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a66c: 0x908329d0  lbu         $v1, 0x29D0($a0)
    ctx->pc = 0x29a66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x29a670: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A670u;
    {
        const bool branch_taken_0x29a670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a670) {
            ctx->pc = 0x29A684u;
            goto label_29a684;
        }
    }
    ctx->pc = 0x29A678u;
    // 0x29a678: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x29a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x29a67c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A67Cu;
    {
        const bool branch_taken_0x29a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A67Cu;
        // 0x29a680: 0x94420002  lhu         $v0, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a67c) {
            ctx->pc = 0x29A68Cu;
            goto label_29a68c;
        }
    }
    ctx->pc = 0x29A684u;
label_29a684:
    // 0x29a684: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x29A684u;
    SET_GPR_U32(ctx, 31, 0x29A68Cu);
    ctx->pc = 0x29A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A684u;
    // 0x29a688: 0x8c8429c0  lw          $a0, 0x29C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x29A684u, 0x29A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A68Cu;
label_29a68c:
    // 0x29a68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a690: 0x3e00008  jr          $ra
    ctx->pc = 0x29A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A690u;
        // 0x29a694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A698u;
}
