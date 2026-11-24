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

// Function: sub_003DD130
// Address: 0x3dd130 - 0x3dd52c
void sub_003DD130_0x3dd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD130_0x3dd130");
#endif

    switch (ctx->pc) {
        case 0x3dd160u: goto label_3dd160;
        case 0x3dd1ccu: goto label_3dd1cc;
        case 0x3dd1fcu: goto label_3dd1fc;
        case 0x3dd42cu: goto label_3dd42c;
        case 0x3dd49cu: goto label_3dd49c;
        case 0x3dd4a4u: goto label_3dd4a4;
        case 0x3dd4c8u: goto label_3dd4c8;
        case 0x3dd4d8u: goto label_3dd4d8;
        case 0x3dd4f8u: goto label_3dd4f8;
        default: break;
    }

    ctx->pc = 0x3dd130u;

    // 0x3dd130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dd130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3dd134: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dd134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dd138: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dd13c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dd140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dd140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd144: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dd148: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dd14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dd14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd150: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x3dd150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd154: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x3DD154u;
    {
        const bool branch_taken_0x3dd154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD154u;
        // 0x3dd158: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd154) {
            ctx->pc = 0x3DD500u;
            goto label_3dd500;
        }
    }
    ctx->pc = 0x3DD15Cu;
    // 0x3dd15c: 0x0  nop
    ctx->pc = 0x3dd15cu;
    // NOP
label_3dd160:
    // 0x3dd160: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3dd160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd164: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD164u;
    {
        const bool branch_taken_0x3dd164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD164u;
        // 0x3dd168: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd164) {
            ctx->pc = 0x3DD188u;
            goto label_3dd188;
        }
    }
    ctx->pc = 0x3DD16Cu;
    // 0x3dd16c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd170: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3dd170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dd174: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3dd174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd17c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DD180u;
    {
        const bool branch_taken_0x3dd180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD180u;
        // 0x3dd184: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd180) {
            ctx->pc = 0x3DD1B0u;
            goto label_3dd1b0;
        }
    }
    ctx->pc = 0x3DD188u;
label_3dd188:
    // 0x3dd188: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd18c: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd18cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd190: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd194: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd198: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd19c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd1a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd1a4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd1a8: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x3dd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dd1ac: 0x0  nop
    ctx->pc = 0x3dd1acu;
    // NOP
label_3dd1b0:
    // 0x3dd1b0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd1b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3dd1b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd1b8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x3dd1b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd1bc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd1c0: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3dd1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd1c4: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DD1C4u;
    SET_GPR_U32(ctx, 31, 0x3DD1CCu);
    ctx->pc = 0x3DD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD1C4u;
    // 0x3dd1c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DD1C4u, 0x3DD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD1CCu;
label_3dd1cc:
    // 0x3dd1cc: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x3dd1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd1d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dd1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd1d4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x3DD1D4u;
    {
        const bool branch_taken_0x3dd1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd1d4) {
            ctx->pc = 0x3DD218u;
            goto label_3dd218;
        }
    }
    ctx->pc = 0x3DD1DCu;
    // 0x3dd1dc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3dd1dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3dd1e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd1e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dd1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd1e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3dd1e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dd1ec: 0x0  nop
    ctx->pc = 0x3dd1ecu;
    // NOP
    // 0x3dd1f0: 0x0  nop
    ctx->pc = 0x3dd1f0u;
    // NOP
    // 0x3dd1f4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD1F4u;
    SET_GPR_U32(ctx, 31, 0x3DD1FCu);
    ctx->pc = 0x3DD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD1F4u;
    // 0x3dd1f8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD1F4u, 0x3DD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD1FCu;
label_3dd1fc:
    // 0x3dd1fc: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x3dd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dd200: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd204: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dd204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dd208: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3dd208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd20c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dd20cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd210: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd214: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3dd214u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_3dd218:
    // 0x3dd218: 0x9242001a  lbu         $v0, 0x1A($s2)
    ctx->pc = 0x3dd218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x3dd21c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3dd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dd220: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD220u;
    {
        const bool branch_taken_0x3dd220 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3DD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD220u;
        // 0x3dd224: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd220) {
            ctx->pc = 0x3DD234u;
            goto label_3dd234;
        }
    }
    ctx->pc = 0x3DD228u;
    // 0x3dd228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd22c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DD22Cu;
    {
        const bool branch_taken_0x3dd22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD22Cu;
        // 0x3dd230: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd22c) {
            ctx->pc = 0x3DD24Cu;
            goto label_3dd24c;
        }
    }
    ctx->pc = 0x3DD234u;
