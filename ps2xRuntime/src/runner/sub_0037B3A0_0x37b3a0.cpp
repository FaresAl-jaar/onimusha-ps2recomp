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

// Function: sub_0037B3A0
// Address: 0x37b3a0 - 0x37b664
void sub_0037B3A0_0x37b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B3A0_0x37b3a0");
#endif

    switch (ctx->pc) {
        case 0x37b4f0u: goto label_37b4f0;
        case 0x37b574u: goto label_37b574;
        case 0x37b5c8u: goto label_37b5c8;
        case 0x37b5d4u: goto label_37b5d4;
        default: break;
    }

    ctx->pc = 0x37b3a0u;

    // 0x37b3a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x37b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x37b3a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x37b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x37b3a8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x37b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x37b3ac: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x37b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x37b3b0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x37b3b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3b4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x37b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x37b3b8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x37b3b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3bc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x37b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x37b3c0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x37b3c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b3c4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x37b3c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37b3cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37b3d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37b3d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b3d8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x37b3d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x37b3dc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x37b3dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x37b3e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x37b3e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37b3e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x37b3e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x37b3e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37b3e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x37b3ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37b3ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37b3f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37b3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37b3f4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x37b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x37b3f8: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x37b3f8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x37b3fc: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B3FCu;
    {
        const bool branch_taken_0x37b3fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3FCu;
        // 0x37b400: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3fc) {
            ctx->pc = 0x37B410u;
            goto label_37b410;
        }
    }
    ctx->pc = 0x37B404u;
    // 0x37b404: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B404u;
    {
        const bool branch_taken_0x37b404 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b404) {
            ctx->pc = 0x37B418u;
            goto label_37b418;
        }
    }
    ctx->pc = 0x37B40Cu;
    // 0x37b40c: 0x0  nop
    ctx->pc = 0x37b40cu;
    // NOP
label_37b410:
    // 0x37b410: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x37B410u;
    {
        const bool branch_taken_0x37b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B410u;
        // 0x37b414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b410) {
            ctx->pc = 0x37B618u;
            goto label_37b618;
        }
    }
    ctx->pc = 0x37B418u;
