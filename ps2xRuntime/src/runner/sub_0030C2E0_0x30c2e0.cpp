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

// Function: sub_0030C2E0
// Address: 0x30c2e0 - 0x30c628
void sub_0030C2E0_0x30c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C2E0_0x30c2e0");
#endif

    ctx->pc = 0x30c2e0u;

    // 0x30c2e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c2e8: 0xe4201f60  swc1        $f0, 0x1F60($at)
    ctx->pc = 0x30c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F60u, bits); }
    // 0x30c2ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c2f4: 0xe4201f64  swc1        $f0, 0x1F64($at)
    ctx->pc = 0x30c2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F64u, bits); }
    // 0x30c2f8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c2fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c300: 0xe4201f68  swc1        $f0, 0x1F68($at)
    ctx->pc = 0x30c300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F68u, bits); }
    // 0x30c304: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x30c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c308: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x30c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c30c: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x30c30cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c310: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x30C310u;
    {
        const bool branch_taken_0x30c310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C310u;
        // 0x30c314: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c310) {
            ctx->pc = 0x30C350u;
            goto label_30c350;
        }
    }
    ctx->pc = 0x30C318u;
    // 0x30c318: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x30c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x30c31c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c324: 0xc4211f64  lwc1        $f1, 0x1F64($at)
    ctx->pc = 0x30c324u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c328: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x30c328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30c32c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30c32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30c330: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30c330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c334: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x30C334u;
    {
        const bool branch_taken_0x30c334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c334) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C33Cu;
    // 0x30c33c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x30c33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c340: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x30C340u;
    {
        const bool branch_taken_0x30c340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c340) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C348u;
    // 0x30c348: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30C348u;
    {
        const bool branch_taken_0x30c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C348u;
        // 0x30c34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c348) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C350u;
label_30c350:
    // 0x30c350: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x30c350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c354: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30C354u;
    {
        const bool branch_taken_0x30c354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C354u;
        // 0x30c358: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c354) {
            ctx->pc = 0x30C368u;
            goto label_30c368;
        }
    }
    ctx->pc = 0x30C35Cu;
    // 0x30c35c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30C35Cu;
    {
        const bool branch_taken_0x30c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c35c) {
            ctx->pc = 0x30C370u;
            goto label_30c370;
        }
    }
    ctx->pc = 0x30C364u;
    // 0x30c364: 0x0  nop
    ctx->pc = 0x30c364u;
    // NOP
label_30c368:
    // 0x30c368: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x30c368u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x30c36c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x30c36cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_30c370:
    // 0x30c370: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c374: 0xc4211f64  lwc1        $f1, 0x1F64($at)
    ctx->pc = 0x30c374u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c378: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x30c37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c380: 0x0  nop
    ctx->pc = 0x30c380u;
    // NOP
    // 0x30c384: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x30c384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c388: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x30C388u;
    {
        const bool branch_taken_0x30c388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C388u;
        // 0x30c38c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c388) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C390u;
    // 0x30c390: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x30c390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c394: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C394u;
    {
        const bool branch_taken_0x30c394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c394) {
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C39Cu;
    // 0x30c39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c3a0:
    // 0x30c3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c3a4: 0x1462009c  bne         $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x30C3A4u;
    {
        const bool branch_taken_0x30c3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c3a4) {
            ctx->pc = 0x30C618u;
            goto label_30c618;
        }
    }
    ctx->pc = 0x30C3ACu;
    // 0x30c3ac: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x30c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c3b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c3b4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x30c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c3b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c3bc: 0x0  nop
    ctx->pc = 0x30c3bcu;
    // NOP
    // 0x30c3c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c3c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c3c4: 0xe4211f70  swc1        $f1, 0x1F70($at)
    ctx->pc = 0x30c3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F70u, bits); }
    // 0x30c3c8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x30c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c3cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c3d0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x30c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c3d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c3d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c3d8: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x30c3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F74u, bits); }
    // 0x30c3dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c3e0: 0xc4221f60  lwc1        $f2, 0x1F60($at)
    ctx->pc = 0x30c3e0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c3e4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x30c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c3e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c3ec: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c3ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c3f0: 0xe4211f78  swc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F78u, bits); }
    // 0x30c3f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c3f8: 0xc4221f68  lwc1        $f2, 0x1F68($at)
    ctx->pc = 0x30c3f8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c3fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x30c3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c400: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c404: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c408: 0xe4211f7c  swc1        $f1, 0x1F7C($at)
    ctx->pc = 0x30c408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F7Cu, bits); }
    // 0x30c40c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c410: 0xc4241f70  lwc1        $f4, 0x1F70($at)
    ctx->pc = 0x30c410u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c414: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c418: 0xc4231f7c  lwc1        $f3, 0x1F7C($at)
    ctx->pc = 0x30c418u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c41c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c420: 0xc4221f74  lwc1        $f2, 0x1F74($at)
    ctx->pc = 0x30c420u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c424: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x30c424u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x30c428: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c42c: 0xc4211f78  lwc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c42cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c430: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x30c430u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x30c434: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c438: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30C438u;
    {
        const bool branch_taken_0x30c438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c438) {
            ctx->pc = 0x30C448u;
            goto label_30c448;
        }
    }
    ctx->pc = 0x30C440u;
    // 0x30c440: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x30C440u;
    {
        const bool branch_taken_0x30c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C440u;
        // 0x30c444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c440) {
            ctx->pc = 0x30C620u;
            goto label_30c620;
        }
    }
    ctx->pc = 0x30C448u;
