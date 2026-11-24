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

// Function: sub_0014F760
// Address: 0x14f760 - 0x14fe64
void sub_0014F760_0x14f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F760_0x14f760");
#endif

    switch (ctx->pc) {
        case 0x14f7a4u: goto label_14f7a4;
        case 0x14f7f4u: goto label_14f7f4;
        case 0x14f800u: goto label_14f800;
        case 0x14f808u: goto label_14f808;
        case 0x14f938u: goto label_14f938;
        case 0x14f95cu: goto label_14f95c;
        case 0x14f9b0u: goto label_14f9b0;
        case 0x14fa00u: goto label_14fa00;
        case 0x14fb08u: goto label_14fb08;
        case 0x14fb3cu: goto label_14fb3c;
        case 0x14fc48u: goto label_14fc48;
        case 0x14fc58u: goto label_14fc58;
        case 0x14fc6cu: goto label_14fc6c;
        case 0x14fd5cu: goto label_14fd5c;
        case 0x14fd78u: goto label_14fd78;
        default: break;
    }

    ctx->pc = 0x14f760u;

    // 0x14f760: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x14f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x14f764: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14f768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14f76c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x14f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14f770: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14f774: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14f778: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14f77c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14f780: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14f784: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14f788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f78c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14f790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14f794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14f794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f798: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14f798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14f79c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F79Cu;
    {
        const bool branch_taken_0x14f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F79Cu;
        // 0x14f7a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f79c) {
            ctx->pc = 0x14F7C0u;
            goto label_14f7c0;
        }
    }
    ctx->pc = 0x14F7A4u;
label_14f7a4:
    // 0x14f7a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x14f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f7a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14f7b0: 0x0  nop
    ctx->pc = 0x14f7b0u;
    // NOP
    // 0x14f7b4: 0x0  nop
    ctx->pc = 0x14f7b4u;
    // NOP
    // 0x14f7b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F7B8u;
    {
        const bool branch_taken_0x14f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f7b8) {
            ctx->pc = 0x14F7A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f7a4;
        }
    }
    ctx->pc = 0x14F7C0u;
label_14f7c0:
    // 0x14f7c0: 0xc7808038  lwc1        $f0, -0x7FC8($gp)
    ctx->pc = 0x14f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7c4: 0x27a2024c  addiu       $v0, $sp, 0x24C
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x14f7c8: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x14f7cc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x14f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14f7d0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x14f7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x14f7d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14f7d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7d8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x14f7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14f7dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f7e0: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x14f7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x14f7e4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14f7e8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x14f7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14f7ec: 0xc04d594  jal         func_135650
    ctx->pc = 0x14F7ECu;
    SET_GPR_U32(ctx, 31, 0x14F7F4u);
    ctx->pc = 0x14F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7ECu;
    // 0x14f7f0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x14F7ECu, 0x14F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7F4u;
label_14f7f4:
    // 0x14f7f4: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x14f7f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x14f7f8: 0xc04d594  jal         func_135650
    ctx->pc = 0x14F7F8u;
    SET_GPR_U32(ctx, 31, 0x14F800u);
    ctx->pc = 0x14F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7F8u;
    // 0x14f7fc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x14F7F8u, 0x14F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F800u;
label_14f800:
    // 0x14f800: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x14F800u;
    {
        const bool branch_taken_0x14f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F800u;
        // 0x14f804: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f800) {
            ctx->pc = 0x14FE20u;
            goto label_14fe20;
        }
    }
    ctx->pc = 0x14F808u;
