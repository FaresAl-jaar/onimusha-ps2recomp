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

// Function: sub_00360670
// Address: 0x360670 - 0x360ac0
void sub_00360670_0x360670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360670_0x360670");
#endif

    switch (ctx->pc) {
        case 0x3606dcu: goto label_3606dc;
        case 0x360708u: goto label_360708;
        case 0x360800u: goto label_360800;
        case 0x360860u: goto label_360860;
        case 0x360870u: goto label_360870;
        case 0x360a90u: goto label_360a90;
        default: break;
    }

    ctx->pc = 0x360670u;

    // 0x360670: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x360670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x360674: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x360674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x360678: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x360678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x36067c: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x36067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x360680: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x360680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x360684: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x360684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x360688: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x360688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36068c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x360690: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x360690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x360694: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x360694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x360698: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x360698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x36069c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3606a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3606a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3606a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3606a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3606a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3606a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3606acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3606b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3606b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3606b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3606b8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x3606b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3606bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3606bcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65A320u));
    // 0x3606c0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3606c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3606c4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3606c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3606c8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x3606c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3606cc: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x3606ccu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x65A330u));
    // 0x3606d0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3606d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3606d4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3606D4u;
    SET_GPR_U32(ctx, 31, 0x3606DCu);
    ctx->pc = 0x3606D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3606D4u;
    // 0x3606d8: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3606D4u, 0x3606DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3606DCu;
label_3606dc:
    // 0x3606dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3606dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606e0: 0x12a000eb  beqz        $s5, . + 4 + (0xEB << 2)
    ctx->pc = 0x3606E0u;
    {
        const bool branch_taken_0x3606e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3606e0) {
            ctx->pc = 0x360A90u;
            goto label_360a90;
        }
    }
    ctx->pc = 0x3606E8u;
    // 0x3606e8: 0x8ec31fb8  lw          $v1, 0x1FB8($s6)
    ctx->pc = 0x3606e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8120)));
    // 0x3606ec: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x3606ECu;
    {
        const bool branch_taken_0x3606ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3606F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3606ECu;
        // 0x3606f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3606ec) {
            ctx->pc = 0x360A90u;
            goto label_360a90;
        }
    }
    ctx->pc = 0x3606F4u;
    // 0x3606f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3606f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3606f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3606f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3606fc: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x3606fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x360700: 0xc0d82f0  jal         func_360BC0
    ctx->pc = 0x360700u;
    SET_GPR_U32(ctx, 31, 0x360708u);
    ctx->pc = 0x360704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360700u;
    // 0x360704: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360BC0u, 0x360700u, 0x360708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360708u;
label_360708:
    // 0x360708: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x360708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x36070c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x36070cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x360710: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x360710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x360714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x360714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36071c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x36071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x360720: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x360720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x360724: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x360724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x360728: 0x24540170  addiu       $s4, $v0, 0x170
    ctx->pc = 0x360728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x36072c: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x36072cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x360730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360734: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x360734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x360738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36073c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x36073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x360740: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x360740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x360744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360748: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x360748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x36074c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36074cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360750: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x360750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x360754: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x360754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x360758: 0x82820002  lb          $v0, 0x2($s4)
    ctx->pc = 0x360758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x36075c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360760: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x360760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x360764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360768: 0x0  nop
    ctx->pc = 0x360768u;
    // NOP
    // 0x36076c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36076cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360770: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x360770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x360774: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x360774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x360778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36077c: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x36077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
    // 0x360780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360784: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x360784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x360788: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x360788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36078c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36078cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360790: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x360790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x360794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360798: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x360798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x36079c: 0x82830001  lb          $v1, 0x1($s4)
    ctx->pc = 0x36079cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3607a0: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x3607a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3607a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3607a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3607a8: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x3607a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x3607ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3607acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3607b0: 0x0  nop
    ctx->pc = 0x3607b0u;
    // NOP
    // 0x3607b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3607b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3607b8: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x3607b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x3607bc: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x3607bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3607c0: 0x82820002  lb          $v0, 0x2($s4)
    ctx->pc = 0x3607c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3607c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3607c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3607c8: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x3607c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x3607cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3607ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3607d0: 0x0  nop
    ctx->pc = 0x3607d0u;
    // NOP
    // 0x3607d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3607d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3607d8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x3607d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x3607dc: 0x82830001  lb          $v1, 0x1($s4)
    ctx->pc = 0x3607dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3607e0: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x3607e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3607e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3607e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3607e8: 0xafa6016c  sw          $a2, 0x16C($sp)
    ctx->pc = 0x3607e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 6));
    // 0x3607ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3607ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3607f0: 0x0  nop
    ctx->pc = 0x3607f0u;
    // NOP
    // 0x3607f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3607f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3607f8: 0xc04d594  jal         func_135650
    ctx->pc = 0x3607F8u;
    SET_GPR_U32(ctx, 31, 0x360800u);
    ctx->pc = 0x3607FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607F8u;
    // 0x3607fc: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x3607F8u, 0x360800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360800u;
