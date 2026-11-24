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

// Function: sub_00185800
// Address: 0x185800 - 0x185c04
void sub_00185800_0x185800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185800_0x185800");
#endif

    switch (ctx->pc) {
        case 0x185850u: goto label_185850;
        case 0x185860u: goto label_185860;
        case 0x1858b8u: goto label_1858b8;
        case 0x185908u: goto label_185908;
        case 0x185910u: goto label_185910;
        case 0x185924u: goto label_185924;
        case 0x18592cu: goto label_18592c;
        case 0x18595cu: goto label_18595c;
        case 0x185970u: goto label_185970;
        case 0x185990u: goto label_185990;
        case 0x1859a0u: goto label_1859a0;
        case 0x1859acu: goto label_1859ac;
        case 0x1859bcu: goto label_1859bc;
        case 0x1859ccu: goto label_1859cc;
        case 0x1859f4u: goto label_1859f4;
        case 0x185a04u: goto label_185a04;
        case 0x185a44u: goto label_185a44;
        case 0x185a98u: goto label_185a98;
        case 0x185ae8u: goto label_185ae8;
        case 0x185af0u: goto label_185af0;
        case 0x185b04u: goto label_185b04;
        case 0x185b0cu: goto label_185b0c;
        case 0x185b3cu: goto label_185b3c;
        case 0x185b50u: goto label_185b50;
        case 0x185b70u: goto label_185b70;
        case 0x185b80u: goto label_185b80;
        case 0x185b8cu: goto label_185b8c;
        case 0x185b9cu: goto label_185b9c;
        case 0x185bacu: goto label_185bac;
        default: break;
    }

    ctx->pc = 0x185800u;

    // 0x185800: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x185800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x185804: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x185804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x185808: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x185808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x18580c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x18580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x185810: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x185810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x185814: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x185814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x185818: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x185818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18581c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x185820: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x185820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x185824: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x185824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x185828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x185828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18582c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18582cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x185830: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x185830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x185834: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x185834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x185838: 0x908301f8  lbu         $v1, 0x1F8($a0)
    ctx->pc = 0x185838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x18583c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x18583cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x185840: 0x146000e1  bnez        $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x185840u;
    {
        const bool branch_taken_0x185840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185840u;
        // 0x185844: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185840) {
            ctx->pc = 0x185BC8u;
            goto label_185bc8;
        }
    }
    ctx->pc = 0x185848u;
    // 0x185848: 0xc060d40  jal         func_183500
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 31, 0x185850u);
    ctx->pc = 0x18584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185848u;
    // 0x18584c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x185848u, 0x185850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185850u;
label_185850:
    // 0x185850: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x185850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185858: 0xc060d40  jal         func_183500
    ctx->pc = 0x185858u;
    SET_GPR_U32(ctx, 31, 0x185860u);
    ctx->pc = 0x18585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185858u;
    // 0x18585c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x185858u, 0x185860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185860u;
