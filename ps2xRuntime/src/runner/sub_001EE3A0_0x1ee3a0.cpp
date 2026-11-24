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

// Function: sub_001EE3A0
// Address: 0x1ee3a0 - 0x1ee5c0
void sub_001EE3A0_0x1ee3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE3A0_0x1ee3a0");
#endif

    switch (ctx->pc) {
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee58cu: goto label_1ee58c;
        default: break;
    }

    ctx->pc = 0x1ee3a0u;

    // 0x1ee3a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1ee3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1ee3a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ee3a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ee3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ee3ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ee3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ee3b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ee3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ee3b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ee3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ee3b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ee3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ee3bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ee3c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ee3c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee3c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee3d4: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1ee3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1ee3d8: 0xa7a800aa  sh          $t0, 0xAA($sp)
    ctx->pc = 0x1ee3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ee3dc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee3e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE3E0u;
    {
        const bool branch_taken_0x1ee3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3E0u;
        // 0x1ee3e4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3e0) {
            ctx->pc = 0x1EE3F0u;
            goto label_1ee3f0;
        }
    }
    ctx->pc = 0x1EE3E8u;
    // 0x1ee3e8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1EE3E8u;
    {
        const bool branch_taken_0x1ee3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3E8u;
        // 0x1ee3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3e8) {
            ctx->pc = 0x1EE590u;
            goto label_1ee590;
        }
    }
    ctx->pc = 0x1EE3F0u;
label_1ee3f0:
    // 0x1ee3f0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE3F0u;
    {
        const bool branch_taken_0x1ee3f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3F0u;
        // 0x1ee3f4: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3f0) {
            ctx->pc = 0x1EE400u;
            goto label_1ee400;
        }
    }
    ctx->pc = 0x1EE3F8u;
    // 0x1ee3f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE3F8u;
    {
        const bool branch_taken_0x1ee3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3F8u;
        // 0x1ee3fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3f8) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE400u;
label_1ee400:
    // 0x1ee400: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EE400u;
    SET_GPR_U32(ctx, 31, 0x1EE408u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EE400u, 0x1EE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE408u;
label_1ee408:
    // 0x1ee408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee40c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee410:
    // 0x1ee410: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1ee410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1ee414: 0x92a60035  lbu         $a2, 0x35($s5)
    ctx->pc = 0x1ee414u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1ee418: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ee41c: 0x92a8003f  lbu         $t0, 0x3F($s5)
    ctx->pc = 0x1ee41cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 63)));
    // 0x1ee420: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EE420u;
    SET_GPR_U32(ctx, 31, 0x1EE428u);
    ctx->pc = 0x1EE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE420u;
    // 0x1ee424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EE420u, 0x1EE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE428u;
