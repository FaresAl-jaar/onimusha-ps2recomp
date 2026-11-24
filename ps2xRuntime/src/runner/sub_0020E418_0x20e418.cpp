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

// Function: sub_0020E418
// Address: 0x20e418 - 0x20e468
void sub_0020E418_0x20e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E418_0x20e418");
#endif

    ctx->pc = 0x20e418u;

    // 0x20e418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e41c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20e41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20e424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e428: 0x24851020  addiu       $a1, $a0, 0x1020
    ctx->pc = 0x20e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x20e42c: 0x8c832004  lw          $v1, 0x2004($a0)
    ctx->pc = 0x20e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20e430: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x20e430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x20e434: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E434u;
    {
        const bool branch_taken_0x20e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E434u;
        // 0x20e438: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e434) {
            ctx->pc = 0x20E44Cu;
            goto label_20e44c;
        }
    }
    ctx->pc = 0x20E43Cu;
    // 0x20e43c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x20e440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e444: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E444u;
    {
        const bool branch_taken_0x20e444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E444u;
        // 0x20e448: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e444) {
            ctx->pc = 0x20E460u;
            goto label_20e460;
        }
    }
    ctx->pc = 0x20E44Cu;
label_20e44c:
    // 0x20e44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e450: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20e450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e454: 0x808392c  j           func_20E4B0
    ctx->pc = 0x20E454u;
    ctx->pc = 0x20E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E454u;
    // 0x20e458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4B0u;
    sub_0020E4B0_0x20e4b0(rdram, ctx, runtime); return;
    ctx->pc = 0x20E45Cu;
    // 0x20e45c: 0x0  nop
    ctx->pc = 0x20e45cu;
    // NOP
label_20e460:
    // 0x20e460: 0x3e00008  jr          $ra
    ctx->pc = 0x20E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E460u;
        // 0x20e464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E468u;
}
