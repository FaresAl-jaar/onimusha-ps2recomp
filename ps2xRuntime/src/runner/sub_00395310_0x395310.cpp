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

// Function: sub_00395310
// Address: 0x395310 - 0x3953e8
void sub_00395310_0x395310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395310_0x395310");
#endif

    switch (ctx->pc) {
        case 0x395388u: goto label_395388;
        default: break;
    }

    ctx->pc = 0x395310u;

    // 0x395310: 0x84822b30  lh          $v0, 0x2B30($a0)
    ctx->pc = 0x395310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11056)));
    // 0x395314: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x395314u;
    {
        const bool branch_taken_0x395314 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x395318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395314u;
        // 0x395318: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395314) {
            ctx->pc = 0x395328u;
            goto label_395328;
        }
    }
    ctx->pc = 0x39531Cu;
    // 0x39531c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x39531Cu;
    {
        const bool branch_taken_0x39531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39531c) {
            ctx->pc = 0x3953E0u;
            goto label_3953e0;
        }
    }
    ctx->pc = 0x395324u;
    // 0x395324: 0x0  nop
    ctx->pc = 0x395324u;
    // NOP
label_395328:
    // 0x395328: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x395328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39532c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x395330: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x395330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x395334: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x395334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x395338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x395338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39533c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x39533cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395340: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x395340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x395344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x395344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x395348: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x395348u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x39534c: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x39534cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395350: 0x70c51018  mult1       $v0, $a2, $a1
    ctx->pc = 0x395350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x395354: 0x62b02  srl         $a1, $a2, 12
    ctx->pc = 0x395354u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x395358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x395358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39535c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x39535cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x395360: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x395360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x395364: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x395364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x395368: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x395368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x39536c: 0x84832b30  lh          $v1, 0x2B30($a0)
    ctx->pc = 0x39536cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11056)));
    // 0x395370: 0x2810  mfhi        $a1
    ctx->pc = 0x395370u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x395374: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x395374u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x395378: 0x0  nop
    ctx->pc = 0x395378u;
    // NOP
    // 0x39537c: 0x0  nop
    ctx->pc = 0x39537cu;
    // NOP
    // 0x395380: 0x1810  mfhi        $v1
    ctx->pc = 0x395380u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x395384: 0x0  nop
    ctx->pc = 0x395384u;
    // NOP
label_395388:
    // 0x395388: 0x84e22b26  lh          $v0, 0x2B26($a3)
    ctx->pc = 0x395388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 11046)));
    // 0x39538c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39538Cu;
    {
        const bool branch_taken_0x39538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39538c) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x395394u;
    // 0x395394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x395394u;
    {
        const bool branch_taken_0x395394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395394) {
            ctx->pc = 0x3953A8u;
            goto label_3953a8;
        }
    }
    ctx->pc = 0x39539Cu;
    // 0x39539c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39539Cu;
    {
        const bool branch_taken_0x39539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39539Cu;
        // 0x3953a0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39539c) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x3953A4u;
    // 0x3953a4: 0x0  nop
    ctx->pc = 0x3953a4u;
    // NOP
label_3953a8:
    // 0x3953a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3953A8u;
    {
        const bool branch_taken_0x3953a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953A8u;
        // 0x3953ac: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953a8) {
            ctx->pc = 0x3953C0u;
            goto label_3953c0;
        }
    }
    ctx->pc = 0x3953B0u;
label_3953b0:
    // 0x3953b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3953b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3953b4: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x3953b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3953b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3953B8u;
    {
        const bool branch_taken_0x3953b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3953BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953B8u;
        // 0x3953bc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953b8) {
            ctx->pc = 0x395388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395388;
        }
    }
    ctx->pc = 0x3953C0u;
label_3953c0:
    // 0x3953c0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3953c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3953c4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3953c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3953c8: 0xa4602b26  sh          $zero, 0x2B26($v1)
    ctx->pc = 0x3953c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11046), (uint16_t)GPR_U32(ctx, 0));
    // 0x3953cc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3953ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3953d0: 0x84832b30  lh          $v1, 0x2B30($a0)
    ctx->pc = 0x3953d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11056)));
    // 0x3953d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3953d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3953d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3953d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3953dc: 0xa4832b30  sh          $v1, 0x2B30($a0)
    ctx->pc = 0x3953dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3953e0:
    // 0x3953e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3953E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3953E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3953E8u;
}