label_14f808:
    // 0x14f808: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x14f80c: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x14f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x14f810: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x14f814: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14f814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14f818: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x14f818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f81c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14f81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14f820: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x14F820u;
    {
        const bool branch_taken_0x14f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f820) {
            ctx->pc = 0x14FE18u;
            goto label_14fe18;
        }
    }
    ctx->pc = 0x14F828u;
    // 0x14f828: 0xc6610070  lwc1        $f1, 0x70($s3)
    ctx->pc = 0x14f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f82c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x14f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x14f830: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14f834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f838: 0x0  nop
    ctx->pc = 0x14f838u;
    // NOP
    // 0x14f83c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f83cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f840: 0x45010175  bc1t        . + 4 + (0x175 << 2)
    ctx->pc = 0x14F840u;
    {
        const bool branch_taken_0x14f840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f840) {
            ctx->pc = 0x14FE18u;
            goto label_14fe18;
        }
    }
    ctx->pc = 0x14F848u;
    // 0x14f848: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x14f84c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f850: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F850u;
    {
        const bool branch_taken_0x14f850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f850) {
            ctx->pc = 0x14F880u;
            goto label_14f880;
        }
    }
    ctx->pc = 0x14F858u;
    // 0x14f858: 0xe6610078  swc1        $f1, 0x78($s3)
    ctx->pc = 0x14f858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x14f85c: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x14f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f860: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x14f860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14f864: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x14f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f868: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x14f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f86c: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x14f86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x14f870: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x14f870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x14f874: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F878u;
    {
        const bool branch_taken_0x14f878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F878u;
        // 0x14f87c: 0xe7a00228  swc1        $f0, 0x228($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f878) {
            ctx->pc = 0x14F8B0u;
            goto label_14f8b0;
        }
    }
    ctx->pc = 0x14F880u;
label_14f880:
    // 0x14f880: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14f884: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14f884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f888: 0x0  nop
    ctx->pc = 0x14f888u;
    // NOP
    // 0x14f88c: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x14f88cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x14f890: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x14f890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14f894: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x14f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f898: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x14f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f89c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x14f89cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x14f8a0: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x14f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x14f8a4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x14f8a4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x14f8a8: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x14f8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x14f8ac: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x14f8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_14f8b0:
    // 0x14f8b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14f8b4: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x14f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f8c0: 0x0  nop
    ctx->pc = 0x14f8c0u;
    // NOP
    // 0x14f8c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f8c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f8c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14f8c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14f8cc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x14f8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x14f8d0: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x14f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f8d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f8d8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x14f8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x14f8dc: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x14f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f8e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f8e4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x14f8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x14f8e8: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x14f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f8ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f8f0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x14f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x14f8f4: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x14f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f8f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f8fc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x14f8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x14f900: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x14f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f904: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f904u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f908: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14f908u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14f90c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x14f90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x14f910: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x14f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f914: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f914u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f918: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14f918u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14f91c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x14f91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x14f920: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x14f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f924: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14f924u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14f928: 0x0  nop
    ctx->pc = 0x14f928u;
    // NOP
    // 0x14f92c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14f92cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14f930: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14F930u;
    {
        const bool branch_taken_0x14f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F930u;
        // 0x14f934: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f930) {
            ctx->pc = 0x14F9E8u;
            goto label_14f9e8;
        }
    }
    ctx->pc = 0x14F938u;
label_14f938:
    // 0x14f938: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14f93c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14F93Cu;
    {
        const bool branch_taken_0x14f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F93Cu;
        // 0x14f940: 0x32a200ff  andi        $v0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f93c) {
            ctx->pc = 0x14F990u;
            goto label_14f990;
        }
    }
    ctx->pc = 0x14F944u;
    // 0x14f944: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x14f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14f948: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14f94c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14f950: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x14f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x14f954: 0xc041442  jal         func_105108
    ctx->pc = 0x14F954u;
    SET_GPR_U32(ctx, 31, 0x14F95Cu);
    ctx->pc = 0x14F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F954u;
    // 0x14f958: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14F954u, 0x14F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F95Cu;
label_14f95c:
    // 0x14f95c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14f960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14f960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14f964: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14f968: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x14f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f96c: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x14f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f974: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x14f974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x14f978: 0xc66100a8  lwc1        $f1, 0xA8($s3)
    ctx->pc = 0x14f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f97c: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x14f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f984: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14F984u;
    {
        const bool branch_taken_0x14f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F984u;
        // 0x14f988: 0xe44000f8  swc1        $f0, 0xF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f984) {
            ctx->pc = 0x14F9E0u;
            goto label_14f9e0;
        }
    }
    ctx->pc = 0x14F98Cu;
    // 0x14f98c: 0x0  nop
    ctx->pc = 0x14f98cu;
    // NOP
label_14f990:
    // 0x14f990: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14f994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14f998: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14f99c: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x14f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x14f9a0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x14f9a4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14f9a8: 0xc041442  jal         func_105108
    ctx->pc = 0x14F9A8u;
    SET_GPR_U32(ctx, 31, 0x14F9B0u);
    ctx->pc = 0x14F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9A8u;
    // 0x14f9ac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14F9A8u, 0x14F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9B0u;
