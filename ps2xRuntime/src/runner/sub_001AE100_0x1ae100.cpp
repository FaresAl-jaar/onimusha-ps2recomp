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

// Function: sub_001AE100
// Address: 0x1ae100 - 0x1ae600
void sub_001AE100_0x1ae100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE100_0x1ae100");
#endif

    switch (ctx->pc) {
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae5c0u: goto label_1ae5c0;
        default: break;
    }

    ctx->pc = 0x1ae100u;

    // 0x1ae100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ae104: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ae104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ae108: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ae108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1ae10c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ae10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1ae110: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ae110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ae114: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ae114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae118: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ae118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ae11c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ae11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae120: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ae124: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ae128: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ae128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ae12c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ae12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ae130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae134: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1ae138: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1ae138u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ae13c: 0x26860070  addiu       $a2, $s4, 0x70
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1ae140: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1ae140u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ae144: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1ae144u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ae148: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ae148u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ae14c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ae14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ae150: 0xc041442  jal         func_105108
    ctx->pc = 0x1AE150u;
    SET_GPR_U32(ctx, 31, 0x1AE158u);
    ctx->pc = 0x1AE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE150u;
    // 0x1ae154: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1AE150u, 0x1AE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE158u;
label_1ae158:
    // 0x1ae158: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ae158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ae15c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1AE15Cu;
    SET_GPR_U32(ctx, 31, 0x1AE164u);
    ctx->pc = 0x1AE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE15Cu;
    // 0x1ae160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1AE15Cu, 0x1AE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE164u;
label_1ae164:
    // 0x1ae164: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ae168: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ae16c: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x1ae170: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ae174: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ae174u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F420u));
    // 0x1ae178: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1AE178u;
    SET_GPR_U32(ctx, 31, 0x1AE180u);
    ctx->pc = 0x1AE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE178u;
    // 0x1ae17c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1AE178u, 0x1AE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE180u;
label_1ae180:
    // 0x1ae180: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ae180u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ae184: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae188: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ae18c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ae18cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae194: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae198: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae19c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ae19cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1ae1a0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1AE1A0u;
    SET_GPR_U32(ctx, 31, 0x1AE1A8u);
    ctx->pc = 0x1AE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1A0u;
    // 0x1ae1a4: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1AE1A0u, 0x1AE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1A8u;
label_1ae1a8:
    // 0x1ae1a8: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1ae1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae1ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ae1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae1b0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ae1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae1b4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ae1b8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1ae1b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1ae1bc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1ae1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1ae1c0: 0x46000544  c1          0x544
    ctx->pc = 0x1ae1c0u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ae1c4: 0x0  nop
    ctx->pc = 0x1ae1c4u;
    // NOP
    // 0x1ae1c8: 0x0  nop
    ctx->pc = 0x1ae1c8u;
    // NOP
    // 0x1ae1cc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1AE1CCu;
    SET_GPR_U32(ctx, 31, 0x1AE1D4u);
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1AE1CCu, 0x1AE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1D4u;
label_1ae1d4:
    // 0x1ae1d4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1ae1d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE1D8u;
    {
        const bool branch_taken_0x1ae1d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1D8u;
        // 0x1ae1dc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1d8) {
            ctx->pc = 0x1AE1ECu;
            goto label_1ae1ec;
        }
    }
    ctx->pc = 0x1AE1E0u;
    // 0x1ae1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae1e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE1E4u;
    {
        const bool branch_taken_0x1ae1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1E4u;
        // 0x1ae1e8: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1e4) {
            ctx->pc = 0x1AE208u;
            goto label_1ae208;
        }
    }
    ctx->pc = 0x1AE1ECu;
