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

// Function: sub_001A2CA0
// Address: 0x1a2ca0 - 0x1a2d1c
void sub_001A2CA0_0x1a2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2CA0_0x1a2ca0");
#endif

    switch (ctx->pc) {
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cdcu: goto label_1a2cdc;
        default: break;
    }

    ctx->pc = 0x1a2ca0u;

    // 0x1a2ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a2ca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2cb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2cb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a2cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2cc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a2cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2cc4: 0xc068b94  jal         func_1A2E50
    ctx->pc = 0x1A2CC4u;
    SET_GPR_U32(ctx, 31, 0x1A2CCCu);
    ctx->pc = 0x1A2CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CC4u;
    // 0x1a2cc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E50u, 0x1A2CC4u, 0x1A2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CCCu;
label_1a2ccc:
    // 0x1a2ccc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2CCCu;
    {
        const bool branch_taken_0x1a2ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ccc) {
            ctx->pc = 0x1A2D00u;
            goto label_1a2d00;
        }
    }
    ctx->pc = 0x1A2CD4u;
    // 0x1a2cd4: 0xc068bac  jal         func_1A2EB0
    ctx->pc = 0x1A2CD4u;
    SET_GPR_U32(ctx, 31, 0x1A2CDCu);
    ctx->pc = 0x1A2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2EB0u, 0x1A2CD4u, 0x1A2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CDCu;
label_1a2cdc:
    // 0x1a2cdc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1a2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1a2ce0: 0xa0510004  sb          $s1, 0x4($v0)
    ctx->pc = 0x1a2ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a2ce4: 0xa0500005  sb          $s0, 0x5($v0)
    ctx->pc = 0x1a2ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a2ce8: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x1a2cec: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a2cf0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a2cf4: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x1a2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x1a2cf8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1a2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1a2cfc: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x1a2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
label_1a2d00:
    // 0x1a2d00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D14u;
        // 0x1a2d18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D1Cu;
}
