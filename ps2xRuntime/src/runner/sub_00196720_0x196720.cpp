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

// Function: sub_00196720
// Address: 0x196720 - 0x196934
void sub_00196720_0x196720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196720_0x196720");
#endif

    switch (ctx->pc) {
        case 0x196768u: goto label_196768;
        case 0x1967e0u: goto label_1967e0;
        case 0x1967f4u: goto label_1967f4;
        case 0x196840u: goto label_196840;
        case 0x196878u: goto label_196878;
        case 0x19688cu: goto label_19688c;
        case 0x1968b8u: goto label_1968b8;
        case 0x1968f0u: goto label_1968f0;
        case 0x196918u: goto label_196918;
        default: break;
    }

    ctx->pc = 0x196720u;

    // 0x196720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196728: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x196728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19672c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x196730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196734: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x196734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x196738: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x196738u;
    {
        const bool branch_taken_0x196738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196738u;
        // 0x19673c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196738) {
            ctx->pc = 0x1967E8u;
            goto label_1967e8;
        }
    }
    ctx->pc = 0x196740u;
    // 0x196740: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196740u;
    {
        const bool branch_taken_0x196740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196740) {
            ctx->pc = 0x196750u;
            goto label_196750;
        }
    }
    ctx->pc = 0x196748u;
    // 0x196748: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x196748u;
    {
        const bool branch_taken_0x196748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196748) {
            ctx->pc = 0x196880u;
            goto label_196880;
        }
    }
    ctx->pc = 0x196750u;
label_196750:
    // 0x196750: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x196754: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x196754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196758: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x19675c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196760: 0xc056e04  jal         func_15B810
    ctx->pc = 0x196760u;
    SET_GPR_U32(ctx, 31, 0x196768u);
    ctx->pc = 0x196764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196760u;
    // 0x196764: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x196760u, 0x196768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196768u;
label_196768:
    // 0x196768: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x196768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19676c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19676Cu;
    {
        const bool branch_taken_0x19676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19676Cu;
        // 0x196770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19676c) {
            ctx->pc = 0x196778u;
            goto label_196778;
        }
    }
    ctx->pc = 0x196774u;
    // 0x196774: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x196774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_196778:
    // 0x196778: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19677c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19677Cu;
    {
        const bool branch_taken_0x19677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19677c) {
            ctx->pc = 0x196790u;
            goto label_196790;
        }
    }
    ctx->pc = 0x196784u;
    // 0x196784: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x196784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x196788: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19678c: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x19678cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_196790:
    // 0x196790: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x196794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196798: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196798u;
    {
        const bool branch_taken_0x196798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196798u;
        // 0x19679c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196798) {
            ctx->pc = 0x1967A8u;
            goto label_1967a8;
        }
    }
    ctx->pc = 0x1967A0u;
    // 0x1967a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1967A0u;
    {
        const bool branch_taken_0x1967a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A0u;
        // 0x1967a4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967a0) {
            ctx->pc = 0x1967B0u;
            goto label_1967b0;
        }
    }
    ctx->pc = 0x1967A8u;
label_1967a8:
    // 0x1967a8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1967a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1967ac: 0x0  nop
    ctx->pc = 0x1967acu;
    // NOP
label_1967b0:
    // 0x1967b0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1967b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1967b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x1967b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1967b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1967bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1967bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x1967c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1967c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1967c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1967c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1967ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967d0: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x1967d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x1967d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1967d8: 0xc09565c  jal         func_255970
    ctx->pc = 0x1967D8u;
    SET_GPR_U32(ctx, 31, 0x1967E0u);
    ctx->pc = 0x1967DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967D8u;
    // 0x1967dc: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x1967D8u, 0x1967E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967E0u;
label_1967e0:
    // 0x1967e0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1967E0u;
    {
        const bool branch_taken_0x1967e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967e0) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x1967E8u;
label_1967e8:
    // 0x1967e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1967ec: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1967ECu;
    SET_GPR_U32(ctx, 31, 0x1967F4u);
    ctx->pc = 0x1967F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967ECu;
    // 0x1967f0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x1967ECu, 0x1967F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967F4u;
