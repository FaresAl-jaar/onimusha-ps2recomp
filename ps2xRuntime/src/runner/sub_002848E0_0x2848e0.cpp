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

// Function: sub_002848E0
// Address: 0x2848e0 - 0x284958
void sub_002848E0_0x2848e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002848E0_0x2848e0");
#endif

    switch (ctx->pc) {
        case 0x2848fcu: goto label_2848fc;
        case 0x284928u: goto label_284928;
        default: break;
    }

    ctx->pc = 0x2848e0u;

    // 0x2848e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2848e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2848e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2848e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2848e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2848e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2848ec: 0x90a2001c  lbu         $v0, 0x1C($a1)
    ctx->pc = 0x2848ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2848f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2848f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848f4: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2848F4u;
    SET_GPR_U32(ctx, 31, 0x2848FCu);
    ctx->pc = 0x2848F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848F4u;
    // 0x2848f8: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2848F4u, 0x2848FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848FCu;
label_2848fc:
    // 0x2848fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2848FCu;
    {
        const bool branch_taken_0x2848fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2848fc) {
            ctx->pc = 0x284910u;
            goto label_284910;
        }
    }
    ctx->pc = 0x284904u;
    // 0x284904: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x284904u;
    {
        const bool branch_taken_0x284904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284904u;
        // 0x284908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284904) {
            ctx->pc = 0x284948u;
            goto label_284948;
        }
    }
    ctx->pc = 0x28490Cu;
    // 0x28490c: 0x0  nop
    ctx->pc = 0x28490cu;
    // NOP
label_284910:
    // 0x284910: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x284910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x284914: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x284914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284918: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x284918u;
    {
        const bool branch_taken_0x284918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284918u;
        // 0x28491c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284918) {
            ctx->pc = 0x284948u;
            goto label_284948;
        }
    }
    ctx->pc = 0x284920u;
    // 0x284920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x284920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284924: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x284924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_284928:
    // 0x284928: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x284928u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x28492c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x28492cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x284930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x284930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x284934: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x284938: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x284938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28493c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28493Cu;
    {
        const bool branch_taken_0x28493c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28493c) {
            ctx->pc = 0x284928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284928;
        }
    }
    ctx->pc = 0x284944u;
    // 0x284944: 0x0  nop
    ctx->pc = 0x284944u;
    // NOP
label_284948:
    // 0x284948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28494c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28494cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284950: 0x3e00008  jr          $ra
    ctx->pc = 0x284950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284950u;
        // 0x284954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284958u;
}