label_30c448:
    // 0x30c448: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c44c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x30c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c450: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x30c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c454: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c458: 0xe4211f70  swc1        $f1, 0x1F70($at)
    ctx->pc = 0x30c458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F70u, bits); }
    // 0x30c45c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x30c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c460: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c464: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x30c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c468: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c46c: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x30c46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F74u, bits); }
    // 0x30c470: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c474: 0xc4221f60  lwc1        $f2, 0x1F60($at)
    ctx->pc = 0x30c474u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c478: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x30c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c47c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c480: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c480u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c484: 0xe4211f78  swc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F78u, bits); }
    // 0x30c488: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c48c: 0xc4221f68  lwc1        $f2, 0x1F68($at)
    ctx->pc = 0x30c48cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c490: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x30c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c494: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c498: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c49c: 0xe4211f7c  swc1        $f1, 0x1F7C($at)
    ctx->pc = 0x30c49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F7Cu, bits); }
    // 0x30c4a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4a4: 0xc4241f70  lwc1        $f4, 0x1F70($at)
    ctx->pc = 0x30c4a4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c4a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4ac: 0xc4231f7c  lwc1        $f3, 0x1F7C($at)
    ctx->pc = 0x30c4acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c4b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4b4: 0xc4221f74  lwc1        $f2, 0x1F74($at)
    ctx->pc = 0x30c4b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c4b8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x30c4b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x30c4bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4c0: 0xc4211f78  lwc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c4c0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c4c4: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x30c4c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x30c4c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c4cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30C4CCu;
    {
        const bool branch_taken_0x30c4cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c4cc) {
            ctx->pc = 0x30C4E0u;
            goto label_30c4e0;
        }
    }
    ctx->pc = 0x30C4D4u;
    // 0x30c4d4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x30C4D4u;
    {
        const bool branch_taken_0x30c4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4D4u;
        // 0x30c4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4d4) {
            ctx->pc = 0x30C620u;
            goto label_30c620;
        }
    }
    ctx->pc = 0x30C4DCu;
    // 0x30c4dc: 0x0  nop
    ctx->pc = 0x30c4dcu;
    // NOP