label_1967f4:
    // 0x1967f4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1967F4u;
    {
        const bool branch_taken_0x1967f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967f4) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x1967FCu;
    // 0x1967fc: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1967fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x196800: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196800u;
    {
        const bool branch_taken_0x196800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196800) {
            ctx->pc = 0x196840u;
            goto label_196840;
        }
    }
    ctx->pc = 0x196808u;
    // 0x196808: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x196808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x19680c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196810: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196814: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196818: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x19681c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196824: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x196828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19682c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19682cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196834: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196838: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196838u;
    SET_GPR_U32(ctx, 31, 0x196840u);
    ctx->pc = 0x19683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196838u;
    // 0x19683c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196838u, 0x196840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196840u;
label_196840:
    // 0x196840: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x196844: 0x8c22ea28  lw          $v0, -0x15D8($at)
    ctx->pc = 0x196844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x196848: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x196848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x19684c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19684Cu;
    {
        const bool branch_taken_0x19684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19684Cu;
        // 0x196850: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19684c) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x196854u;
    // 0x196854: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196858: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x196858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x19685c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x19685cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196860: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19686c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19686cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196870: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x196870u;
    SET_GPR_U32(ctx, 31, 0x196878u);
    ctx->pc = 0x196874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196870u;
    // 0x196874: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x196870u, 0x196878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196878u;
label_196878:
    // 0x196878: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x196878u;
    {
        const bool branch_taken_0x196878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196878) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x196880u;
label_196880:
    // 0x196880: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196884: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196884u;
    SET_GPR_U32(ctx, 31, 0x19688Cu);
    ctx->pc = 0x196888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196884u;
    // 0x196888: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196884u, 0x19688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19688Cu;
label_19688c:
    // 0x19688c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19688Cu;
    {
        const bool branch_taken_0x19688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19688Cu;
        // 0x196890: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19688c) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x196894u;
    // 0x196894: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x196898: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x196898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x19689c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1968a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x1968a4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1968a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x1968a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1968a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1968ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1968acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1968b0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x1968B0u;
    SET_GPR_U32(ctx, 31, 0x1968B8u);
    ctx->pc = 0x1968B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968B0u;
    // 0x1968b4: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x1968B0u, 0x1968B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968B8u;
label_1968b8:
    // 0x1968b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1968B8u;
    {
        const bool branch_taken_0x1968b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968B8u;
        // 0x1968bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968b8) {
            ctx->pc = 0x196920u;
            goto label_196920;
        }
    }
    ctx->pc = 0x1968C0u;
label_1968c0:
    // 0x1968c0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x1968c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1968c4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1968c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1968c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1968c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1968cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0x2631da00  addiu       $s1, $s1, -0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x1968F0u;
            goto label_1968f0;
        }
    }
    ctx->pc = 0x1968D4u;
    // 0x1968d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1968d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1968d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1968dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1968e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1968e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e8: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x1968E8u;
    SET_GPR_U32(ctx, 31, 0x1968F0u);
    ctx->pc = 0x1968ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968E8u;
    // 0x1968ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x1968E8u, 0x1968F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968F0u;
label_1968f0:
    // 0x1968f0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x1968f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1968f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1968f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1968f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1968F8u;
    {
        const bool branch_taken_0x1968f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968F8u;
        // 0x1968fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968f8) {
            ctx->pc = 0x196918u;
            goto label_196918;
        }
    }
    ctx->pc = 0x196900u;
    // 0x196900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19690c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19690cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196910: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x196910u;
    SET_GPR_U32(ctx, 31, 0x196918u);
    ctx->pc = 0x196914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196910u;
    // 0x196914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x196910u, 0x196918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196918u;
label_196918:
    // 0x196918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19691c: 0x0  nop
    ctx->pc = 0x19691cu;
    // NOP
label_196920:
    // 0x196920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x196920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196924: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19692c: 0x3e00008  jr          $ra
    ctx->pc = 0x19692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19692Cu;
        // 0x196930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19692Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196934u;
}
