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

// Function: sub_0021E768
// Address: 0x21e768 - 0x21e7fc
void sub_0021E768_0x21e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E768_0x21e768");
#endif

    ctx->pc = 0x21e768u;

    // 0x21e768: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21e768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e76c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x21e76cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e770: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x21e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x21e774: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21e778: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E778u;
    {
        const bool branch_taken_0x21e778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E778u;
        // 0x21e77c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e778) {
            ctx->pc = 0x21E790u;
            goto label_21e790;
        }
    }
    ctx->pc = 0x21E780u;
    // 0x21e780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e788: 0x3e00008  jr          $ra
    ctx->pc = 0x21E788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E788u;
        // 0x21e78c: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E790u;
label_21e790:
    // 0x21e790: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x21e790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x21e794: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21e798: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x21e798u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21e79c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21e7a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e7a4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x21e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21e7a8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x21e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x21e7ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21e7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7b0: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x21e7b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x21e7b4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x21e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x21e7b8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x21e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21e7bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x21e7bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e7c0: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E7C0u;
    {
        const bool branch_taken_0x21e7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7C0u;
        // 0x21e7c4: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7c0) {
            ctx->pc = 0x21E7CCu;
            goto label_21e7cc;
        }
    }
    ctx->pc = 0x21E7C8u;
    // 0x21e7c8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x21e7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21e7cc:
    // 0x21e7cc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x21e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x21e7d0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x21e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x21e7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e7d8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x21e7d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e7dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E7DCu;
    {
        const bool branch_taken_0x21e7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7DCu;
        // 0x21e7e0: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7dc) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E7E4u;
    // 0x21e7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e7e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21E7E8u;
    {
        const bool branch_taken_0x21e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7E8u;
        // 0x21e7ec: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7e8) {
            ctx->pc = 0x21E7F4u;
            goto label_21e7f4;
        }
    }
    ctx->pc = 0x21E7F0u;
label_21e7f0:
    // 0x21e7f0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x21e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_21e7f4:
    // 0x21e7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7F4u;
        // 0x21e7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E7FCu;
}