label_30c4e0:
    // 0x30c4e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4e4: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x30c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c4e8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x30c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c4ec: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c4ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c4f0: 0xe4211f70  swc1        $f1, 0x1F70($at)
    ctx->pc = 0x30c4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F70u, bits); }
    // 0x30c4f4: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x30c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c4f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c4fc: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x30c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c500: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c504: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x30c504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F74u, bits); }
    // 0x30c508: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c50c: 0xc4221f60  lwc1        $f2, 0x1F60($at)
    ctx->pc = 0x30c50cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c510: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x30c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c514: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c518: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c51c: 0xe4211f78  swc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F78u, bits); }
    // 0x30c520: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c524: 0xc4221f68  lwc1        $f2, 0x1F68($at)
    ctx->pc = 0x30c524u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c528: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x30c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c52c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c530: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c530u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c534: 0xe4211f7c  swc1        $f1, 0x1F7C($at)
    ctx->pc = 0x30c534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F7Cu, bits); }
    // 0x30c538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c53c: 0xc4241f70  lwc1        $f4, 0x1F70($at)
    ctx->pc = 0x30c53cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c540: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c544: 0xc4231f7c  lwc1        $f3, 0x1F7C($at)
    ctx->pc = 0x30c544u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c548: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c54c: 0xc4221f74  lwc1        $f2, 0x1F74($at)
    ctx->pc = 0x30c54cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c550: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x30c550u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x30c554: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c558: 0xc4211f78  lwc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c558u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c55c: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x30c55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x30c560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c564: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30C564u;
    {
        const bool branch_taken_0x30c564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c564) {
            ctx->pc = 0x30C578u;
            goto label_30c578;
        }
    }
    ctx->pc = 0x30C56Cu;
    // 0x30c56c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x30C56Cu;
    {
        const bool branch_taken_0x30c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C56Cu;
        // 0x30c570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c56c) {
            ctx->pc = 0x30C620u;
            goto label_30c620;
        }
    }
    ctx->pc = 0x30C574u;
    // 0x30c574: 0x0  nop
    ctx->pc = 0x30c574u;
    // NOP
label_30c578:
    // 0x30c578: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c57c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c580: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x30c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c584: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c588: 0xe4211f70  swc1        $f1, 0x1F70($at)
    ctx->pc = 0x30c588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F70u, bits); }
    // 0x30c58c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x30c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c590: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c594: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x30c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c598: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c59c: 0xe4211f74  swc1        $f1, 0x1F74($at)
    ctx->pc = 0x30c59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F74u, bits); }
    // 0x30c5a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5a4: 0xc4221f60  lwc1        $f2, 0x1F60($at)
    ctx->pc = 0x30c5a4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c5a8: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x30c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c5ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5b0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c5b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c5b4: 0xe4211f78  swc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F78u, bits); }
    // 0x30c5b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5bc: 0xc4221f68  lwc1        $f2, 0x1F68($at)
    ctx->pc = 0x30c5bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c5c0: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x30c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c5c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30c5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30c5cc: 0xe4211f7c  swc1        $f1, 0x1F7C($at)
    ctx->pc = 0x30c5ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70001F7Cu, bits); }
    // 0x30c5d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5d4: 0xc4241f70  lwc1        $f4, 0x1F70($at)
    ctx->pc = 0x30c5d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c5d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5dc: 0xc4231f7c  lwc1        $f3, 0x1F7C($at)
    ctx->pc = 0x30c5dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c5e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5e4: 0xc4221f74  lwc1        $f2, 0x1F74($at)
    ctx->pc = 0x30c5e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c5e8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x30c5e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x30c5ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x30c5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x30c5f0: 0xc4211f78  lwc1        $f1, 0x1F78($at)
    ctx->pc = 0x30c5f0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70001F78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c5f4: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x30c5f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x30c5f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c5fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30C5FCu;
    {
        const bool branch_taken_0x30c5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c5fc) {
            ctx->pc = 0x30C608u;
            goto label_30c608;
        }
    }
    ctx->pc = 0x30C604u;
    // 0x30c604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c608:
    // 0x30c608: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30c60c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30C60Cu;
    {
        const bool branch_taken_0x30c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C60Cu;
        // 0x30c610: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c60c) {
            ctx->pc = 0x30C620u;
            goto label_30c620;
        }
    }
    ctx->pc = 0x30C614u;
    // 0x30c614: 0x0  nop
    ctx->pc = 0x30c614u;
    // NOP
label_30c618:
    // 0x30c618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c61c: 0x0  nop
    ctx->pc = 0x30c61cu;
    // NOP
label_30c620:
    // 0x30c620: 0x3e00008  jr          $ra
    ctx->pc = 0x30C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C628u;
}