label_14f9b0:
    // 0x14f9b0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14f9b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14f9b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14f9bc: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x14f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f9c0: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x14f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f9c8: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x14f9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x14f9cc: 0xc66100a8  lwc1        $f1, 0xA8($s3)
    ctx->pc = 0x14f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f9d0: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x14f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14f9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14f9d8: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x14f9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x14f9dc: 0x0  nop
    ctx->pc = 0x14f9dcu;
    // NOP
label_14f9e0:
    // 0x14f9e0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f9e4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f9e8:
    // 0x14f9e8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14f9ec: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x14f9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14f9f0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x14F9F0u;
    {
        const bool branch_taken_0x14f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9F0u;
        // 0x14f9f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9f0) {
            ctx->pc = 0x14F938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f938;
        }
    }
    ctx->pc = 0x14F9F8u;
    // 0x14f9f8: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x14F9F8u;
    {
        const bool branch_taken_0x14f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9f8) {
            ctx->pc = 0x14FE08u;
            goto label_14fe08;
        }
    }
    ctx->pc = 0x14FA00u;
label_14fa00:
    // 0x14fa00: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x14fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x14fa04: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14fa08: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x14fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x14fa0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14fa10: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x14fa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fa14: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x14fa14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14fa18: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x14FA18u;
    {
        const bool branch_taken_0x14fa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa18) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FA20u;
    // 0x14fa20: 0xc6430070  lwc1        $f3, 0x70($s2)
    ctx->pc = 0x14fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fa24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x14fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x14fa28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fa2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fa30: 0x0  nop
    ctx->pc = 0x14fa30u;
    // NOP
    // 0x14fa34: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14fa34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fa38: 0x450100f1  bc1t        . + 4 + (0xF1 << 2)
    ctx->pc = 0x14FA38u;
    {
        const bool branch_taken_0x14fa38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fa38) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FA40u;
    // 0x14fa40: 0xc64200a4  lwc1        $f2, 0xA4($s2)
    ctx->pc = 0x14fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fa44: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x14fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa48: 0xc66100a4  lwc1        $f1, 0xA4($s3)
    ctx->pc = 0x14fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fa4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x14fa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14fa50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fa54: 0x450100ea  bc1t        . + 4 + (0xEA << 2)
    ctx->pc = 0x14FA54u;
    {
        const bool branch_taken_0x14fa54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fa54) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FA5Cu;
    // 0x14fa5c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x14fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14fa60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14fa64: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14fa64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fa68: 0x450000e5  bc1f        . + 4 + (0xE5 << 2)
    ctx->pc = 0x14FA68u;
    {
        const bool branch_taken_0x14fa68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fa68) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FA70u;
    // 0x14fa70: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x14fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x14fa74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14fa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14fa78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14FA78u;
    {
        const bool branch_taken_0x14fa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa78) {
            ctx->pc = 0x14FAB8u;
            goto label_14fab8;
        }
    }
    ctx->pc = 0x14FA80u;
    // 0x14fa80: 0xe6430078  swc1        $f3, 0x78($s2)
    ctx->pc = 0x14fa80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x14fa84: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x14fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fa88: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x14fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa8c: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x14fa8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14fa90: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x14fa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x14fa94: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x14fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fa98: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x14fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fa9c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14faa0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14faa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14faa4: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x14faa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14faa8: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x14faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14faac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14faacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fab0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14FAB0u;
    {
        const bool branch_taken_0x14fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAB0u;
        // 0x14fab4: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fab0) {
            ctx->pc = 0x14FAF8u;
            goto label_14faf8;
        }
    }
    ctx->pc = 0x14FAB8u;
label_14fab8:
    // 0x14fab8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14fabc: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x14fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fac0: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x14fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fac4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14fac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fac8: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x14fac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14facc: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x14faccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x14fad0: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x14fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fad4: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x14fad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fad8: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fadc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14fadcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x14fae0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14fae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14fae4: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x14fae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x14fae8: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x14fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14faec: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x14faecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x14faf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14faf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14faf4: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x14faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_14faf8:
    // 0x14faf8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x14faf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fafc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x14FAFCu;
    {
        const bool branch_taken_0x14fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAFCu;
        // 0x14fb00: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fafc) {
            ctx->pc = 0x14FBD8u;
            goto label_14fbd8;
        }
    }
    ctx->pc = 0x14FB04u;
    // 0x14fb04: 0x0  nop
    ctx->pc = 0x14fb04u;
    // NOP
