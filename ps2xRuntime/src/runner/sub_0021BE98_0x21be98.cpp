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

// Function: sub_0021BE98
// Address: 0x21be98 - 0x21bf24
void sub_0021BE98_0x21be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE98_0x21be98");
#endif

    switch (ctx->pc) {
        case 0x21bf10u: goto label_21bf10;
        default: break;
    }

    ctx->pc = 0x21be98u;

    // 0x21be98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21be9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21be9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21bea8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21bea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21beac: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21BEACu;
    {
        const bool branch_taken_0x21beac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEACu;
        // 0x21beb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21beac) {
            ctx->pc = 0x21BEE0u;
            goto label_21bee0;
        }
    }
    ctx->pc = 0x21BEB4u;
    // 0x21beb4: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x21BEB4u;
    {
        const bool branch_taken_0x21beb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21beb4) {
            ctx->pc = 0x21BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEB4u;
            // 0x21beb8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BEF8u;
            goto label_21bef8;
        }
    }
    ctx->pc = 0x21BEBCu;
    // 0x21bebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21bec0: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21BEC0u;
    {
        const bool branch_taken_0x21bec0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC0u;
        // 0x21bec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bec0) {
            ctx->pc = 0x21BF18u;
            goto label_21bf18;
        }
    }
    ctx->pc = 0x21BEC8u;
    // 0x21bec8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x21bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x21becc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21bed0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21BED0u;
    {
        const bool branch_taken_0x21bed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BED0u;
        // 0x21bed4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bed0) {
            ctx->pc = 0x21BF1Cu;
            goto label_21bf1c;
        }
    }
    ctx->pc = 0x21BED8u;
    // 0x21bed8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21BED8u;
    {
        const bool branch_taken_0x21bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bed8) {
            ctx->pc = 0x21BF08u;
            goto label_21bf08;
        }
    }
    ctx->pc = 0x21BEE0u;
label_21bee0:
    // 0x21bee0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x21bee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21bee8: 0x1446000a  bne         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x21BEE8u;
    {
        const bool branch_taken_0x21bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x21BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE8u;
        // 0x21beec: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bee8) {
            ctx->pc = 0x21BF14u;
            goto label_21bf14;
        }
    }
    ctx->pc = 0x21BEF0u;
    // 0x21bef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BEF0u;
    {
        const bool branch_taken_0x21bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bef0) {
            ctx->pc = 0x21BF08u;
            goto label_21bf08;
        }
    }
    ctx->pc = 0x21BEF8u;
label_21bef8:
    // 0x21bef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21befc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BEFCu;
    {
        const bool branch_taken_0x21befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEFCu;
        // 0x21bf00: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21befc) {
            ctx->pc = 0x21BF14u;
            goto label_21bf14;
        }
    }
    ctx->pc = 0x21BF04u;
    // 0x21bf04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bf08:
    // 0x21bf08: 0xc086fca  jal         func_21BF28
    ctx->pc = 0x21BF08u;
    SET_GPR_U32(ctx, 31, 0x21BF10u);
    ctx->pc = 0x21BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BF28u, 0x21BF08u, 0x21BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF10u;
label_21bf10:
    // 0x21bf10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21bf10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21bf14:
    // 0x21bf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21bf18:
    // 0x21bf18: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x21bf18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21bf1c:
    // 0x21bf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF1Cu;
        // 0x21bf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BF24u;
}
