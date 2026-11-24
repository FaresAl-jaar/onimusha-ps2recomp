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

// Function: sub_00361760
// Address: 0x361760 - 0x3618fc
void sub_00361760_0x361760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361760_0x361760");
#endif

    switch (ctx->pc) {
        case 0x3617b0u: goto label_3617b0;
        case 0x3617c4u: goto label_3617c4;
        case 0x36180cu: goto label_36180c;
        case 0x36181cu: goto label_36181c;
        case 0x36182cu: goto label_36182c;
        case 0x36183cu: goto label_36183c;
        case 0x361844u: goto label_361844;
        case 0x361860u: goto label_361860;
        case 0x361874u: goto label_361874;
        case 0x361890u: goto label_361890;
        case 0x3618a0u: goto label_3618a0;
        case 0x3618b0u: goto label_3618b0;
        case 0x3618c0u: goto label_3618c0;
        case 0x3618c8u: goto label_3618c8;
        default: break;
    }

    ctx->pc = 0x361760u;

    // 0x361760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x361760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x361764: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x361764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x361768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x361768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36176c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x36176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x361770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x361770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x361774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361778: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x361778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36177c: 0xc49428f0  lwc1        $f20, 0x28F0($a0)
    ctx->pc = 0x36177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361780: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x361780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361784: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x361784u;
    {
        const bool branch_taken_0x361784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x361788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361784u;
        // 0x361788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361784) {
            ctx->pc = 0x3617A8u;
            goto label_3617a8;
        }
    }
    ctx->pc = 0x36178Cu;
    // 0x36178c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x36178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x361790: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x361790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x361794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361798: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x361798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36179c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x36179Cu;
    {
        const bool branch_taken_0x36179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3617A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36179Cu;
        // 0x3617a0: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36179c) {
            ctx->pc = 0x3618E8u;
            goto label_3618e8;
        }
    }
    ctx->pc = 0x3617A4u;
    // 0x3617a4: 0x0  nop
    ctx->pc = 0x3617a4u;
    // NOP
label_3617a8:
    // 0x3617a8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x3617A8u;
    SET_GPR_U32(ctx, 31, 0x3617B0u);
    ctx->pc = 0x3617ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617A8u;
    // 0x3617ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x3617A8u, 0x3617B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617B0u;
label_3617b0:
    // 0x3617b0: 0x3c034062  lui         $v1, 0x4062
    ctx->pc = 0x3617b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16482 << 16));
    // 0x3617b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3617b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617b8: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x3617b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x3617bc: 0xc0400b8  jal         func_1002E0
    ctx->pc = 0x3617BCu;
    SET_GPR_U32(ctx, 31, 0x3617C4u);
    ctx->pc = 0x3617C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617BCu;
    // 0x3617c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002E0u, 0x3617BCu, 0x3617C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617C4u;
label_3617c4:
    // 0x3617c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3617C4u;
    {
        const bool branch_taken_0x3617c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3617c4) {
            ctx->pc = 0x361858u;
            goto label_361858;
        }
    }
    ctx->pc = 0x3617CCu;
    // 0x3617cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3617ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3617d0: 0x0  nop
    ctx->pc = 0x3617d0u;
    // NOP
    // 0x3617d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3617d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3617d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3617D8u;
    {
        const bool branch_taken_0x3617d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3617d8) {
            ctx->pc = 0x3617F8u;
            goto label_3617f8;
        }
    }
    ctx->pc = 0x3617E0u;
    // 0x3617e0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3617e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3617e4: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x3617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3617e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3617e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3617ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3617ECu;
    {
        const bool branch_taken_0x3617ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3617F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3617ECu;
        // 0x3617f0: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3617ec) {
            ctx->pc = 0x361850u;
            goto label_361850;
        }
    }
    ctx->pc = 0x3617F4u;
    // 0x3617f4: 0x0  nop
    ctx->pc = 0x3617f4u;
    // NOP
label_3617f8:
    // 0x3617f8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3617f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3617fc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3617fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x361800: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x361800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x361804: 0xc04b946  jal         func_12E518
    ctx->pc = 0x361804u;
    SET_GPR_U32(ctx, 31, 0x36180Cu);
    ctx->pc = 0x361808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361804u;
    // 0x361808: 0xc60c28f0  lwc1        $f12, 0x28F0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x361804u, 0x36180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36180Cu;
label_36180c:
    // 0x36180c: 0x3c034064  lui         $v1, 0x4064
    ctx->pc = 0x36180cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16484 << 16));
    // 0x361810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x361810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361814: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x361814u;
    SET_GPR_U32(ctx, 31, 0x36181Cu);
    ctx->pc = 0x361818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361814u;
    // 0x361818: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x361814u, 0x36181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36181Cu;
