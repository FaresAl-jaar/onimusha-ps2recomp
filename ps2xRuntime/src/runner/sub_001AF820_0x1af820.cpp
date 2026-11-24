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

// Function: sub_001AF820
// Address: 0x1af820 - 0x1b04ac
void sub_001AF820_0x1af820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF820_0x1af820");
#endif

    switch (ctx->pc) {
        case 0x1af86cu: goto label_1af86c;
        case 0x1af884u: goto label_1af884;
        case 0x1af898u: goto label_1af898;
        case 0x1af8c8u: goto label_1af8c8;
        case 0x1af9b4u: goto label_1af9b4;
        case 0x1af9c4u: goto label_1af9c4;
        case 0x1af9d4u: goto label_1af9d4;
        case 0x1af9f4u: goto label_1af9f4;
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afaa4u: goto label_1afaa4;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afac8u: goto label_1afac8;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afaf0u: goto label_1afaf0;
        case 0x1afb08u: goto label_1afb08;
        case 0x1afb20u: goto label_1afb20;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb40u: goto label_1afb40;
        case 0x1afb4cu: goto label_1afb4c;
        case 0x1afb70u: goto label_1afb70;
        case 0x1afbb0u: goto label_1afbb0;
        case 0x1afbc4u: goto label_1afbc4;
        case 0x1afbd4u: goto label_1afbd4;
        case 0x1afbe4u: goto label_1afbe4;
        case 0x1afc04u: goto label_1afc04;
        case 0x1afc14u: goto label_1afc14;
        case 0x1afc38u: goto label_1afc38;
        case 0x1afc5cu: goto label_1afc5c;
        case 0x1afc80u: goto label_1afc80;
        case 0x1afca4u: goto label_1afca4;
        case 0x1afcb0u: goto label_1afcb0;
        case 0x1afcc0u: goto label_1afcc0;
        case 0x1afcd0u: goto label_1afcd0;
        case 0x1afcf0u: goto label_1afcf0;
        case 0x1afcf8u: goto label_1afcf8;
        case 0x1afd0cu: goto label_1afd0c;
        case 0x1afd54u: goto label_1afd54;
        case 0x1afd68u: goto label_1afd68;
        case 0x1afd8cu: goto label_1afd8c;
        case 0x1afda0u: goto label_1afda0;
        case 0x1afdc4u: goto label_1afdc4;
        case 0x1afdd0u: goto label_1afdd0;
        case 0x1afdf4u: goto label_1afdf4;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe20u: goto label_1afe20;
        case 0x1afe6cu: goto label_1afe6c;
        case 0x1afe74u: goto label_1afe74;
        case 0x1afea0u: goto label_1afea0;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afee0u: goto label_1afee0;
        case 0x1afef0u: goto label_1afef0;
        case 0x1aff08u: goto label_1aff08;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff68u: goto label_1aff68;
        case 0x1affa8u: goto label_1affa8;
        case 0x1afff0u: goto label_1afff0;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b00f4u: goto label_1b00f4;
        case 0x1b0104u: goto label_1b0104;
        case 0x1b0114u: goto label_1b0114;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b0130u: goto label_1b0130;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0270u: goto label_1b0270;
        case 0x1b02e0u: goto label_1b02e0;
        case 0x1b0334u: goto label_1b0334;
        case 0x1b03b4u: goto label_1b03b4;
        case 0x1b0408u: goto label_1b0408;
        case 0x1b0474u: goto label_1b0474;
        default: break;
    }

    ctx->pc = 0x1af820u;

    // 0x1af820: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
    // 0x1af824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af828: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1af828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1af82c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af830: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1af830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1af834: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1af834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1af838: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1af838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1af83c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1af83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1af840: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1af840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1af844: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1af844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af848: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1af848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1af84c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1af84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1af850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1af850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1af854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1af854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1af858: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1af858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1af85c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1af85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1af860: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x1af860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x1af864: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AF864u;
    SET_GPR_U32(ctx, 31, 0x1AF86Cu);
    ctx->pc = 0x1AF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF864u;
    // 0x1af868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AF864u, 0x1AF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF86Cu;
label_1af86c:
    // 0x1af86c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1af870: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1af870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1af874: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x1af878: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1af878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1af87c: 0xc041442  jal         func_105108
    ctx->pc = 0x1AF87Cu;
    SET_GPR_U32(ctx, 31, 0x1AF884u);
    ctx->pc = 0x1AF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF87Cu;
    // 0x1af880: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1AF87Cu, 0x1AF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF884u;
label_1af884:
    // 0x1af884: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1af888: 0x27a405b0  addiu       $a0, $sp, 0x5B0
    ctx->pc = 0x1af888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
    // 0x1af88c: 0x27a605cc  addiu       $a2, $sp, 0x5CC
    ctx->pc = 0x1af88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1484));
    // 0x1af890: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1AF890u;
    SET_GPR_U32(ctx, 31, 0x1AF898u);
    ctx->pc = 0x1AF894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF890u;
    // 0x1af894: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1AF890u, 0x1AF898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF898u;
label_1af898:
    // 0x1af898: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1af898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1af89c: 0x27a205b4  addiu       $v0, $sp, 0x5B4
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
    // 0x1af8a0: 0xafa305b0  sw          $v1, 0x5B0($sp)
    ctx->pc = 0x1af8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 3));
    // 0x1af8a4: 0x27b705b8  addiu       $s7, $sp, 0x5B8
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
    // 0x1af8a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1af8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1af8ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8b8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1af8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1af8bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af8c0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AF8C0u;
    SET_GPR_U32(ctx, 31, 0x1AF8C8u);
    ctx->pc = 0x1AF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8C0u;
    // 0x1af8c4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AF8C0u, 0x1AF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8C8u;
