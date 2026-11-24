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

// Function: sub_00218848
// Address: 0x218848 - 0x2188cc
void sub_00218848_0x218848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218848_0x218848");
#endif

    ctx->pc = 0x218848u;

    // 0x218848: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x218848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x21884c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218850: 0x1502001b  bne         $t0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x218850u;
    {
        const bool branch_taken_0x218850 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x218854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218850u;
        // 0x218854: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218850) {
            ctx->pc = 0x2188C0u;
            goto label_2188c0;
        }
    }
    ctx->pc = 0x218858u;
    // 0x218858: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x218858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x21885c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218860: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x218860u;
    {
        const bool branch_taken_0x218860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218860u;
        // 0x218864: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218860) {
            ctx->pc = 0x218880u;
            goto label_218880;
        }
    }
    ctx->pc = 0x218868u;
    // 0x218868: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x218868u;
    {
        const bool branch_taken_0x218868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x218868) {
            ctx->pc = 0x21886Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218868u;
            // 0x21886c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2188C4u;
            goto label_2188c4;
        }
    }
    ctx->pc = 0x218870u;
    // 0x218870: 0x50680009  beql        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218870u;
    {
        const bool branch_taken_0x218870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x218870) {
            ctx->pc = 0x218874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218870u;
            // 0x218874: 0x8c850164  lw          $a1, 0x164($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218898u;
            goto label_218898;
        }
    }
    ctx->pc = 0x218878u;
    // 0x218878: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x218878u;
    {
        const bool branch_taken_0x218878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218878u;
        // 0x21887c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218878) {
            ctx->pc = 0x2188C4u;
            goto label_2188c4;
        }
    }
    ctx->pc = 0x218880u;
label_218880:
    // 0x218880: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x218880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x218884: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x218884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x218888: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x218888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21888c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x21888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x218890: 0x3e00008  jr          $ra
    ctx->pc = 0x218890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218890u;
        // 0x218894: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218898u;
label_218898:
    // 0x218898: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x218898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x21889c: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x21889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2188a0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2188a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2188a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2188a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2188a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2188ac: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2188b0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2188b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2188b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2188b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2188B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2188BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188B8u;
        // 0x2188bc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2188B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2188C0u;
label_2188c0:
    // 0x2188c0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2188c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2188c4:
    // 0x2188c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2188C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2188C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188C4u;
        // 0x2188c8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2188C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2188CCu;
}
