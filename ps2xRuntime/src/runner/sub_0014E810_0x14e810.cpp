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

// Function: sub_0014E810
// Address: 0x14e810 - 0x14eba0
void sub_0014E810_0x14e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E810_0x14e810");
#endif

    switch (ctx->pc) {
        case 0x14e880u: goto label_14e880;
        case 0x14e88cu: goto label_14e88c;
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e9b0u: goto label_14e9b0;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14ea40u: goto label_14ea40;
        case 0x14ea58u: goto label_14ea58;
        case 0x14ea74u: goto label_14ea74;
        case 0x14ead0u: goto label_14ead0;
        case 0x14eae8u: goto label_14eae8;
        case 0x14eb00u: goto label_14eb00;
        case 0x14eb50u: goto label_14eb50;
        default: break;
    }

    ctx->pc = 0x14e810u;

    // 0x14e810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14e814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14e818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14e81c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14e820: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x14e820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e824: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14e828: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14e828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e82c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14e830: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e834: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e83c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e840: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14e840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e848: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14e848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e850: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14e850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e854: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x14e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x14e858: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14e858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e85c: 0xaf928564  sw          $s2, -0x7A9C($gp)
    ctx->pc = 0x14e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935908), GPR_U32(ctx, 18));
    // 0x14e860: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x14e860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x14e864: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x14e864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x14e868: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14e868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14e86c: 0x90a200e5  lbu         $v0, 0xE5($a1)
    ctx->pc = 0x14e86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 229)));
    // 0x14e870: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x14e874: 0xa0a200e5  sb          $v0, 0xE5($a1)
    ctx->pc = 0x14e874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 229), (uint8_t)GPR_U32(ctx, 2));
    // 0x14e878: 0xc053970  jal         func_14E5C0
    ctx->pc = 0x14E878u;
    SET_GPR_U32(ctx, 31, 0x14E880u);
    ctx->pc = 0x14E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E878u;
    // 0x14e87c: 0xa0a000e6  sb          $zero, 0xE6($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 230), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E5C0u, 0x14E878u, 0x14E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E880u;
label_14e880:
    // 0x14e880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e884: 0xc053b70  jal         func_14EDC0
    ctx->pc = 0x14E884u;
    SET_GPR_U32(ctx, 31, 0x14E88Cu);
    ctx->pc = 0x14E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E884u;
    // 0x14e888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EDC0u, 0x14E884u, 0x14E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E88Cu;
label_14e88c:
    // 0x14e88c: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x14e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x14e890: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14e894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E894u;
    {
        const bool branch_taken_0x14e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E894u;
        // 0x14e898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e894) {
            ctx->pc = 0x14E8A8u;
            goto label_14e8a8;
        }
    }
    ctx->pc = 0x14E89Cu;
    // 0x14e89c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x14E89Cu;
    {
        const bool branch_taken_0x14e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e89c) {
            ctx->pc = 0x14EB70u;
            goto label_14eb70;
        }
    }
    ctx->pc = 0x14E8A4u;
    // 0x14e8a4: 0x0  nop
    ctx->pc = 0x14e8a4u;
    // NOP