label_1af8c8:
    // 0x1af8c8: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1af8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1af8cc: 0x8fa305b0  lw          $v1, 0x5B0($sp)
    ctx->pc = 0x1af8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x1af8d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1af8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1af8d4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1af8d8: 0x27a205b4  addiu       $v0, $sp, 0x5B4
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
    // 0x1af8dc: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x1af8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1af8e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af8e4: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1af8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1af8e8: 0x2464f900  addiu       $a0, $v1, -0x700
    ctx->pc = 0x1af8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x1af8ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1af8f0: 0x2443f870  addiu       $v1, $v0, -0x790
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
    // 0x1af8f4: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1af8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af8f8: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af8fc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1af8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af900: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af904: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1af904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af908: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1af90c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1af90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af910: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF910u;
    {
        const bool branch_taken_0x1af910 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1AF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF910u;
        // 0x1af914: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af910) {
            ctx->pc = 0x1AF920u;
            goto label_1af920;
        }
    }
    ctx->pc = 0x1AF918u;
    // 0x1af918: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af91c: 0x0  nop
    ctx->pc = 0x1af91cu;
    // NOP
label_1af920:
    // 0x1af920: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF920u;
    {
        const bool branch_taken_0x1af920 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1af920) {
            ctx->pc = 0x1AF930u;
            goto label_1af930;
        }
    }
    ctx->pc = 0x1AF928u;
    // 0x1af928: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af92c: 0x0  nop
    ctx->pc = 0x1af92cu;
    // NOP
label_1af930:
    // 0x1af930: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF930u;
    {
        const bool branch_taken_0x1af930 = (GPR_S64(ctx, 19) > 0);
        if (branch_taken_0x1af930) {
            ctx->pc = 0x1AF940u;
            goto label_1af940;
        }
    }
    ctx->pc = 0x1AF938u;
    // 0x1af938: 0x69940  sll         $s3, $a2, 5
    ctx->pc = 0x1af938u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1af93c: 0x0  nop
    ctx->pc = 0x1af93cu;
    // NOP
label_1af940:
    // 0x1af940: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF940u;
    {
        const bool branch_taken_0x1af940 = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x1af940) {
            ctx->pc = 0x1AF950u;
            goto label_1af950;
        }
    }
    ctx->pc = 0x1AF948u;
    // 0x1af948: 0x58940  sll         $s1, $a1, 5
    ctx->pc = 0x1af948u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1af94c: 0x0  nop
    ctx->pc = 0x1af94cu;
    // NOP
label_1af950:
    // 0x1af950: 0x2a822000  slti        $v0, $s4, 0x2000
    ctx->pc = 0x1af950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1af954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF954u;
    {
        const bool branch_taken_0x1af954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF954u;
        // 0x1af958: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af954) {
            ctx->pc = 0x1AF968u;
            goto label_1af968;
        }
    }
    ctx->pc = 0x1AF95Cu;
    // 0x1af95c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1af960: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af964: 0x0  nop
    ctx->pc = 0x1af964u;
    // NOP
label_1af968:
    // 0x1af968: 0x2a420e00  slti        $v0, $s2, 0xE00
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3584) ? 1 : 0);
    // 0x1af96c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF96Cu;
    {
        const bool branch_taken_0x1af96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF96Cu;
        // 0x1af970: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af96c) {
            ctx->pc = 0x1AF980u;
            goto label_1af980;
        }
    }
    ctx->pc = 0x1AF974u;
    // 0x1af974: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x1af974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1af978: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x1af978u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af97c: 0x0  nop
    ctx->pc = 0x1af97cu;
    // NOP
label_1af980:
    // 0x1af980: 0x2a612001  slti        $at, $s3, 0x2001
    ctx->pc = 0x1af980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x1af984: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF984u;
    {
        const bool branch_taken_0x1af984 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af984) {
            ctx->pc = 0x1AF990u;
            goto label_1af990;
        }
    }
    ctx->pc = 0x1AF98Cu;
    // 0x1af98c: 0x24132000  addiu       $s3, $zero, 0x2000
    ctx->pc = 0x1af98cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1af990:
    // 0x1af990: 0x2a210e01  slti        $at, $s1, 0xE01
    ctx->pc = 0x1af990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3585) ? 1 : 0);
    // 0x1af994: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF994u;
    {
        const bool branch_taken_0x1af994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af994) {
            ctx->pc = 0x1AF9A0u;
            goto label_1af9a0;
        }
    }
    ctx->pc = 0x1AF99Cu;
    // 0x1af99c: 0x24110e00  addiu       $s1, $zero, 0xE00
    ctx->pc = 0x1af99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
label_1af9a0:
    // 0x1af9a0: 0x3c020a08  lui         $v0, 0xA08
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2568 << 16));
    // 0x1af9a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9a8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1af9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1af9ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF9ACu;
    SET_GPR_U32(ctx, 31, 0x1AF9B4u);
    ctx->pc = 0x1AF9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9ACu;
    // 0x1af9b0: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF9ACu, 0x1AF9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9B4u;
label_1af9b4:
    // 0x1af9b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF9BCu;
    SET_GPR_U32(ctx, 31, 0x1AF9C4u);
    ctx->pc = 0x1AF9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9BCu;
    // 0x1af9c0: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF9BCu, 0x1AF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9C4u;
label_1af9c4:
    // 0x1af9c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af9cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF9CCu;
    SET_GPR_U32(ctx, 31, 0x1AF9D4u);
    ctx->pc = 0x1AF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9CCu;
    // 0x1af9d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF9CCu, 0x1AF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9D4u;
label_1af9d4:
    // 0x1af9d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af9d8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1af9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1af9dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1af9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af9e0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1af9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1af9e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9e8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1af9ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF9ECu;
    SET_GPR_U32(ctx, 31, 0x1AF9F4u);
    ctx->pc = 0x1AF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9ECu;
    // 0x1af9f0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF9ECu, 0x1AF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9F4u;
