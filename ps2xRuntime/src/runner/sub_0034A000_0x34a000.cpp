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

// Function: sub_0034A000
// Address: 0x34a000 - 0x34a054
void sub_0034A000_0x34a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A000_0x34a000");
#endif

    switch (ctx->pc) {
        case 0x34a018u: goto label_34a018;
        case 0x34a030u: goto label_34a030;
        default: break;
    }

    ctx->pc = 0x34a000u;

    // 0x34a000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34a008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a010: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x34a010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34a014: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a018:
    // 0x34a018: 0x9223005f  lbu         $v1, 0x5F($s1)
    ctx->pc = 0x34a018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 95)));
    // 0x34a01c: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x34a020: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x34a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x34a024: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x34a024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x34a028: 0xc0e0a7c  jal         func_3829F0
    ctx->pc = 0x34A028u;
    SET_GPR_U32(ctx, 31, 0x34A030u);
    ctx->pc = 0x34A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A028u;
    // 0x34a02c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3829F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3829F0u, 0x34A028u, 0x34A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A030u;
label_34a030:
    // 0x34a030: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34a030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34a034: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x34a034u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34a038: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34A038u;
    {
        const bool branch_taken_0x34a038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A038u;
        // 0x34a03c: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a038) {
            ctx->pc = 0x34A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a018;
        }
    }
    ctx->pc = 0x34A040u;
    // 0x34a040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a04c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A04Cu;
        // 0x34a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A054u;
}
