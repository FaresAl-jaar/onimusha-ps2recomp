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

// Function: sub_003E97D0
// Address: 0x3e97d0 - 0x3e9878
void sub_003E97D0_0x3e97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E97D0_0x3e97d0");
#endif

    switch (ctx->pc) {
        case 0x3e9820u: goto label_3e9820;
        default: break;
    }

    ctx->pc = 0x3e97d0u;

    // 0x3e97d0: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3e97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e97d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3e97d8: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3e97d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3e97dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e97dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e97e0: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x3e97e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e97e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e97e8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3e97ec: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3e97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e97f0: 0x70a31018  mult1       $v0, $a1, $v1
    ctx->pc = 0x3e97f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e97f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e97f8: 0x51b02  srl         $v1, $a1, 12
    ctx->pc = 0x3e97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x3e97fc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3e9800: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x3e9800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3e9804: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9808: 0x84832b38  lh          $v1, 0x2B38($a0)
    ctx->pc = 0x3e9808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11064)));
    // 0x3e980c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3e9810: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3e9810u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3e9814: 0x0  nop
    ctx->pc = 0x3e9814u;
    // NOP
    // 0x3e9818: 0x0  nop
    ctx->pc = 0x3e9818u;
    // NOP
    // 0x3e981c: 0x1810  mfhi        $v1
    ctx->pc = 0x3e981cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3e9820:
    // 0x3e9820: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3e9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3e9824: 0x90422b34  lbu         $v0, 0x2B34($v0)
    ctx->pc = 0x3e9824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11060)));
    // 0x3e9828: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E9828u;
    {
        const bool branch_taken_0x3e9828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9828) {
            ctx->pc = 0x3E9848u;
            goto label_3e9848;
        }
    }
    ctx->pc = 0x3E9830u;
    // 0x3e9830: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9830u;
    {
        const bool branch_taken_0x3e9830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9830) {
            ctx->pc = 0x3E9840u;
            goto label_3e9840;
        }
    }
    ctx->pc = 0x3E9838u;
    // 0x3e9838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9838u;
    {
        const bool branch_taken_0x3e9838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9838u;
        // 0x3e983c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9838) {
            ctx->pc = 0x3E9848u;
            goto label_3e9848;
        }
    }
    ctx->pc = 0x3E9840u;
label_3e9840:
    // 0x3e9840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9840u;
    {
        const bool branch_taken_0x3e9840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9840u;
        // 0x3e9844: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9840) {
            ctx->pc = 0x3E9858u;
            goto label_3e9858;
        }
    }
    ctx->pc = 0x3E9848u;
label_3e9848:
    // 0x3e9848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e9848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e984c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3e984cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e9850: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E9850u;
    {
        const bool branch_taken_0x3e9850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9850) {
            ctx->pc = 0x3E9820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9820;
        }
    }
    ctx->pc = 0x3E9858u;
label_3e9858:
    // 0x3e9858: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3e9858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e985c: 0xa0402b34  sb          $zero, 0x2B34($v0)
    ctx->pc = 0x3e985cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11060), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9860: 0x84832b38  lh          $v1, 0x2B38($a0)
    ctx->pc = 0x3e9860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11064)));
    // 0x3e9864: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3e9864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3e9868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e9868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e986c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9870: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9870u;
        // 0x3e9874: 0xa4832b38  sh          $v1, 0x2B38($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11064), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9878u;
}