label_360800:
    // 0x360800: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x360800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x360804: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x360804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360808: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x360808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x36080c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x36080Cu;
    {
        const bool branch_taken_0x36080c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x360810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36080Cu;
        // 0x360810: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36080c) {
            ctx->pc = 0x360850u;
            goto label_360850;
        }
    }
    ctx->pc = 0x360814u;
    // 0x360814: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x360814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x360818: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x360818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x36081c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36081Cu;
    {
        const bool branch_taken_0x36081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36081c) {
            ctx->pc = 0x360850u;
            goto label_360850;
        }
    }
    ctx->pc = 0x360824u;
    // 0x360824: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x360824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360828: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x360828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x36082c: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x36082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x360830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x360830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360834: 0x0  nop
    ctx->pc = 0x360834u;
    // NOP
    // 0x360838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36083c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36083cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x360840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360844: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x360844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x360848: 0x0  nop
    ctx->pc = 0x360848u;
    // NOP
    // 0x36084c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x36084cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_360850:
    // 0x360850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x360850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360854: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x360854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x360858: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x360858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36085c: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x36085cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_360860:
    // 0x360860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360864: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x360864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x360868: 0xc041442  jal         func_105108
    ctx->pc = 0x360868u;
    SET_GPR_U32(ctx, 31, 0x360870u);
    ctx->pc = 0x36086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360868u;
    // 0x36086c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x360868u, 0x360870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360870u;
