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

// Function: sub_0038B7D0
// Address: 0x38b7d0 - 0x38b924
void sub_0038B7D0_0x38b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B7D0_0x38b7d0");
#endif

    switch (ctx->pc) {
        case 0x38b7fcu: goto label_38b7fc;
        case 0x38b814u: goto label_38b814;
        case 0x38b834u: goto label_38b834;
        case 0x38b850u: goto label_38b850;
        case 0x38b860u: goto label_38b860;
        case 0x38b86cu: goto label_38b86c;
        case 0x38b894u: goto label_38b894;
        case 0x38b8bcu: goto label_38b8bc;
        default: break;
    }

    ctx->pc = 0x38b7d0u;

    // 0x38b7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38b7d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38b7d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38b7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38b7e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38b7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38b7e8: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x38b7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x38b7ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38b7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38b7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7f4: 0xc04fae4  jal         func_13EB90
    ctx->pc = 0x38B7F4u;
    SET_GPR_U32(ctx, 31, 0x38B7FCu);
    ctx->pc = 0x38B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B7F4u;
    // 0x38b7f8: 0x26440930  addiu       $a0, $s2, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EB90u, 0x38B7F4u, 0x38B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B7FCu;
label_38b7fc:
    // 0x38b7fc: 0x924200e4  lbu         $v0, 0xE4($s2)
    ctx->pc = 0x38b7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x38b800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38B800u;
    {
        const bool branch_taken_0x38b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B800u;
        // 0x38b804: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b800) {
            ctx->pc = 0x38B818u;
            goto label_38b818;
        }
    }
    ctx->pc = 0x38B808u;
    // 0x38b808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38b808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b80c: 0xc053a04  jal         func_14E810
    ctx->pc = 0x38B80Cu;
    SET_GPR_U32(ctx, 31, 0x38B814u);
    ctx->pc = 0x38B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B80Cu;
    // 0x38b810: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E810u, 0x38B80Cu, 0x38B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B814u;
label_38b814:
    // 0x38b814: 0x0  nop
    ctx->pc = 0x38b814u;
    // NOP
label_38b818:
    // 0x38b818: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38b81c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x38b81cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b820: 0x26441900  addiu       $a0, $s2, 0x1900
    ctx->pc = 0x38b820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6400));
    // 0x38b824: 0x34451100  ori         $a1, $v0, 0x1100
    ctx->pc = 0x38b824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x38b828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38b828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x38b82c: 0xc04e710  jal         func_139C40
    ctx->pc = 0x38B82Cu;
    SET_GPR_U32(ctx, 31, 0x38B834u);
    ctx->pc = 0x38B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B82Cu;
    // 0x38b830: 0xe64028ac  swc1        $f0, 0x28AC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 10412), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x38B82Cu, 0x38B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B834u;
label_38b834:
    // 0x38b834: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x38b834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x38b838: 0x26441900  addiu       $a0, $s2, 0x1900
    ctx->pc = 0x38b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6400));
    // 0x38b83c: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x38b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x38b840: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x38b840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x38b844: 0x26470080  addiu       $a3, $s2, 0x80
    ctx->pc = 0x38b844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x38b848: 0xc04e744  jal         func_139D10
    ctx->pc = 0x38B848u;
    SET_GPR_U32(ctx, 31, 0x38B850u);
    ctx->pc = 0x38B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B848u;
    // 0x38b84c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x38B848u, 0x38B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B850u;
label_38b850:
    // 0x38b850: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x38b850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x38b854: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x38b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x38b858: 0xc04e718  jal         func_139C60
    ctx->pc = 0x38B858u;
    SET_GPR_U32(ctx, 31, 0x38B860u);
    ctx->pc = 0x38B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B858u;
    // 0x38b85c: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C60u, 0x38B858u, 0x38B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B860u;
label_38b860:
    // 0x38b860: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x38b860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x38b864: 0xc04e71c  jal         func_139C70
    ctx->pc = 0x38B864u;
    SET_GPR_U32(ctx, 31, 0x38B86Cu);
    ctx->pc = 0x38B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B864u;
    // 0x38b868: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C70u, 0x38B864u, 0x38B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B86Cu;
label_38b86c:
    // 0x38b86c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x38b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x38b870: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x38b870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x38b874: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x38b874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x38b878: 0xae4318e0  sw          $v1, 0x18E0($s2)
    ctx->pc = 0x38b878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6368), GPR_U32(ctx, 3));
    // 0x38b87c: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x38b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x38b880: 0xae4218e4  sw          $v0, 0x18E4($s2)
    ctx->pc = 0x38b880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6372), GPR_U32(ctx, 2));
    // 0x38b884: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x38b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x38b888: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x38b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x38b88c: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x38B88Cu;
    SET_GPR_U32(ctx, 31, 0x38B894u);
    ctx->pc = 0x38B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B88Cu;
    // 0x38b890: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x38B88Cu, 0x38B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B894u;
label_38b894:
    // 0x38b894: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x38b894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x38b898: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x38b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x38b89c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b8a0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38B8A0u;
    {
        const bool branch_taken_0x38b8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38b8a0) {
            ctx->pc = 0x38B8F0u;
            goto label_38b8f0;
        }
    }
    ctx->pc = 0x38B8A8u;
    // 0x38b8a8: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x38b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38b8ac: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x38b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38b8b0: 0xc64e0028  lwc1        $f14, 0x28($s2)
    ctx->pc = 0x38b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x38b8b4: 0xc060108  jal         func_180420
    ctx->pc = 0x38B8B4u;
    SET_GPR_U32(ctx, 31, 0x38B8BCu);
    ctx->pc = 0x38B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B8B4u;
    // 0x38b8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180420u, 0x38B8B4u, 0x38B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B8BCu;
label_38b8bc:
    // 0x38b8bc: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x38b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b8c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x38b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x38b8c4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x38b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b8c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38b8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38b8cc: 0xe64028f0  swc1        $f0, 0x28F0($s2)
    ctx->pc = 0x38b8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 10480), bits); }
    // 0x38b8d0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x38b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b8d4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x38b8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x38b8d8: 0x8e4328d4  lw          $v1, 0x28D4($s2)
    ctx->pc = 0x38b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10452)));
    // 0x38b8dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38b8e0: 0xae4228d4  sw          $v0, 0x28D4($s2)
    ctx->pc = 0x38b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10452), GPR_U32(ctx, 2));
    // 0x38b8e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B8E4u;
    {
        const bool branch_taken_0x38b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8E4u;
        // 0x38b8e8: 0xae4028f4  sw          $zero, 0x28F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8e4) {
            ctx->pc = 0x38B908u;
            goto label_38b908;
        }
    }
    ctx->pc = 0x38B8ECu;
    // 0x38b8ec: 0x0  nop
    ctx->pc = 0x38b8ecu;
    // NOP
label_38b8f0:
    // 0x38b8f0: 0x8e4328d4  lw          $v1, 0x28D4($s2)
    ctx->pc = 0x38b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10452)));
    // 0x38b8f4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x38b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x38b8f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x38b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x38b8fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x38b8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x38b900: 0xae4328d4  sw          $v1, 0x28D4($s2)
    ctx->pc = 0x38b900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10452), GPR_U32(ctx, 3));
    // 0x38b904: 0xae4228f0  sw          $v0, 0x28F0($s2)
    ctx->pc = 0x38b904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10480), GPR_U32(ctx, 2));
label_38b908:
    // 0x38b908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38b908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b90c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38b910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b91c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B91Cu;
        // 0x38b920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B924u;
}
