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

// Function: sub_003AF800
// Address: 0x3af800 - 0x3af9f4
void sub_003AF800_0x3af800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF800_0x3af800");
#endif

    switch (ctx->pc) {
        case 0x3af860u: goto label_3af860;
        case 0x3af888u: goto label_3af888;
        case 0x3af8d0u: goto label_3af8d0;
        case 0x3af97cu: goto label_3af97c;
        default: break;
    }

    ctx->pc = 0x3af800u;

    // 0x3af800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3af800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3af804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3af804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3af808: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3af808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3af80c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3af80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3af810: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3af810u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3af814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3af818: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3af818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af81c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3af81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3af820: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3af820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3af824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3af828: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3af828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3af82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3af830: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3af830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af834: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3af834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3af838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3af83c: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3af83cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3af840: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3af840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3af844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3af848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3af84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af850: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3af850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3af854: 0x2508f790  addiu       $t0, $t0, -0x870
    ctx->pc = 0x3af854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965136));
    // 0x3af858: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3AF858u;
    SET_GPR_U32(ctx, 31, 0x3AF860u);
    ctx->pc = 0x3AF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF858u;
    // 0x3af85c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3AF858u, 0x3AF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF860u;
label_3af860:
    // 0x3af860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af864: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3AF864u;
    {
        const bool branch_taken_0x3af864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF864u;
        // 0x3af868: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af864) {
            ctx->pc = 0x3AF9C0u;
            goto label_3af9c0;
        }
    }
    ctx->pc = 0x3AF86Cu;
    // 0x3af86c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3af86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af870: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3af870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af874: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3af874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af87c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3af87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3af880: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3AF880u;
    SET_GPR_U32(ctx, 31, 0x3AF888u);
    ctx->pc = 0x3AF884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF880u;
    // 0x3af884: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3AF880u, 0x3AF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF888u;
label_3af888:
    // 0x3af888: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3af888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3af88c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3af88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3af890: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3af890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af894: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3af894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3af898: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3af898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3af89c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3af89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3af8a0: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x3af8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3af8a4: 0x24422a50  addiu       $v0, $v0, 0x2A50
    ctx->pc = 0x3af8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10832));
    // 0x3af8a8: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3af8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3af8ac: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3af8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3af8b0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x3af8b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3af8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af8b8: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3af8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3af8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af8c0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3af8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af8c4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3af8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af8c8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3AF8C8u;
    SET_GPR_U32(ctx, 31, 0x3AF8D0u);
    ctx->pc = 0x3AF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8C8u;
    // 0x3af8cc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3AF8C8u, 0x3AF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF8D0u;
label_3af8d0:
    // 0x3af8d0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3af8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3af8d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3af8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3af8d8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3af8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3af8dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3af8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3af8e0: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x3af8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x3af8e4: 0x24422a5a  addiu       $v0, $v0, 0x2A5A
    ctx->pc = 0x3af8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10842));
    // 0x3af8e8: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3af8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3af8ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3af8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3af8f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3af8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af8f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF8F4u;
    {
        const bool branch_taken_0x3af8f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3AF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8F4u;
        // 0x3af8f8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af8f4) {
            ctx->pc = 0x3AF904u;
            goto label_3af904;
        }
    }
    ctx->pc = 0x3AF8FCu;
    // 0x3af8fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3af8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af900: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3af900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3af904:
    // 0x3af904: 0xa602055a  sh          $v0, 0x55A($s0)
    ctx->pc = 0x3af904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1370), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af908: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3af908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3af90c: 0x24422a58  addiu       $v0, $v0, 0x2A58
    ctx->pc = 0x3af90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10840));
    // 0x3af910: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3af910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3af914: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3af914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af918: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF918u;
    {
        const bool branch_taken_0x3af918 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3AF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF918u;
        // 0x3af91c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af918) {
            ctx->pc = 0x3AF924u;
            goto label_3af924;
        }
    }
    ctx->pc = 0x3AF920u;
    // 0x3af920: 0x41823  negu        $v1, $a0
    ctx->pc = 0x3af920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3af924:
    // 0x3af924: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x3af924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3af928: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3af928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3af92c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF92Cu;
    {
        const bool branch_taken_0x3af92c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3AF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF92Cu;
        // 0x3af930: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af92c) {
            ctx->pc = 0x3AF93Cu;
            goto label_3af93c;
        }
    }
    ctx->pc = 0x3AF934u;
    // 0x3af934: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3af934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af938: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3af938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3af93c:
    // 0x3af93c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3af93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af940: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF940u;
    {
        const bool branch_taken_0x3af940 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3AF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF940u;
        // 0x3af944: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af940) {
            ctx->pc = 0x3AF960u;
            goto label_3af960;
        }
    }
    ctx->pc = 0x3AF948u;
    // 0x3af948: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3af948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3af94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3af950: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3af950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3af954: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3af954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af958: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3af958u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3af95c: 0x0  nop
    ctx->pc = 0x3af95cu;
    // NOP
label_3af960:
    // 0x3af960: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x3af960u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af964: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3af964u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3af968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3af968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af96c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3af96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3af970: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3af970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3af974: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3AF974u;
    SET_GPR_U32(ctx, 31, 0x3AF97Cu);
    ctx->pc = 0x3AF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF974u;
    // 0x3af978: 0xa602055c  sh          $v0, 0x55C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1372), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3AF974u, 0x3AF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF97Cu;
label_3af97c:
    // 0x3af97c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3af97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3af980: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3af980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3af984: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3af984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3af988: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3af988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af98c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3af98cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3af990: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x3af990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3af994: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF994u;
    {
        const bool branch_taken_0x3af994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF994u;
        // 0x3af998: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af994) {
            ctx->pc = 0x3AF9A4u;
            goto label_3af9a4;
        }
    }
    ctx->pc = 0x3AF99Cu;
    // 0x3af99c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF99Cu;
    {
        const bool branch_taken_0x3af99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF99Cu;
        // 0x3af9a0: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af99c) {
            ctx->pc = 0x3AF9B4u;
            goto label_3af9b4;
        }
    }
    ctx->pc = 0x3AF9A4u;
label_3af9a4:
    // 0x3af9a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF9A4u;
    {
        const bool branch_taken_0x3af9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af9a4) {
            ctx->pc = 0x3AF9B4u;
            goto label_3af9b4;
        }
    }
    ctx->pc = 0x3AF9ACu;
    // 0x3af9ac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3AF9ACu;
    {
        const bool branch_taken_0x3af9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9ACu;
        // 0x3af9b0: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af9ac) {
            ctx->pc = 0x3AF9B4u;
            goto label_3af9b4;
        }
    }
    ctx->pc = 0x3AF9B4u;
label_3af9b4:
    // 0x3af9b4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3af9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af9b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF9B8u;
    {
        const bool branch_taken_0x3af9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9B8u;
        // 0x3af9bc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af9b8) {
            ctx->pc = 0x3AF9C8u;
            goto label_3af9c8;
        }
    }
    ctx->pc = 0x3AF9C0u;
label_3af9c0:
    // 0x3af9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9c4: 0x0  nop
    ctx->pc = 0x3af9c4u;
    // NOP
label_3af9c8:
    // 0x3af9c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3af9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3af9cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3af9ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3af9d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3af9d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af9d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3af9d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af9d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3af9d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af9dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3af9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3af9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3af9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3af9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9ECu;
        // 0x3af9f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF9F4u;
}