label_1ae1ec:
    // 0x1ae1ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae1f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae1f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ae1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae1fc: 0x0  nop
    ctx->pc = 0x1ae1fcu;
    // NOP
    // 0x1ae200: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1ae200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ae204: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1ae204u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1ae208:
    // 0x1ae208: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x1ae208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae20c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ae210: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x1ae210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae214: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ae214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ae218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae21c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1ae220: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ae220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ae224: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1ae224u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1ae228: 0x4614109c  madd.s      $f2, $f2, $f20
    ctx->pc = 0x1ae228u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x1ae22c: 0x46011603  div.s       $f24, $f2, $f1
    ctx->pc = 0x1ae22cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ae230: 0x0  nop
    ctx->pc = 0x1ae230u;
    // NOP
    // 0x1ae234: 0x0  nop
    ctx->pc = 0x1ae234u;
    // NOP
    // 0x1ae238: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE238u;
    {
        const bool branch_taken_0x1ae238 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ae238) {
            ctx->pc = 0x1AE24Cu;
            goto label_1ae24c;
        }
    }
    ctx->pc = 0x1AE240u;
    // 0x1ae240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE244u;
    {
        const bool branch_taken_0x1ae244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE244u;
        // 0x1ae248: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae244) {
            ctx->pc = 0x1AE268u;
            goto label_1ae268;
        }
    }
    ctx->pc = 0x1AE24Cu;
label_1ae24c:
    // 0x1ae24c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae250: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ae258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae25c: 0x0  nop
    ctx->pc = 0x1ae25cu;
    // NOP
    // 0x1ae260: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1ae260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ae264: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1ae264u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1ae268:
    // 0x1ae268: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x1ae268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae26c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ae270: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x1ae270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae274: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ae274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ae278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae27c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1ae280: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ae280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ae284: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1ae284u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1ae288: 0x4614109d  msub.s      $f2, $f2, $f20
    ctx->pc = 0x1ae288u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x1ae28c: 0x460115c3  div.s       $f23, $f2, $f1
    ctx->pc = 0x1ae28cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ae290: 0x0  nop
    ctx->pc = 0x1ae290u;
    // NOP
    // 0x1ae294: 0x0  nop
    ctx->pc = 0x1ae294u;
    // NOP
    // 0x1ae298: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE298u;
    {
        const bool branch_taken_0x1ae298 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ae298) {
            ctx->pc = 0x1AE2ACu;
            goto label_1ae2ac;
        }
    }
    ctx->pc = 0x1AE2A0u;
    // 0x1ae2a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae2a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE2A4u;
    {
        const bool branch_taken_0x1ae2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2A4u;
        // 0x1ae2a8: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2a4) {
            ctx->pc = 0x1AE2C8u;
            goto label_1ae2c8;
        }
    }
    ctx->pc = 0x1AE2ACu;
label_1ae2ac:
    // 0x1ae2ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae2b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae2b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae2b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ae2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae2bc: 0x0  nop
    ctx->pc = 0x1ae2bcu;
    // NOP
    // 0x1ae2c0: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1ae2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ae2c4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1ae2c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1ae2c8:
    // 0x1ae2c8: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x1ae2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae2cc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ae2d0: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x1ae2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae2d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ae2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ae2d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae2dc: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1ae2e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ae2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ae2e4: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1ae2e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1ae2e8: 0x4600109c  madd.s      $f2, $f2, $f0
    ctx->pc = 0x1ae2e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x1ae2ec: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x1ae2ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ae2f0: 0x0  nop
    ctx->pc = 0x1ae2f0u;
    // NOP
    // 0x1ae2f4: 0x0  nop
    ctx->pc = 0x1ae2f4u;
    // NOP
    // 0x1ae2f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE2F8u;
    {
        const bool branch_taken_0x1ae2f8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1ae2f8) {
            ctx->pc = 0x1AE30Cu;
            goto label_1ae30c;
        }
    }
    ctx->pc = 0x1AE300u;
    // 0x1ae300: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE304u;
    {
        const bool branch_taken_0x1ae304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE304u;
        // 0x1ae308: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae304) {
            ctx->pc = 0x1AE328u;
            goto label_1ae328;
        }
    }
    ctx->pc = 0x1AE30Cu;