label_14e8a8:
    // 0x14e8a8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x14e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x14e8ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E8ACu;
    {
        const bool branch_taken_0x14e8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8ACu;
        // 0x14e8b0: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8ac) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E8B4u;
    // 0x14e8b4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x14e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14e8b8: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x14e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x14e8bc: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x14e8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x14e8c0: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x14E8C0u;
    SET_GPR_U32(ctx, 31, 0x14E8C8u);
    ctx->pc = 0x14E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8C0u;
    // 0x14e8c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x14E8C0u, 0x14E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8C8u;
label_14e8c8:
    // 0x14e8c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E8C8u;
    {
        const bool branch_taken_0x14e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e8c8) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E8D0u;
    // 0x14e8d0: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x14e8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x14e8d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14e8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e8d8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14E8D8u;
    {
        const bool branch_taken_0x14e8d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D8u;
        // 0x14e8dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8d8) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E8E0u;
    // 0x14e8e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8e4: 0x0  nop
    ctx->pc = 0x14e8e4u;
    // NOP
label_14e8e8:
    // 0x14e8e8: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x14e8ec: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x14e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e8f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14e8f4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14e8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e8f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e8fc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x14e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x14e900: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x14e900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x14e904: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x14e904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e908: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14E908u;
    {
        const bool branch_taken_0x14e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E908u;
        // 0x14e90c: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e908) {
            ctx->pc = 0x14E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e8e8;
        }
    }
    ctx->pc = 0x14E910u;
label_14e910:
    // 0x14e910: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x14e914: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x14e914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14e918: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x14E918u;
    {
        const bool branch_taken_0x14e918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e918) {
            ctx->pc = 0x14EB38u;
            goto label_14eb38;
        }
    }
    ctx->pc = 0x14E920u;
    // 0x14e920: 0x92500001  lbu         $s0, 0x1($s2)
    ctx->pc = 0x14e920u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x14e924: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e928: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E928u;
    {
        const bool branch_taken_0x14e928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E928u;
        // 0x14e92c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e928) {
            ctx->pc = 0x14E988u;
            goto label_14e988;
        }
    }
    ctx->pc = 0x14E930u;
    // 0x14e930: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E930u;
    {
        const bool branch_taken_0x14e930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e930) {
            ctx->pc = 0x14E978u;
            goto label_14e978;
        }
    }
    ctx->pc = 0x14E938u;
    // 0x14e938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e93c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E93Cu;
    {
        const bool branch_taken_0x14e93c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e93c) {
            ctx->pc = 0x14E968u;
            goto label_14e968;
        }
    }
    ctx->pc = 0x14E944u;
    // 0x14e944: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E944u;
    {
        const bool branch_taken_0x14e944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e944) {
            ctx->pc = 0x14E958u;
            goto label_14e958;
        }
    }
    ctx->pc = 0x14E94Cu;
    // 0x14e94c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14E94Cu;
    {
        const bool branch_taken_0x14e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e94c) {
            ctx->pc = 0x14E990u;
            goto label_14e990;
        }
    }
    ctx->pc = 0x14E954u;
    // 0x14e954: 0x0  nop
    ctx->pc = 0x14e954u;
    // NOP
label_14e958:
    // 0x14e958: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e95c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E95Cu;
    {
        const bool branch_taken_0x14e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E95Cu;
        // 0x14e960: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e95c) {
            ctx->pc = 0x14E990u;
            goto label_14e990;
        }
    }
    ctx->pc = 0x14E964u;
    // 0x14e964: 0x0  nop
    ctx->pc = 0x14e964u;
    // NOP
label_14e968:
    // 0x14e968: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14e96c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14E96Cu;
    {
        const bool branch_taken_0x14e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E96Cu;
        // 0x14e970: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e96c) {
            ctx->pc = 0x14E990u;
            goto label_14e990;
        }
    }
    ctx->pc = 0x14E974u;
    // 0x14e974: 0x0  nop
    ctx->pc = 0x14e974u;
    // NOP
label_14e978:
    // 0x14e978: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x14e97c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E97Cu;
    {
        const bool branch_taken_0x14e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E97Cu;
        // 0x14e980: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e97c) {
            ctx->pc = 0x14E990u;
            goto label_14e990;
        }
    }
    ctx->pc = 0x14E984u;
    // 0x14e984: 0x0  nop
    ctx->pc = 0x14e984u;
    // NOP
label_14e988:
    // 0x14e988: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14e98c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x14e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_14e990:
    // 0x14e990: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14e990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14e994: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14E994u;
    {
        const bool branch_taken_0x14e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E994u;
        // 0x14e998: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e994) {
            ctx->pc = 0x14EA20u;
            goto label_14ea20;
        }
    }
    ctx->pc = 0x14E99Cu;
    // 0x14e99c: 0x8c35f680  lw          $s5, -0x980($at)
    ctx->pc = 0x14e99cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964864)));
    // 0x14e9a0: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x14e9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e9a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14E9A4u;
    {
        const bool branch_taken_0x14e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9a4) {
            ctx->pc = 0x14EA20u;
            goto label_14ea20;
        }
    }
    ctx->pc = 0x14E9ACu;
    // 0x14e9ac: 0x0  nop
    ctx->pc = 0x14e9acu;
    // NOP
label_14e9b0:
    // 0x14e9b0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x14e9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e9b4: 0x8eb40010  lw          $s4, 0x10($s5)
    ctx->pc = 0x14e9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14e9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9c0: 0xc053bf4  jal         func_14EFD0
    ctx->pc = 0x14E9C0u;
    SET_GPR_U32(ctx, 31, 0x14E9C8u);
    ctx->pc = 0x14E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9C0u;
    // 0x14e9c4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFD0u, 0x14E9C0u, 0x14E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C8u;
label_14e9c8:
    // 0x14e9c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E9C8u;
    {
        const bool branch_taken_0x14e9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C8u;
        // 0x14e9cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9c8) {
            ctx->pc = 0x14EA10u;
            goto label_14ea10;
        }
    }
    ctx->pc = 0x14E9D0u;
    // 0x14e9d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14e9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14e9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9dc: 0xc053c34  jal         func_14F0D0
    ctx->pc = 0x14E9DCu;
    SET_GPR_U32(ctx, 31, 0x14E9E4u);
    ctx->pc = 0x14E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9DCu;
    // 0x14e9e0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0D0u, 0x14E9DCu, 0x14E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E4u;