label_1ee428:
    // 0x1ee428: 0x92a6003e  lbu         $a2, 0x3E($s5)
    ctx->pc = 0x1ee428u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 62)));
    // 0x1ee42c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE42Cu;
    {
        const bool branch_taken_0x1ee42c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE42Cu;
        // 0x1ee430: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee42c) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE434u;
    // 0x1ee434: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1EE434u;
    SET_GPR_U32(ctx, 31, 0x1EE43Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EE434u, 0x1EE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE43Cu;
label_1ee43c:
    // 0x1ee43c: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x1ee43cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ee440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee444: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ee448: 0x94560006  lhu         $s6, 0x6($v0)
    ctx->pc = 0x1ee448u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ee44c: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ee450: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1ee450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1ee454: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EE454u;
    {
        const bool branch_taken_0x1ee454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE454u;
        // 0x1ee458: 0x2c2f021  addu        $fp, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee454) {
            ctx->pc = 0x1EE480u;
            goto label_1ee480;
        }
    }
    ctx->pc = 0x1EE45Cu;
    // 0x1ee45c: 0x0  nop
    ctx->pc = 0x1ee45cu;
    // NOP
label_1ee460:
    // 0x1ee460: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x1ee460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1ee464: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1EE464u;
    SET_GPR_U32(ctx, 31, 0x1EE46Cu);
    ctx->pc = 0x1EE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE464u;
    // 0x1ee468: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1EE464u, 0x1EE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE46Cu;
label_1ee46c:
    // 0x1ee46c: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x1ee46cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ee470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee474: 0x8fb600b4  lw          $s6, 0xB4($sp)
    ctx->pc = 0x1ee474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1ee478: 0x8fb700e0  lw          $s7, 0xE0($sp)
    ctx->pc = 0x1ee478u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ee47c: 0x8fbe00e4  lw          $fp, 0xE4($sp)
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1ee480:
    // 0x1ee480: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1ee480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1ee484: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ee484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ee488: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EE488u;
    SET_GPR_U32(ctx, 31, 0x1EE490u);
    ctx->pc = 0x1EE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE488u;
    // 0x1ee48c: 0x26a60050  addiu       $a2, $s5, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EE488u, 0x1EE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE490u;
label_1ee490:
    // 0x1ee490: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1ee490u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1ee494: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ee498: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1ee498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ee49c: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EE49Cu;
    SET_GPR_U32(ctx, 31, 0x1EE4A4u);
    ctx->pc = 0x1EE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE49Cu;
    // 0x1ee4a0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EE49Cu, 0x1EE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4A4u;
label_1ee4a4:
    // 0x1ee4a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ee4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ee4a8: 0x7aa50040  lq          $a1, 0x40($s5)
    ctx->pc = 0x1ee4a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1ee4ac: 0x87a200aa  lh          $v0, 0xAA($sp)
    ctx->pc = 0x1ee4acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x1ee4b0: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x1ee4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1ee4b4: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x1ee4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x1ee4b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee4b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4bc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ee4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ee4c0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ee4c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ee4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ee4c8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ee4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ee4cc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ee4ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ee4d0: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x1EE4D0u;
    SET_GPR_U32(ctx, 31, 0x1EE4D8u);
    ctx->pc = 0x1EE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4D0u;
    // 0x1ee4d4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x1EE4D0u, 0x1EE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4D8u;
label_1ee4d8:
    // 0x1ee4d8: 0x864d0008  lh          $t5, 0x8($s2)
    ctx->pc = 0x1ee4d8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ee4dc: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1ee4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1ee4e0: 0x864c000a  lh          $t4, 0xA($s2)
    ctx->pc = 0x1ee4e0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1ee4e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ee4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee4e8: 0xc6b10038  lwc1        $f17, 0x38($s5)
    ctx->pc = 0x1ee4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1ee4ec: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x1ee4ecu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee4f0: 0x86a2003c  lh          $v0, 0x3C($s5)
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1ee4f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ee4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4f8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ee4fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ee4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee500: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ee500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee504: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ee504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee508: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x1ee508u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee50c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ee50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ee510: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x1ee510u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee514: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x1ee514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ee518: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ee518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ee51c: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x1ee51cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ee520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ee520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee524: 0x46011342  mul.s       $f13, $f2, $f1
    ctx->pc = 0x1ee524u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ee528: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x1ee528u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ee52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee530: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x1ee530u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee534: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee538: 0x468013a0  cvt.s.w     $f14, $f2
    ctx->pc = 0x1ee538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1ee53c: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x1ee53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1ee540: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x1ee540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1ee544: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x1EE544u;
    SET_GPR_U32(ctx, 31, 0x1EE54Cu);
    ctx->pc = 0x1EE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE544u;
    // 0x1ee548: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x1EE544u, 0x1EE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE54Cu;
label_1ee54c:
    // 0x1ee54c: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x1EE54Cu;
    SET_GPR_U32(ctx, 31, 0x1EE554u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x1EE54Cu, 0x1EE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE554u;
label_1ee554:
    // 0x1ee554: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE554u;
    {
        const bool branch_taken_0x1ee554 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE554u;
        // 0x1ee558: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee554) {
            ctx->pc = 0x1EE568u;
            goto label_1ee568;
        }
    }
    ctx->pc = 0x1EE55Cu;
    // 0x1ee55c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EE55Cu;
    {
        const bool branch_taken_0x1ee55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee55c) {
            ctx->pc = 0x1EE590u;
            goto label_1ee590;
        }
    }
    ctx->pc = 0x1EE564u;
    // 0x1ee564: 0x0  nop
    ctx->pc = 0x1ee564u;
    // NOP
label_1ee568:
    // 0x1ee568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee56c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EE56Cu;
    SET_GPR_U32(ctx, 31, 0x1EE574u);
    ctx->pc = 0x1EE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE56Cu;
    // 0x1ee570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EE56Cu, 0x1EE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE574u;
label_1ee574:
    // 0x1ee574: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ee574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ee578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee57c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1ee580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee584: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EE584u;
    SET_GPR_U32(ctx, 31, 0x1EE58Cu);
    ctx->pc = 0x1EE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE584u;
    // 0x1ee588: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EE584u, 0x1EE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE58Cu;
label_1ee58c:
    // 0x1ee58c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee590:
    // 0x1ee590: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ee590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ee594: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ee594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee598: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5B8u;
        // 0x1ee5bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE5C0u;
}
