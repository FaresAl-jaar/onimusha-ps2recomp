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

// Function: sub_002237D0
// Address: 0x2237d0 - 0x223898
void sub_002237D0_0x2237d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002237D0_0x2237d0");
#endif

    switch (ctx->pc) {
        case 0x223828u: goto label_223828;
        case 0x223844u: goto label_223844;
        case 0x22385cu: goto label_22385c;
        default: break;
    }

    ctx->pc = 0x2237d0u;

    // 0x2237d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2237d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2237d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2237d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2237d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2237dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2237dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2237e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2237e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2237e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2237e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2237ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2237ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2237f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2237f4: 0x3c160088  lui         $s6, 0x88
    ctx->pc = 0x2237f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)136 << 16));
    // 0x2237f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2237f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2237fc: 0x26c45a58  addiu       $a0, $s6, 0x5A58
    ctx->pc = 0x2237fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23128));
    // 0x223800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223804: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x223804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x223808: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x223808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x22380c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x22380cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x885A58u));
    // 0x223810: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x885A5Cu));
    // 0x223814: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x223814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x223818: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x223818u;
    {
        const bool branch_taken_0x223818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223818u;
        // 0x22381c: 0x8c930008  lw          $s3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223818) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223820u;
    // 0x223820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223824: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x223824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_223828:
    // 0x223828: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x223828u;
    {
        const bool branch_taken_0x223828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223828) {
            ctx->pc = 0x22382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223828u;
            // 0x22382c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223850u;
            goto label_223850;
        }
    }
    ctx->pc = 0x223830u;
    // 0x223830: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x223834: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x223838: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x223838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22383c: 0xc088e5a  jal         func_223968
    ctx->pc = 0x22383Cu;
    SET_GPR_U32(ctx, 31, 0x223844u);
    ctx->pc = 0x223840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22383Cu;
    // 0x223840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223968u, 0x22383Cu, 0x223844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223844u;
label_223844:
    // 0x223844: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223844u;
    {
        const bool branch_taken_0x223844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223844) {
            ctx->pc = 0x223828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223828;
        }
    }
    ctx->pc = 0x22384Cu;
    // 0x22384c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223850:
    // 0x223850: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x223850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223854: 0xc088e40  jal         func_223900
    ctx->pc = 0x223854u;
    SET_GPR_U32(ctx, 31, 0x22385Cu);
    ctx->pc = 0x223858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223854u;
    // 0x223858: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x223854u, 0x22385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22385Cu;
label_22385c:
    // 0x22385c: 0x26c45a58  addiu       $a0, $s6, 0x5A58
    ctx->pc = 0x22385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23128));
    // 0x223860: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223864: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x223864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x223868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22386c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22386cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_223870:
    // 0x223870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223878: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22387c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223880: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x223880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223884: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x223884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x223888: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x223888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22388c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x22388cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x223890: 0x3e00008  jr          $ra
    ctx->pc = 0x223890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223890u;
        // 0x223894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223898u;
}
