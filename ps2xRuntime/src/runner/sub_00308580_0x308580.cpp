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

// Function: sub_00308580
// Address: 0x308580 - 0x308b10
void sub_00308580_0x308580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308580_0x308580");
#endif

    switch (ctx->pc) {
        case 0x3085b4u: goto label_3085b4;
        case 0x3085f8u: goto label_3085f8;
        case 0x308614u: goto label_308614;
        case 0x30861cu: goto label_30861c;
        case 0x308628u: goto label_308628;
        case 0x308640u: goto label_308640;
        case 0x308654u: goto label_308654;
        case 0x3086b0u: goto label_3086b0;
        case 0x3086c4u: goto label_3086c4;
        case 0x3086d8u: goto label_3086d8;
        case 0x3086ecu: goto label_3086ec;
        case 0x308720u: goto label_308720;
        case 0x30872cu: goto label_30872c;
        case 0x308740u: goto label_308740;
        case 0x3087bcu: goto label_3087bc;
        case 0x3087d0u: goto label_3087d0;
        case 0x3087fcu: goto label_3087fc;
        case 0x30880cu: goto label_30880c;
        case 0x30882cu: goto label_30882c;
        case 0x308870u: goto label_308870;
        case 0x3088a0u: goto label_3088a0;
        case 0x3088c0u: goto label_3088c0;
        case 0x3088e8u: goto label_3088e8;
        case 0x308910u: goto label_308910;
        case 0x308920u: goto label_308920;
        case 0x30894cu: goto label_30894c;
        case 0x30895cu: goto label_30895c;
        case 0x30897cu: goto label_30897c;
        case 0x308a64u: goto label_308a64;
        case 0x308a7cu: goto label_308a7c;
        case 0x308a8cu: goto label_308a8c;
        case 0x308aa8u: goto label_308aa8;
        case 0x308abcu: goto label_308abc;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ae8u: goto label_308ae8;
        default: break;
    }

    ctx->pc = 0x308580u;

    // 0x308580: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x308584: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x308584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x308588: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x308588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30858c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x308590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x308590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x308594: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x308598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x308598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30859c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30859cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3085a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3085a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3085a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3085a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3085ac: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x3085ACu;
    SET_GPR_U32(ctx, 31, 0x3085B4u);
    ctx->pc = 0x3085B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085ACu;
    // 0x3085b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x3085ACu, 0x3085B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085B4u;
label_3085b4:
    // 0x3085b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3085b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085b8: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x3085b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3085bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3085bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3085c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3085c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3085c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3085c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3085c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3085c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3085cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3085ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3085d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3085d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085d4: 0x86620080  lh          $v0, 0x80($s3)
    ctx->pc = 0x3085d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x3085d8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3085dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3085dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3085e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3085e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3085e4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3085e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3085e8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3085e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3085ec: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x3085ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3085f0: 0xc09e644  jal         func_279910
    ctx->pc = 0x3085F0u;
    SET_GPR_U32(ctx, 31, 0x3085F8u);
    ctx->pc = 0x3085F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085F0u;
    // 0x3085f4: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x3085F0u, 0x3085F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085F8u;
label_3085f8:
    // 0x3085f8: 0x938582b4  lbu         $a1, -0x7D4C($gp)
    ctx->pc = 0x3085f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x3085fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3085fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x308600: 0x938682b5  lbu         $a2, -0x7D4B($gp)
    ctx->pc = 0x308600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935221)));
    // 0x308604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x308608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30860c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x30860Cu;
    SET_GPR_U32(ctx, 31, 0x308614u);
    ctx->pc = 0x308610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30860Cu;
    // 0x308610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x30860Cu, 0x308614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308614u;
label_308614:
    // 0x308614: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x308614u;
    SET_GPR_U32(ctx, 31, 0x30861Cu);
    ctx->pc = 0x308618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308614u;
    // 0x308618: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x308614u, 0x30861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30861Cu;
label_30861c:
    // 0x30861c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30861cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308620: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x308620u;
    SET_GPR_U32(ctx, 31, 0x308628u);
    ctx->pc = 0x308624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308620u;
    // 0x308624: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x308620u, 0x308628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308628u;
