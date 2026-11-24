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

// Function: sub_00349740
// Address: 0x349740 - 0x34980c
void sub_00349740_0x349740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349740_0x349740");
#endif

    switch (ctx->pc) {
        case 0x349764u: goto label_349764;
        case 0x3497c0u: goto label_3497c0;
        default: break;
    }

    ctx->pc = 0x349740u;

    // 0x349740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34974c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34974cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349754: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x349754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x349758: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x349758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34975c: 0xc054568  jal         func_1515A0
    ctx->pc = 0x34975Cu;
    SET_GPR_U32(ctx, 31, 0x349764u);
    ctx->pc = 0x349760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34975Cu;
    // 0x349760: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x34975Cu, 0x349764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349764u;
label_349764:
    // 0x349764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x349764u;
    {
        const bool branch_taken_0x349764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349764u;
        // 0x349768: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349764) {
            ctx->pc = 0x349780u;
            goto label_349780;
        }
    }
    ctx->pc = 0x34976Cu;
    // 0x34976c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x34976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x349770: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x349770u;
    {
        const bool branch_taken_0x349770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349770) {
            ctx->pc = 0x3497A8u;
            goto label_3497a8;
        }
    }
    ctx->pc = 0x349778u;
    // 0x349778: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x349778u;
    {
        const bool branch_taken_0x349778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349778u;
        // 0x34977c: 0x64110010  daddiu      $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349778) {
            ctx->pc = 0x3497A8u;
            goto label_3497a8;
        }
    }
    ctx->pc = 0x349780u;
label_349780:
    // 0x349780: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x349780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x349784: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x349784u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x349788: 0x24020562  addiu       $v0, $zero, 0x562
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x34978c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34978Cu;
    {
        const bool branch_taken_0x34978c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x349790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34978Cu;
        // 0x349790: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34978c) {
            ctx->pc = 0x3497A8u;
            goto label_3497a8;
        }
    }
    ctx->pc = 0x349794u;
    // 0x349794: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x349794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x349798: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349798u;
    {
        const bool branch_taken_0x349798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349798) {
            ctx->pc = 0x3497A8u;
            goto label_3497a8;
        }
    }
    ctx->pc = 0x3497A0u;
    // 0x3497a0: 0x64110010  daddiu      $s1, $zero, 0x10
    ctx->pc = 0x3497a0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x3497a4: 0x0  nop
    ctx->pc = 0x3497a4u;
    // NOP
label_3497a8:
    // 0x3497a8: 0x8f868ba8  lw          $a2, -0x7458($gp)
    ctx->pc = 0x3497a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3497ac: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x3497acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x3497b0: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3497b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3497b4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3497b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3497b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3497b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497bc: 0x0  nop
    ctx->pc = 0x3497bcu;
    // NOP
label_3497c0:
    // 0x3497c0: 0x90c3005d  lbu         $v1, 0x5D($a2)
    ctx->pc = 0x3497c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
    // 0x3497c4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3497C4u;
    {
        const bool branch_taken_0x3497c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3497c4) {
            ctx->pc = 0x3497E0u;
            goto label_3497e0;
        }
    }
    ctx->pc = 0x3497CCu;
    // 0x3497cc: 0x90c3005e  lbu         $v1, 0x5E($a2)
    ctx->pc = 0x3497ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 94)));
    // 0x3497d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3497D0u;
    {
        const bool branch_taken_0x3497d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3497d0) {
            ctx->pc = 0x3497E0u;
            goto label_3497e0;
        }
    }
    ctx->pc = 0x3497D8u;
    // 0x3497d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3497D8u;
    {
        const bool branch_taken_0x3497d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3497d8) {
            ctx->pc = 0x3497F8u;
            goto label_3497f8;
        }
    }
    ctx->pc = 0x3497E0u;
label_3497e0:
    // 0x3497e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3497e4: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x3497e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3497e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3497E8u;
    {
        const bool branch_taken_0x3497e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3497ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497E8u;
        // 0x3497ec: 0x24c60064  addiu       $a2, $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497e8) {
            ctx->pc = 0x3497C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3497c0;
        }
    }
    ctx->pc = 0x3497F0u;
    // 0x3497f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3497f4: 0x0  nop
    ctx->pc = 0x3497f4u;
    // NOP
label_3497f8:
    // 0x3497f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3497f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3497fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3497fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349804: 0x3e00008  jr          $ra
    ctx->pc = 0x349804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349804u;
        // 0x349808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34980Cu;
}
