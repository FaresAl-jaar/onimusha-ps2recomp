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

// Function: sub_00243650
// Address: 0x243650 - 0x243714
void sub_00243650_0x243650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243650_0x243650");
#endif

    switch (ctx->pc) {
        case 0x243688u: goto label_243688;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436ecu: goto label_2436ec;
        default: break;
    }

    ctx->pc = 0x243650u;

    // 0x243650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243654: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x243658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24365c: 0x3c11004d  lui         $s1, 0x4D
    ctx->pc = 0x24365cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)77 << 16));
    // 0x243660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243664: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x243664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
    // 0x243668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24366c: 0x8e23e97c  lw          $v1, -0x1684($s1)
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE97Cu));
    // 0x243670: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x243670u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4CE970u));
    // 0x243674: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x243674u;
    {
        const bool branch_taken_0x243674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x243678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243674u;
        // 0x243678: 0x2623e97c  addiu       $v1, $s1, -0x1684 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243674) {
            ctx->pc = 0x2436F4u;
            goto label_2436f4;
        }
    }
    ctx->pc = 0x24367Cu;
    // 0x24367c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x243680: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x243680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x243684: 0x24425e00  addiu       $v0, $v0, 0x5E00
    ctx->pc = 0x243684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24064));
label_243688:
    // 0x243688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24368c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24368cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x243690: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243694: 0x0  nop
    ctx->pc = 0x243694u;
    // NOP
    // 0x243698: 0x0  nop
    ctx->pc = 0x243698u;
    // NOP
    // 0x24369c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24369Cu;
    {
        const bool branch_taken_0x24369c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2436A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24369Cu;
        // 0x2436a0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24369c) {
            ctx->pc = 0x243688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243688;
        }
    }
    ctx->pc = 0x2436A4u;
    // 0x2436a4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2436a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2436a8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2436a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2436ac: 0x24425f40  addiu       $v0, $v0, 0x5F40
    ctx->pc = 0x2436acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
    // 0x2436b0: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x2436b4: 0x0  nop
    ctx->pc = 0x2436b4u;
    // NOP
label_2436b8:
    // 0x2436b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2436b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2436bc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2436bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2436c0: 0x0  nop
    ctx->pc = 0x2436c0u;
    // NOP
    // 0x2436c4: 0x0  nop
    ctx->pc = 0x2436c4u;
    // NOP
    // 0x2436c8: 0x0  nop
    ctx->pc = 0x2436c8u;
    // NOP
    // 0x2436cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2436CCu;
    {
        const bool branch_taken_0x2436cc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2436D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436CCu;
        // 0x2436d0: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436cc) {
            ctx->pc = 0x2436B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2436b8;
        }
    }
    ctx->pc = 0x2436D4u;
    // 0x2436d4: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x2436d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2436d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436dc: 0x26106140  addiu       $s0, $s0, 0x6140
    ctx->pc = 0x2436dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24896));
    // 0x2436e0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2436e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2436e4: 0xc049590  jal         func_125640
    ctx->pc = 0x2436E4u;
    SET_GPR_U32(ctx, 31, 0x2436ECu);
    ctx->pc = 0x2436E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436E4u;
    // 0x2436e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2436E4u, 0x2436ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436ECu;
label_2436ec:
    // 0x2436ec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2436ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2436f0: 0x2623e97c  addiu       $v1, $s1, -0x1684
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961532));
label_2436f4:
    // 0x2436f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2436f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2436f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2436f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2436fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2436fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243708: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x243708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24370c: 0x3e00008  jr          $ra
    ctx->pc = 0x24370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24370Cu;
        // 0x243710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243714u;
}
