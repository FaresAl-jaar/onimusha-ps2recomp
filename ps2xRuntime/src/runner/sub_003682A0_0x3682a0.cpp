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

// Function: sub_003682A0
// Address: 0x3682a0 - 0x368314
void sub_003682A0_0x3682a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003682A0_0x3682a0");
#endif

    switch (ctx->pc) {
        case 0x3682c0u: goto label_3682c0;
        case 0x3682d8u: goto label_3682d8;
        default: break;
    }

    ctx->pc = 0x3682a0u;

    // 0x3682a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3682a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3682a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3682a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3682a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3682a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3682ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3682acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3682b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3682b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682b4: 0x249000a8  addiu       $s0, $a0, 0xA8
    ctx->pc = 0x3682b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x3682b8: 0xc0da034  jal         func_3680D0
    ctx->pc = 0x3682B8u;
    SET_GPR_U32(ctx, 31, 0x3682C0u);
    ctx->pc = 0x3682BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682B8u;
    // 0x3682bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3680D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680D0u, 0x3682B8u, 0x3682C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682C0u;
label_3682c0:
    // 0x3682c0: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3682c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3682c4: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x3682c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3682c8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3682C8u;
    {
        const bool branch_taken_0x3682c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3682CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682C8u;
        // 0x3682cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682c8) {
            ctx->pc = 0x368300u;
            goto label_368300;
        }
    }
    ctx->pc = 0x3682D0u;
    // 0x3682d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3682d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682d4: 0x0  nop
    ctx->pc = 0x3682d4u;
    // NOP
label_3682d8:
    // 0x3682d8: 0x84a30010  lh          $v1, 0x10($a1)
    ctx->pc = 0x3682d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3682dc: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3682DCu;
    {
        const bool branch_taken_0x3682dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3682dc) {
            ctx->pc = 0x3682F0u;
            goto label_3682f0;
        }
    }
    ctx->pc = 0x3682E4u;
    // 0x3682e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3682E4u;
    {
        const bool branch_taken_0x3682e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3682E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682E4u;
        // 0x3682e8: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682e4) {
            ctx->pc = 0x368300u;
            goto label_368300;
        }
    }
    ctx->pc = 0x3682ECu;
    // 0x3682ec: 0x0  nop
    ctx->pc = 0x3682ecu;
    // NOP
label_3682f0:
    // 0x3682f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3682f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3682f4: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x3682f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3682f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3682F8u;
    {
        const bool branch_taken_0x3682f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3682FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682F8u;
        // 0x3682fc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682f8) {
            ctx->pc = 0x3682D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3682d8;
        }
    }
    ctx->pc = 0x368300u;
label_368300:
    // 0x368300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36830c: 0x3e00008  jr          $ra
    ctx->pc = 0x36830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36830Cu;
        // 0x368310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368314u;
}
