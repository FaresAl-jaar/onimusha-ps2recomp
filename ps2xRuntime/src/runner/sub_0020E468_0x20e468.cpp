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

// Function: sub_0020E468
// Address: 0x20e468 - 0x20e4b0
void sub_0020E468_0x20e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E468_0x20e468");
#endif

    ctx->pc = 0x20e468u;

    // 0x20e468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e46c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20e46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20e474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e478: 0x8c832004  lw          $v1, 0x2004($a0)
    ctx->pc = 0x20e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20e47c: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x20e480: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e484: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E484u;
    {
        const bool branch_taken_0x20e484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E484u;
        // 0x20e488: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e484) {
            ctx->pc = 0x20E49Cu;
            goto label_20e49c;
        }
    }
    ctx->pc = 0x20E48Cu;
    // 0x20e48c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x20e490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e494: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E494u;
    {
        const bool branch_taken_0x20e494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E494u;
        // 0x20e498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e494) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20E49Cu;
label_20e49c:
    // 0x20e49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e4a0: 0x808392c  j           func_20E4B0
    ctx->pc = 0x20E4A0u;
    ctx->pc = 0x20E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4A0u;
    // 0x20e4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4B0u;
    sub_0020E4B0_0x20e4b0(rdram, ctx, runtime); return;
    ctx->pc = 0x20E4A8u;
label_20e4a8:
    // 0x20e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x20E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4A8u;
        // 0x20e4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E4B0u;
}