label_36181c:
    // 0x36181c: 0x3c034064  lui         $v1, 0x4064
    ctx->pc = 0x36181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16484 << 16));
    // 0x361820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361824: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x361824u;
    SET_GPR_U32(ctx, 31, 0x36182Cu);
    ctx->pc = 0x361828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361824u;
    // 0x361828: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x361824u, 0x36182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36182Cu;
label_36182c:
    // 0x36182c: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x36182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
    // 0x361830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x361830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361834: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x361834u;
    SET_GPR_U32(ctx, 31, 0x36183Cu);
    ctx->pc = 0x361838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361834u;
    // 0x361838: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x361834u, 0x36183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36183Cu;
label_36183c:
    // 0x36183c: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x36183Cu;
    SET_GPR_U32(ctx, 31, 0x361844u);
    ctx->pc = 0x361840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36183Cu;
    // 0x361840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x36183Cu, 0x361844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361844u;
label_361844:
    // 0x361844: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x361844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x361848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36184c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x36184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_361850:
    // 0x361850: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x361850u;
    {
        const bool branch_taken_0x361850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361850u;
        // 0x361854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361850) {
            ctx->pc = 0x3618E8u;
            goto label_3618e8;
        }
    }
    ctx->pc = 0x361858u;
label_361858:
    // 0x361858: 0xc04b946  jal         func_12E518
    ctx->pc = 0x361858u;
    SET_GPR_U32(ctx, 31, 0x361860u);
    ctx->pc = 0x36185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361858u;
    // 0x36185c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x361858u, 0x361860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361860u;
label_361860:
    // 0x361860: 0x3c034065  lui         $v1, 0x4065
    ctx->pc = 0x361860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16485 << 16));
    // 0x361864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361868: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x361868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x36186c: 0xc0400cc  jal         func_100330
    ctx->pc = 0x36186Cu;
    SET_GPR_U32(ctx, 31, 0x361874u);
    ctx->pc = 0x361870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36186Cu;
    // 0x361870: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100330u, 0x36186Cu, 0x361874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361874u;
label_361874:
    // 0x361874: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x361874u;
    {
        const bool branch_taken_0x361874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361874) {
            ctx->pc = 0x3618E0u;
            goto label_3618e0;
        }
    }
    ctx->pc = 0x36187Cu;
    // 0x36187c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x36187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x361880: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x361880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x361884: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x361884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x361888: 0xc04b946  jal         func_12E518
    ctx->pc = 0x361888u;
    SET_GPR_U32(ctx, 31, 0x361890u);
    ctx->pc = 0x36188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361888u;
    // 0x36188c: 0xc60c28f0  lwc1        $f12, 0x28F0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x361888u, 0x361890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361890u;
label_361890:
    // 0x361890: 0x3c034064  lui         $v1, 0x4064
    ctx->pc = 0x361890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16484 << 16));
    // 0x361894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361898: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x361898u;
    SET_GPR_U32(ctx, 31, 0x3618A0u);
    ctx->pc = 0x36189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361898u;
    // 0x36189c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x361898u, 0x3618A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618A0u;
label_3618a0:
    // 0x3618a0: 0x3c034064  lui         $v1, 0x4064
    ctx->pc = 0x3618a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16484 << 16));
    // 0x3618a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3618a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618a8: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x3618A8u;
    SET_GPR_U32(ctx, 31, 0x3618B0u);
    ctx->pc = 0x3618ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618A8u;
    // 0x3618ac: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x3618A8u, 0x3618B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618B0u;
label_3618b0:
    // 0x3618b0: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x3618b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
    // 0x3618b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3618b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618b8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x3618B8u;
    SET_GPR_U32(ctx, 31, 0x3618C0u);
    ctx->pc = 0x3618BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618B8u;
    // 0x3618bc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x3618B8u, 0x3618C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618C0u;
label_3618c0:
    // 0x3618c0: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x3618C0u;
    SET_GPR_U32(ctx, 31, 0x3618C8u);
    ctx->pc = 0x3618C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618C0u;
    // 0x3618c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x3618C0u, 0x3618C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618C8u;
label_3618c8:
    // 0x3618c8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3618c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3618cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3618d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3618d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3618D4u;
    {
        const bool branch_taken_0x3618d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3618D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618D4u;
        // 0x3618d8: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3618d4) {
            ctx->pc = 0x3618E8u;
            goto label_3618e8;
        }
    }
    ctx->pc = 0x3618DCu;
    // 0x3618dc: 0x0  nop
    ctx->pc = 0x3618dcu;
    // NOP
label_3618e0:
    // 0x3618e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3618e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618e4: 0x0  nop
    ctx->pc = 0x3618e4u;
    // NOP
label_3618e8:
    // 0x3618e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3618e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3618ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3618ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3618f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3618f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3618f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3618F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3618F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618F4u;
        // 0x3618f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3618F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3618FCu;
}