label_14fb08:
    // 0x14fb08: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14fb0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x14fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fb10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14fb14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14fb18: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x14fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x14fb1c: 0x9042024c  lbu         $v0, 0x24C($v0)
    ctx->pc = 0x14fb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14fb20: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x14fb24: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14fb28: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x14fb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14fb2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fb30: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14fb34: 0xc053f9c  jal         func_14FE70
    ctx->pc = 0x14FB34u;
    SET_GPR_U32(ctx, 31, 0x14FB3Cu);
    ctx->pc = 0x14FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB34u;
    // 0x14fb38: 0x244600f0  addiu       $a2, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE70u, 0x14FB34u, 0x14FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB3Cu;
label_14fb3c:
    // 0x14fb3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14FB3Cu;
    {
        const bool branch_taken_0x14fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB3Cu;
        // 0x14fb40: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb3c) {
            ctx->pc = 0x14FBA8u;
            goto label_14fba8;
        }
    }
    ctx->pc = 0x14FB44u;
    // 0x14fb44: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x14fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14fb48: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14fb4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x14fb4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fb50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14fb50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fb54: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14fb54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14fb58: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x14fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14fb5c: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x14fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fb60: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x14fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fb64: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x14fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fb68: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x14fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x14fb6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x14fb70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14fb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14fb74: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x14fb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14fb78: 0x46000004  c1          0x4
    ctx->pc = 0x14fb78u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x14fb7c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14fb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fb80: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x14FB80u;
    {
        const bool branch_taken_0x14fb80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fb80) {
            ctx->pc = 0x14FBA8u;
            goto label_14fba8;
        }
    }
    ctx->pc = 0x14FB88u;
    // 0x14fb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fb8c: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14fb90: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x14fb90u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14fb94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb98: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14fb9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14fb9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fba0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14fba0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14fba4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_14fba8:
    // 0x14fba8: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FBA8u;
    {
        const bool branch_taken_0x14fba8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fba8) {
            ctx->pc = 0x14FBD0u;
            goto label_14fbd0;
        }
    }
    ctx->pc = 0x14FBB0u;
    // 0x14fbb0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x14fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbb4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x14fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x14fbb8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x14fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbbc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x14fbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x14fbc0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x14fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbc4: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x14fbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x14fbc8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x14fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbcc: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x14fbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_14fbd0:
    // 0x14fbd0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14fbd4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x14fbd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14fbd8:
    // 0x14fbd8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x14fbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x14fbdc: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x14fbdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14fbe0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x14FBE0u;
    {
        const bool branch_taken_0x14fbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBE0u;
        // 0x14fbe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbe0) {
            ctx->pc = 0x14FB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fb08;
        }
    }
    ctx->pc = 0x14FBE8u;
    // 0x14fbe8: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x14fbec: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x14fbecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fbf0: 0x27a70200  addiu       $a3, $sp, 0x200
    ctx->pc = 0x14fbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14fbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf8: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x14fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14fbfc: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x14fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x14fc00: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14fc04: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x14fc08: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x14fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x14fc0c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x14fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14fc10: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x14fc10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fc14: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x14fc18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x14fc18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fc1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14fc1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fc20: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14fc20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14fc24: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x14fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14fc28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fc2c: 0x0  nop
    ctx->pc = 0x14fc2cu;
    // NOP
    // 0x14fc30: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x14fc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x14fc34: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fc38: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FC38u;
    {
        const bool branch_taken_0x14fc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc38) {
            ctx->pc = 0x14FC60u;
            goto label_14fc60;
        }
    }
    ctx->pc = 0x14FC40u;
    // 0x14fc40: 0xc041494  jal         func_105250
    ctx->pc = 0x14FC40u;
    SET_GPR_U32(ctx, 31, 0x14FC48u);
    ctx->pc = 0x14FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC40u;
    // 0x14fc44: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x14FC40u, 0x14FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC48u;