label_1af9f4:
    // 0x1af9f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9f8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1af9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1af9fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF9FCu;
    SET_GPR_U32(ctx, 31, 0x1AFA04u);
    ctx->pc = 0x1AFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9FCu;
    // 0x1afa00: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF9FCu, 0x1AFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1afa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1afa08: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1afa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1afa0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afa10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa14: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1afa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1afa18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFA18u;
    SET_GPR_U32(ctx, 31, 0x1AFA20u);
    ctx->pc = 0x1AFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA18u;
    // 0x1afa1c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFA18u, 0x1AFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0x26427900  addiu       $v0, $s2, 0x7900
    ctx->pc = 0x1afa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30976));
    // 0x1afa24: 0x26837000  addiu       $v1, $s4, 0x7000
    ctx->pc = 0x1afa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28672));
    // 0x1afa28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afa2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1afa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afa30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1afa30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1afa34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1afa34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1afa38: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1afa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1afa3c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1afa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1afa40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afa44: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x1afa44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1afa48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afa4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa50: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1afa50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1afa54: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFA54u;
    SET_GPR_U32(ctx, 31, 0x1AFA5Cu);
    ctx->pc = 0x1AFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA54u;
    // 0x1afa58: 0x2023025  or          $a2, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFA54u, 0x1AFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA5Cu;
label_1afa5c:
    // 0x1afa5c: 0x26227900  addiu       $v0, $s1, 0x7900
    ctx->pc = 0x1afa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x1afa60: 0x26637000  addiu       $v1, $s3, 0x7000
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28672));
    // 0x1afa64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afa68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1afa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afa6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1afa6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1afa70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1afa70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1afa74: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1afa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1afa78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1afa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1afa7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afa80: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x1afa80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1afa84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afa88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa8c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1afa8cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1afa90: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFA90u;
    SET_GPR_U32(ctx, 31, 0x1AFA98u);
    ctx->pc = 0x1AFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA90u;
    // 0x1afa94: 0x2c23025  or          $a2, $s6, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFA90u, 0x1AFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA98u;
label_1afa98:
    // 0x1afa98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa9c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AFA9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFAA4u);
    ctx->pc = 0x1AFAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA9Cu;
    // 0x1afaa0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AFA9Cu, 0x1AFAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAA4u;
label_1afaa4:
    // 0x1afaa4: 0x3c020a08  lui         $v0, 0xA08
    ctx->pc = 0x1afaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2568 << 16));
    // 0x1afaa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1afab0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFAB0u;
    SET_GPR_U32(ctx, 31, 0x1AFAB8u);
    ctx->pc = 0x1AFAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAB0u;
    // 0x1afab4: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFAB0u, 0x1AFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAB8u;
label_1afab8:
    // 0x1afab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afabc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1afac0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFAC0u;
    SET_GPR_U32(ctx, 31, 0x1AFAC8u);
    ctx->pc = 0x1AFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAC0u;
    // 0x1afac4: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFAC0u, 0x1AFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAC8u;
label_1afac8:
    // 0x1afac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afad0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFAD0u;
    SET_GPR_U32(ctx, 31, 0x1AFAD8u);
    ctx->pc = 0x1AFAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAD0u;
    // 0x1afad4: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFAD0u, 0x1AFAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAD8u;
label_1afad8:
    // 0x1afad8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1afad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1afadc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afae0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1afae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1afae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afae8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFAE8u;
    SET_GPR_U32(ctx, 31, 0x1AFAF0u);
    ctx->pc = 0x1AFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAE8u;
    // 0x1afaec: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFAE8u, 0x1AFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAF0u;
label_1afaf0:
    // 0x1afaf0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1afaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1afaf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaf8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1afafc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afb00: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFB00u;
    SET_GPR_U32(ctx, 31, 0x1AFB08u);
    ctx->pc = 0x1AFB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB00u;
    // 0x1afb04: 0x503025  or          $a2, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFB00u, 0x1AFB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB08u;
label_1afb08:
    // 0x1afb08: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1afb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1afb0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1afb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1afb14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afb18: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFB18u;
    SET_GPR_U32(ctx, 31, 0x1AFB20u);
    ctx->pc = 0x1AFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB18u;
    // 0x1afb1c: 0x563025  or          $a2, $v0, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFB18u, 0x1AFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB20u;
label_1afb20:
    // 0x1afb20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb24: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AFB24u;
    SET_GPR_U32(ctx, 31, 0x1AFB2Cu);
    ctx->pc = 0x1AFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB24u;
    // 0x1afb28: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AFB24u, 0x1AFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB2Cu;
label_1afb2c:
    // 0x1afb2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1afb30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb34: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1afb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1afb38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFB38u;
    SET_GPR_U32(ctx, 31, 0x1AFB40u);
    ctx->pc = 0x1AFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB38u;
    // 0x1afb3c: 0x344600b0  ori         $a2, $v0, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFB38u, 0x1AFB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB40u;
label_1afb40:
    // 0x1afb40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb44: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AFB44u;
    SET_GPR_U32(ctx, 31, 0x1AFB4Cu);
    ctx->pc = 0x1AFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB44u;
    // 0x1afb48: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AFB44u, 0x1AFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB4Cu;
label_1afb4c:
    // 0x1afb4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1afb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afb50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1afb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1afb58: 0x3c0200a2  lui         $v0, 0xA2
    ctx->pc = 0x1afb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)162 << 16));
    // 0x1afb5c: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1afb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1afb60: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1afb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1afb64: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1afb64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1afb68: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AFB68u;
    SET_GPR_U32(ctx, 31, 0x1AFB70u);
    ctx->pc = 0x1AFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB68u;
    // 0x1afb6c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AFB68u, 0x1AFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB70u;
label_1afb70:
    // 0x1afb70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1afb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afb74: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1afb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1afb78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1afb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1afb7c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1afb80: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1afb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1afb84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afb88: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1afb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1afb8c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1afb8cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1afb90: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1afb90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1afb94: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1afb98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afba0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1afba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1afba4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1afba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1afba8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFBA8u;
    SET_GPR_U32(ctx, 31, 0x1AFBB0u);
    ctx->pc = 0x1AFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBA8u;
    // 0x1afbac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFBA8u, 0x1AFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBB0u;
