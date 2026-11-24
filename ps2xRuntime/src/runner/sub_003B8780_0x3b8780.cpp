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

// Function: sub_003B8780
// Address: 0x3b8780 - 0x3b8988
void sub_003B8780_0x3b8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8780_0x3b8780");
#endif

    switch (ctx->pc) {
        case 0x3b87e0u: goto label_3b87e0;
        case 0x3b87ecu: goto label_3b87ec;
        case 0x3b8838u: goto label_3b8838;
        case 0x3b8890u: goto label_3b8890;
        case 0x3b88e0u: goto label_3b88e0;
        case 0x3b8958u: goto label_3b8958;
        case 0x3b8964u: goto label_3b8964;
        default: break;
    }

    ctx->pc = 0x3b8780u;

    // 0x3b8780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b8784: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b8788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b878c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8790: 0x90852b82  lbu         $a1, 0x2B82($a0)
    ctx->pc = 0x3b8790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11138)));
    // 0x3b8794: 0x10a30068  beq         $a1, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3B8794u;
    {
        const bool branch_taken_0x3b8794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8794u;
        // 0x3b8798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8794) {
            ctx->pc = 0x3B8938u;
            goto label_3b8938;
        }
    }
    ctx->pc = 0x3B879Cu;
    // 0x3b879c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b87a0: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x3B87A0u;
    {
        const bool branch_taken_0x3b87a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87A0u;
        // 0x3b87a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87a0) {
            ctx->pc = 0x3B88F0u;
            goto label_3b88f0;
        }
    }
    ctx->pc = 0x3B87A8u;
    // 0x3b87a8: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B87A8u;
    {
        const bool branch_taken_0x3b87a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b87a8) {
            ctx->pc = 0x3B8868u;
            goto label_3b8868;
        }
    }
    ctx->pc = 0x3B87B0u;
    // 0x3b87b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b87b4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B87B4u;
    {
        const bool branch_taken_0x3b87b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87B4u;
        // 0x3b87b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87b4) {
            ctx->pc = 0x3B8808u;
            goto label_3b8808;
        }
    }
    ctx->pc = 0x3B87BCu;
    // 0x3b87bc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B87BCu;
    {
        const bool branch_taken_0x3b87bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b87bc) {
            ctx->pc = 0x3B87D0u;
            goto label_3b87d0;
        }
    }
    ctx->pc = 0x3B87C4u;
    // 0x3b87c4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3B87C4u;
    {
        const bool branch_taken_0x3b87c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b87c4) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B87CCu;
    // 0x3b87cc: 0x0  nop
    ctx->pc = 0x3b87ccu;
    // NOP
label_3b87d0:
    // 0x3b87d0: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b87d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b87d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b87d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b87d8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B87D8u;
    SET_GPR_U32(ctx, 31, 0x3B87E0u);
    ctx->pc = 0x3B87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87D8u;
    // 0x3b87dc: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B87D8u, 0x3B87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87E0u;
label_3b87e0:
    // 0x3b87e0: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x3b87e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x3b87e4: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B87E4u;
    SET_GPR_U32(ctx, 31, 0x3B87ECu);
    ctx->pc = 0x3B87E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87E4u;
    // 0x3b87e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B87E4u, 0x3B87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87ECu;
