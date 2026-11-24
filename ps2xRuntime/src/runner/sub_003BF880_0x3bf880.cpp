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

// Function: sub_003BF880
// Address: 0x3bf880 - 0x3bf8f0
void sub_003BF880_0x3bf880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF880_0x3bf880");
#endif

    switch (ctx->pc) {
        case 0x3bf898u: goto label_3bf898;
        default: break;
    }

    ctx->pc = 0x3bf880u;

    // 0x3bf880: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3bf880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3bf884: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x3bf884u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F004u));
    // 0x3bf888: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x3bf888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x3bf88c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3bf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3bf890: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x3bf890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x3bf894: 0x0  nop
    ctx->pc = 0x3bf894u;
    // NOP
label_3bf898:
    // 0x3bf898: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x3bf898u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3bf89c: 0xb17c2  srl         $v0, $t3, 31
    ctx->pc = 0x3bf89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x3bf8a0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3bf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3bf8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bf8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bf8a8: 0x445826  xor         $t3, $v0, $a0
    ctx->pc = 0x3bf8a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3bf8ac: 0xb1202  srl         $v0, $t3, 8
    ctx->pc = 0x3bf8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x3bf8b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3bf8b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3bf8b4: 0x0  nop
    ctx->pc = 0x3bf8b4u;
    // NOP
    // 0x3bf8b8: 0x0  nop
    ctx->pc = 0x3bf8b8u;
    // NOP
    // 0x3bf8bc: 0x1010  mfhi        $v0
    ctx->pc = 0x3bf8bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3bf8c0: 0x1045fff5  beq         $v0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BF8C0u;
    {
        const bool branch_taken_0x3bf8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3bf8c0) {
            ctx->pc = 0x3BF898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf898;
        }
    }
    ctx->pc = 0x3BF8C8u;
    // 0x3bf8c8: 0x1046fff3  beq         $v0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3BF8C8u;
    {
        const bool branch_taken_0x3bf8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3bf8c8) {
            ctx->pc = 0x3BF898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf898;
        }
    }
    ctx->pc = 0x3BF8D0u;
    // 0x3bf8d0: 0x1047fff1  beq         $v0, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x3BF8D0u;
    {
        const bool branch_taken_0x3bf8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3bf8d0) {
            ctx->pc = 0x3BF898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf898;
        }
    }
    ctx->pc = 0x3BF8D8u;
    // 0x3bf8d8: 0x1048ffef  beq         $v0, $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3BF8D8u;
    {
        const bool branch_taken_0x3bf8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3bf8d8) {
            ctx->pc = 0x3BF898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf898;
        }
    }
    ctx->pc = 0x3BF8E0u;
    // 0x3bf8e0: 0x1049ffed  beq         $v0, $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3BF8E0u;
    {
        const bool branch_taken_0x3bf8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x3BF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8E0u;
        // 0x3bf8e4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf8e0) {
            ctx->pc = 0x3BF898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf898;
        }
    }
    ctx->pc = 0x3BF8E8u;
    // 0x3bf8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8E8u;
        // 0x3bf8ec: 0xac2bf004  sw          $t3, -0xFFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF8F0u;
}