label_37b418:
    // 0x37b418: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x37b418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x37b41c: 0xc4241754  lwc1        $f4, 0x1754($at)
    ctx->pc = 0x37b41cu;
    { uint32_t bits = FAST_READ32(0x921754u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37b420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37b424: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37b424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37b428: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37b42c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x37b430: 0xc4211750  lwc1        $f1, 0x1750($at)
    ctx->pc = 0x37b430u;
    { uint32_t bits = FAST_READ32(0x921750u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b434: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x37b434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x37b438: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x37b438u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37b43c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x37b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x37b440: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x37b440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x37b444: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x37b444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x37b448: 0xc4251758  lwc1        $f5, 0x1758($at)
    ctx->pc = 0x37b448u;
    { uint32_t bits = FAST_READ32(0x921758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x37b44c: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x37b44cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x37b450: 0x460510c0  add.s       $f3, $f2, $f5
    ctx->pc = 0x37b450u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x37b454: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x37b454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x37b458: 0x46011e42  mul.s       $f25, $f3, $f1
    ctx->pc = 0x37b458u;
    ctx->f[25] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x37b45c: 0x46041dc2  mul.s       $f23, $f3, $f4
    ctx->pc = 0x37b45cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x37b460: 0x46040602  mul.s       $f24, $f0, $f4
    ctx->pc = 0x37b460u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x37b464: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37B464u;
    {
        const bool branch_taken_0x37b464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B464u;
        // 0x37b468: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b464) {
            ctx->pc = 0x37B498u;
            goto label_37b498;
        }
    }
    ctx->pc = 0x37B46Cu;
    // 0x37b46c: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x37b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b470: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x37b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b474: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x37b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b478: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x37b478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37b47c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x37b47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x37b480: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x37b480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37b484: 0x0  nop
    ctx->pc = 0x37b484u;
    // NOP
    // 0x37b488: 0x0  nop
    ctx->pc = 0x37b488u;
    // NOP
    // 0x37b48c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B48Cu;
    {
        const bool branch_taken_0x37b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b48c) {
            ctx->pc = 0x37B4A0u;
            goto label_37b4a0;
        }
    }
    ctx->pc = 0x37B494u;
    // 0x37b494: 0x0  nop
    ctx->pc = 0x37b494u;
    // NOP
label_37b498:
    // 0x37b498: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x37b49c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x37b49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_37b4a0:
    // 0x37b4a0: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x37B4A0u;
    {
        const bool branch_taken_0x37b4a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b4a0) {
            ctx->pc = 0x37B4D0u;
            goto label_37b4d0;
        }
    }
    ctx->pc = 0x37B4A8u;
    // 0x37b4a8: 0xc6e2000c  lwc1        $f2, 0xC($s7)
    ctx->pc = 0x37b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b4ac: 0xc7c1000c  lwc1        $f1, 0xC($fp)
    ctx->pc = 0x37b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b4b0: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x37b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b4b4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37b4b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37b4b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x37b4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x37b4bc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x37b4bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37b4c0: 0x0  nop
    ctx->pc = 0x37b4c0u;
    // NOP
    // 0x37b4c4: 0x0  nop
    ctx->pc = 0x37b4c4u;
    // NOP
    // 0x37b4c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37B4C8u;
    {
        const bool branch_taken_0x37b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b4c8) {
            ctx->pc = 0x37B4D8u;
            goto label_37b4d8;
        }
    }
    ctx->pc = 0x37B4D0u;
label_37b4d0:
    // 0x37b4d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x37b4d4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x37b4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37b4d8:
    // 0x37b4d8: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37b4dc: 0x8fb000d0  lw          $s0, 0xD0($sp)
    ctx->pc = 0x37b4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x37b4e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x37b4e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4e4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x37b4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4e8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x37b4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b4ec: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x37b4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37b4f0:
    // 0x37b4f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37b4f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37B4F4u;
    {
        const bool branch_taken_0x37b4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b4f4) {
            ctx->pc = 0x37B518u;
            goto label_37b518;
        }
    }
    ctx->pc = 0x37B4FCu;
    // 0x37b4fc: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x37b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b500: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x37b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b504: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x37b504u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37b508: 0x4603c81a  mula.s      $f25, $f3
    ctx->pc = 0x37b508u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[3]));
    // 0x37b50c: 0x4603c01c  madd.s      $f0, $f24, $f3
    ctx->pc = 0x37b50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[3]));
    // 0x37b510: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B510u;
    {
        const bool branch_taken_0x37b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B510u;
        // 0x37b514: 0x4600a902  mul.s       $f4, $f21, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b510) {
            ctx->pc = 0x37B538u;
            goto label_37b538;
        }
    }
    ctx->pc = 0x37B518u;
label_37b518:
    // 0x37b518: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x37b518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b51c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x37b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b520: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x37b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b524: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x37b524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x37b528: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x37b528u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37b52c: 0x4600c81a  mula.s      $f25, $f0
    ctx->pc = 0x37b52cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[0]));
    // 0x37b530: 0x4603c01c  madd.s      $f0, $f24, $f3
    ctx->pc = 0x37b530u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[3]));
    // 0x37b534: 0x4600a902  mul.s       $f4, $f21, $f0
    ctx->pc = 0x37b534u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_37b538:
    // 0x37b538: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B538u;
    {
        const bool branch_taken_0x37b538 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B538u;
        // 0x37b53c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b538) {
            ctx->pc = 0x37B550u;
            goto label_37b550;
        }
    }
    ctx->pc = 0x37B540u;
    // 0x37b540: 0x4600b81a  mula.s      $f23, $f0
    ctx->pc = 0x37b540u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[0]));
    // 0x37b544: 0x4600b01c  madd.s      $f0, $f22, $f0
    ctx->pc = 0x37b544u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[0]));
    // 0x37b548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37B548u;
    {
        const bool branch_taken_0x37b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B548u;
        // 0x37b54c: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b548) {
            ctx->pc = 0x37B568u;
            goto label_37b568;
        }
    }
    ctx->pc = 0x37B550u;
