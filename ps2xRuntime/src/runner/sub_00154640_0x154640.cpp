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

// Function: sub_00154640
// Address: 0x154640 - 0x154798
void sub_00154640_0x154640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154640_0x154640");
#endif

    switch (ctx->pc) {
        case 0x154690u: goto label_154690;
        case 0x1546acu: goto label_1546ac;
        case 0x1546d0u: goto label_1546d0;
        case 0x154700u: goto label_154700;
        case 0x154710u: goto label_154710;
        case 0x154758u: goto label_154758;
        case 0x154764u: goto label_154764;
        default: break;
    }

    ctx->pc = 0x154640u;

    // 0x154640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154644: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x154648: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x154648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15464c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x154650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154658: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x154658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15465c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154660: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15466c: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x154670: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x154670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x154674: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x154674u;
    {
        const bool branch_taken_0x154674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154674u;
        // 0x154678: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154674) {
            ctx->pc = 0x154778u;
            goto label_154778;
        }
    }
    ctx->pc = 0x15467Cu;
    // 0x15467c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154680: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154684: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x154684u;
    {
        const bool branch_taken_0x154684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x154688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154684u;
        // 0x154688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154684) {
            ctx->pc = 0x154740u;
            goto label_154740;
        }
    }
    ctx->pc = 0x15468Cu;
    // 0x15468c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x15468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_154690:
    // 0x154690: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154694: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x154694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154698: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x154698u;
    {
        const bool branch_taken_0x154698 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x154698) {
            ctx->pc = 0x1546B0u;
            goto label_1546b0;
        }
    }
    ctx->pc = 0x1546A0u;
    // 0x1546a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1546a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1546a4: 0xc0550b8  jal         func_1542E0
    ctx->pc = 0x1546A4u;
    SET_GPR_U32(ctx, 31, 0x1546ACu);
    ctx->pc = 0x1546A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546A4u;
    // 0x1546a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542E0u, 0x1546A4u, 0x1546ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546ACu;
label_1546ac:
    // 0x1546ac: 0x0  nop
    ctx->pc = 0x1546acu;
    // NOP
label_1546b0:
    // 0x1546b0: 0x8f8485c0  lw          $a0, -0x7A40($gp)
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1546b4: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1546b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1546b8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B8u;
        // 0x1546bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x1546F0u;
            goto label_1546f0;
        }
    }
    ctx->pc = 0x1546C0u;
    // 0x1546c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1546c4: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x1546c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x1546c8: 0x24c6eeb0  addiu       $a2, $a2, -0x1150
    ctx->pc = 0x1546c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962864));
    // 0x1546cc: 0x0  nop
    ctx->pc = 0x1546ccu;
    // NOP
label_1546d0:
    // 0x1546d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1546d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1546d4: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1546D4u;
    {
        const bool branch_taken_0x1546d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1546d4) {
            ctx->pc = 0x1546F0u;
            goto label_1546f0;
        }
    }
    ctx->pc = 0x1546DCu;
    // 0x1546dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1546dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1546e0: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x1546e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1546e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1546E4u;
    {
        const bool branch_taken_0x1546e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1546E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546E4u;
        // 0x1546e8: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546e4) {
            ctx->pc = 0x1546D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1546d0;
        }
    }
    ctx->pc = 0x1546ECu;
    // 0x1546ec: 0x0  nop
    ctx->pc = 0x1546ecu;
    // NOP
label_1546f0:
    // 0x1546f0: 0x14e4000d  bne         $a3, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1546F0u;
    {
        const bool branch_taken_0x1546f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x1546F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F0u;
        // 0x1546f4: 0x4082b  sltu        $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546f0) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x1546F8u;
    // 0x1546f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1546F8u;
    {
        const bool branch_taken_0x1546f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546f8) {
            ctx->pc = 0x154720u;
            goto label_154720;
        }
    }
    ctx->pc = 0x154700u;
label_154700:
    // 0x154700: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x154704: 0x8c25eeb0  lw          $a1, -0x1150($at)
    ctx->pc = 0x154704u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7FEEB0u));
    // 0x154708: 0xc0550e8  jal         func_1543A0
    ctx->pc = 0x154708u;
    SET_GPR_U32(ctx, 31, 0x154710u);
    ctx->pc = 0x15470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154708u;
    // 0x15470c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543A0u, 0x154708u, 0x154710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154710u;
label_154710:
    // 0x154710: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154714: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154718: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x154718u;
    {
        const bool branch_taken_0x154718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154718) {
            ctx->pc = 0x154700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154700;
        }
    }
    ctx->pc = 0x154720u;
label_154720:
    // 0x154720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154720u;
    {
        const bool branch_taken_0x154720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154720u;
        // 0x154724: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154720) {
            ctx->pc = 0x154740u;
            goto label_154740;
        }
    }
    ctx->pc = 0x154728u;
label_154728:
    // 0x154728: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x15472c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154734: 0x1483ffd6  bne         $a0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x154734u;
    {
        const bool branch_taken_0x154734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154734u;
        // 0x154738: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154734) {
            ctx->pc = 0x154690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154690;
        }
    }
    ctx->pc = 0x15473Cu;
    // 0x15473c: 0x0  nop
    ctx->pc = 0x15473cu;
    // NOP
label_154740:
    // 0x154740: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x154740u;
    {
        const bool branch_taken_0x154740 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x154740) {
            ctx->pc = 0x154778u;
            goto label_154778;
        }
    }
    ctx->pc = 0x154748u;
    // 0x154748: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15474c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154750: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x154750u;
    {
        const bool branch_taken_0x154750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154750) {
            ctx->pc = 0x154778u;
            goto label_154778;
        }
    }
    ctx->pc = 0x154758u;
label_154758:
    // 0x154758: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15475c: 0xc0550b8  jal         func_1542E0
    ctx->pc = 0x15475Cu;
    SET_GPR_U32(ctx, 31, 0x154764u);
    ctx->pc = 0x154760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15475Cu;
    // 0x154760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542E0u, 0x15475Cu, 0x154764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154764u;
label_154764:
    // 0x154764: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x154768: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15476c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154770: 0x1483fff9  bne         $a0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x154770u;
    {
        const bool branch_taken_0x154770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x154770) {
            ctx->pc = 0x154758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154758;
        }
    }
    ctx->pc = 0x154778u;
label_154778:
    // 0x154778: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15477c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15477cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15478c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15478cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154790: 0x3e00008  jr          $ra
    ctx->pc = 0x154790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154790u;
        // 0x154794: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154798u;
}