label_1afbb0:
    // 0x1afbb0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1afbb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbb8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1afbbc: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFBBCu;
    SET_GPR_U32(ctx, 31, 0x1AFBC4u);
    ctx->pc = 0x1AFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBBCu;
    // 0x1afbc0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFBBCu, 0x1AFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBC4u;
label_1afbc4:
    // 0x1afbc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbc8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1afbcc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFBCCu;
    SET_GPR_U32(ctx, 31, 0x1AFBD4u);
    ctx->pc = 0x1AFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBCCu;
    // 0x1afbd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFBCCu, 0x1AFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBD4u;
label_1afbd4:
    // 0x1afbd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbd8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1afbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1afbdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFBDCu;
    SET_GPR_U32(ctx, 31, 0x1AFBE4u);
    ctx->pc = 0x1AFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBDCu;
    // 0x1afbe0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFBDCu, 0x1AFBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBE4u;
label_1afbe4:
    // 0x1afbe4: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1afbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1afbe8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1afbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1afbec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afbf0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1afbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1afbf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afbf8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1afbfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFBFCu;
    SET_GPR_U32(ctx, 31, 0x1AFC04u);
    ctx->pc = 0x1AFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBFCu;
    // 0x1afc00: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFBFCu, 0x1AFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC04u;
label_1afc04:
    // 0x1afc04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFC0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC14u);
    ctx->pc = 0x1AFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC0Cu;
    // 0x1afc10: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFC0Cu, 0x1AFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC14u;
label_1afc14:
    // 0x1afc14: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1afc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1afc18: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1afc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1afc1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1afc1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1afc20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1afc20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1afc24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1afc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1afc28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc2c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1afc30: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFC30u;
    SET_GPR_U32(ctx, 31, 0x1AFC38u);
    ctx->pc = 0x1AFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC30u;
    // 0x1afc34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFC30u, 0x1AFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC38u;
label_1afc38:
    // 0x1afc38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afc3c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1afc40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afc44: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1afc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1afc48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afc4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1afc54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFC54u;
    SET_GPR_U32(ctx, 31, 0x1AFC5Cu);
    ctx->pc = 0x1AFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC54u;
    // 0x1afc58: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFC54u, 0x1AFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC5Cu;
label_1afc5c:
    // 0x1afc5c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1afc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1afc60: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1afc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1afc64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1afc64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1afc68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1afc68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1afc6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1afc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1afc70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc74: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1afc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1afc78: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AFC78u;
    SET_GPR_U32(ctx, 31, 0x1AFC80u);
    ctx->pc = 0x1AFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC78u;
    // 0x1afc7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AFC78u, 0x1AFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC80u;
label_1afc80:
    // 0x1afc80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afc84: 0x3c027a00  lui         $v0, 0x7A00
    ctx->pc = 0x1afc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31232 << 16));
    // 0x1afc88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afc8c: 0x34427100  ori         $v0, $v0, 0x7100
    ctx->pc = 0x1afc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
    // 0x1afc90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afc94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1afc9c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFCA4u);
    ctx->pc = 0x1AFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC9Cu;
    // 0x1afca0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFC9Cu, 0x1AFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCA4u;
label_1afca4:
    // 0x1afca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afca8: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AFCA8u;
    SET_GPR_U32(ctx, 31, 0x1AFCB0u);
    ctx->pc = 0x1AFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCA8u;
    // 0x1afcac: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AFCA8u, 0x1AFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCB0u;
label_1afcb0:
    // 0x1afcb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afcb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFCB8u;
    SET_GPR_U32(ctx, 31, 0x1AFCC0u);
    ctx->pc = 0x1AFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCB8u;
    // 0x1afcbc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFCB8u, 0x1AFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCC0u;
label_1afcc0:
    // 0x1afcc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afcc4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1afcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1afcc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFCC8u;
    SET_GPR_U32(ctx, 31, 0x1AFCD0u);
    ctx->pc = 0x1AFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCC8u;
    // 0x1afccc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFCC8u, 0x1AFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCD0u;
label_1afcd0:
    // 0x1afcd0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1afcd4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1afcd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afcdc: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1afcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1afce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afce4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1afce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1afce8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFCE8u;
    SET_GPR_U32(ctx, 31, 0x1AFCF0u);
    ctx->pc = 0x1AFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE8u;
    // 0x1afcec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFCE8u, 0x1AFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCF0u;
label_1afcf0:
    // 0x1afcf0: 0x241100b0  addiu       $s1, $zero, 0xB0
    ctx->pc = 0x1afcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1afcf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1afcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afcf8:
    // 0x1afcf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1afcfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd00: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1afd04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFD04u;
    SET_GPR_U32(ctx, 31, 0x1AFD0Cu);
    ctx->pc = 0x1AFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD04u;
    // 0x1afd08: 0x344600b1  ori         $a2, $v0, 0xB1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)177);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFD04u, 0x1AFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD0Cu;
label_1afd0c:
    // 0x1afd0c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1afd10: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1afd10u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1afd14: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1afd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afd18: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1afd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1afd1c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1afd1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1afd20: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1afd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afd24: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
    // 0x1afd28: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1afd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1afd2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1afd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1afd30: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1afd34: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1afd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1afd38: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x1afd38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1afd3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afd40: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1afd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1afd44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1afd4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFD4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD54u);
    ctx->pc = 0x1AFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD4Cu;
    // 0x1afd50: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFD4Cu, 0x1AFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD54u;
label_1afd54:
    // 0x1afd54: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1afd58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afd60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFD60u;
    SET_GPR_U32(ctx, 31, 0x1AFD68u);
    ctx->pc = 0x1AFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD60u;
    // 0x1afd64: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFD60u, 0x1AFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD68u;
