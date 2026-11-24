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

// Function: sub_00368810
// Address: 0x368810 - 0x3689b8
void sub_00368810_0x368810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368810_0x368810");
#endif

    switch (ctx->pc) {
        case 0x368828u: goto label_368828;
        case 0x36883cu: goto label_36883c;
        case 0x368868u: goto label_368868;
        case 0x3688f8u: goto label_3688f8;
        case 0x36890cu: goto label_36890c;
        case 0x368918u: goto label_368918;
        case 0x368928u: goto label_368928;
        case 0x36893cu: goto label_36893c;
        case 0x368948u: goto label_368948;
        case 0x368958u: goto label_368958;
        case 0x36896cu: goto label_36896c;
        case 0x368978u: goto label_368978;
        case 0x368988u: goto label_368988;
        default: break;
    }

    ctx->pc = 0x368810u;

    // 0x368810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x368810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x368814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36881c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368820: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x368820u;
    SET_GPR_U32(ctx, 31, 0x368828u);
    ctx->pc = 0x368824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368820u;
    // 0x368824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x368820u, 0x368828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368828u;
label_368828:
    // 0x368828: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x368828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x36882c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368830: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x368830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x368834: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x368834u;
    SET_GPR_U32(ctx, 31, 0x36883Cu);
    ctx->pc = 0x368838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368834u;
    // 0x368838: 0xa2002b25  sb          $zero, 0x2B25($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x368834u, 0x36883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36883Cu;
label_36883c:
    // 0x36883c: 0xa6022b26  sh          $v0, 0x2B26($s0)
    ctx->pc = 0x36883cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11046), (uint16_t)GPR_U32(ctx, 2));
    // 0x368840: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x368840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x368844: 0xa2020233  sb          $v0, 0x233($s0)
    ctx->pc = 0x368844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 563), (uint8_t)GPR_U32(ctx, 2));
    // 0x368848: 0x92032b1c  lbu         $v1, 0x2B1C($s0)
    ctx->pc = 0x368848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11036)));
    // 0x36884c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368850: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x368850u;
    {
        const bool branch_taken_0x368850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x368850) {
            ctx->pc = 0x3688B0u;
            goto label_3688b0;
        }
    }
    ctx->pc = 0x368858u;
    // 0x368858: 0x8e052b18  lw          $a1, 0x2B18($s0)
    ctx->pc = 0x368858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11032)));
    // 0x36885c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x36885cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x368860: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x368860u;
    SET_GPR_U32(ctx, 31, 0x368868u);
    ctx->pc = 0x368864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368860u;
    // 0x368864: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x368860u, 0x368868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368868u;
label_368868:
    // 0x368868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x368868u;
    {
        const bool branch_taken_0x368868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368868) {
            ctx->pc = 0x368898u;
            goto label_368898;
        }
    }
    ctx->pc = 0x368870u;
    // 0x368870: 0x90422b24  lbu         $v0, 0x2B24($v0)
    ctx->pc = 0x368870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11044)));
    // 0x368874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368878: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x368878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x36887c: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x36887cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x368880: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x368880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x368884: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x368884u;
    {
        const bool branch_taken_0x368884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x368884) {
            ctx->pc = 0x368898u;
            goto label_368898;
        }
    }
    ctx->pc = 0x36888Cu;
    // 0x36888c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368890: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x368890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x368894: 0x0  nop
    ctx->pc = 0x368894u;
    // NOP
label_368898:
    // 0x368898: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x368898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x36889c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3688a0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3688a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3688a4: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3688a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3688a8: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x3688a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
    // 0x3688ac: 0x0  nop
    ctx->pc = 0x3688acu;
    // NOP
label_3688b0:
    // 0x3688b0: 0x92032b24  lbu         $v1, 0x2B24($s0)
    ctx->pc = 0x3688b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3688b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3688b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3688b8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3688B8u;
    {
        const bool branch_taken_0x3688b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3688BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688B8u;
        // 0x3688bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688b8) {
            ctx->pc = 0x368950u;
            goto label_368950;
        }
    }
    ctx->pc = 0x3688C0u;
    // 0x3688c0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3688C0u;
    {
        const bool branch_taken_0x3688c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3688c0) {
            ctx->pc = 0x368920u;
            goto label_368920;
        }
    }
    ctx->pc = 0x3688C8u;
    // 0x3688c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3688c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3688cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3688CCu;
    {
        const bool branch_taken_0x3688cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3688D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688CCu;
        // 0x3688d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688cc) {
            ctx->pc = 0x368920u;
            goto label_368920;
        }
    }
    ctx->pc = 0x3688D4u;
    // 0x3688d4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3688D4u;
    {
        const bool branch_taken_0x3688d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3688d4) {
            ctx->pc = 0x3688F0u;
            goto label_3688f0;
        }
    }
    ctx->pc = 0x3688DCu;
    // 0x3688dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3688DCu;
    {
        const bool branch_taken_0x3688dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3688dc) {
            ctx->pc = 0x3688F0u;
            goto label_3688f0;
        }
    }
    ctx->pc = 0x3688E4u;
    // 0x3688e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3688E4u;
    {
        const bool branch_taken_0x3688e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3688e4) {
            ctx->pc = 0x368980u;
            goto label_368980;
        }
    }
    ctx->pc = 0x3688ECu;
    // 0x3688ec: 0x0  nop
    ctx->pc = 0x3688ecu;
    // NOP
