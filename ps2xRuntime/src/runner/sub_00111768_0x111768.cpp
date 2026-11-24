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

// Function: sub_00111768
// Address: 0x111768 - 0x111810
void sub_00111768_0x111768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111768_0x111768");
#endif

    switch (ctx->pc) {
        case 0x111780u: goto label_111780;
        case 0x111798u: goto label_111798;
        case 0x1117dcu: goto label_1117dc;
        case 0x1117f8u: goto label_1117f8;
        default: break;
    }

    ctx->pc = 0x111768u;

    // 0x111768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11176c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x111774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111778: 0xc046028  jal         func_1180A0
    ctx->pc = 0x111778u;
    SET_GPR_U32(ctx, 31, 0x111780u);
    ctx->pc = 0x11177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111778u;
    // 0x11177c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x111778u, 0x111780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111780u;
label_111780:
    // 0x111780: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x111784: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111788: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x111788u;
    {
        const bool branch_taken_0x111788 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x11178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111788u;
        // 0x11178c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111788) {
            ctx->pc = 0x1117F0u;
            goto label_1117f0;
        }
    }
    ctx->pc = 0x111790u;
    // 0x111790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111794: 0x0  nop
    ctx->pc = 0x111794u;
    // NOP
label_111798:
    // 0x111798: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x111798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11179c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1117a0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1117A0u;
    {
        const bool branch_taken_0x1117a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1117a0) {
            ctx->pc = 0x1117A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117A0u;
            // 0x1117a4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117E4u;
            goto label_1117e4;
        }
    }
    ctx->pc = 0x1117A8u;
    // 0x1117a8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1117ac: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1117acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1117b0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1117b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1117b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1117b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1117b8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1117b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1117bc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117BCu;
    {
        const bool branch_taken_0x1117bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117BCu;
        // 0x1117c0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117bc) {
            ctx->pc = 0x1117D0u;
            goto label_1117d0;
        }
    }
    ctx->pc = 0x1117C4u;
    // 0x1117c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1117c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1117c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1117c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1117cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1117ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1117d0:
    // 0x1117d0: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1117d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1117d4: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1117D4u;
    SET_GPR_U32(ctx, 31, 0x1117DCu);
    ctx->pc = 0x1117D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117D4u;
    // 0x1117d8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1117D4u, 0x1117DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117DCu;
label_1117dc:
    // 0x1117dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1117DCu;
    {
        const bool branch_taken_0x1117dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117DCu;
        // 0x1117e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117dc) {
            ctx->pc = 0x1117FCu;
            goto label_1117fc;
        }
    }
    ctx->pc = 0x1117E4u;
label_1117e4:
    // 0x1117e4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1117e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1117e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1117E8u;
    {
        const bool branch_taken_0x1117e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1117ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117E8u;
        // 0x1117ec: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117e8) {
            ctx->pc = 0x111798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111798;
        }
    }
    ctx->pc = 0x1117F0u;
label_1117f0:
    // 0x1117f0: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1117F0u;
    SET_GPR_U32(ctx, 31, 0x1117F8u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1117F0u, 0x1117F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117F8u;
label_1117f8:
    // 0x1117f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1117f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1117fc:
    // 0x1117fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1117fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111808: 0x3e00008  jr          $ra
    ctx->pc = 0x111808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111808u;
        // 0x11180c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111810u;
}