label_14fc48:
    // 0x14fc48: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x14fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x14fc4c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14fc50: 0xc041442  jal         func_105108
    ctx->pc = 0x14FC50u;
    SET_GPR_U32(ctx, 31, 0x14FC58u);
    ctx->pc = 0x14FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC50u;
    // 0x14fc54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14FC50u, 0x14FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC58u;
label_14fc58:
    // 0x14fc58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FC58u;
    {
        const bool branch_taken_0x14fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc58) {
            ctx->pc = 0x14FC70u;
            goto label_14fc70;
        }
    }
    ctx->pc = 0x14FC60u;
label_14fc60:
    // 0x14fc60: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x14fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14fc64: 0xc041442  jal         func_105108
    ctx->pc = 0x14FC64u;
    SET_GPR_U32(ctx, 31, 0x14FC6Cu);
    ctx->pc = 0x14FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC64u;
    // 0x14fc68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14FC64u, 0x14FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC6Cu;
label_14fc6c:
    // 0x14fc6c: 0x0  nop
    ctx->pc = 0x14fc6cu;
    // NOP
label_14fc70:
    // 0x14fc70: 0xc7a30210  lwc1        $f3, 0x210($sp)
    ctx->pc = 0x14fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fc74: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x14fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc78: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x14fc78u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x14fc7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fc7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc80: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x14FC80u;
    {
        const bool branch_taken_0x14fc80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc80) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FC88u;
    // 0x14fc88: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x14fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fc8c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fc90: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x14fc90u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x14fc94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x14fc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fc98: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x14FC98u;
    {
        const bool branch_taken_0x14fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc98) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FCA0u;
    // 0x14fca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fca4: 0x0  nop
    ctx->pc = 0x14fca4u;
    // NOP
    // 0x14fca8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x14fca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fcac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14FCACu;
    {
        const bool branch_taken_0x14fcac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCACu;
        // 0x14fcb0: 0x46030801  sub.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcac) {
            ctx->pc = 0x14FCC0u;
            goto label_14fcc0;
        }
    }
    ctx->pc = 0x14FCB4u;
    // 0x14fcb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FCB4u;
    {
        const bool branch_taken_0x14fcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCB4u;
        // 0x14fcb8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcb4) {
            ctx->pc = 0x14FCD0u;
            goto label_14fcd0;
        }
    }
    ctx->pc = 0x14FCBCu;
    // 0x14fcbc: 0x0  nop
    ctx->pc = 0x14fcbcu;
    // NOP
label_14fcc0:
    // 0x14fcc0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x14fcc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x14fcc4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14fcc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14fcc8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x14fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x14fccc: 0x0  nop
    ctx->pc = 0x14fcccu;
    // NOP
label_14fcd0:
    // 0x14fcd0: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x14fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fcd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcd8: 0x0  nop
    ctx->pc = 0x14fcd8u;
    // NOP
    // 0x14fcdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fcdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fce0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FCF8u;
            goto label_14fcf8;
        }
    }
    ctx->pc = 0x14FCE8u;
    // 0x14fce8: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14fcecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14fcf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FCF0u;
    {
        const bool branch_taken_0x14fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF0u;
        // 0x14fcf4: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcf0) {
            ctx->pc = 0x14FD08u;
            goto label_14fd08;
        }
    }
    ctx->pc = 0x14FCF8u;
label_14fcf8:
    // 0x14fcf8: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14fcfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14fd00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14fd00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14fd04: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x14fd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_14fd08:
    // 0x14fd08: 0xc7a30210  lwc1        $f3, 0x210($sp)
    ctx->pc = 0x14fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fd0c: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x14fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd10: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x14fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd14: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x14fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd18: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x14fd18u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x14fd1c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x14fd1cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x14fd20: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x14fd20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x14fd24: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14fd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14fd28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14FD2Cu;
    {
        const bool branch_taken_0x14fd2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd2c) {
            ctx->pc = 0x14FD40u;
            goto label_14fd40;
        }
    }
    ctx->pc = 0x14FD34u;
    // 0x14fd34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FD34u;
    {
        const bool branch_taken_0x14fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD34u;
        // 0x14fd38: 0xafa00160  sw          $zero, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd34) {
            ctx->pc = 0x14FD48u;
            goto label_14fd48;
        }
    }
    ctx->pc = 0x14FD3Cu;
    // 0x14fd3c: 0x0  nop
    ctx->pc = 0x14fd3cu;
    // NOP