label_185860:
    // 0x185860: 0x13c00061  beqz        $fp, . + 4 + (0x61 << 2)
    ctx->pc = 0x185860u;
    {
        const bool branch_taken_0x185860 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x185864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185860u;
        // 0x185864: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185860) {
            ctx->pc = 0x1859E8u;
            goto label_1859e8;
        }
    }
    ctx->pc = 0x185868u;
    // 0x185868: 0x12e0005f  beqz        $s7, . + 4 + (0x5F << 2)
    ctx->pc = 0x185868u;
    {
        const bool branch_taken_0x185868 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x185868) {
            ctx->pc = 0x1859E8u;
            goto label_1859e8;
        }
    }
    ctx->pc = 0x185870u;
    // 0x185870: 0x8fc211d4  lw          $v0, 0x11D4($fp)
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4564)));
    // 0x185874: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x185874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x185878: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x185878u;
    {
        const bool branch_taken_0x185878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185878) {
            ctx->pc = 0x1859E8u;
            goto label_1859e8;
        }
    }
    ctx->pc = 0x185880u;
    // 0x185880: 0x8ee211d4  lw          $v0, 0x11D4($s7)
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4564)));
    // 0x185884: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x185884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x185888: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x185888u;
    {
        const bool branch_taken_0x185888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185888) {
            ctx->pc = 0x1859E8u;
            goto label_1859e8;
        }
    }
    ctx->pc = 0x185890u;
    // 0x185890: 0x92a201f9  lbu         $v0, 0x1F9($s5)
    ctx->pc = 0x185890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 505)));
    // 0x185894: 0xc6f611f8  lwc1        $f22, 0x11F8($s7)
    ctx->pc = 0x185894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x185898: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x185898u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18589c: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x18589Cu;
    {
        const bool branch_taken_0x18589c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18589Cu;
        // 0x1858a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18589c) {
            ctx->pc = 0x1859E8u;
            goto label_1859e8;
        }
    }
    ctx->pc = 0x1858A4u;
    // 0x1858a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1858a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1858a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1858a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1858acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1858b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1858b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858b4: 0x46160501  sub.s       $f20, $f0, $f22
    ctx->pc = 0x1858b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1858b8:
    // 0x1858b8: 0x8fc211c0  lw          $v0, 0x11C0($fp)
    ctx->pc = 0x1858b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4544)));
    // 0x1858bc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1858c0: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1858c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1858c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1858c8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1858C8u;
    {
        const bool branch_taken_0x1858c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858c8) {
            ctx->pc = 0x1859D0u;
            goto label_1859d0;
        }
    }
    ctx->pc = 0x1858D0u;
    // 0x1858d0: 0x8ee211c0  lw          $v0, 0x11C0($s7)
    ctx->pc = 0x1858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4544)));
    // 0x1858d4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1858d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1858d8: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x1858d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1858dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1858dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1858e0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1858E0u;
    {
        const bool branch_taken_0x1858e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858e0) {
            ctx->pc = 0x1859D0u;
            goto label_1859d0;
        }
    }
    ctx->pc = 0x1858E8u;
    // 0x1858e8: 0x8ea201e4  lw          $v0, 0x1E4($s5)
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 484)));
    // 0x1858ec: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1858f0: 0x24910040  addiu       $s1, $a0, 0x40
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1858f4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1858f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1858fc: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x1858fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x185900: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185900u;
    SET_GPR_U32(ctx, 31, 0x185908u);
    ctx->pc = 0x185904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185900u;
    // 0x185904: 0x569821  addu        $s3, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185900u, 0x185908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185908u;
label_185908:
    // 0x185908: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x185908u;
    SET_GPR_U32(ctx, 31, 0x185910u);
    ctx->pc = 0x18590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185908u;
    // 0x18590c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x185908u, 0x185910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185910u;
label_185910:
    // 0x185910: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x185910u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x185914: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x185914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185918: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x18591c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x18591Cu;
    SET_GPR_U32(ctx, 31, 0x185924u);
    ctx->pc = 0x185920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18591Cu;
    // 0x185920: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x18591Cu, 0x185924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185924u;
label_185924:
    // 0x185924: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x185924u;
    SET_GPR_U32(ctx, 31, 0x18592Cu);
    ctx->pc = 0x185928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185924u;
    // 0x185928: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x185924u, 0x18592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18592Cu;
label_18592c:
    // 0x18592c: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x18592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185930: 0x4614a81a  mula.s      $f21, $f20
    ctx->pc = 0x185930u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[20]));
    // 0x185934: 0x4616055c  madd.s      $f21, $f0, $f22
    ctx->pc = 0x185934u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x185938: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x185938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18593c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18593Cu;
    {
        const bool branch_taken_0x18593c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18593c) {
            ctx->pc = 0x185948u;
            goto label_185948;
        }
    }
    ctx->pc = 0x185944u;
    // 0x185944: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x185944u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_185948:
    // 0x185948: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x185948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x18594c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x18594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185950: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x185950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185954: 0xc04171c  jal         func_105C70
    ctx->pc = 0x185954u;
    SET_GPR_U32(ctx, 31, 0x18595Cu);
    ctx->pc = 0x185958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185954u;
    // 0x185958: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x185954u, 0x18595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18595Cu;
label_18595c:
    // 0x18595c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x185960: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x185960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x185964: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x185964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185968: 0xc04171c  jal         func_105C70
    ctx->pc = 0x185968u;
    SET_GPR_U32(ctx, 31, 0x185970u);
    ctx->pc = 0x18596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185968u;
    // 0x18596c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x185968u, 0x185970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185970u;