label_308628:
    // 0x308628: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x308628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30862c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x30862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x308630: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x308630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x308634: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x308634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308638: 0xc074458  jal         func_1D1160
    ctx->pc = 0x308638u;
    SET_GPR_U32(ctx, 31, 0x308640u);
    ctx->pc = 0x30863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308638u;
    // 0x30863c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x308638u, 0x308640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308640u;
label_308640:
    // 0x308640: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x308640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308644: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x308644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x308648: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x308648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x30864c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x30864Cu;
    SET_GPR_U32(ctx, 31, 0x308654u);
    ctx->pc = 0x308650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30864Cu;
    // 0x308650: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x30864Cu, 0x308654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308654u;
label_308654:
    // 0x308654: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x308654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308658: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x308658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x30865c: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x30865cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x308660: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308664: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x308664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x308668: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x308668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30866c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30866cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308670: 0x0  nop
    ctx->pc = 0x308670u;
    // NOP
    // 0x308674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308678: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x308678u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30867c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x30867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x308680: 0xc66000a4  lwc1        $f0, 0xA4($s3)
    ctx->pc = 0x308680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308684: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x308684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x308688: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x308688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30868c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x30868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x308690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308694: 0x0  nop
    ctx->pc = 0x308694u;
    // NOP
    // 0x308698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30869c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30869cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3086a0: 0x0  nop
    ctx->pc = 0x3086a0u;
    // NOP
    // 0x3086a4: 0x0  nop
    ctx->pc = 0x3086a4u;
    // NOP
    // 0x3086a8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3086A8u;
    SET_GPR_U32(ctx, 31, 0x3086B0u);
    ctx->pc = 0x3086ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086A8u;
    // 0x3086ac: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3086A8u, 0x3086B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086B0u;
label_3086b0:
    // 0x3086b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3086b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3086b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3086b8: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x3086b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3086bc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3086BCu;
    SET_GPR_U32(ctx, 31, 0x3086C4u);
    ctx->pc = 0x3086C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086BCu;
    // 0x3086c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3086BCu, 0x3086C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086C4u;
label_3086c4:
    // 0x3086c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3086c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3086c8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3086c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3086cc: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x3086ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3086d0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3086D0u;
    SET_GPR_U32(ctx, 31, 0x3086D8u);
    ctx->pc = 0x3086D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086D0u;
    // 0x3086d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3086D0u, 0x3086D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086D8u;
label_3086d8:
    // 0x3086d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3086dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3086dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3086e0: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x3086e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x3086e4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3086E4u;
    SET_GPR_U32(ctx, 31, 0x3086ECu);
    ctx->pc = 0x3086E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086E4u;
    // 0x3086e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3086E4u, 0x3086ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086ECu;
label_3086ec:
    // 0x3086ec: 0x926600a8  lbu         $a2, 0xA8($s3)
    ctx->pc = 0x3086ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x3086f0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3086f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3086f4: 0x2463c8d0  addiu       $v1, $v1, -0x3730
    ctx->pc = 0x3086f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953168));
    // 0x3086f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3086fc: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x3086fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x308700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308704: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x308704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x308708: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x308708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30870c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30870cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x308710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308714: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x308714u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308718: 0xc074648  jal         func_1D1920
    ctx->pc = 0x308718u;
    SET_GPR_U32(ctx, 31, 0x308720u);
    ctx->pc = 0x30871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308718u;
    // 0x30871c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x308718u, 0x308720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308720u;
label_308720:
    // 0x308720: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x308720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x308724: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x308724u;
    SET_GPR_U32(ctx, 31, 0x30872Cu);
    ctx->pc = 0x308728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308724u;
    // 0x308728: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x308724u, 0x30872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30872Cu;
label_30872c:
    // 0x30872c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x30872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x308730: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x308730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308734: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x308734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x308738: 0xc074648  jal         func_1D1920
    ctx->pc = 0x308738u;
    SET_GPR_U32(ctx, 31, 0x308740u);
    ctx->pc = 0x30873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308738u;
    // 0x30873c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x308738u, 0x308740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308740u;