label_1ae30c:
    // 0x1ae30c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae314: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae318: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ae318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae31c: 0x0  nop
    ctx->pc = 0x1ae31cu;
    // NOP
    // 0x1ae320: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x1ae320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1ae324: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1ae324u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1ae328:
    // 0x1ae328: 0xc6830030  lwc1        $f3, 0x30($s4)
    ctx->pc = 0x1ae328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae32c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ae330: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x1ae330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ae334: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ae334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ae338: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ae338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae33c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ae33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ae340: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1ae340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae344: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ae344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ae348: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1ae348u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1ae34c: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x1ae34cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1ae350: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x1ae350u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ae354: 0x0  nop
    ctx->pc = 0x1ae354u;
    // NOP
    // 0x1ae358: 0x0  nop
    ctx->pc = 0x1ae358u;
    // NOP
    // 0x1ae35c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE35Cu;
    {
        const bool branch_taken_0x1ae35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae35c) {
            ctx->pc = 0x1AE368u;
            goto label_1ae368;
        }
    }
    ctx->pc = 0x1AE364u;
    // 0x1ae364: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1ae364u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1ae368:
    // 0x1ae368: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1ae368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1ae36c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE36Cu;
    {
        const bool branch_taken_0x1ae36c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE36Cu;
        // 0x1ae370: 0x92840035  lbu         $a0, 0x35($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae36c) {
            ctx->pc = 0x1AE380u;
            goto label_1ae380;
        }
    }
    ctx->pc = 0x1AE374u;
    // 0x1ae374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae378: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE378u;
    {
        const bool branch_taken_0x1ae378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE378u;
        // 0x1ae37c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae378) {
            ctx->pc = 0x1AE39Cu;
            goto label_1ae39c;
        }
    }
    ctx->pc = 0x1AE380u;
label_1ae380:
    // 0x1ae380: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae38c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae38cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae390: 0x0  nop
    ctx->pc = 0x1ae390u;
    // NOP
    // 0x1ae394: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae398: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ae398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ae39c:
    // 0x1ae39c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1ae39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ae3a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ae3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae3a8: 0x0  nop
    ctx->pc = 0x1ae3a8u;
    // NOP
    // 0x1ae3ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ae3acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae3b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE3B0u;
    {
        const bool branch_taken_0x1ae3b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae3b0) {
            ctx->pc = 0x1AE3C8u;
            goto label_1ae3c8;
        }
    }
    ctx->pc = 0x1AE3B8u;
    // 0x1ae3b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ae3bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ae3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ae3c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3C0u;
    {
        const bool branch_taken_0x1ae3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C0u;
        // 0x1ae3c4: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3c0) {
            ctx->pc = 0x1AE3E4u;
            goto label_1ae3e4;
        }
    }
    ctx->pc = 0x1AE3C8u;
label_1ae3c8:
    // 0x1ae3c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ae3c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae3cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ae3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ae3d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae3d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ae3d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ae3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ae3d8: 0x0  nop
    ctx->pc = 0x1ae3d8u;
    // NOP
    // 0x1ae3dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae3e0: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x1ae3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae3e4:
    // 0x1ae3e4: 0x2e610100  sltiu       $at, $s3, 0x100
    ctx->pc = 0x1ae3e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ae3e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE3E8u;
    {
        const bool branch_taken_0x1ae3e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3e8) {
            ctx->pc = 0x1AE3F8u;
            goto label_1ae3f8;
        }
    }
    ctx->pc = 0x1AE3F0u;
    // 0x1ae3f0: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1ae3f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ae3f4: 0x0  nop
    ctx->pc = 0x1ae3f4u;
    // NOP
label_1ae3f8:
    // 0x1ae3f8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1ae3fc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ae400: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ae404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae410: 0x628807  srav        $s1, $v0, $v1
    ctx->pc = 0x1ae410u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1ae414: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AE414u;
    SET_GPR_U32(ctx, 31, 0x1AE41Cu);
    ctx->pc = 0x1AE418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE414u;
    // 0x1ae418: 0x658007  srav        $s0, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AE414u, 0x1AE41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE41Cu;
