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

// Function: sub_002E7830
// Address: 0x2e7830 - 0x2e79b0
void sub_002E7830_0x2e7830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7830_0x2e7830");
#endif

    switch (ctx->pc) {
        case 0x2e784cu: goto label_2e784c;
        case 0x2e7864u: goto label_2e7864;
        case 0x2e7898u: goto label_2e7898;
        case 0x2e78b0u: goto label_2e78b0;
        case 0x2e78c8u: goto label_2e78c8;
        case 0x2e78d8u: goto label_2e78d8;
        case 0x2e7910u: goto label_2e7910;
        case 0x2e7928u: goto label_2e7928;
        case 0x2e793cu: goto label_2e793c;
        case 0x2e7954u: goto label_2e7954;
        case 0x2e7968u: goto label_2e7968;
        case 0x2e799cu: goto label_2e799c;
        default: break;
    }

    ctx->pc = 0x2e7830u;

    // 0x2e7830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e783c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7840: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2e7840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2e7844: 0xc0e1b14  jal         func_386C50
    ctx->pc = 0x2E7844u;
    SET_GPR_U32(ctx, 31, 0x2E784Cu);
    ctx->pc = 0x2E7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7844u;
    // 0x2e7848: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386C50u, 0x2E7844u, 0x2E784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E784Cu;
label_2e784c:
    // 0x2e784c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7850: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E7850u;
    {
        const bool branch_taken_0x2e7850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7850u;
        // 0x2e7854: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7850) {
            ctx->pc = 0x2E79A0u;
            goto label_2e79a0;
        }
    }
    ctx->pc = 0x2E7858u;
    // 0x2e7858: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e7858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e785c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2E785Cu;
    SET_GPR_U32(ctx, 31, 0x2E7864u);
    ctx->pc = 0x2E7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E785Cu;
    // 0x2e7860: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2E785Cu, 0x2E7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7864u;
label_2e7864:
    // 0x2e7864: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7864u;
    {
        const bool branch_taken_0x2e7864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7864u;
        // 0x2e7868: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7864) {
            ctx->pc = 0x2E7898u;
            goto label_2e7898;
        }
    }
    ctx->pc = 0x2E786Cu;
    // 0x2e786c: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2e786cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2e7870: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2e7870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2e7874: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x2e7874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x2e7878: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2e7878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2e787c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e787cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e7880: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2e7880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2e7884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7888: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x2e7888u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2e788c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2e788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2e7890: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2E7890u;
    SET_GPR_U32(ctx, 31, 0x2E7898u);
    ctx->pc = 0x2E7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7890u;
    // 0x2e7894: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2E7890u, 0x2E7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7898u;
label_2e7898:
    // 0x2e7898: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e789c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2e789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2e78a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E78A0u;
    {
        const bool branch_taken_0x2e78a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78A0u;
        // 0x2e78a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78a0) {
            ctx->pc = 0x2E78B0u;
            goto label_2e78b0;
        }
    }
    ctx->pc = 0x2E78A8u;
    // 0x2e78a8: 0xc0ba324  jal         func_2E8C90
    ctx->pc = 0x2E78A8u;
    SET_GPR_U32(ctx, 31, 0x2E78B0u);
    ctx->pc = 0x2E8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8C90u, 0x2E78A8u, 0x2E78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78B0u;
label_2e78b0:
    // 0x2e78b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e78b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e78b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E78B8u;
    {
        const bool branch_taken_0x2e78b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78B8u;
        // 0x2e78bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78b8) {
            ctx->pc = 0x2E78D0u;
            goto label_2e78d0;
        }
    }
    ctx->pc = 0x2E78C0u;
    // 0x2e78c0: 0xc0b9f7c  jal         func_2E7DF0
    ctx->pc = 0x2E78C0u;
    SET_GPR_U32(ctx, 31, 0x2E78C8u);
    ctx->pc = 0x2E7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DF0u, 0x2E78C0u, 0x2E78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78C8u;
label_2e78c8:
    // 0x2e78c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E78C8u;
    {
        const bool branch_taken_0x2e78c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e78c8) {
            ctx->pc = 0x2E78F8u;
            goto label_2e78f8;
        }
    }
    ctx->pc = 0x2E78D0u;
label_2e78d0:
    // 0x2e78d0: 0xc0ba2d4  jal         func_2E8B50
    ctx->pc = 0x2E78D0u;
    SET_GPR_U32(ctx, 31, 0x2E78D8u);
    ctx->pc = 0x2E78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78D0u;
    // 0x2e78d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8B50u, 0x2E78D0u, 0x2E78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78D8u;