label_308740:
    // 0x308740: 0x86870008  lh          $a3, 0x8($s4)
    ctx->pc = 0x308740u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x308744: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x308748: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x308748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30874c: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x30874cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x308750: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x308750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x308754: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x308754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x308758: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x308758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x30875c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x30875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308760: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x308760u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x308764: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x308764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x308768: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x308768u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x30876c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30876cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x308770: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x308770u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x308774: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x308774u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x308778: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x308778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30877c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x308780: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x308780u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x308784: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x308784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x308788: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x308788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30878c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x30878cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x308790: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x308790u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x308794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x308794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308798: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x308798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x30879c: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x30879cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x3087a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3087a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3087a4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3087a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3087a8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3087a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3087ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3087acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3087b0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3087b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x3087b4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x3087B4u;
    SET_GPR_U32(ctx, 31, 0x3087BCu);
    ctx->pc = 0x3087B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087B4u;
    // 0x3087b8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x3087B4u, 0x3087BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087BCu;
label_3087bc:
    // 0x3087bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3087bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3087c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3087c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3087c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3087c8: 0x34540080  ori         $s4, $v0, 0x80
    ctx->pc = 0x3087c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3087cc: 0x0  nop
    ctx->pc = 0x3087ccu;
    // NOP
label_3087d0:
    // 0x3087d0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3087d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3087d4: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x3087d4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3087d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3087d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3087dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3087dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3087e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3087e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3087e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3087e8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3087e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3087ec: 0x0  nop
    ctx->pc = 0x3087ecu;
    // NOP
    // 0x3087f0: 0x0  nop
    ctx->pc = 0x3087f0u;
    // NOP
    // 0x3087f4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3087F4u;
    SET_GPR_U32(ctx, 31, 0x3087FCu);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3087F4u, 0x3087FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087FCu;
label_3087fc:
    // 0x3087fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3087fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308800: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x308804: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x308804u;
    SET_GPR_U32(ctx, 31, 0x30880Cu);
    ctx->pc = 0x308808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308804u;
    // 0x308808: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x308804u, 0x30880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30880Cu;
label_30880c:
    // 0x30880c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x30880Cu;
    {
        const bool branch_taken_0x30880c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x308810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30880Cu;
        // 0x308810: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30880c) {
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x308814u;
    // 0x308814: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308814u;
    {
        const bool branch_taken_0x308814 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x308814) {
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x30881Cu;
    // 0x30881c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x308820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x308820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x308824: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x308824u;
    SET_GPR_U32(ctx, 31, 0x30882Cu);
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x308824u, 0x30882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30882Cu;
label_30882c:
    // 0x30882c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x30882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308834: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x308834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_308838:
    // 0x308838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30883c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x30883cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x308840: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x308840u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x308844: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x308844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x308848: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x308848u;
    {
        const bool branch_taken_0x308848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308848u;
        // 0x30884c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308848) {
            ctx->pc = 0x3087D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3087d0;
        }
    }
    ctx->pc = 0x308850u;
    // 0x308850: 0x926500a8  lbu         $a1, 0xA8($s3)
    ctx->pc = 0x308850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x308854: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x308854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x308858: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x308858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x30885c: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x30885cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x308860: 0x2463c890  addiu       $v1, $v1, -0x3770
    ctx->pc = 0x308860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953104));
    // 0x308864: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x308864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x308868: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x308868u;
    SET_GPR_U32(ctx, 31, 0x308870u);
    ctx->pc = 0x30886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308868u;
    // 0x30886c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x308868u, 0x308870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308870u;
label_308870:
    // 0x308870: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308874: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x308874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x308878: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x308878u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x30887c: 0x16a43c  dsll32      $s4, $s6, 16
    ctx->pc = 0x30887cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) << (32 + 16));
    // 0x308880: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x308880u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x308884: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x308884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x308888: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x308888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x30888c: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x30888cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x308890: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308894: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x308894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x308898: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x308898u;
    SET_GPR_U32(ctx, 31, 0x3088A0u);
    ctx->pc = 0x30889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308898u;
    // 0x30889c: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x308898u, 0x3088A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088A0u;