label_185970:
    // 0x185970: 0x8e680084  lw          $t0, 0x84($s3)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x185974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185978: 0x8e690088  lw          $t1, 0x88($s3)
    ctx->pc = 0x185978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x18597c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x185980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185984: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x185984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185988: 0xc06011c  jal         func_180470
    ctx->pc = 0x185988u;
    SET_GPR_U32(ctx, 31, 0x185990u);
    ctx->pc = 0x18598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185988u;
    // 0x18598c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x185988u, 0x185990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185990u;
label_185990:
    // 0x185990: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x185990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185994: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x185994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x185998: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185998u;
    SET_GPR_U32(ctx, 31, 0x1859A0u);
    ctx->pc = 0x18599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185998u;
    // 0x18599c: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185998u, 0x1859A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859A0u;
label_1859a0:
    // 0x1859a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1859a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1859a4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1859A4u;
    SET_GPR_U32(ctx, 31, 0x1859ACu);
    ctx->pc = 0x1859A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859A4u;
    // 0x1859a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1859A4u, 0x1859ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859ACu;
label_1859ac:
    // 0x1859ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1859acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1859b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1859b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1859b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1859B4u;
    SET_GPR_U32(ctx, 31, 0x1859BCu);
    ctx->pc = 0x1859B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859B4u;
    // 0x1859b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1859B4u, 0x1859BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859BCu;
label_1859bc:
    // 0x1859bc: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1859c0: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x1859c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1859c4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1859C4u;
    SET_GPR_U32(ctx, 31, 0x1859CCu);
    ctx->pc = 0x1859C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859C4u;
    // 0x1859c8: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1859C4u, 0x1859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859CCu;
label_1859cc:
    // 0x1859cc: 0x0  nop
    ctx->pc = 0x1859ccu;
    // NOP
label_1859d0:
    // 0x1859d0: 0x92a201f9  lbu         $v0, 0x1F9($s5)
    ctx->pc = 0x1859d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 505)));
    // 0x1859d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1859d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1859d8: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1859dc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1859e0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1859E0u;
    {
        const bool branch_taken_0x1859e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859E0u;
        // 0x1859e4: 0x26d60090  addiu       $s6, $s6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859e0) {
            ctx->pc = 0x1858B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1858b8;
        }
    }
    ctx->pc = 0x1859E8u;
label_1859e8:
    // 0x1859e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1859e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859ec: 0xc060d40  jal         func_183500
    ctx->pc = 0x1859ECu;
    SET_GPR_U32(ctx, 31, 0x1859F4u);
    ctx->pc = 0x1859F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859ECu;
    // 0x1859f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x1859ECu, 0x1859F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859F4u;
label_1859f4:
    // 0x1859f4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1859f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1859f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859fc: 0xc060d40  jal         func_183500
    ctx->pc = 0x1859FCu;
    SET_GPR_U32(ctx, 31, 0x185A04u);
    ctx->pc = 0x185A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859FCu;
    // 0x185a00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x1859FCu, 0x185A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A04u;
label_185a04:
    // 0x185a04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x185a04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a08: 0x12e0006f  beqz        $s7, . + 4 + (0x6F << 2)
    ctx->pc = 0x185A08u;
    {
        const bool branch_taken_0x185a08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a08) {
            ctx->pc = 0x185BC8u;
            goto label_185bc8;
        }
    }
    ctx->pc = 0x185A10u;
    // 0x185a10: 0x8ee311d4  lw          $v1, 0x11D4($s7)
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4564)));
    // 0x185a14: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x185a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x185a18: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x185A18u;
    {
        const bool branch_taken_0x185a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A18u;
        // 0x185a1c: 0x1e802b  sltu        $s0, $zero, $fp (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a18) {
            ctx->pc = 0x185BC8u;
            goto label_185bc8;
        }
    }
    ctx->pc = 0x185A20u;
    // 0x185a20: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185A20u;
    {
        const bool branch_taken_0x185a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a20) {
            ctx->pc = 0x185A34u;
            goto label_185a34;
        }
    }
    ctx->pc = 0x185A28u;
    // 0x185a28: 0x8fc311d4  lw          $v1, 0x11D4($fp)
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4564)));
    // 0x185a2c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x185a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x185a30: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x185a30u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_185a34:
    // 0x185a34: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x185A34u;
    {
        const bool branch_taken_0x185a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A34u;
        // 0x185a38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a34) {
            ctx->pc = 0x185A68u;
            goto label_185a68;
        }
    }
    ctx->pc = 0x185A3Cu;
    // 0x185a3c: 0xc060d40  jal         func_183500
    ctx->pc = 0x185A3Cu;
    SET_GPR_U32(ctx, 31, 0x185A44u);
    ctx->pc = 0x185A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A3Cu;
    // 0x185a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x185A3Cu, 0x185A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A44u;