label_3dd234:
    // 0x3dd234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3dd234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3dd238: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dd238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dd23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dd23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd240: 0x0  nop
    ctx->pc = 0x3dd240u;
    // NOP
    // 0x3dd244: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3dd244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3dd248: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3dd248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3dd24c:
    // 0x3dd24c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x3dd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x3dd250: 0x9242001a  lbu         $v0, 0x1A($s2)
    ctx->pc = 0x3dd250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x3dd254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dd254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd258: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD258u;
    {
        const bool branch_taken_0x3dd258 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3DD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD258u;
        // 0x3dd25c: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd258) {
            ctx->pc = 0x3DD26Cu;
            goto label_3dd26c;
        }
    }
    ctx->pc = 0x3DD260u;
    // 0x3dd260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD264u;
    {
        const bool branch_taken_0x3dd264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD264u;
        // 0x3dd268: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd264) {
            ctx->pc = 0x3DD288u;
            goto label_3dd288;
        }
    }
    ctx->pc = 0x3DD26Cu;
label_3dd26c:
    // 0x3dd26c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3dd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3dd270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3dd270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3dd274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3dd274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3dd278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dd278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd27c: 0x0  nop
    ctx->pc = 0x3dd27cu;
    // NOP
    // 0x3dd280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3dd280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3dd284: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3dd284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3dd288:
    // 0x3dd288: 0x0  nop
    ctx->pc = 0x3dd288u;
    // NOP
    // 0x3dd28c: 0x0  nop
    ctx->pc = 0x3dd28cu;
    // NOP
    // 0x3dd290: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3dd290u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dd294: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3dd294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3dd298: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3dd298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd29c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3dd29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3dd2a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dd2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd2a4: 0x0  nop
    ctx->pc = 0x3dd2a4u;
    // NOP
    // 0x3dd2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dd2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3dd2ac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD2ACu;
    {
        const bool branch_taken_0x3dd2ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2ACu;
        // 0x3dd2b0: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2ac) {
            ctx->pc = 0x3DD2D0u;
            goto label_3dd2d0;
        }
    }
    ctx->pc = 0x3DD2B4u;
    // 0x3dd2b4: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x3dd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3dd2b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd2bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3dd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd2c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd2c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd2c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3DD2C8u;
    {
        const bool branch_taken_0x3dd2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2C8u;
        // 0x3dd2cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2c8) {
            ctx->pc = 0x3DD338u;
            goto label_3dd338;
        }
    }
    ctx->pc = 0x3DD2D0u;
label_3dd2d0:
    // 0x3dd2d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DD2D0u;
    {
        const bool branch_taken_0x3dd2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd2d0) {
            ctx->pc = 0x3DD300u;
            goto label_3dd300;
        }
    }
    ctx->pc = 0x3DD2D8u;
    // 0x3dd2d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd2dc: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd2dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd2e0: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd2e4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd2e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd2ec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd2f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd2f4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd2f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DD2F8u;
    {
        const bool branch_taken_0x3dd2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2F8u;
        // 0x3dd2fc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2f8) {
            ctx->pc = 0x3DD338u;
            goto label_3dd338;
        }
    }
    ctx->pc = 0x3DD300u;
label_3dd300:
    // 0x3dd300: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd304: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd308: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd30c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd310: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd314: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd31c: 0x904300c5  lbu         $v1, 0xC5($v0)
    ctx->pc = 0x3dd31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 197)));
    // 0x3dd320: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd324: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd328: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd32c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd330: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd334: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3dd334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3dd338:
    // 0x3dd338: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3dd338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd33c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD33Cu;
    {
        const bool branch_taken_0x3dd33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD33Cu;
        // 0x3dd340: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd33c) {
            ctx->pc = 0x3DD360u;
            goto label_3dd360;
        }
    }
    ctx->pc = 0x3DD344u;
    // 0x3dd344: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dd344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd348: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3dd348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dd34c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3dd34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd354: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd358: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DD358u;
    {
        const bool branch_taken_0x3dd358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD358u;
        // 0x3dd35c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd358) {
            ctx->pc = 0x3DD388u;
            goto label_3dd388;
        }
    }
    ctx->pc = 0x3DD360u;
label_3dd360:
    // 0x3dd360: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd364: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd368: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd36c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd370: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd374: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd378: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd37c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd380: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x3dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dd384: 0x0  nop
    ctx->pc = 0x3dd384u;
    // NOP
label_3dd388:
    // 0x3dd388: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd38c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3dd38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd390: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3dd390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dd394: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd398: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3dd398u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd39c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3dd39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd3a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DD3A0u;
    {
        const bool branch_taken_0x3dd3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd3a0) {
            ctx->pc = 0x3DD3C8u;
            goto label_3dd3c8;
        }
    }
    ctx->pc = 0x3DD3A8u;
    // 0x3dd3a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3dd3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3dd3ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd3b0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3dd3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dd3b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3dd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd3bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd3c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DD3C0u;
    {
        const bool branch_taken_0x3dd3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3C0u;
        // 0x3dd3c4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd3c0) {
            ctx->pc = 0x3DD3F0u;
            goto label_3dd3f0;
        }
    }
    ctx->pc = 0x3DD3C8u;