label_1ae41c:
    // 0x1ae41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae420: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1ae420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1ae424: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ae428: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ae428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae42c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae430: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae434: 0x0  nop
    ctx->pc = 0x1ae434u;
    // NOP
    // 0x1ae438: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ae438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae43c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1ae43cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ae440: 0x0  nop
    ctx->pc = 0x1ae440u;
    // NOP
    // 0x1ae444: 0x0  nop
    ctx->pc = 0x1ae444u;
    // NOP
    // 0x1ae448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae44c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE44Cu;
    {
        const bool branch_taken_0x1ae44c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE44Cu;
        // 0x1ae450: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae44c) {
            ctx->pc = 0x1AE460u;
            goto label_1ae460;
        }
    }
    ctx->pc = 0x1AE454u;
    // 0x1ae454: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ae454u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE458u;
    {
        const bool branch_taken_0x1ae458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE458u;
        // 0x1ae45c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae458) {
            ctx->pc = 0x1AE478u;
            goto label_1ae478;
        }
    }
    ctx->pc = 0x1AE460u;
label_1ae460:
    // 0x1ae460: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ae460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1ae464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae46c: 0x0  nop
    ctx->pc = 0x1ae46cu;
    // NOP
    // 0x1ae470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae474: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ae474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ae478:
    // 0x1ae478: 0x0  nop
    ctx->pc = 0x1ae478u;
    // NOP
    // 0x1ae47c: 0x0  nop
    ctx->pc = 0x1ae47cu;
    // NOP
    // 0x1ae480: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1ae480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae484: 0x0  nop
    ctx->pc = 0x1ae484u;
    // NOP
    // 0x1ae488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae48c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae490: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE490u;
    {
        const bool branch_taken_0x1ae490 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE490u;
        // 0x1ae494: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae490) {
            ctx->pc = 0x1AE4A4u;
            goto label_1ae4a4;
        }
    }
    ctx->pc = 0x1AE498u;
    // 0x1ae498: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ae498u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae49c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE49Cu;
    {
        const bool branch_taken_0x1ae49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE49Cu;
        // 0x1ae4a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae49c) {
            ctx->pc = 0x1AE4BCu;
            goto label_1ae4bc;
        }
    }
    ctx->pc = 0x1AE4A4u;
label_1ae4a4:
    // 0x1ae4a4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1ae4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1ae4a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae4ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae4b0: 0x0  nop
    ctx->pc = 0x1ae4b0u;
    // NOP
    // 0x1ae4b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae4b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ae4b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ae4bc:
    // 0x1ae4bc: 0x0  nop
    ctx->pc = 0x1ae4bcu;
    // NOP
    // 0x1ae4c0: 0x0  nop
    ctx->pc = 0x1ae4c0u;
    // NOP
    // 0x1ae4c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae4c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae4cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4d0: 0x46020642  mul.s       $f25, $f0, $f2
    ctx->pc = 0x1ae4d0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae4d4: 0x4602b802  mul.s       $f0, $f23, $f2
    ctx->pc = 0x1ae4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1ae4d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae4dc: 0x0  nop
    ctx->pc = 0x1ae4dcu;
    // NOP
    // 0x1ae4e0: 0x46150dc0  add.s       $f23, $f1, $f21
    ctx->pc = 0x1ae4e0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1ae4e4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AE4E4u;
    {
        const bool branch_taken_0x1ae4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4E4u;
        // 0x1ae4e8: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4e4) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE4ECu;
    // 0x1ae4ec: 0x0  nop
    ctx->pc = 0x1ae4ecu;
    // NOP
label_1ae4f0:
    // 0x1ae4f0: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE4F0u;
    {
        const bool branch_taken_0x1ae4f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4F0u;
        // 0x1ae4f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4f0) {
            ctx->pc = 0x1AE548u;
            goto label_1ae548;
        }
    }
    ctx->pc = 0x1AE4F8u;
    // 0x1ae4f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AE4F8u;
    {
        const bool branch_taken_0x1ae4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4f8) {
            ctx->pc = 0x1AE530u;
            goto label_1ae530;
        }
    }
    ctx->pc = 0x1AE500u;