label_1afd68:
    // 0x1afd68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afd6c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1afd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1afd70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afd74: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1afd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1afd78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afd7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1afd84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFD84u;
    SET_GPR_U32(ctx, 31, 0x1AFD8Cu);
    ctx->pc = 0x1AFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD84u;
    // 0x1afd88: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFD84u, 0x1AFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD8Cu;
label_1afd8c:
    // 0x1afd8c: 0x3c020110  lui         $v0, 0x110
    ctx->pc = 0x1afd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)272 << 16));
    // 0x1afd90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afd98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFD98u;
    SET_GPR_U32(ctx, 31, 0x1AFDA0u);
    ctx->pc = 0x1AFD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD98u;
    // 0x1afd9c: 0x34460110  ori         $a2, $v0, 0x110 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFD98u, 0x1AFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDA0u;
label_1afda0:
    // 0x1afda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afda4: 0x3c027980  lui         $v0, 0x7980
    ctx->pc = 0x1afda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31104 << 16));
    // 0x1afda8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afdac: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1afdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1afdb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afdb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1afdbc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFDBCu;
    SET_GPR_U32(ctx, 31, 0x1AFDC4u);
    ctx->pc = 0x1AFDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDBCu;
    // 0x1afdc0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFDBCu, 0x1AFDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDC4u;
label_1afdc4:
    // 0x1afdc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdc8: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AFDC8u;
    SET_GPR_U32(ctx, 31, 0x1AFDD0u);
    ctx->pc = 0x1AFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDC8u;
    // 0x1afdcc: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AFDC8u, 0x1AFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDD0u;
label_1afdd0:
    // 0x1afdd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1afdd4: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1afdd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1afdd8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1AFDD8u;
    {
        const bool branch_taken_0x1afdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDD8u;
        // 0x1afddc: 0x241100b1  addiu       $s1, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdd8) {
            ctx->pc = 0x1AFCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afcf8;
        }
    }
    ctx->pc = 0x1AFDE0u;
    // 0x1afde0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afde4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afde8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1afde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afdec: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AFDECu;
    SET_GPR_U32(ctx, 31, 0x1AFDF4u);
    ctx->pc = 0x1AFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDECu;
    // 0x1afdf0: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AFDECu, 0x1AFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDF4u;
label_1afdf4:
    // 0x1afdf4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1afdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1afdf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdfc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1afdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1afe00: 0x8c480030  lw          $t0, 0x30($v0)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1afe04: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1afe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1afe08: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1AFE08u;
    SET_GPR_U32(ctx, 31, 0x1AFE10u);
    ctx->pc = 0x1AFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE08u;
    // 0x1afe0c: 0x24470028  addiu       $a3, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1AFE08u, 0x1AFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE10u;
label_1afe10:
    // 0x1afe10: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1afe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1afe14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe18: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AFE18u;
    SET_GPR_U32(ctx, 31, 0x1AFE20u);
    ctx->pc = 0x1AFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE18u;
    // 0x1afe1c: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AFE18u, 0x1AFE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE20u;
label_1afe20:
    // 0x1afe20: 0x8ea778c8  lw          $a3, 0x78C8($s5)
    ctx->pc = 0x1afe20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1afe24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe28: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1afe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1afe2c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1afe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1afe30: 0x9ea378c0  lwu         $v1, 0x78C0($s5)
    ctx->pc = 0x1afe30u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1afe34: 0x9ea678cc  lwu         $a2, 0x78CC($s5)
    ctx->pc = 0x1afe34u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30924)));
    // 0x1afe38: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1afe38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1afe3c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1afe3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1afe40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afe44: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1afe44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1afe48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1afe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afe4c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1afe4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1afe50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1afe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1afe54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afe58: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1afe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1afe5c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1afe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1afe60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1afe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1afe64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFE64u;
    SET_GPR_U32(ctx, 31, 0x1AFE6Cu);
    ctx->pc = 0x1AFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE64u;
    // 0x1afe68: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFE64u, 0x1AFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE6Cu;
label_1afe6c:
    // 0x1afe6c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE74u);
    ctx->pc = 0x1AFE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE6Cu;
    // 0x1afe70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AFE6Cu, 0x1AFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE74u;
label_1afe74:
    // 0x1afe74: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1afe74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afe78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe7c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1afe80: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1afe80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1afe84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1afe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1afe88: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1afe8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afe90: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1afe90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1afe94: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1afe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1afe98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFE98u;
    SET_GPR_U32(ctx, 31, 0x1AFEA0u);
    ctx->pc = 0x1AFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE98u;
    // 0x1afe9c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFE98u, 0x1AFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEA0u;
label_1afea0:
    // 0x1afea0: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1afea0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1afea4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1afea8: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1afea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1afeac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeb0: 0x3c0259b0  lui         $v0, 0x59B0
    ctx->pc = 0x1afeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22960 << 16));
    // 0x1afeb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1afeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afeb8: 0x34425620  ori         $v0, $v0, 0x5620
    ctx->pc = 0x1afeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22048);
    // 0x1afebc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1afec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afec4: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1afec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1afec8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFEC8u;
    SET_GPR_U32(ctx, 31, 0x1AFED0u);
    ctx->pc = 0x1AFECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEC8u;
    // 0x1afecc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFEC8u, 0x1AFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFED0u;
label_1afed0:
    // 0x1afed0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afed4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1afed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1afed8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFED8u;
    SET_GPR_U32(ctx, 31, 0x1AFEE0u);
    ctx->pc = 0x1AFEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFED8u;
    // 0x1afedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFED8u, 0x1AFEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE0u;
label_1afee0:
    // 0x1afee0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afee4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1afee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1afee8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFEE8u;
    SET_GPR_U32(ctx, 31, 0x1AFEF0u);
    ctx->pc = 0x1AFEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEE8u;
    // 0x1afeec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFEE8u, 0x1AFEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEF0u;