label_14fd40:
    // 0x14fd40: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x14fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x14fd44: 0x0  nop
    ctx->pc = 0x14fd44u;
    // NOP
label_14fd48:
    // 0x14fd48: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fd4c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FD4Cu;
    {
        const bool branch_taken_0x14fd4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD4Cu;
        // 0x14fd50: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd4c) {
            ctx->pc = 0x14FD68u;
            goto label_14fd68;
        }
    }
    ctx->pc = 0x14FD54u;
    // 0x14fd54: 0xc041442  jal         func_105108
    ctx->pc = 0x14FD54u;
    SET_GPR_U32(ctx, 31, 0x14FD5Cu);
    ctx->pc = 0x14FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD54u;
    // 0x14fd58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14FD54u, 0x14FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD5Cu;
label_14fd5c:
    // 0x14fd5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FD5Cu;
    {
        const bool branch_taken_0x14fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd5c) {
            ctx->pc = 0x14FD78u;
            goto label_14fd78;
        }
    }
    ctx->pc = 0x14FD64u;
    // 0x14fd64: 0x0  nop
    ctx->pc = 0x14fd64u;
    // NOP
label_14fd68:
    // 0x14fd68: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14fd6c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14fd70: 0xc041442  jal         func_105108
    ctx->pc = 0x14FD70u;
    SET_GPR_U32(ctx, 31, 0x14FD78u);
    ctx->pc = 0x14FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD70u;
    // 0x14fd74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14FD70u, 0x14FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD78u;
label_14fd78:
    // 0x14fd78: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x14fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14fd7c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14fd80: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14fd84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x14fd84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fd88: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14fd88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fd8c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14fd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14fd90: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x14fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14fd94: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x14fd98: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x14fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14fd9c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x14fda0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x14fda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fda4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14fda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fda8: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x14fda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14fdac: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x14fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14fdb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fdb4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14fdb8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14fdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14fdbc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14fdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14fdc0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x14fdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x14fdc4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14fdc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14fdc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14fdcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FDCCu;
    {
        const bool branch_taken_0x14fdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDCCu;
        // 0x14fdd0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdcc) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDD4u;
    // 0x14fdd4: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x14fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x14fdd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14fdd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14fddc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FDDCu;
    {
        const bool branch_taken_0x14fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fddc) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDE4u;
    // 0x14fde4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fde8:
    // 0x14fde8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FDE8u;
    {
        const bool branch_taken_0x14fde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fde8) {
            ctx->pc = 0x14FE00u;
            goto label_14fe00;
        }
    }
    ctx->pc = 0x14FDF0u;
    // 0x14fdf0: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x14fdf4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x14fdf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14fdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14fdfc: 0xae0206b4  sw          $v0, 0x6B4($s0)
    ctx->pc = 0x14fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 2));
label_14fe00:
    // 0x14fe00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14fe04: 0x0  nop
    ctx->pc = 0x14fe04u;
    // NOP
label_14fe08:
    // 0x14fe08: 0x920200e4  lbu         $v0, 0xE4($s0)
    ctx->pc = 0x14fe08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x14fe0c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x14fe0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14fe10: 0x1440fefb  bnez        $v0, . + 4 + (-0x105 << 2)
    ctx->pc = 0x14FE10u;
    {
        const bool branch_taken_0x14fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fe10) {
            ctx->pc = 0x14FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fa00;
        }
    }
    ctx->pc = 0x14FE18u;
label_14fe18:
    // 0x14fe18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14fe1c: 0x0  nop
    ctx->pc = 0x14fe1cu;
    // NOP
label_14fe20:
    // 0x14fe20: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x14fe20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x14fe24: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x14fe24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14fe28: 0x1440fe77  bnez        $v0, . + 4 + (-0x189 << 2)
    ctx->pc = 0x14FE28u;
    {
        const bool branch_taken_0x14fe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE28u;
        // 0x14fe2c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe28) {
            ctx->pc = 0x14F808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f808;
        }
    }
    ctx->pc = 0x14FE30u;
    // 0x14fe30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14fe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14fe34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14fe34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14fe38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fe3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14fe3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fe40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14fe40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fe44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14fe44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fe48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14fe48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fe4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14fe4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14fe50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14fe54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fe58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14fe58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE5Cu;
        // 0x14fe60: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE64u;
}