label_37b550:
    // 0x37b550: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x37b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b554: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37b554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37b558: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x37b558u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[0]));
    // 0x37b55c: 0x4603b81c  madd.s      $f0, $f23, $f3
    ctx->pc = 0x37b55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[23], ctx->f[3]));
    // 0x37b560: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x37b560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x37b564: 0x0  nop
    ctx->pc = 0x37b564u;
    // NOP
label_37b568:
    // 0x37b568: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x37b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x37b56c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37B56Cu;
    {
        const bool branch_taken_0x37b56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B56Cu;
        // 0x37b570: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b56c) {
            ctx->pc = 0x37B590u;
            goto label_37b590;
        }
    }
    ctx->pc = 0x37B574u;
label_37b574:
    // 0x37b574: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x37b574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37b57c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b580: 0x0  nop
    ctx->pc = 0x37b580u;
    // NOP
    // 0x37b584: 0x0  nop
    ctx->pc = 0x37b584u;
    // NOP
    // 0x37b588: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37B588u;
    {
        const bool branch_taken_0x37b588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b588) {
            ctx->pc = 0x37B574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b574;
        }
    }
    ctx->pc = 0x37B590u;
label_37b590:
    // 0x37b590: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x37b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b594: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x37b594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x37b598: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x37b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x37b59c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x37b5a0: 0x24a5af30  addiu       $a1, $a1, -0x50D0
    ctx->pc = 0x37b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
    // 0x37b5a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x37b5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x37b5a8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x37b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x37b5ac: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x37b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b5b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x37b5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x37b5b4: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x37b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x37b5b8: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x37b5b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x37b5bc: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x37b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x37b5c0: 0xc041442  jal         func_105108
    ctx->pc = 0x37B5C0u;
    SET_GPR_U32(ctx, 31, 0x37B5C8u);
    ctx->pc = 0x37B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5C0u;
    // 0x37b5c4: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x37B5C0u, 0x37B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5C8u;
label_37b5c8:
    // 0x37b5c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x37b5cc: 0xc0decdc  jal         func_37B370
    ctx->pc = 0x37B5CCu;
    SET_GPR_U32(ctx, 31, 0x37B5D4u);
    ctx->pc = 0x37B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5CCu;
    // 0x37b5d0: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B370u, 0x37B5CCu, 0x37B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5D4u;
label_37b5d4:
    // 0x37b5d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x37b5d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x37b5d8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x37b5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x37b5dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x37b5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x37b5e0: 0x2ea10003  sltiu       $at, $s5, 0x3
    ctx->pc = 0x37b5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x37b5e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x37b5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x37b5e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37b5e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x37b5ec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x37b5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x37b5f0: 0x1420ffbf  bnez        $at, . + 4 + (-0x41 << 2)
    ctx->pc = 0x37B5F0u;
    {
        const bool branch_taken_0x37b5f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5F0u;
        // 0x37b5f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b5f0) {
            ctx->pc = 0x37B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b4f0;
        }
    }
    ctx->pc = 0x37B5F8u;
    // 0x37b5f8: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x37b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b5fc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x37b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x37b600: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x37b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37b604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37b608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37b60c: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x37b60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x37b610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37b610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37b614: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x37b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_37b618:
    // 0x37b618: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x37b618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37b61c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x37b61cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37b620: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x37b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x37b624: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x37b624u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37b628: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x37b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x37b62c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x37b62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37b630: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x37b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37b634: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x37b634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37b638: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x37b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37b63c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37b63cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37b640: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37b644: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37b644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37b648: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37b64c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37b64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b650: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37b654: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37b654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b658: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B65Cu;
        // 0x37b660: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B664u;
}