label_3b87ec:
    // 0x3b87ec: 0x644301f4  daddiu      $v1, $v0, 0x1F4
    ctx->pc = 0x3b87ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)500);
    // 0x3b87f0: 0xa6032b80  sh          $v1, 0x2B80($s0)
    ctx->pc = 0x3b87f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b87f4: 0x92032b82  lbu         $v1, 0x2B82($s0)
    ctx->pc = 0x3b87f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11138)));
    // 0x3b87f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b87fc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3B87FCu;
    {
        const bool branch_taken_0x3b87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87FCu;
        // 0x3b8800: 0xa2032b82  sb          $v1, 0x2B82($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11138), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87fc) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8804u;
    // 0x3b8804: 0x0  nop
    ctx->pc = 0x3b8804u;
    // NOP
label_3b8808:
    // 0x3b8808: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x3b8808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3b880c: 0x96052b80  lhu         $a1, 0x2B80($s0)
    ctx->pc = 0x3b880cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x3b8810: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3b8810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b8814: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8814u;
    {
        const bool branch_taken_0x3b8814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8814) {
            ctx->pc = 0x3B8830u;
            goto label_3b8830;
        }
    }
    ctx->pc = 0x3B881Cu;
    // 0x3b881c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3b881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b8820: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b8820u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b8824: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3B8824u;
    {
        const bool branch_taken_0x3b8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8824u;
        // 0x3b8828: 0xa6032b80  sh          $v1, 0x2B80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8824) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B882Cu;
    // 0x3b882c: 0x0  nop
    ctx->pc = 0x3b882cu;
    // NOP
label_3b8830:
    // 0x3b8830: 0xc0ee1cc  jal         func_3B8730
    ctx->pc = 0x3B8830u;
    SET_GPR_U32(ctx, 31, 0x3B8838u);
    ctx->pc = 0x3B8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8830u;
    // 0x3b8834: 0xa6002b80  sh          $zero, 0x2B80($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8730u, 0x3B8830u, 0x3B8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8838u;
label_3b8838:
    // 0x3b8838: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3B8838u;
    {
        const bool branch_taken_0x3b8838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8838) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8840u;
    // 0x3b8840: 0x92032b82  lbu         $v1, 0x2B82($s0)
    ctx->pc = 0x3b8840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11138)));
    // 0x3b8844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8848: 0xa2032b82  sb          $v1, 0x2B82($s0)
    ctx->pc = 0x3b8848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11138), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b884c: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b884cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b8850: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x3b8850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x3b8854: 0xa2032b4c  sb          $v1, 0x2B4C($s0)
    ctx->pc = 0x3b8854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8858: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b8858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b885c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b885cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b8860: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3B8860u;
    {
        const bool branch_taken_0x3b8860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8860u;
        // 0x3b8864: 0xa2032b4c  sb          $v1, 0x2B4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8860) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8868u;
label_3b8868:
    // 0x3b8868: 0x9205065c  lbu         $a1, 0x65C($s0)
    ctx->pc = 0x3b8868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b886c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x3b886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x3b8870: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b8870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b8874: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x3b8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
    // 0x3b8878: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b887c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3b887cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b8880: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B8880u;
    {
        const bool branch_taken_0x3b8880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b8880) {
            ctx->pc = 0x3B88B8u;
            goto label_3b88b8;
        }
    }
    ctx->pc = 0x3B8888u;
    // 0x3b8888: 0xc0ee1cc  jal         func_3B8730
    ctx->pc = 0x3B8888u;
    SET_GPR_U32(ctx, 31, 0x3B8890u);
    ctx->pc = 0x3B8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8730u, 0x3B8888u, 0x3B8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8890u;