label_14e9e4:
    // 0x14e9e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E9E4u;
    {
        const bool branch_taken_0x14e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9e4) {
            ctx->pc = 0x14EA10u;
            goto label_14ea10;
        }
    }
    ctx->pc = 0x14E9ECu;
    // 0x14e9ec: 0x8ea206b4  lw          $v0, 0x6B4($s5)
    ctx->pc = 0x14e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1716)));
    // 0x14e9f0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14e9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14e9f4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14e9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14e9f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E9F8u;
    {
        const bool branch_taken_0x14e9f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9F8u;
        // 0x14e9fc: 0xaea206b4  sw          $v0, 0x6B4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9f8) {
            ctx->pc = 0x14EA10u;
            goto label_14ea10;
        }
    }
    ctx->pc = 0x14EA00u;
    // 0x14ea00: 0x92a200e6  lbu         $v0, 0xE6($s5)
    ctx->pc = 0x14ea00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 230)));
    // 0x14ea04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ea08: 0xa2a200e6  sb          $v0, 0xE6($s5)
    ctx->pc = 0x14ea08u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 230), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ea0c: 0x0  nop
    ctx->pc = 0x14ea0cu;
    // NOP
label_14ea10:
    // 0x14ea10: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x14ea10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14ea14: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14EA14u;
    {
        const bool branch_taken_0x14ea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA14u;
        // 0x14ea18: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea14) {
            ctx->pc = 0x14E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e9b0;
        }
    }
    ctx->pc = 0x14EA1Cu;
    // 0x14ea1c: 0x0  nop
    ctx->pc = 0x14ea1cu;
    // NOP
label_14ea20:
    // 0x14ea20: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x14ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x14ea24: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x14ea28: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14EA28u;
    {
        const bool branch_taken_0x14ea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA28u;
        // 0x14ea2c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea28) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA30u;
    // 0x14ea30: 0x8c342410  lw          $s4, 0x2410($at)
    ctx->pc = 0x14ea30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x14ea34: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x14ea34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14ea38: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14EA38u;
    {
        const bool branch_taken_0x14ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea38) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA40u;
label_14ea40:
    // 0x14ea40: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x14ea40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14ea44: 0x8e950010  lw          $s5, 0x10($s4)
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14ea48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea50: 0xc053bf4  jal         func_14EFD0
    ctx->pc = 0x14EA50u;
    SET_GPR_U32(ctx, 31, 0x14EA58u);
    ctx->pc = 0x14EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA50u;
    // 0x14ea54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFD0u, 0x14EA50u, 0x14EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA58u;
label_14ea58:
    // 0x14ea58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EA58u;
    {
        const bool branch_taken_0x14ea58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA58u;
        // 0x14ea5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea58) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EA60u;
    // 0x14ea60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14ea64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x14ea68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea6c: 0xc053c34  jal         func_14F0D0
    ctx->pc = 0x14EA6Cu;
    SET_GPR_U32(ctx, 31, 0x14EA74u);
    ctx->pc = 0x14EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA6Cu;
    // 0x14ea70: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0D0u, 0x14EA6Cu, 0x14EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA74u;
label_14ea74:
    // 0x14ea74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EA74u;
    {
        const bool branch_taken_0x14ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea74) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EA7Cu;
    // 0x14ea7c: 0x8e8206b4  lw          $v0, 0x6B4($s4)
    ctx->pc = 0x14ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1716)));
    // 0x14ea80: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x14ea80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14ea84: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14ea88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EA88u;
    {
        const bool branch_taken_0x14ea88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA88u;
        // 0x14ea8c: 0xae8206b4  sw          $v0, 0x6B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea88) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EA90u;
    // 0x14ea90: 0x928200e6  lbu         $v0, 0xE6($s4)
    ctx->pc = 0x14ea90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 230)));
    // 0x14ea94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ea98: 0xa28200e6  sb          $v0, 0xE6($s4)
    ctx->pc = 0x14ea98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 230), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ea9c: 0x0  nop
    ctx->pc = 0x14ea9cu;
    // NOP
label_14eaa0:
    // 0x14eaa0: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x14eaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14eaa4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14EAA4u;
    {
        const bool branch_taken_0x14eaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAA4u;
        // 0x14eaa8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaa4) {
            ctx->pc = 0x14EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ea40;
        }
    }
    ctx->pc = 0x14EAACu;
    // 0x14eaac: 0x0  nop
    ctx->pc = 0x14eaacu;
    // NOP
