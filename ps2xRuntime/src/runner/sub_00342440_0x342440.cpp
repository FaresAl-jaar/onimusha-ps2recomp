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

// Function: sub_00342440
// Address: 0x342440 - 0x342590
void sub_00342440_0x342440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342440_0x342440");
#endif

    switch (ctx->pc) {
        case 0x342490u: goto label_342490;
        case 0x3424d4u: goto label_3424d4;
        case 0x3424e8u: goto label_3424e8;
        case 0x3424f0u: goto label_3424f0;
        case 0x34251cu: goto label_34251c;
        case 0x342538u: goto label_342538;
        case 0x342550u: goto label_342550;
        case 0x342564u: goto label_342564;
        default: break;
    }

    ctx->pc = 0x342440u;

    // 0x342440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x342440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x342444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x342444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x342448: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34244c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x342450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x342454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x342454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34245c: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x34245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342460: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x342460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342464: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x342464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342468: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x342468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34246c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x34246cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x342470: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x342470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x342474: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x342474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x342478: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x342478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x34247c: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x34247cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x342480: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x342480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x342484: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x342484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x342488: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x342488u;
    SET_GPR_U32(ctx, 31, 0x342490u);
    ctx->pc = 0x34248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342488u;
    // 0x34248c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x342488u, 0x342490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342490u;
label_342490:
    // 0x342490: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x342490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x342494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x342498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34249c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x34249Cu;
    {
        const bool branch_taken_0x34249c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34249c) {
            ctx->pc = 0x342540u;
            goto label_342540;
        }
    }
    ctx->pc = 0x3424A4u;
    // 0x3424a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3424a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3424a8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3424A8u;
    {
        const bool branch_taken_0x3424a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3424a8) {
            ctx->pc = 0x3424E0u;
            goto label_3424e0;
        }
    }
    ctx->pc = 0x3424B0u;
    // 0x3424b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3424B0u;
    {
        const bool branch_taken_0x3424b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424b0) {
            ctx->pc = 0x3424C0u;
            goto label_3424c0;
        }
    }
    ctx->pc = 0x3424B8u;
    // 0x3424b8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3424B8u;
    {
        const bool branch_taken_0x3424b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424b8) {
            ctx->pc = 0x342570u;
            goto label_342570;
        }
    }
    ctx->pc = 0x3424C0u;
label_3424c0:
    // 0x3424c0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3424c4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3424c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3424c8: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x3424c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x3424cc: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3424CCu;
    SET_GPR_U32(ctx, 31, 0x3424D4u);
    ctx->pc = 0x3424D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424CCu;
    // 0x3424d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3424CCu, 0x3424D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424D4u;
label_3424d4:
    // 0x3424d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3424D4u;
    {
        const bool branch_taken_0x3424d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424d4) {
            ctx->pc = 0x342570u;
            goto label_342570;
        }
    }
    ctx->pc = 0x3424DCu;
    // 0x3424dc: 0x0  nop
    ctx->pc = 0x3424dcu;
    // NOP
label_3424e0:
    // 0x3424e0: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3424E0u;
    SET_GPR_U32(ctx, 31, 0x3424E8u);
    ctx->pc = 0x3424E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424E0u;
    // 0x3424e4: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3424E0u, 0x3424E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424E8u;
label_3424e8:
    // 0x3424e8: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3424E8u;
    SET_GPR_U32(ctx, 31, 0x3424F0u);
    ctx->pc = 0x3424ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424E8u;
    // 0x3424ec: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3424E8u, 0x3424F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424F0u;
label_3424f0:
    // 0x3424f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3424F0u;
    {
        const bool branch_taken_0x3424f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424f0) {
            ctx->pc = 0x342508u;
            goto label_342508;
        }
    }
    ctx->pc = 0x3424F8u;
    // 0x3424f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3424fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342500: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x342500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x342504: 0x0  nop
    ctx->pc = 0x342504u;
    // NOP
label_342508:
    // 0x342508: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x342508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34250c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x34250cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342510: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x342510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x342514: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x342514u;
    SET_GPR_U32(ctx, 31, 0x34251Cu);
    ctx->pc = 0x342518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342514u;
    // 0x342518: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x342514u, 0x34251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34251Cu;
label_34251c:
    // 0x34251c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x34251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x342520: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x342520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x342524: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x342524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342528: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x342528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34252c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34252cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342530: 0xc0414ca  jal         func_105328
    ctx->pc = 0x342530u;
    SET_GPR_U32(ctx, 31, 0x342538u);
    ctx->pc = 0x342534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342530u;
    // 0x342534: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x342530u, 0x342538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342538u;
label_342538:
    // 0x342538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x342538u;
    {
        const bool branch_taken_0x342538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342538) {
            ctx->pc = 0x342570u;
            goto label_342570;
        }
    }
    ctx->pc = 0x342540u;
label_342540:
    // 0x342540: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x342540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x342544: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x342544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x342548: 0xc0d05e4  jal         func_341790
    ctx->pc = 0x342548u;
    SET_GPR_U32(ctx, 31, 0x342550u);
    ctx->pc = 0x34254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342548u;
    // 0x34254c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341790u, 0x342548u, 0x342550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342550u;
label_342550:
    // 0x342550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342550u;
    {
        const bool branch_taken_0x342550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342550u;
        // 0x342554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342550) {
            ctx->pc = 0x342568u;
            goto label_342568;
        }
    }
    ctx->pc = 0x342558u;
    // 0x342558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x342558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34255c: 0xc0d0590  jal         func_341640
    ctx->pc = 0x34255Cu;
    SET_GPR_U32(ctx, 31, 0x342564u);
    ctx->pc = 0x342560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34255Cu;
    // 0x342560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x34255Cu, 0x342564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342564u;
label_342564:
    // 0x342564: 0x0  nop
    ctx->pc = 0x342564u;
    // NOP
label_342568:
    // 0x342568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342568u;
    {
        const bool branch_taken_0x342568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342568u;
        // 0x34256c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342568) {
            ctx->pc = 0x342578u;
            goto label_342578;
        }
    }
    ctx->pc = 0x342570u;
label_342570:
    // 0x342570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342574: 0x0  nop
    ctx->pc = 0x342574u;
    // NOP
label_342578:
    // 0x342578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x342578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34257c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34257cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342588: 0x3e00008  jr          $ra
    ctx->pc = 0x342588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342588u;
        // 0x34258c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342590u;
}