label_1afef0:
    // 0x1afef0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1afef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1afef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1afef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afef8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1afef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1afefc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1afefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1aff00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFF00u;
    SET_GPR_U32(ctx, 31, 0x1AFF08u);
    ctx->pc = 0x1AFF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF00u;
    // 0x1aff04: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFF00u, 0x1AFF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF08u;
label_1aff08:
    // 0x1aff08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aff0c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1aff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1aff10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aff14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff18: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aff1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1AFF24u);
    ctx->pc = 0x1AFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF1Cu;
    // 0x1aff20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AFF1Cu, 0x1AFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF24u;
label_1aff24:
    // 0x1aff24: 0x27a205b4  addiu       $v0, $sp, 0x5B4
    ctx->pc = 0x1aff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
    // 0x1aff28: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x1aff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x1aff2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aff30: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1aff34: 0x26b47900  addiu       $s4, $s5, 0x7900
    ctx->pc = 0x1aff34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 30976));
    // 0x1aff38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aff38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff3c: 0x24849000  addiu       $a0, $a0, -0x7000
    ctx->pc = 0x1aff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938624));
    // 0x1aff40: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x1aff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1aff44: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x1aff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x1aff48: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1aff48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aff4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aff50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1aff50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aff54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aff54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aff58: 0x0  nop
    ctx->pc = 0x1aff58u;
    // NOP
    // 0x1aff5c: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x1aff5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1aff60: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1aff60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1aff64: 0x0  nop
    ctx->pc = 0x1aff64u;
    // NOP
label_1aff68:
    // 0x1aff68: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1aff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1aff6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1aff70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aff70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aff74: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFF74u;
    {
        const bool branch_taken_0x1aff74 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1AFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF74u;
        // 0x1aff78: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff74) {
            ctx->pc = 0x1AFF88u;
            goto label_1aff88;
        }
    }
    ctx->pc = 0x1AFF7Cu;
    // 0x1aff7c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1aff7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aff80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFF80u;
    {
        const bool branch_taken_0x1aff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF80u;
        // 0x1aff84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff80) {
            ctx->pc = 0x1AFFA0u;
            goto label_1affa0;
        }
    }
    ctx->pc = 0x1AFF88u;
label_1aff88:
    // 0x1aff88: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1aff88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1aff8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aff8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aff90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aff90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aff94: 0x0  nop
    ctx->pc = 0x1aff94u;
    // NOP
    // 0x1aff98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aff98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aff9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1aff9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1affa0:
    // 0x1affa0: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1AFFA0u;
    SET_GPR_U32(ctx, 31, 0x1AFFA8u);
    ctx->pc = 0x1AFFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFA0u;
    // 0x1affa4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1AFFA0u, 0x1AFFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFA8u;
label_1affa8:
    // 0x1affa8: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1affa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1affac: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x1affacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1affb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1affb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1affb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1affb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1affb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1affb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1affbc: 0x2e020100  sltiu       $v0, $s0, 0x100
    ctx->pc = 0x1affbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1affc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1affc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1affc4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1affc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1affc8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AFFC8u;
    {
        const bool branch_taken_0x1affc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFC8u;
        // 0x1affcc: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affc8) {
            ctx->pc = 0x1AFF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff68;
        }
    }
    ctx->pc = 0x1AFFD0u;
    // 0x1affd0: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1affd4: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x1affd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x1affd8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1affd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1affdc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1affdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1affe0: 0x1020011f  beqz        $at, . + 4 + (0x11F << 2)
    ctx->pc = 0x1AFFE0u;
    {
        const bool branch_taken_0x1affe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affe0) {
            ctx->pc = 0x1B0460u;
            goto label_1b0460;
        }
    }
    ctx->pc = 0x1AFFE8u;
    // 0x1affe8: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1affe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1affec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1affecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1afff0:
    // 0x1afff0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1afff4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1afff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1afff8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1afff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1afffc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1afffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0000: 0x9043003e  lbu         $v1, 0x3E($v0)
    ctx->pc = 0x1b0000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x1b0004: 0x9044003d  lbu         $a0, 0x3D($v0)
    ctx->pc = 0x1b0004u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
    // 0x1b0008: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b0008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b000c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0010: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b0014: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1b0018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b001c: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x1b001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1b0020: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0020u;
    {
        const bool branch_taken_0x1b0020 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1B0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0020u;
        // 0x1b0024: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0020) {
            ctx->pc = 0x1B0034u;
            goto label_1b0034;
        }
    }
    ctx->pc = 0x1B0028u;
    // 0x1b0028: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b0028u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b002c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B002Cu;
    {
        const bool branch_taken_0x1b002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B002Cu;
        // 0x1b0030: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b002c) {
            ctx->pc = 0x1B0050u;
            goto label_1b0050;
        }
    }
    ctx->pc = 0x1B0034u;
label_1b0034:
    // 0x1b0034: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b0034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b0038: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b0038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b003c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0044: 0x0  nop
    ctx->pc = 0x1b0044u;
    // NOP
    // 0x1b0048: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b0048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b004c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b004cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b0050:
    // 0x1b0050: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x1b0054: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1b0054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b0058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b005c: 0x8fab05b0  lw          $t3, 0x5B0($sp)
    ctx->pc = 0x1b005cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x1b0060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0068: 0x27a205b4  addiu       $v0, $sp, 0x5B4
    ctx->pc = 0x1b0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
    // 0x1b006c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b006cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0070: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1b0070u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0074: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0078: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b0078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b007c: 0x4601a802  mul.s       $f0, $f21, $f1
    ctx->pc = 0x1b007cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b0080: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b0084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b0084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b0088: 0x90490003  lbu         $t1, 0x3($v0)
    ctx->pc = 0x1b0088u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b008c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b0090: 0x94340  sll         $t0, $t1, 13
    ctx->pc = 0x1b0090u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
    // 0x1b0094: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b0094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b0098: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b0098u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b009c: 0x0  nop
    ctx->pc = 0x1b009cu;
    // NOP
    // 0x1b00a0: 0x0  nop
    ctx->pc = 0x1b00a0u;
    // NOP
    // 0x1b00a4: 0x1012  mflo        $v0
    ctx->pc = 0x1b00a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b00a8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1b00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1b00ac: 0x81243  sra         $v0, $t0, 9
    ctx->pc = 0x1b00acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 9));
    // 0x1b00b0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1b00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1b00b4: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1b00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1b00b8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1b00bc: 0x2127c  dsll32      $v0, $v0, 9
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
    // 0x1b00c0: 0x2127f  dsra32      $v0, $v0, 9
    ctx->pc = 0x1b00c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 9));
    // 0x1b00c4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b00c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b00c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b00cc: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1b00ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1b00d0: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x1b00d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1b00d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b00d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b00d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b00d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b00dc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B00DCu;
    SET_GPR_U32(ctx, 31, 0x1B00E4u);
    ctx->pc = 0x1B00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00DCu;
    // 0x1b00e0: 0x1429021  addu        $s2, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B00DCu, 0x1B00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00E4u;
