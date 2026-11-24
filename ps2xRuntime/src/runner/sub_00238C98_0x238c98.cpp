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

// Function: sub_00238C98
// Address: 0x238c98 - 0x238cfc
void sub_00238C98_0x238c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C98_0x238c98");
#endif

    switch (ctx->pc) {
        case 0x238cd8u: goto label_238cd8;
        case 0x238ce8u: goto label_238ce8;
        default: break;
    }

    ctx->pc = 0x238c98u;

    // 0x238c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238c9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x238ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ca8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x238ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cb0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x238cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238CB8u;
    {
        const bool branch_taken_0x238cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CB8u;
        // 0x238cbc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cb8) {
            ctx->pc = 0x238CE0u;
            goto label_238ce0;
        }
    }
    ctx->pc = 0x238CC0u;
    // 0x238cc0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x238cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cc4: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x238cc8: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x238cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x238ccc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x238cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd0: 0xc092502  jal         func_249408
    ctx->pc = 0x238CD0u;
    SET_GPR_U32(ctx, 31, 0x238CD8u);
    ctx->pc = 0x238CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CD0u;
    // 0x238cd4: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249408u, 0x238CD0u, 0x238CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CD8u;
label_238cd8:
    // 0x238cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238CD8u;
    {
        const bool branch_taken_0x238cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD8u;
        // 0x238cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd8) {
            ctx->pc = 0x238CE8u;
            goto label_238ce8;
        }
    }
    ctx->pc = 0x238CE0u;
label_238ce0:
    // 0x238ce0: 0xc0924a2  jal         func_249288
    ctx->pc = 0x238CE0u;
    SET_GPR_U32(ctx, 31, 0x238CE8u);
    ctx->pc = 0x238CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CE0u;
    // 0x238ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x238CE0u, 0x238CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CE8u;
label_238ce8:
    // 0x238ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238cf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x238CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF4u;
        // 0x238cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238CFCu;
}