label_360870:
    // 0x360870: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x360870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x360874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x360874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360878: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x360878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x36087c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36087Cu;
    {
        const bool branch_taken_0x36087c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x360880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36087Cu;
        // 0x360880: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36087c) {
            ctx->pc = 0x3608B0u;
            goto label_3608b0;
        }
    }
    ctx->pc = 0x360884u;
    // 0x360884: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x360884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x360888: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x360888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x36088c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36088Cu;
    {
        const bool branch_taken_0x36088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36088c) {
            ctx->pc = 0x3608B0u;
            goto label_3608b0;
        }
    }
    ctx->pc = 0x360894u;
    // 0x360894: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x360894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360898: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x360898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x36089c: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x36089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x3608a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3608a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3608a4: 0x0  nop
    ctx->pc = 0x3608a4u;
    // NOP
    // 0x3608a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3608a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3608ac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3608acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3608b0:
    // 0x3608b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3608b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3608b4: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x3608b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3608b8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3608b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3608bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3608bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3608c0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3608c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3608c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3608c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3608c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3608c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3608cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3608ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3608d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3608d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3608d4: 0x0  nop
    ctx->pc = 0x3608d4u;
    // NOP
    // 0x3608d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3608d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3608dc: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x3608dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3608e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3608e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3608e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3608e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3608e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3608e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3608ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3608ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3608f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3608f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3608f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3608f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3608f8: 0x0  nop
    ctx->pc = 0x3608f8u;
    // NOP
    // 0x3608fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3608fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x360900: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x360900u;
    {
        const bool branch_taken_0x360900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360900u;
        // 0x360904: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360900) {
            ctx->pc = 0x360860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360860;
        }
    }
    ctx->pc = 0x360908u;
    // 0x360908: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x360908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36090c: 0x3c024438  lui         $v0, 0x4438
    ctx->pc = 0x36090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17464 << 16));
    // 0x360910: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x360910u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x360914: 0x34420154  ori         $v0, $v0, 0x154
    ctx->pc = 0x360914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x360918: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x360918u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x36091c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x36091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x360920: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x360920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x360924: 0x34672000  ori         $a3, $v1, 0x2000
    ctx->pc = 0x360924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x360928: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x360928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x36092c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36092cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x360930: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x360930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x360934: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x360934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360938: 0x8ec9000c  lw          $t1, 0xC($s6)
    ctx->pc = 0x360938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x36093c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x36093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x360940: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x360940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x360944: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x360944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x360948: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x360948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36094c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36094cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360950: 0xaea90010  sw          $t1, 0x10($s5)
    ctx->pc = 0x360950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 9));
    // 0x360954: 0xa6a80014  sh          $t0, 0x14($s5)
    ctx->pc = 0x360954u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x360958: 0xa6a00016  sh          $zero, 0x16($s5)
    ctx->pc = 0x360958u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x36095c: 0x8fa90090  lw          $t1, 0x90($sp)
    ctx->pc = 0x36095cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x360960: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x360960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x360964: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x360964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x360968: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x360968u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x36096c: 0x25080f20  addiu       $t0, $t0, 0xF20
    ctx->pc = 0x36096cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3872));
    // 0x360970: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x360970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x360974: 0x844c0  sll         $t0, $t0, 19
    ctx->pc = 0x360974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
    // 0x360978: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x360978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x36097c: 0xaea80020  sw          $t0, 0x20($s5)
    ctx->pc = 0x36097cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 8));
    // 0x360980: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x360980u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x360984: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x360984u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x360988: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x360988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x36098c: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x360990: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x360990u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x360994: 0x25080f20  addiu       $t0, $t0, 0xF20
    ctx->pc = 0x360994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3872));
    // 0x360998: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x360998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x36099c: 0x844c0  sll         $t0, $t0, 19
    ctx->pc = 0x36099cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
    // 0x3609a0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3609a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3609a4: 0xaea80028  sw          $t0, 0x28($s5)
    ctx->pc = 0x3609a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 8));
    // 0x3609a8: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x3609a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
    // 0x3609ac: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x3609acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3609b0: 0x8fa800a4  lw          $t0, 0xA4($sp)
    ctx->pc = 0x3609b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3609b4: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x3609b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x3609b8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3609b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3609bc: 0x25080f20  addiu       $t0, $t0, 0xF20
    ctx->pc = 0x3609bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3872));
    // 0x3609c0: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x3609c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3609c4: 0x844c0  sll         $t0, $t0, 19
    ctx->pc = 0x3609c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
    // 0x3609c8: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3609c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3609cc: 0xaea80038  sw          $t0, 0x38($s5)
    ctx->pc = 0x3609ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 8));
    // 0x3609d0: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x3609d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x3609d4: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x3609d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3609d8: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x3609d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3609dc: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x3609dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x3609e0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3609e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3609e4: 0x25080f20  addiu       $t0, $t0, 0xF20
    ctx->pc = 0x3609e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3872));
    // 0x3609e8: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x3609e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3609ec: 0x844c0  sll         $t0, $t0, 19
    ctx->pc = 0x3609ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
    // 0x3609f0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3609f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3609f4: 0xaea80040  sw          $t0, 0x40($s5)
    ctx->pc = 0x3609f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 8));
    // 0x3609f8: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x3609f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x3609fc: 0x82880004  lb          $t0, 0x4($s4)
    ctx->pc = 0x3609fcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x360a00: 0x82820005  lb          $v0, 0x5($s4)
    ctx->pc = 0x360a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x360a04: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x360a04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x360a08: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x360a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x360a0c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x360a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x360a10: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x360a10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x360a14: 0x82820005  lb          $v0, 0x5($s4)
    ctx->pc = 0x360a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x360a18: 0x82890004  lb          $t1, 0x4($s4)
    ctx->pc = 0x360a18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x360a1c: 0x82880002  lb          $t0, 0x2($s4)
    ctx->pc = 0x360a1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x360a20: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x360a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x360a24: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x360a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x360a28: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x360a28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x360a2c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x360a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x360a30: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x360a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x360a34: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x360a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x360a38: 0x82890005  lb          $t1, 0x5($s4)
    ctx->pc = 0x360a38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x360a3c: 0x82880003  lb          $t0, 0x3($s4)
    ctx->pc = 0x360a3cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x360a40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x360a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360a44: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x360a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x360a48: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x360a48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x360a4c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x360a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x360a50: 0xaea20030  sw          $v0, 0x30($s5)
    ctx->pc = 0x360a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
    // 0x360a54: 0x828a0004  lb          $t2, 0x4($s4)
    ctx->pc = 0x360a54u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x360a58: 0x82890002  lb          $t1, 0x2($s4)
    ctx->pc = 0x360a58u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x360a5c: 0x82880005  lb          $t0, 0x5($s4)
    ctx->pc = 0x360a5cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x360a60: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x360a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x360a64: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x360a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x360a68: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x360a68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x360a6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x360a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x360a70: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x360a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x360a74: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x360a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x360a78: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x360a78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x360a7c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x360a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x360a80: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x360a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x360a84: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x360a84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x360a88: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x360A88u;
    SET_GPR_U32(ctx, 31, 0x360A90u);
    ctx->pc = 0x360A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A88u;
    // 0x360a8c: 0xa2a3000f  sb          $v1, 0xF($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 15), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x360A88u, 0x360A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A90u;
label_360a90:
    // 0x360a90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x360a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x360a94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x360a94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x360a98: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x360a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360a9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x360a9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360aa0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x360aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360aa4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x360aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360aa8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x360aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360aac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x360aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x360ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360ab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x360ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x360AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AB8u;
        // 0x360abc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360AC0u;
}