label_1b00e4:
    // 0x1b00e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00e8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b00ec: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B00ECu;
    SET_GPR_U32(ctx, 31, 0x1B00F4u);
    ctx->pc = 0x1B00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00ECu;
    // 0x1b00f0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B00ECu, 0x1B00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00F4u;
label_1b00f4:
    // 0x1b00f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b00f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b00f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B00FCu;
    SET_GPR_U32(ctx, 31, 0x1B0104u);
    ctx->pc = 0x1B0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00FCu;
    // 0x1b0100: 0x2406035c  addiu       $a2, $zero, 0x35C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B00FCu, 0x1B0104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0104u;
label_1b0104:
    // 0x1b0104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0108: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b0108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b010c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B010Cu;
    SET_GPR_U32(ctx, 31, 0x1B0114u);
    ctx->pc = 0x1B0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B010Cu;
    // 0x1b0110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B010Cu, 0x1B0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0114u;
label_1b0114:
    // 0x1b0114: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b011c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0120: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B0120u;
    SET_GPR_U32(ctx, 31, 0x1B0128u);
    ctx->pc = 0x1B0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0120u;
    // 0x1b0124: 0x24075151  addiu       $a3, $zero, 0x5151 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20817));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B0120u, 0x1B0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0128u;
label_1b0128:
    // 0x1b0128: 0xc070840  jal         func_1C2100
    ctx->pc = 0x1B0128u;
    SET_GPR_U32(ctx, 31, 0x1B0130u);
    ctx->pc = 0x1B012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0128u;
    // 0x1b012c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2100u, 0x1B0128u, 0x1B0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0130u;
label_1b0130:
    // 0x1b0130: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b0134: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1b0134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1b0138: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b0138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1b013c: 0x0  nop
    ctx->pc = 0x1b013cu;
    // NOP
label_1b0140:
    // 0x1b0140: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b0144: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b0148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b014c: 0x90450010  lbu         $a1, 0x10($v0)
    ctx->pc = 0x1b014cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b0150: 0x90440011  lbu         $a0, 0x11($v0)
    ctx->pc = 0x1b0150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1b0154: 0x10a400ac  beq         $a1, $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1B0154u;
    {
        const bool branch_taken_0x1b0154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b0154) {
            ctx->pc = 0x1B0408u;
            goto label_1b0408;
        }
    }
    ctx->pc = 0x1B015Cu;
    // 0x1b015c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b0160: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1b0160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b0164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0168: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x1b0168u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b016c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0170: 0x33e02  srl         $a3, $v1, 24
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b0174: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x1b0174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b0178: 0x23602  srl         $a2, $v0, 24
    ctx->pc = 0x1b0178u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b017c: 0x70c83018  mult1       $a2, $a2, $t0
    ctx->pc = 0x1b017cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b0180: 0x641c2  srl         $t0, $a2, 7
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1b0184: 0x731c2  srl         $a2, $a3, 7
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x1b0188: 0x2cc10100  sltiu       $at, $a2, 0x100
    ctx->pc = 0x1b0188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b018c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B018Cu;
    {
        const bool branch_taken_0x1b018c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b018c) {
            ctx->pc = 0x1B0198u;
            goto label_1b0198;
        }
    }
    ctx->pc = 0x1B0194u;
    // 0x1b0194: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b0194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b0198:
    // 0x1b0198: 0x2d010100  sltiu       $at, $t0, 0x100
    ctx->pc = 0x1b0198u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b019c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B019Cu;
    {
        const bool branch_taken_0x1b019c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b019c) {
            ctx->pc = 0x1B01A8u;
            goto label_1b01a8;
        }
    }
    ctx->pc = 0x1B01A4u;
    // 0x1b01a4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b01a8:
    // 0x1b01a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b01a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b01ac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b01b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01b4: 0x63e38  dsll        $a3, $a2, 24
    ctx->pc = 0x1b01b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 24);
    // 0x1b01b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b01b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01bc: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x1b01bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1b01c0: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b01c4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b01c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b01c8: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b01cc: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1b01ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1b01d0: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b01d4: 0x94a38  dsll        $t1, $t1, 8
    ctx->pc = 0x1b01d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 8);
    // 0x1b01d8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1b01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1b01dc: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x1b01dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b01e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b01e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b01e4: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x1b01e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x1b01e8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1b01ec: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b01ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b01f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b01f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b01f4: 0xe8b025  or          $s6, $a3, $t0
    ctx->pc = 0x1b01f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1b01f8: 0x33a38  dsll        $a3, $v1, 8
    ctx->pc = 0x1b01f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 8);
    // 0x1b01fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0200: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b0200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b0204: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1b0208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b020c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b020cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b0210: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b0214: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1b0214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1b0218: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x1b0218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b021c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b021cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1b0220: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1b0220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1b0224: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x1b0224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b0228: 0xffa20110  sd          $v0, 0x110($sp)
    ctx->pc = 0x1b0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 2));
    // 0x1b022c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1b022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b0230: 0x70441018  mult1       $v0, $v0, $a0
    ctx->pc = 0x1b0230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b0234: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1b0238: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b0238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1b023c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b0240: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x1b0240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b0244: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b0248: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1b0248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b024c: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x1b024cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1b0250: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1b0250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b0254: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b0254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1b0258: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b025c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1b025cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b0260: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1b0264: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0264u;
        // 0x1b0268: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0358u;
            goto label_1b0358;
        }
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0x0  nop
    ctx->pc = 0x1b026cu;
    // NOP