label_3088a0:
    // 0x3088a0: 0x926500a8  lbu         $a1, 0xA8($s3)
    ctx->pc = 0x3088a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x3088a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3088a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3088a8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3088ac: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x3088acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x3088b0: 0x2463c890  addiu       $v1, $v1, -0x3770
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953104));
    // 0x3088b4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3088b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3088b8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x3088B8u;
    SET_GPR_U32(ctx, 31, 0x3088C0u);
    ctx->pc = 0x3088BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088B8u;
    // 0x3088bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x3088B8u, 0x3088C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088C0u;
label_3088c0:
    // 0x3088c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3088c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3088c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3088c8: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x3088cc: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x3088ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x3088d0: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x3088d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x3088d4: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x3088d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3088d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3088d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3088dc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3088dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3088e0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x3088E0u;
    SET_GPR_U32(ctx, 31, 0x3088E8u);
    ctx->pc = 0x3088E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088E0u;
    // 0x3088e4: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x3088E0u, 0x3088E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088E8u;
label_3088e8:
    // 0x3088e8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3088e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3088ec: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3088ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3088f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3088f4: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x3088f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x3088f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3088f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3088fc: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x3088fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x308900: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x308900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x308904: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x308904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308908: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x308908u;
    SET_GPR_U32(ctx, 31, 0x308910u);
    ctx->pc = 0x30890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308908u;
    // 0x30890c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x308908u, 0x308910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308910u;
label_308910:
    // 0x308910: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x308910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x308914: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x308914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308918: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x308918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x30891c: 0x34550080  ori         $s5, $v0, 0x80
    ctx->pc = 0x30891cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_308920:
    // 0x308920: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x308920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x308924: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x308924u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308928: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x308928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30892c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30892cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308930: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x308930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x308934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x308934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x308938: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x308938u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30893c: 0x0  nop
    ctx->pc = 0x30893cu;
    // NOP
    // 0x308940: 0x0  nop
    ctx->pc = 0x308940u;
    // NOP
    // 0x308944: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x308944u;
    SET_GPR_U32(ctx, 31, 0x30894Cu);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x308944u, 0x30894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30894Cu;
label_30894c:
    // 0x30894c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308950: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x308950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x308954: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x308954u;
    SET_GPR_U32(ctx, 31, 0x30895Cu);
    ctx->pc = 0x308958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308954u;
    // 0x308958: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x308954u, 0x30895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30895Cu;
label_30895c:
    // 0x30895c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x30895Cu;
    {
        const bool branch_taken_0x30895c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x308960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30895Cu;
        // 0x308960: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30895c) {
            ctx->pc = 0x308988u;
            goto label_308988;
        }
    }
    ctx->pc = 0x308964u;
    // 0x308964: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308964u;
    {
        const bool branch_taken_0x308964 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x308964) {
            ctx->pc = 0x308988u;
            goto label_308988;
        }
    }
    ctx->pc = 0x30896Cu;
    // 0x30896c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x30896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x308970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x308970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x308974: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x308974u;
    SET_GPR_U32(ctx, 31, 0x30897Cu);
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x308974u, 0x30897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30897Cu;
label_30897c:
    // 0x30897c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x30897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308980: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308984: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x308984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_308988:
    // 0x308988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30898c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x30898cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x308990: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x308994: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x308994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x308998: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x308998u;
    {
        const bool branch_taken_0x308998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308998u;
        // 0x30899c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308998) {
            ctx->pc = 0x308920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308920;
        }
    }
    ctx->pc = 0x3089A0u;
    // 0x3089a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3089a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3089a4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3089a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3089a8: 0xc420004c  lwc1        $f0, 0x4C($at)
    ctx->pc = 0x3089a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3089ac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3089acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3089b0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3089b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3089b4: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x3089b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x3089b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3089b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3089bc: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x3089bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x3089c0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x3089c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3089c4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3089c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3089c8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3089cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3089ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3089d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3089d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3089d4: 0x0  nop
    ctx->pc = 0x3089d4u;
    // NOP
    // 0x3089d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3089d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3089dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3089dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3089e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3089e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3089e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3089e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3089e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3089e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3089ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3089ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3089f0: 0x0  nop
    ctx->pc = 0x3089f0u;
    // NOP
    // 0x3089f4: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x3089f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x3089f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x3089fc: 0xc420005c  lwc1        $f0, 0x5C($at)
    ctx->pc = 0x3089fcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000005Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308a04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308a08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x308a0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x308a10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x308a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x308a14: 0x0  nop
    ctx->pc = 0x308a14u;
    // NOP
    // 0x308a18: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x308a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x308a1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308a20: 0xc420006c  lwc1        $f0, 0x6C($at)
    ctx->pc = 0x308a20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000006Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308a24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308a28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308a2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x308a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x308a34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x308a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x308a38: 0x0  nop
    ctx->pc = 0x308a38u;
    // NOP
    // 0x308a3c: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x308a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x308a40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308a44: 0xc420007c  lwc1        $f0, 0x7C($at)
    ctx->pc = 0x308a44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x7000007Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308a4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x308a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x308a50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x308a54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x308a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x308a58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x308a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x308a5c: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x308A5Cu;
    SET_GPR_U32(ctx, 31, 0x308A64u);
    ctx->pc = 0x308A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A5Cu;
    // 0x308a60: 0xac22007c  sw          $v0, 0x7C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x308A5Cu, 0x308A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A64u;
