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

// Function: sub_003E96E0
// Address: 0x3e96e0 - 0x3e9788
void sub_003E96E0_0x3e96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E96E0_0x3e96e0");
#endif

    switch (ctx->pc) {
        case 0x3e9730u: goto label_3e9730;
        default: break;
    }

    ctx->pc = 0x3e96e0u;

    // 0x3e96e0: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3e96e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e96e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3e96e8: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3e96e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3e96ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e96ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e96f0: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x3e96f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e96f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e96f8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e96f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3e96fc: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3e96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9700: 0x70a31018  mult1       $v0, $a1, $v1
    ctx->pc = 0x3e9700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e9704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e9708: 0x51b02  srl         $v1, $a1, 12
    ctx->pc = 0x3e9708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x3e970c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e970cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3e9710: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x3e9710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3e9714: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9718: 0x84832b32  lh          $v1, 0x2B32($a0)
    ctx->pc = 0x3e9718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11058)));
    // 0x3e971c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3e9720: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3e9720u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3e9724: 0x0  nop
    ctx->pc = 0x3e9724u;
    // NOP
    // 0x3e9728: 0x0  nop
    ctx->pc = 0x3e9728u;
    // NOP
    // 0x3e972c: 0x1810  mfhi        $v1
    ctx->pc = 0x3e972cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3e9730:
    // 0x3e9730: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3e9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3e9734: 0x90422b2e  lbu         $v0, 0x2B2E($v0)
    ctx->pc = 0x3e9734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11054)));
    // 0x3e9738: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E9738u;
    {
        const bool branch_taken_0x3e9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9738) {
            ctx->pc = 0x3E9758u;
            goto label_3e9758;
        }
    }
    ctx->pc = 0x3E9740u;
    // 0x3e9740: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9740u;
    {
        const bool branch_taken_0x3e9740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9740) {
            ctx->pc = 0x3E9750u;
            goto label_3e9750;
        }
    }
    ctx->pc = 0x3E9748u;
    // 0x3e9748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9748u;
    {
        const bool branch_taken_0x3e9748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9748u;
        // 0x3e974c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9748) {
            ctx->pc = 0x3E9758u;
            goto label_3e9758;
        }
    }
    ctx->pc = 0x3E9750u;
label_3e9750:
    // 0x3e9750: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9750u;
    {
        const bool branch_taken_0x3e9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9750u;
        // 0x3e9754: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9750) {
            ctx->pc = 0x3E9768u;
            goto label_3e9768;
        }
    }
    ctx->pc = 0x3E9758u;
label_3e9758:
    // 0x3e9758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e9758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e975c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3e975cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e9760: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E9760u;
    {
        const bool branch_taken_0x3e9760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9760) {
            ctx->pc = 0x3E9730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9730;
        }
    }
    ctx->pc = 0x3E9768u;
label_3e9768:
    // 0x3e9768: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3e9768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e976c: 0xa0402b2e  sb          $zero, 0x2B2E($v0)
    ctx->pc = 0x3e976cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11054), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9770: 0x84832b32  lh          $v1, 0x2B32($a0)
    ctx->pc = 0x3e9770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11058)));
    // 0x3e9774: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3e9774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3e9778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e9778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e977c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9780: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9780u;
        // 0x3e9784: 0xa4832b32  sh          $v1, 0x2B32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9788u;
}