label_1b0270:
    // 0x1b0270: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1b0274: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1b0278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b027c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b0280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0284: 0x805e0000  lb          $fp, 0x0($v0)
    ctx->pc = 0x1b0284u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0288: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1b0288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1b028c: 0x80770000  lb          $s7, 0x0($v1)
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0290: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b029c: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x1b029cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b02a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b02a4: 0x73c21018  mult1       $v0, $fp, $v0
    ctx->pc = 0x1b02a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b02a8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1b02a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b02ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b02b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b02b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b02b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b02b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b02b8: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1b02b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1b02bc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b02c0: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x1b02c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b02c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1b02c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b02c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b02cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b02ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b02d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b02d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b02d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1b02d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b02d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B02D8u;
    SET_GPR_U32(ctx, 31, 0x1B02E0u);
    ctx->pc = 0x1B02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02D8u;
    // 0x1b02dc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B02D8u, 0x1B02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02E0u;
label_1b02e0:
    // 0x1b02e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b02e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02e8: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b02ec: 0x2e22818  mult        $a1, $s7, $v0
    ctx->pc = 0x1b02ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b02f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b02f4: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1b02f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1b02f8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b02fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b02fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b0300: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b0300u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b0304: 0x73c21018  mult1       $v0, $fp, $v0
    ctx->pc = 0x1b0304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b0308: 0x219c3  sra         $v1, $v0, 7
    ctx->pc = 0x1b0308u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b030c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1b030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b0310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0314: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b031c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b031cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0320: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b0324: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1b0324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1b0328: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b0328u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b032c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B032Cu;
    SET_GPR_U32(ctx, 31, 0x1B0334u);
    ctx->pc = 0x1B0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B032Cu;
    // 0x1b0330: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B032Cu, 0x1B0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0334u;
label_1b0334:
    // 0x1b0334: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b0338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b033c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b033cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b0340: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b0344: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b0344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b0348: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b0348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b034c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1B034Cu;
    {
        const bool branch_taken_0x1b034c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b034c) {
            ctx->pc = 0x1B0270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0270;
        }
    }
    ctx->pc = 0x1B0354u;
    // 0x1b0354: 0x0  nop
    ctx->pc = 0x1b0354u;
    // NOP
label_1b0358:
    // 0x1b0358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b035c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0360: 0x82910040  lb          $s1, 0x40($s4)
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1b0364: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x1b0364u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b0368: 0x82900000  lb          $s0, 0x0($s4)
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b036c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b0370: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b0370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0378: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x1b0378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b037c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0380: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1b0380u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1b0384: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1b0384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1b0388: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b0388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b038c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b038cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b0390: 0x72021018  mult1       $v0, $s0, $v0
    ctx->pc = 0x1b0390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b0394: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1b0394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b0398: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b039c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b039cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b03a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b03a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b03a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b03a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b03a8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1b03a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b03ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B03ACu;
    SET_GPR_U32(ctx, 31, 0x1B03B4u);
    ctx->pc = 0x1B03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03ACu;
    // 0x1b03b0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B03ACu, 0x1B03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03B4u;
label_1b03b4:
    // 0x1b03b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b03b8: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x1b03b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b03bc: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1b03bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b03c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b03c4: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1b03c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1b03c8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1b03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1b03cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b03d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b03d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03d4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b03d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b03d8: 0x72021018  mult1       $v0, $s0, $v0
    ctx->pc = 0x1b03d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b03dc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b03e0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1b03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b03e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b03e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b03e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b03ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b03ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b03f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b03f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b03f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b03f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b03f8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1b03fc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b03fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b0400: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0400u;
    SET_GPR_U32(ctx, 31, 0x1B0408u);
    ctx->pc = 0x1B0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0400u;
    // 0x1b0404: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0400u, 0x1B0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0408u;
label_1b0408:
    // 0x1b0408: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b040c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0410: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b0410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1b0414: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b0418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b041c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1b041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1b0420: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b0424: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0428: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1B0428u;
    {
        const bool branch_taken_0x1b0428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0428) {
            ctx->pc = 0x1B0140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0140;
        }
    }
    ctx->pc = 0x1B0430u;
    // 0x1b0430: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0434: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0438: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b043c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1b043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b0440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0444: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1b0444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1b0448: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1b0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1b044c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1b044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b0450: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1b0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b0454: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b0454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0458: 0x1440fee5  bnez        $v0, . + 4 + (-0x11B << 2)
    ctx->pc = 0x1B0458u;
    {
        const bool branch_taken_0x1b0458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0458) {
            ctx->pc = 0x1AFFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afff0;
        }
    }
    ctx->pc = 0x1B0460u;
label_1b0460:
    // 0x1b0460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b0460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b046c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B046Cu;
    SET_GPR_U32(ctx, 31, 0x1B0474u);
    ctx->pc = 0x1B0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B046Cu;
    // 0x1b0470: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B046Cu, 0x1B0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0474u;
label_1b0474:
    // 0x1b0474: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b0474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0478: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b0478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b047c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b047cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b0480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0484: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b0484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0488: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b0488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b048c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b048cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0490: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b0490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0494: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b0494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0498: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b0498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b049c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b049cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b04a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b04a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b04a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B04A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A4u;
        // 0x1b04a8: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B04A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B04ACu;
}
