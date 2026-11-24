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

// Function: sub_00320310
// Address: 0x320310 - 0x320494
void sub_00320310_0x320310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320310_0x320310");
#endif

    switch (ctx->pc) {
        case 0x320398u: goto label_320398;
        case 0x3203c0u: goto label_3203c0;
        case 0x3203f8u: goto label_3203f8;
        case 0x320420u: goto label_320420;
        default: break;
    }

    ctx->pc = 0x320310u;

    // 0x320310: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x320310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x320314: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x320314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x320318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x320318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32031c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x32031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x320320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x320320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x320324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x320324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32032c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320334: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x320334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320338: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x320338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32033c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320340: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x320340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320344: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x320344u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x320348: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x320348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32034c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x32034cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320350: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x320354: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x320354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320358: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x320358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32035c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x32035cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x320360: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x320360u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x320364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x320364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320368: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x320368u;
    {
        const bool branch_taken_0x320368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320368u;
        // 0x32036c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320368) {
            ctx->pc = 0x320468u;
            goto label_320468;
        }
    }
    ctx->pc = 0x320370u;
    // 0x320370: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x320370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x320374: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x320374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x320378: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x320378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
    // 0x32037c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32037cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320380: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x320380u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E9610u));
    // 0x320384: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x320384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x320388: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x320388u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E9620u));
    // 0x32038c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x32038cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x320390: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x320390u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x320394: 0x0  nop
    ctx->pc = 0x320394u;
    // NOP
label_320398:
    // 0x320398: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x320398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32039c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3203a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3203a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3203a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3203a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3203a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3203ac: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3203acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3203b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3203b4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3203b8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3203B8u;
    SET_GPR_U32(ctx, 31, 0x3203C0u);
    ctx->pc = 0x3203BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203B8u;
    // 0x3203bc: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3203B8u, 0x3203C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203C0u;
label_3203c0:
    // 0x3203c0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3203c4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3203c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3203c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3203cc: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3203ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3203d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3203d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3203d4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3203d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3203d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3203d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3203dc: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x3203dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3203e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3203e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3203e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3203e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3203e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3203e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3203ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3203ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3203f0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3203F0u;
    SET_GPR_U32(ctx, 31, 0x3203F8u);
    ctx->pc = 0x3203F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203F0u;
    // 0x3203f4: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3203F0u, 0x3203F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203F8u;
label_3203f8:
    // 0x3203f8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3203f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3203fc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3203fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x320400: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x320400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320404: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x320404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x320408: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x320408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32040c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x32040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x320410: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x320410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x320414: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x320414u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320418: 0xc07cd0c  jal         func_1F3430
    ctx->pc = 0x320418u;
    SET_GPR_U32(ctx, 31, 0x320420u);
    ctx->pc = 0x32041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320418u;
    // 0x32041c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3430u, 0x320418u, 0x320420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320420u;
label_320420:
    // 0x320420: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x320420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320428: 0x0  nop
    ctx->pc = 0x320428u;
    // NOP
    // 0x32042c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32042cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320430: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x320430u;
    {
        const bool branch_taken_0x320430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x320434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320430u;
        // 0x320434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320430) {
            ctx->pc = 0x32043Cu;
            goto label_32043c;
        }
    }
    ctx->pc = 0x320438u;
    // 0x320438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32043c:
    // 0x32043c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x320440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320440u;
    {
        const bool branch_taken_0x320440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320440) {
            ctx->pc = 0x320450u;
            goto label_320450;
        }
    }
    ctx->pc = 0x320448u;
    // 0x320448: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320448u;
    {
        const bool branch_taken_0x320448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320448u;
        // 0x32044c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320448) {
            ctx->pc = 0x320478u;
            goto label_320478;
        }
    }
    ctx->pc = 0x320450u;
label_320450:
    // 0x320450: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x320450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x320454: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x320454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x320458: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x320458u;
    {
        const bool branch_taken_0x320458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320458u;
        // 0x32045c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320458) {
            ctx->pc = 0x320398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320398;
        }
    }
    ctx->pc = 0x320460u;
    // 0x320460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320460u;
    {
        const bool branch_taken_0x320460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320460) {
            ctx->pc = 0x320470u;
            goto label_320470;
        }
    }
    ctx->pc = 0x320468u;
label_320468:
    // 0x320468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320468u;
    {
        const bool branch_taken_0x320468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320468u;
        // 0x32046c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320468) {
            ctx->pc = 0x320478u;
            goto label_320478;
        }
    }
    ctx->pc = 0x320470u;
label_320470:
    // 0x320470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320474: 0x0  nop
    ctx->pc = 0x320474u;
    // NOP
label_320478:
    // 0x320478: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x320478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32047c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32047cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32048c: 0x3e00008  jr          $ra
    ctx->pc = 0x32048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32048Cu;
        // 0x320490: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32048Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320494u;
}