label_3dd3c8:
    // 0x3dd3c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd3cc: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd3d0: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd3d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd3d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd3dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd3e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd3e4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd3e8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x3dd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dd3ec: 0x0  nop
    ctx->pc = 0x3dd3ecu;
    // NOP
label_3dd3f0:
    // 0x3dd3f0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd3f4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3dd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd3f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3dd3f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd3fc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3dd3fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd400: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd404: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x3dd404u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd408: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3dd408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd40c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3dd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd410: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3dd410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd414: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x3dd414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd418: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd41c: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x3dd41cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd420: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dd420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dd424: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD424u;
    SET_GPR_U32(ctx, 31, 0x3DD42Cu);
    ctx->pc = 0x3DD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD424u;
    // 0x3dd428: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD424u, 0x3DD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD42Cu;
label_3dd42c:
    // 0x3dd42c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3dd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dd430: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dd430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd434: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dd434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd438: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd43c: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dd43cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd440: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3dd440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd444: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD444u;
    {
        const bool branch_taken_0x3dd444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD444u;
        // 0x3dd448: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd444) {
            ctx->pc = 0x3DD468u;
            goto label_3dd468;
        }
    }
    ctx->pc = 0x3DD44Cu;
    // 0x3dd44c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dd450: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3dd450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dd454: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3dd454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dd458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd45c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dd460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DD460u;
    {
        const bool branch_taken_0x3dd460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD460u;
        // 0x3dd464: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd460) {
            ctx->pc = 0x3DD490u;
            goto label_3dd490;
        }
    }
    ctx->pc = 0x3DD468u;
label_3dd468:
    // 0x3dd468: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dd46c: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3dd46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3dd470: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3dd470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3dd474: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dd478: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dd47c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3dd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3dd480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dd484: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3dd488: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3dd488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dd48c: 0x0  nop
    ctx->pc = 0x3dd48cu;
    // NOP
label_3dd490:
    // 0x3dd490: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd494: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DD494u;
    SET_GPR_U32(ctx, 31, 0x3DD49Cu);
    ctx->pc = 0x3DD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD494u;
    // 0x3dd498: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DD494u, 0x3DD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD49Cu;
label_3dd49c:
    // 0x3dd49c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DD49Cu;
    SET_GPR_U32(ctx, 31, 0x3DD4A4u);
    ctx->pc = 0x3DD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD49Cu;
    // 0x3dd4a0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DD49Cu, 0x3DD4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD4A4u;
label_3dd4a4:
    // 0x3dd4a4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x3dd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd4a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd4ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dd4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd4b0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3dd4b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3dd4b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3dd4b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dd4b8: 0x0  nop
    ctx->pc = 0x3dd4b8u;
    // NOP
    // 0x3dd4bc: 0x0  nop
    ctx->pc = 0x3dd4bcu;
    // NOP
    // 0x3dd4c0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD4C0u;
    SET_GPR_U32(ctx, 31, 0x3DD4C8u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD4C0u, 0x3DD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD4C8u;
label_3dd4c8:
    // 0x3dd4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dd4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd4cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dd4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd4d0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DD4D0u;
    SET_GPR_U32(ctx, 31, 0x3DD4D8u);
    ctx->pc = 0x3DD4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD4D0u;
    // 0x3dd4d4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DD4D0u, 0x3DD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD4D8u;
label_3dd4d8:
    // 0x3dd4d8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3dd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dd4dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3dd4dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd4e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dd4e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd4e4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dd4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dd4e8: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x3dd4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dd4ec: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3dd4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dd4f0: 0xc0f769c  jal         func_3DDA70
    ctx->pc = 0x3DD4F0u;
    SET_GPR_U32(ctx, 31, 0x3DD4F8u);
    ctx->pc = 0x3DD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD4F0u;
    // 0x3dd4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDA70u, 0x3DD4F0u, 0x3DD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD4F8u;
label_3dd4f8:
    // 0x3dd4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dd4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3dd4fc: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x3dd4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3dd500:
    // 0x3dd500: 0x9243001a  lbu         $v1, 0x1A($s2)
    ctx->pc = 0x3dd500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x3dd504: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3dd504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd508: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x3DD508u;
    {
        const bool branch_taken_0x3dd508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd508) {
            ctx->pc = 0x3DD160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd160;
        }
    }
    ctx->pc = 0x3DD510u;
    // 0x3dd510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dd510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd514: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd518: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dd518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd51c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dd51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dd520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd524: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD524u;
        // 0x3dd528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD52Cu;
}