label_2e78d8:
    // 0x2e78d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E78D8u;
    {
        const bool branch_taken_0x2e78d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e78d8) {
            ctx->pc = 0x2E78F8u;
            goto label_2e78f8;
        }
    }
    ctx->pc = 0x2E78E0u;
    // 0x2e78e0: 0xa6000152  sh          $zero, 0x152($s0)
    ctx->pc = 0x2e78e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e78e4: 0x2402ff60  addiu       $v0, $zero, -0xA0
    ctx->pc = 0x2e78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    // 0x2e78e8: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x2e78e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e78ec: 0xa2000150  sb          $zero, 0x150($s0)
    ctx->pc = 0x2e78ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e78f0: 0xa2000151  sb          $zero, 0x151($s0)
    ctx->pc = 0x2e78f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e78f4: 0x0  nop
    ctx->pc = 0x2e78f4u;
    // NOP
label_2e78f8:
    // 0x2e78f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e78fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e7900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7900u;
    {
        const bool branch_taken_0x2e7900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7900u;
        // 0x2e7904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7900) {
            ctx->pc = 0x2E7910u;
            goto label_2e7910;
        }
    }
    ctx->pc = 0x2E7908u;
    // 0x2e7908: 0xc0ba024  jal         func_2E8090
    ctx->pc = 0x2E7908u;
    SET_GPR_U32(ctx, 31, 0x2E7910u);
    ctx->pc = 0x2E790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7908u;
    // 0x2e790c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8090u, 0x2E7908u, 0x2E7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7910u;
label_2e7910:
    // 0x2e7910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7914: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e7918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7918u;
    {
        const bool branch_taken_0x2e7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7918u;
        // 0x2e791c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7918) {
            ctx->pc = 0x2E7928u;
            goto label_2e7928;
        }
    }
    ctx->pc = 0x2E7920u;
    // 0x2e7920: 0xc0ba024  jal         func_2E8090
    ctx->pc = 0x2E7920u;
    SET_GPR_U32(ctx, 31, 0x2E7928u);
    ctx->pc = 0x2E7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7920u;
    // 0x2e7924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8090u, 0x2E7920u, 0x2E7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7928u;
label_2e7928:
    // 0x2e7928: 0x82020298  lb          $v0, 0x298($s0)
    ctx->pc = 0x2e7928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x2e792c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E792Cu;
    {
        const bool branch_taken_0x2e792c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E792Cu;
        // 0x2e7930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e792c) {
            ctx->pc = 0x2E7940u;
            goto label_2e7940;
        }
    }
    ctx->pc = 0x2E7934u;
    // 0x2e7934: 0xc0baee0  jal         func_2EBB80
    ctx->pc = 0x2E7934u;
    SET_GPR_U32(ctx, 31, 0x2E793Cu);
    ctx->pc = 0x2EBB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBB80u, 0x2E7934u, 0x2E793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E793Cu;
label_2e793c:
    // 0x2e793c: 0x0  nop
    ctx->pc = 0x2e793cu;
    // NOP
label_2e7940:
    // 0x2e7940: 0x820202e8  lb          $v0, 0x2E8($s0)
    ctx->pc = 0x2e7940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x2e7944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7944u;
    {
        const bool branch_taken_0x2e7944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7944u;
        // 0x2e7948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7944) {
            ctx->pc = 0x2E7958u;
            goto label_2e7958;
        }
    }
    ctx->pc = 0x2E794Cu;
    // 0x2e794c: 0xc0baee8  jal         func_2EBBA0
    ctx->pc = 0x2E794Cu;
    SET_GPR_U32(ctx, 31, 0x2E7954u);
    ctx->pc = 0x2EBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBA0u, 0x2E794Cu, 0x2E7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7954u;
label_2e7954:
    // 0x2e7954: 0x0  nop
    ctx->pc = 0x2e7954u;
    // NOP
label_2e7958:
    // 0x2e7958: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e7958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e795c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2e7960: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2E7960u;
    SET_GPR_U32(ctx, 31, 0x2E7968u);
    ctx->pc = 0x2E7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7960u;
    // 0x2e7964: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2E7960u, 0x2E7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7968u;
label_2e7968:
    // 0x2e7968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e796c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E796Cu;
    {
        const bool branch_taken_0x2e796c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E796Cu;
        // 0x2e7970: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e796c) {
            ctx->pc = 0x2E79A0u;
            goto label_2e79a0;
        }
    }
    ctx->pc = 0x2E7974u;
    // 0x2e7974: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2e7978: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e7978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e797c: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2e797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2e7980: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2e7980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2e7984: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e7984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e7988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e798c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2e798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2e7990: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x2e7990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x2e7994: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2E7994u;
    SET_GPR_U32(ctx, 31, 0x2E799Cu);
    ctx->pc = 0x2E7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7994u;
    // 0x2e7998: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2E7994u, 0x2E799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E799Cu;
label_2e799c:
    // 0x2e799c: 0x0  nop
    ctx->pc = 0x2e799cu;
    // NOP
label_2e79a0:
    // 0x2e79a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e79a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e79a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e79a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e79a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E79A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79A8u;
        // 0x2e79ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E79A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E79B0u;
}