label_185a44:
    // 0x185a44: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x185a44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a48: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x185A48u;
    {
        const bool branch_taken_0x185a48 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a48) {
            ctx->pc = 0x185A68u;
            goto label_185a68;
        }
    }
    ctx->pc = 0x185A50u;
    // 0x185a50: 0x8fc311d4  lw          $v1, 0x11D4($fp)
    ctx->pc = 0x185a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4564)));
    // 0x185a54: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x185a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x185a58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185A58u;
    {
        const bool branch_taken_0x185a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a58) {
            ctx->pc = 0x185A68u;
            goto label_185a68;
        }
    }
    ctx->pc = 0x185A60u;
    // 0x185a60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x185a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185a64: 0x0  nop
    ctx->pc = 0x185a64u;
    // NOP
label_185a68:
    // 0x185a68: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x185A68u;
    {
        const bool branch_taken_0x185a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a68) {
            ctx->pc = 0x185BC8u;
            goto label_185bc8;
        }
    }
    ctx->pc = 0x185A70u;
    // 0x185a70: 0x92a301f9  lbu         $v1, 0x1F9($s5)
    ctx->pc = 0x185a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 505)));
    // 0x185a74: 0xc6f411f8  lwc1        $f20, 0x11F8($s7)
    ctx->pc = 0x185a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185a78: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x185a78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x185a7c: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x185A7Cu;
    {
        const bool branch_taken_0x185a7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A7Cu;
        // 0x185a80: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a7c) {
            ctx->pc = 0x185BC8u;
            goto label_185bc8;
        }
    }
    ctx->pc = 0x185A84u;
    // 0x185a84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x185a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x185a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185a90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x185a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a94: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x185a94u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_185a98:
    // 0x185a98: 0x8fc311c0  lw          $v1, 0x11C0($fp)
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4544)));
    // 0x185a9c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x185aa0: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x185aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x185aa4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x185aa8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x185AA8u;
    {
        const bool branch_taken_0x185aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185aa8) {
            ctx->pc = 0x185BB0u;
            goto label_185bb0;
        }
    }
    ctx->pc = 0x185AB0u;
    // 0x185ab0: 0x8ee311c0  lw          $v1, 0x11C0($s7)
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4544)));
    // 0x185ab4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x185ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x185ab8: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x185abc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x185abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x185ac0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185BB0u;
            goto label_185bb0;
        }
    }
    ctx->pc = 0x185AC8u;
    // 0x185ac8: 0x8ea201e4  lw          $v0, 0x1E4($s5)
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 484)));
    // 0x185acc: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x185accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x185ad0: 0x24b20040  addiu       $s2, $a1, 0x40
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x185ad4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185ad8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x185adc: 0x26660080  addiu       $a2, $s3, 0x80
    ctx->pc = 0x185adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x185ae0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185AE0u;
    SET_GPR_U32(ctx, 31, 0x185AE8u);
    ctx->pc = 0x185AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AE0u;
    // 0x185ae4: 0x50a021  addu        $s4, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185AE0u, 0x185AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185AE8u;
label_185ae8:
    // 0x185ae8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x185AE8u;
    SET_GPR_U32(ctx, 31, 0x185AF0u);
    ctx->pc = 0x185AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AE8u;
    // 0x185aec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x185AE8u, 0x185AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185AF0u;
label_185af0:
    // 0x185af0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x185af0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x185af4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185af8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x185afc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185AFCu;
    SET_GPR_U32(ctx, 31, 0x185B04u);
    ctx->pc = 0x185B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AFCu;
    // 0x185b00: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185AFCu, 0x185B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B04u;