label_14eab0:
    // 0x14eab0: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x14eab4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x14eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x14eab8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14EAB8u;
    {
        const bool branch_taken_0x14eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAB8u;
        // 0x14eabc: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eab8) {
            ctx->pc = 0x14EB38u;
            goto label_14eb38;
        }
    }
    ctx->pc = 0x14EAC0u;
    // 0x14eac0: 0x8c342f90  lw          $s4, 0x2F90($at)
    ctx->pc = 0x14eac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12176)));
    // 0x14eac4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x14eac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14eac8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14EAC8u;
    {
        const bool branch_taken_0x14eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eac8) {
            ctx->pc = 0x14EB38u;
            goto label_14eb38;
        }
    }
    ctx->pc = 0x14EAD0u;
label_14ead0:
    // 0x14ead0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x14ead0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14ead4: 0x8e950010  lw          $s5, 0x10($s4)
    ctx->pc = 0x14ead4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14ead8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eadc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14eadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eae0: 0xc053bf4  jal         func_14EFD0
    ctx->pc = 0x14EAE0u;
    SET_GPR_U32(ctx, 31, 0x14EAE8u);
    ctx->pc = 0x14EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAE0u;
    // 0x14eae4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFD0u, 0x14EAE0u, 0x14EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE8u;
label_14eae8:
    // 0x14eae8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAE8u;
        // 0x14eaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14EB28u;
            goto label_14eb28;
        }
    }
    ctx->pc = 0x14EAF0u;
    // 0x14eaf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14eaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eaf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14eaf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eaf8: 0xc053c50  jal         func_14F140
    ctx->pc = 0x14EAF8u;
    SET_GPR_U32(ctx, 31, 0x14EB00u);
    ctx->pc = 0x14EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAF8u;
    // 0x14eafc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F140u, 0x14EAF8u, 0x14EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB00u;
label_14eb00:
    // 0x14eb00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EB00u;
    {
        const bool branch_taken_0x14eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb00) {
            ctx->pc = 0x14EB28u;
            goto label_14eb28;
        }
    }
    ctx->pc = 0x14EB08u;
    // 0x14eb08: 0x8e8206b4  lw          $v0, 0x6B4($s4)
    ctx->pc = 0x14eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1716)));
    // 0x14eb0c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x14eb10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14eb14: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EB14u;
    {
        const bool branch_taken_0x14eb14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB14u;
        // 0x14eb18: 0xae8206b4  sw          $v0, 0x6B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb14) {
            ctx->pc = 0x14EB28u;
            goto label_14eb28;
        }
    }
    ctx->pc = 0x14EB1Cu;
    // 0x14eb1c: 0x928200e6  lbu         $v0, 0xE6($s4)
    ctx->pc = 0x14eb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 230)));
    // 0x14eb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14eb24: 0xa28200e6  sb          $v0, 0xE6($s4)
    ctx->pc = 0x14eb24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 230), (uint8_t)GPR_U32(ctx, 2));
label_14eb28:
    // 0x14eb28: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x14eb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14eb2c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14EB2Cu;
    {
        const bool branch_taken_0x14eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB2Cu;
        // 0x14eb30: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb2c) {
            ctx->pc = 0x14EAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ead0;
        }
    }
    ctx->pc = 0x14EB34u;
    // 0x14eb34: 0x0  nop
    ctx->pc = 0x14eb34u;
    // NOP
label_14eb38:
    // 0x14eb38: 0x924200e5  lbu         $v0, 0xE5($s2)
    ctx->pc = 0x14eb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 229)));
    // 0x14eb3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14eb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb44: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x14eb48: 0xc0539ec  jal         func_14E7B0
    ctx->pc = 0x14EB48u;
    SET_GPR_U32(ctx, 31, 0x14EB50u);
    ctx->pc = 0x14EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB48u;
    // 0x14eb4c: 0xa24200e5  sb          $v0, 0xE5($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 229), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7B0u, 0x14EB48u, 0x14EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB50u;
label_14eb50:
    // 0x14eb50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x14eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14eb54: 0x561825  or          $v1, $v0, $s6
    ctx->pc = 0x14eb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x14eb58: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x14eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x14eb5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14eb60: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x14eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x14eb64: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x14eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x14eb68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14eb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14eb6c: 0x0  nop
    ctx->pc = 0x14eb6cu;
    // NOP
label_14eb70:
    // 0x14eb70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14eb74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14eb74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14eb78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14eb78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14eb7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14eb7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14eb80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14eb80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14eb84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14eb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eb88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14eb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eb8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eb98: 0x3e00008  jr          $ra
    ctx->pc = 0x14EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB98u;
        // 0x14eb9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EBA0u;
}