label_1ae500:
    // 0x1ae500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae504: 0x4614b300  add.s       $f12, $f22, $f20
    ctx->pc = 0x1ae504u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x1ae508: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae50c: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1AE50Cu;
    SET_GPR_U32(ctx, 31, 0x1AE514u);
    ctx->pc = 0x1AE510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE50Cu;
    // 0x1ae510: 0x4619c340  add.s       $f13, $f24, $f25 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1AE50Cu, 0x1AE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE514u;
label_1ae514:
    // 0x1ae514: 0x4614bb00  add.s       $f12, $f23, $f20
    ctx->pc = 0x1ae514u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x1ae518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae51c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae520: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1AE520u;
    SET_GPR_U32(ctx, 31, 0x1AE528u);
    ctx->pc = 0x1AE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE520u;
    // 0x1ae524: 0x4619ab40  add.s       $f13, $f21, $f25 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1AE520u, 0x1AE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE528u;
label_1ae528:
    // 0x1ae528: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ae528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ae52c: 0x0  nop
    ctx->pc = 0x1ae52cu;
    // NOP
label_1ae530:
    // 0x1ae530: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x1ae534: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1ae534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae538: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AE538u;
    {
        const bool branch_taken_0x1ae538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae538) {
            ctx->pc = 0x1AE500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae500;
        }
    }
    ctx->pc = 0x1AE540u;
    // 0x1ae540: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE540u;
    {
        const bool branch_taken_0x1ae540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae540) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE548u;
label_1ae548:
    // 0x1ae548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AE548u;
    {
        const bool branch_taken_0x1ae548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE548u;
        // 0x1ae54c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae548) {
            ctx->pc = 0x1AE580u;
            goto label_1ae580;
        }
    }
    ctx->pc = 0x1AE550u;
label_1ae550:
    // 0x1ae550: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae558: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ae558u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ae55c: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1AE55Cu;
    SET_GPR_U32(ctx, 31, 0x1AE564u);
    ctx->pc = 0x1AE560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE55Cu;
    // 0x1ae560: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1AE55Cu, 0x1AE564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE564u;
label_1ae564:
    // 0x1ae564: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae56c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1ae56cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1ae570: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1AE570u;
    SET_GPR_U32(ctx, 31, 0x1AE578u);
    ctx->pc = 0x1AE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE570u;
    // 0x1ae574: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1AE570u, 0x1AE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE578u;
label_1ae578:
    // 0x1ae578: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ae57c: 0x0  nop
    ctx->pc = 0x1ae57cu;
    // NOP
label_1ae580:
    // 0x1ae580: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x1ae584: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1ae584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae588: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AE588u;
    {
        const bool branch_taken_0x1ae588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae588) {
            ctx->pc = 0x1AE550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae550;
        }
    }
    ctx->pc = 0x1AE590u;
label_1ae590:
    // 0x1ae590: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae594: 0x3a520001  xori        $s2, $s2, 0x1
    ctx->pc = 0x1ae594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_1ae598:
    // 0x1ae598: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1ae598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ae59c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae5a0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1AE5A0u;
    {
        const bool branch_taken_0x1ae5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5A0u;
        // 0x1ae5a4: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5a0) {
            ctx->pc = 0x1AE4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae4f0;
        }
    }
    ctx->pc = 0x1AE5A8u;
    // 0x1ae5a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ae5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ae5b0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ae5b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae5b8: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1AE5B8u;
    SET_GPR_U32(ctx, 31, 0x1AE5C0u);
    ctx->pc = 0x1AE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5B8u;
    // 0x1ae5bc: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1AE5B8u, 0x1AE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5C0u;
label_1ae5c0:
    // 0x1ae5c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ae5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae5c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1ae5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ae5c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ae5c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae5cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1ae5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ae5d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ae5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae5d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1ae5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ae5d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ae5d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae5dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ae5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ae5e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae5e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ae5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ae5e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ae5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae5ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ae5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ae5f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ae5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae5f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE600u;
}