label_3688f0:
    // 0x3688f0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3688F0u;
    SET_GPR_U32(ctx, 31, 0x3688F8u);
    ctx->pc = 0x3688F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3688F0u;
    // 0x3688f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3688F0u, 0x3688F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688F8u;
label_3688f8:
    // 0x3688f8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3688f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3688fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3688fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368904: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x368904u;
    SET_GPR_U32(ctx, 31, 0x36890Cu);
    ctx->pc = 0x368908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368904u;
    // 0x368908: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x368904u, 0x36890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36890Cu;
label_36890c:
    // 0x36890c: 0x8e042960  lw          $a0, 0x2960($s0)
    ctx->pc = 0x36890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    // 0x368910: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x368910u;
    SET_GPR_U32(ctx, 31, 0x368918u);
    ctx->pc = 0x368914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368910u;
    // 0x368914: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x368910u, 0x368918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368918u;
label_368918:
    // 0x368918: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x368918u;
    {
        const bool branch_taken_0x368918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368918u;
        // 0x36891c: 0xae112960  sw          $s1, 0x2960($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10592), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368918) {
            ctx->pc = 0x368990u;
            goto label_368990;
        }
    }
    ctx->pc = 0x368920u;
label_368920:
    // 0x368920: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x368920u;
    SET_GPR_U32(ctx, 31, 0x368928u);
    ctx->pc = 0x368924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368920u;
    // 0x368924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x368920u, 0x368928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368928u;
label_368928:
    // 0x368928: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x368928u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x36892c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x368930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368934: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x368934u;
    SET_GPR_U32(ctx, 31, 0x36893Cu);
    ctx->pc = 0x368938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368934u;
    // 0x368938: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x368934u, 0x36893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36893Cu;
label_36893c:
    // 0x36893c: 0x8e042960  lw          $a0, 0x2960($s0)
    ctx->pc = 0x36893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    // 0x368940: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x368940u;
    SET_GPR_U32(ctx, 31, 0x368948u);
    ctx->pc = 0x368944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368940u;
    // 0x368944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x368940u, 0x368948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368948u;
label_368948:
    // 0x368948: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x368948u;
    {
        const bool branch_taken_0x368948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368948u;
        // 0x36894c: 0xae112960  sw          $s1, 0x2960($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10592), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368948) {
            ctx->pc = 0x368990u;
            goto label_368990;
        }
    }
    ctx->pc = 0x368950u;
label_368950:
    // 0x368950: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x368950u;
    SET_GPR_U32(ctx, 31, 0x368958u);
    ctx->pc = 0x368954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368950u;
    // 0x368954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x368950u, 0x368958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368958u;
label_368958:
    // 0x368958: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x368958u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x36895c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368960: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x368960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368964: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x368964u;
    SET_GPR_U32(ctx, 31, 0x36896Cu);
    ctx->pc = 0x368968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368964u;
    // 0x368968: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x368964u, 0x36896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36896Cu;
label_36896c:
    // 0x36896c: 0x8e042960  lw          $a0, 0x2960($s0)
    ctx->pc = 0x36896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    // 0x368970: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x368970u;
    SET_GPR_U32(ctx, 31, 0x368978u);
    ctx->pc = 0x368974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368970u;
    // 0x368974: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x368970u, 0x368978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368978u;
label_368978:
    // 0x368978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x368978u;
    {
        const bool branch_taken_0x368978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368978u;
        // 0x36897c: 0xae112960  sw          $s1, 0x2960($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10592), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368978) {
            ctx->pc = 0x368990u;
            goto label_368990;
        }
    }
    ctx->pc = 0x368980u;
label_368980:
    // 0x368980: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x368980u;
    SET_GPR_U32(ctx, 31, 0x368988u);
    ctx->pc = 0x368984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368980u;
    // 0x368984: 0x8e042960  lw          $a0, 0x2960($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x368980u, 0x368988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368988u;
label_368988:
    // 0x368988: 0xae002960  sw          $zero, 0x2960($s0)
    ctx->pc = 0x368988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10592), GPR_U32(ctx, 0));
    // 0x36898c: 0x0  nop
    ctx->pc = 0x36898cu;
    // NOP
label_368990:
    // 0x368990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x368990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368994: 0xa20304d1  sb          $v1, 0x4D1($s0)
    ctx->pc = 0x368994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1233), (uint8_t)GPR_U32(ctx, 3));
    // 0x368998: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x368998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x36899c: 0xa20304d2  sb          $v1, 0x4D2($s0)
    ctx->pc = 0x36899cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1234), (uint8_t)GPR_U32(ctx, 3));
    // 0x3689a0: 0xa20004d3  sb          $zero, 0x4D3($s0)
    ctx->pc = 0x3689a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3689a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3689a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3689a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3689a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3689ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3689acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3689b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3689B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3689B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689B0u;
        // 0x3689b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3689B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3689B8u;
}
