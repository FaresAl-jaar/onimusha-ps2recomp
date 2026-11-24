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

// Function: sub_003BA360
// Address: 0x3ba360 - 0x3ba4d4
void sub_003BA360_0x3ba360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA360_0x3ba360");
#endif

    switch (ctx->pc) {
        case 0x3ba3a8u: goto label_3ba3a8;
        case 0x3ba3b8u: goto label_3ba3b8;
        case 0x3ba3ccu: goto label_3ba3cc;
        case 0x3ba3d4u: goto label_3ba3d4;
        case 0x3ba3f8u: goto label_3ba3f8;
        case 0x3ba454u: goto label_3ba454;
        case 0x3ba464u: goto label_3ba464;
        case 0x3ba47cu: goto label_3ba47c;
        case 0x3ba490u: goto label_3ba490;
        default: break;
    }

    ctx->pc = 0x3ba360u;

    // 0x3ba360: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ba360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3ba364: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ba364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3ba368: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ba368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ba36c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ba36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ba370: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ba370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba374: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ba374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ba378: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ba378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba37c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ba37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ba380: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ba380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ba384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ba388: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3ba388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba38c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ba390: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ba390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba394: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3BA394u;
    {
        const bool branch_taken_0x3ba394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA394u;
        // 0x3ba398: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba394) {
            ctx->pc = 0x3BA4B0u;
            goto label_3ba4b0;
        }
    }
    ctx->pc = 0x3BA39Cu;
    // 0x3ba39c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3ba39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ba3a0: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x3BA3A0u;
    SET_GPR_U32(ctx, 31, 0x3BA3A8u);
    ctx->pc = 0x3BA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA3A0u;
    // 0x3ba3a4: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x3BA3A0u, 0x3BA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3A8u;
label_3ba3a8:
    // 0x3ba3a8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3ba3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba3ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3ba3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3ba3b0: 0xc04b946  jal         func_12E518
    ctx->pc = 0x3BA3B0u;
    SET_GPR_U32(ctx, 31, 0x3BA3B8u);
    ctx->pc = 0x3BA3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA3B0u;
    // 0x3ba3b4: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x3BA3B0u, 0x3BA3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3B8u;
label_3ba3b8:
    // 0x3ba3b8: 0x3c03406f  lui         $v1, 0x406F
    ctx->pc = 0x3ba3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16495 << 16));
    // 0x3ba3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ba3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba3c0: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x3ba3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3ba3c4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x3BA3C4u;
    SET_GPR_U32(ctx, 31, 0x3BA3CCu);
    ctx->pc = 0x3BA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA3C4u;
    // 0x3ba3c8: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x3BA3C4u, 0x3BA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3CCu;
label_3ba3cc:
    // 0x3ba3cc: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x3BA3CCu;
    SET_GPR_U32(ctx, 31, 0x3BA3D4u);
    ctx->pc = 0x3BA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA3CCu;
    // 0x3ba3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x3BA3CCu, 0x3BA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3D4u;
label_3ba3d4:
    // 0x3ba3d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3ba3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3ba3d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3ba3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3ba3dc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3ba3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba3e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ba3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ba3e4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3ba3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3ba3e8: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ba3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x3ba3ec: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x3ba3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x3ba3f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3BA3F0u;
    {
        const bool branch_taken_0x3ba3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA3F0u;
        // 0x3ba3f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3f0) {
            ctx->pc = 0x3BA4A0u;
            goto label_3ba4a0;
        }
    }
    ctx->pc = 0x3BA3F8u;
label_3ba3f8:
    // 0x3ba3f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3ba3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3ba3fc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x3ba3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3ba400: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3ba400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3ba404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ba404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3ba408: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x3ba408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3ba40c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ba40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba410: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ba410u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ba414: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x3ba414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ba418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ba418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba41c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3ba41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3ba420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba424: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3ba424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ba428: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3ba428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ba42c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ba42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3ba430: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ba430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ba434: 0x0  nop
    ctx->pc = 0x3ba434u;
    // NOP
    // 0x3ba438: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ba438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ba43c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ba43cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ba440: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3ba440u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ba444: 0x0  nop
    ctx->pc = 0x3ba444u;
    // NOP
    // 0x3ba448: 0x0  nop
    ctx->pc = 0x3ba448u;
    // NOP
    // 0x3ba44c: 0xc096784  jal         func_259E10
    ctx->pc = 0x3BA44Cu;
    SET_GPR_U32(ctx, 31, 0x3BA454u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3BA44Cu, 0x3BA454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA454u;
label_3ba454:
    // 0x3ba454: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ba454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba458: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ba458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3ba45c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3BA45Cu;
    SET_GPR_U32(ctx, 31, 0x3BA464u);
    ctx->pc = 0x3BA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA45Cu;
    // 0x3ba460: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3BA45Cu, 0x3BA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA464u;
label_3ba464:
    // 0x3ba464: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ba464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ba468: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ba468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba46c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x3ba46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x3ba470: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ba470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ba474: 0xc041442  jal         func_105108
    ctx->pc = 0x3BA474u;
    SET_GPR_U32(ctx, 31, 0x3BA47Cu);
    ctx->pc = 0x3BA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA474u;
    // 0x3ba478: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3BA474u, 0x3BA47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA47Cu;
label_3ba47c:
    // 0x3ba47c: 0x928408e8  lbu         $a0, 0x8E8($s4)
    ctx->pc = 0x3ba47cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ba480: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ba480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba484: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3ba484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba488: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x3BA488u;
    SET_GPR_U32(ctx, 31, 0x3BA490u);
    ctx->pc = 0x3BA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA488u;
    // 0x3ba48c: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2010u, 0x3BA488u, 0x3BA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA490u;
label_3ba490:
    // 0x3ba490: 0x92832b5c  lbu         $v1, 0x2B5C($s4)
    ctx->pc = 0x3ba490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11100)));
    // 0x3ba494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ba494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ba498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ba498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ba49c: 0xa2832b5c  sb          $v1, 0x2B5C($s4)
    ctx->pc = 0x3ba49cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11100), (uint8_t)GPR_U32(ctx, 3));
label_3ba4a0:
    // 0x3ba4a0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3ba4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3ba4a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3ba4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ba4a8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3BA4A8u;
    {
        const bool branch_taken_0x3ba4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba4a8) {
            ctx->pc = 0x3BA3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba3f8;
        }
    }
    ctx->pc = 0x3BA4B0u;
label_3ba4b0:
    // 0x3ba4b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ba4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ba4b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ba4b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ba4b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ba4bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ba4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ba4c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ba4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ba4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ba4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA4CCu;
        // 0x3ba4d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA4D4u;
}