label_185b04:
    // 0x185b04: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x185B04u;
    SET_GPR_U32(ctx, 31, 0x185B0Cu);
    ctx->pc = 0x185B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B04u;
    // 0x185b08: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x185B04u, 0x185B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B0Cu;
label_185b0c:
    // 0x185b0c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x185b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b10: 0x4615b01a  mula.s      $f22, $f21
    ctx->pc = 0x185b10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[21]));
    // 0x185b14: 0x4614059c  madd.s      $f22, $f0, $f20
    ctx->pc = 0x185b14u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x185b18: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x185b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x185B1Cu;
    {
        const bool branch_taken_0x185b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185b1c) {
            ctx->pc = 0x185B28u;
            goto label_185b28;
        }
    }
    ctx->pc = 0x185B24u;
    // 0x185b24: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x185b24u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
label_185b28:
    // 0x185b28: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x185b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x185b2c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x185b30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x185b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b34: 0xc04171c  jal         func_105C70
    ctx->pc = 0x185B34u;
    SET_GPR_U32(ctx, 31, 0x185B3Cu);
    ctx->pc = 0x185B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B34u;
    // 0x185b38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x185B34u, 0x185B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B3Cu;
label_185b3c:
    // 0x185b3c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x185b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x185b40: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x185b44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x185b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b48: 0xc04171c  jal         func_105C70
    ctx->pc = 0x185B48u;
    SET_GPR_U32(ctx, 31, 0x185B50u);
    ctx->pc = 0x185B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B48u;
    // 0x185b4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x185B48u, 0x185B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B50u;
label_185b50:
    // 0x185b50: 0x8e880084  lw          $t0, 0x84($s4)
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x185b54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b58: 0x8e890088  lw          $t1, 0x88($s4)
    ctx->pc = 0x185b58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x185b5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x185b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b64: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x185b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b68: 0xc06011c  jal         func_180470
    ctx->pc = 0x185B68u;
    SET_GPR_U32(ctx, 31, 0x185B70u);
    ctx->pc = 0x185B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B68u;
    // 0x185b6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x185B68u, 0x185B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B70u;
label_185b70:
    // 0x185b70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185b74: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x185b78: 0xc0414d0  jal         func_105340
    ctx->pc = 0x185B78u;
    SET_GPR_U32(ctx, 31, 0x185B80u);
    ctx->pc = 0x185B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B78u;
    // 0x185b7c: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x185B78u, 0x185B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B80u;
label_185b80:
    // 0x185b80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185b84: 0xc041472  jal         func_1051C8
    ctx->pc = 0x185B84u;
    SET_GPR_U32(ctx, 31, 0x185B8Cu);
    ctx->pc = 0x185B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B84u;
    // 0x185b88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x185B84u, 0x185B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B8Cu;
label_185b8c:
    // 0x185b8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x185b90: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x185b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x185b94: 0xc0414dc  jal         func_105370
    ctx->pc = 0x185B94u;
    SET_GPR_U32(ctx, 31, 0x185B9Cu);
    ctx->pc = 0x185B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B94u;
    // 0x185b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x185B94u, 0x185B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B9Cu;
label_185b9c:
    // 0x185b9c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x185ba0: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x185ba4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x185BA4u;
    SET_GPR_U32(ctx, 31, 0x185BACu);
    ctx->pc = 0x185BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BA4u;
    // 0x185ba8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x185BA4u, 0x185BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BACu;
label_185bac:
    // 0x185bac: 0x0  nop
    ctx->pc = 0x185bacu;
    // NOP
label_185bb0:
    // 0x185bb0: 0x92a301f9  lbu         $v1, 0x1F9($s5)
    ctx->pc = 0x185bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 505)));
    // 0x185bb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x185bb8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x185bbc: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x185bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x185bc0: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x185BC0u;
    {
        const bool branch_taken_0x185bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC0u;
        // 0x185bc4: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bc0) {
            ctx->pc = 0x185A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185a98;
        }
    }
    ctx->pc = 0x185BC8u;
label_185bc8:
    // 0x185bc8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x185bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185bcc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185bccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185bd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x185bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x185bd4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185bd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185bd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x185bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x185bdc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x185bdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185be0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185be4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185be8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185bec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185bf0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x185bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185bf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185bf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x185BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BFCu;
        // 0x185c00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185C04u;
}
