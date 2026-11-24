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

// Function: sub_003416D0
// Address: 0x3416d0 - 0x341790
void sub_003416D0_0x3416d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003416D0_0x3416d0");
#endif

    switch (ctx->pc) {
        case 0x3416f0u: goto label_3416f0;
        default: break;
    }

    ctx->pc = 0x3416d0u;

    // 0x3416d0: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x3416d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x3416d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3416d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416d8: 0x25297880  addiu       $t1, $t1, 0x7880
    ctx->pc = 0x3416d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30848));
    // 0x3416dc: 0x24a80100  addiu       $t0, $a1, 0x100
    ctx->pc = 0x3416dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x3416e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3416e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3416e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3416e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3416e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3416e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3416ec: 0x0  nop
    ctx->pc = 0x3416ecu;
    // NOP
label_3416f0:
    // 0x3416f0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x3416f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3416f4: 0x1502001e  bne         $t0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3416F4u;
    {
        const bool branch_taken_0x3416f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3416f4) {
            ctx->pc = 0x341770u;
            goto label_341770;
        }
    }
    ctx->pc = 0x3416FCu;
    // 0x3416fc: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x3416fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x341700: 0x14c2001b  bne         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x341700u;
    {
        const bool branch_taken_0x341700 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x341700) {
            ctx->pc = 0x341770u;
            goto label_341770;
        }
    }
    ctx->pc = 0x341708u;
    // 0x341708: 0x91220004  lbu         $v0, 0x4($t1)
    ctx->pc = 0x341708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x34170c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34170Cu;
    {
        const bool branch_taken_0x34170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34170c) {
            ctx->pc = 0x341740u;
            goto label_341740;
        }
    }
    ctx->pc = 0x341714u;
    // 0x341714: 0x14e50016  bne         $a3, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x341714u;
    {
        const bool branch_taken_0x341714 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x341714) {
            ctx->pc = 0x341770u;
            goto label_341770;
        }
    }
    ctx->pc = 0x34171Cu;
    // 0x34171c: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x34171cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x341720: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x341720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x341724: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x341724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x341728: 0x24427885  addiu       $v0, $v0, 0x7885
    ctx->pc = 0x341728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30853));
    // 0x34172c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34172cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x341730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x341734: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x341734u;
    {
        const bool branch_taken_0x341734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341734u;
        // 0x341738: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341734) {
            ctx->pc = 0x341788u;
            goto label_341788;
        }
    }
    ctx->pc = 0x34173Cu;
    // 0x34173c: 0x0  nop
    ctx->pc = 0x34173cu;
    // NOP
label_341740:
    // 0x341740: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x341740u;
    {
        const bool branch_taken_0x341740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x341740) {
            ctx->pc = 0x341770u;
            goto label_341770;
        }
    }
    ctx->pc = 0x341748u;
    // 0x341748: 0x14e30009  bne         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x341748u;
    {
        const bool branch_taken_0x341748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x341748) {
            ctx->pc = 0x341770u;
            goto label_341770;
        }
    }
    ctx->pc = 0x341750u;
    // 0x341750: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x341750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x341754: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x341754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x341758: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x341758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x34175c: 0x24427885  addiu       $v0, $v0, 0x7885
    ctx->pc = 0x34175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30853));
    // 0x341760: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x341760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x341764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x341768: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341768u;
    {
        const bool branch_taken_0x341768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341768u;
        // 0x34176c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341768) {
            ctx->pc = 0x341788u;
            goto label_341788;
        }
    }
    ctx->pc = 0x341770u;
label_341770:
    // 0x341770: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x341770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x341774: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x341774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x341778: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x341778u;
    {
        const bool branch_taken_0x341778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341778u;
        // 0x34177c: 0x25290006  addiu       $t1, $t1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341778) {
            ctx->pc = 0x3416F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3416f0;
        }
    }
    ctx->pc = 0x341780u;
    // 0x341780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341784: 0x0  nop
    ctx->pc = 0x341784u;
    // NOP
label_341788:
    // 0x341788: 0x3e00008  jr          $ra
    ctx->pc = 0x341788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341790u;
}
