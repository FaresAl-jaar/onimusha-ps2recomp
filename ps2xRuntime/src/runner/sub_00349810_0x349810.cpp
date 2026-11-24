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

// Function: sub_00349810
// Address: 0x349810 - 0x3498ec
void sub_00349810_0x349810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349810_0x349810");
#endif

    switch (ctx->pc) {
        case 0x349834u: goto label_349834;
        case 0x349890u: goto label_349890;
        default: break;
    }

    ctx->pc = 0x349810u;

    // 0x349810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34981c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34981cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349824: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x349824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x349828: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x349828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34982c: 0xc054568  jal         func_1515A0
    ctx->pc = 0x34982Cu;
    SET_GPR_U32(ctx, 31, 0x349834u);
    ctx->pc = 0x349830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34982Cu;
    // 0x349830: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x34982Cu, 0x349834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349834u;
label_349834:
    // 0x349834: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x349834u;
    {
        const bool branch_taken_0x349834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349834u;
        // 0x349838: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349834) {
            ctx->pc = 0x349850u;
            goto label_349850;
        }
    }
    ctx->pc = 0x34983Cu;
    // 0x34983c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x34983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x349840: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x349840u;
    {
        const bool branch_taken_0x349840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349840) {
            ctx->pc = 0x349878u;
            goto label_349878;
        }
    }
    ctx->pc = 0x349848u;
    // 0x349848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x349848u;
    {
        const bool branch_taken_0x349848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349848u;
        // 0x34984c: 0x64110010  daddiu      $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349848) {
            ctx->pc = 0x349878u;
            goto label_349878;
        }
    }
    ctx->pc = 0x349850u;
label_349850:
    // 0x349850: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x349850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x349854: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x349854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x349858: 0x24020562  addiu       $v0, $zero, 0x562
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x34985c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34985Cu;
    {
        const bool branch_taken_0x34985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x349860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34985Cu;
        // 0x349860: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34985c) {
            ctx->pc = 0x349878u;
            goto label_349878;
        }
    }
    ctx->pc = 0x349864u;
    // 0x349864: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x349868: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349868u;
    {
        const bool branch_taken_0x349868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349868) {
            ctx->pc = 0x349878u;
            goto label_349878;
        }
    }
    ctx->pc = 0x349870u;
    // 0x349870: 0x64110010  daddiu      $s1, $zero, 0x10
    ctx->pc = 0x349870u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x349874: 0x0  nop
    ctx->pc = 0x349874u;
    // NOP
label_349878:
    // 0x349878: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x349878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34987c: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x34987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x349880: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x349880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x349884: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x349884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x349888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x349888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34988c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34988cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349890:
    // 0x349890: 0x90c2005d  lbu         $v0, 0x5D($a2)
    ctx->pc = 0x349890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
    // 0x349894: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x349894u;
    {
        const bool branch_taken_0x349894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x349894) {
            ctx->pc = 0x3498C0u;
            goto label_3498c0;
        }
    }
    ctx->pc = 0x34989Cu;
    // 0x34989c: 0x90c2005e  lbu         $v0, 0x5E($a2)
    ctx->pc = 0x34989cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 94)));
    // 0x3498a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3498A0u;
    {
        const bool branch_taken_0x3498a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3498A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498A0u;
        // 0x3498a4: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498a0) {
            ctx->pc = 0x3498C0u;
            goto label_3498c0;
        }
    }
    ctx->pc = 0x3498A8u;
    // 0x3498a8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x3498a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3498ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3498acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3498b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3498b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3498b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3498b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3498b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3498B8u;
    {
        const bool branch_taken_0x3498b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3498BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498B8u;
        // 0x3498bc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498b8) {
            ctx->pc = 0x3498D8u;
            goto label_3498d8;
        }
    }
    ctx->pc = 0x3498C0u;
label_3498c0:
    // 0x3498c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3498c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3498c4: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x3498c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3498c8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3498C8u;
    {
        const bool branch_taken_0x3498c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3498CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498C8u;
        // 0x3498cc: 0x24c60064  addiu       $a2, $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498c8) {
            ctx->pc = 0x349890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349890;
        }
    }
    ctx->pc = 0x3498D0u;
    // 0x3498d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3498d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498d4: 0x0  nop
    ctx->pc = 0x3498d4u;
    // NOP
label_3498d8:
    // 0x3498d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3498d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3498dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3498dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3498e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3498e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3498e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3498E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3498E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498E4u;
        // 0x3498e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3498E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3498ECu;
}