label_308a64:
    // 0x308a64: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x308a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x308a68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x308a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308a6c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x308a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x308a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a74: 0xc074648  jal         func_1D1920
    ctx->pc = 0x308A74u;
    SET_GPR_U32(ctx, 31, 0x308A7Cu);
    ctx->pc = 0x308A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A74u;
    // 0x308a78: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x308A74u, 0x308A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A7Cu;
label_308a7c:
    // 0x308a7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x308a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x308a80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x308a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x308a84: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x308A84u;
    SET_GPR_U32(ctx, 31, 0x308A8Cu);
    ctx->pc = 0x308A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A84u;
    // 0x308a88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x308A84u, 0x308A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A8Cu;
label_308a8c:
    // 0x308a8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x308a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x308a90: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x308a94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x308a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x308a98: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x308a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x308a9c: 0x26660070  addiu       $a2, $s3, 0x70
    ctx->pc = 0x308a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x308aa0: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x308AA0u;
    SET_GPR_U32(ctx, 31, 0x308AA8u);
    ctx->pc = 0x308AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AA0u;
    // 0x308aa4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x308AA0u, 0x308AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AA8u;
label_308aa8:
    // 0x308aa8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x308aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x308aac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x308ab0: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x308ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x308ab4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x308AB4u;
    SET_GPR_U32(ctx, 31, 0x308ABCu);
    ctx->pc = 0x308AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AB4u;
    // 0x308ab8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x308AB4u, 0x308ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308ABCu;
label_308abc:
    // 0x308abc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x308ac0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x308AC0u;
    {
        const bool branch_taken_0x308ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC0u;
        // 0x308ac4: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ac0) {
            ctx->pc = 0x308AE8u;
            goto label_308ae8;
        }
    }
    ctx->pc = 0x308AC8u;
    // 0x308ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308acc: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x308ACCu;
    SET_GPR_U32(ctx, 31, 0x308AD4u);
    ctx->pc = 0x308AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308ACCu;
    // 0x308ad0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x308ACCu, 0x308AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AD4u;
label_308ad4:
    // 0x308ad4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x308ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308adc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x308adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ae0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x308AE0u;
    SET_GPR_U32(ctx, 31, 0x308AE8u);
    ctx->pc = 0x308AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AE0u;
    // 0x308ae4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x308AE0u, 0x308AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AE8u;
label_308ae8:
    // 0x308ae8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x308ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x308aec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x308aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x308af0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x308af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308af4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x308af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308af8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x308af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308b08: 0x3e00008  jr          $ra
    ctx->pc = 0x308B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B08u;
        // 0x308b0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308B10u;
}