label_3b8890:
    // 0x3b8890: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B8890u;
    {
        const bool branch_taken_0x3b8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8890) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8898u;
    // 0x3b8898: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b8898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b889c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x3b889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x3b88a0: 0xa2032b4c  sb          $v1, 0x2B4C($s0)
    ctx->pc = 0x3b88a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b88a4: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b88a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b88a8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b88a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b88ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3B88ACu;
    {
        const bool branch_taken_0x3b88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88ACu;
        // 0x3b88b0: 0xa2032b4c  sb          $v1, 0x2B4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88ac) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B88B4u;
    // 0x3b88b4: 0x0  nop
    ctx->pc = 0x3b88b4u;
    // NOP
label_3b88b8:
    // 0x3b88b8: 0x92022b4c  lbu         $v0, 0x2B4C($s0)
    ctx->pc = 0x3b88b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b88bc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3b88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3b88c0: 0xa2022b4c  sb          $v0, 0x2B4C($s0)
    ctx->pc = 0x3b88c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b88c4: 0x92022b4c  lbu         $v0, 0x2B4C($s0)
    ctx->pc = 0x3b88c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b88c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b88c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b88cc: 0xa2022b4c  sb          $v0, 0x2B4C($s0)
    ctx->pc = 0x3b88ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b88d0: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b88d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b88d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3b88d8: 0xc0ef288  jal         func_3BCA20
    ctx->pc = 0x3B88D8u;
    SET_GPR_U32(ctx, 31, 0x3B88E0u);
    ctx->pc = 0x3B88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B88D8u;
    // 0x3b88dc: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA20u, 0x3B88D8u, 0x3B88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B88E0u;
label_3b88e0:
    // 0x3b88e0: 0x92032b82  lbu         $v1, 0x2B82($s0)
    ctx->pc = 0x3b88e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11138)));
    // 0x3b88e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b88e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B88E8u;
    {
        const bool branch_taken_0x3b88e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88E8u;
        // 0x3b88ec: 0xa2032b82  sb          $v1, 0x2B82($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11138), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88e8) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B88F0u;
label_3b88f0:
    // 0x3b88f0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3b88f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b88f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b88f8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B88F8u;
    {
        const bool branch_taken_0x3b88f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b88f8) {
            ctx->pc = 0x3B8920u;
            goto label_3b8920;
        }
    }
    ctx->pc = 0x3B8900u;
    // 0x3b8900: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b8900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b8904: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3b8904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3b8908: 0xa2032b4c  sb          $v1, 0x2B4C($s0)
    ctx->pc = 0x3b8908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b890c: 0x92032b4c  lbu         $v1, 0x2B4C($s0)
    ctx->pc = 0x3b890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x3b8910: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b8910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b8914: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B8914u;
    {
        const bool branch_taken_0x3b8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8914u;
        // 0x3b8918: 0xa2032b4c  sb          $v1, 0x2B4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8914) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B891Cu;
    // 0x3b891c: 0x0  nop
    ctx->pc = 0x3b891cu;
    // NOP
label_3b8920:
    // 0x3b8920: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x3b8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3b8924: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8928: 0x92032b82  lbu         $v1, 0x2B82($s0)
    ctx->pc = 0x3b8928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11138)));
    // 0x3b892c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B8930u;
    {
        const bool branch_taken_0x3b8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8930u;
        // 0x3b8934: 0xa2032b82  sb          $v1, 0x2B82($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11138), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8930) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8938u;
label_3b8938:
    // 0x3b8938: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3b8938u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b893c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8940: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B8940u;
    {
        const bool branch_taken_0x3b8940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b8940) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8948u;
    // 0x3b8948: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b8948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b894c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3b894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3b8950: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B8950u;
    SET_GPR_U32(ctx, 31, 0x3B8958u);
    ctx->pc = 0x3B8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8950u;
    // 0x3b8954: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B8950u, 0x3B8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8958u;
label_3b8958:
    // 0x3b8958: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x3b8958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x3b895c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B895Cu;
    SET_GPR_U32(ctx, 31, 0x3B8964u);
    ctx->pc = 0x3B8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B895Cu;
    // 0x3b8960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B895Cu, 0x3B8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8964u;
label_3b8964:
    // 0x3b8964: 0x644401f4  daddiu      $a0, $v0, 0x1F4
    ctx->pc = 0x3b8964u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)500);
    // 0x3b8968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b896c: 0xa6042b80  sh          $a0, 0x2B80($s0)
    ctx->pc = 0x3b896cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b8970: 0xa2032b82  sb          $v1, 0x2B82($s0)
    ctx->pc = 0x3b8970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11138), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8974: 0x0  nop
    ctx->pc = 0x3b8974u;
    // NOP
label_3b8978:
    // 0x3b8978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b897c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b897cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8980: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8980u;
        // 0x3b8984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8988u;
}
