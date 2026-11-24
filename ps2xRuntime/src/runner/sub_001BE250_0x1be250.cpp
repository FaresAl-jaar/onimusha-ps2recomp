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

// Function: sub_001BE250
// Address: 0x1be250 - 0x1be414
void sub_001BE250_0x1be250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE250_0x1be250");
#endif

    switch (ctx->pc) {
        case 0x1be3ecu: goto label_1be3ec;
        case 0x1be404u: goto label_1be404;
        default: break;
    }

    ctx->pc = 0x1be250u;

    // 0x1be250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be258: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1be25c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE25Cu;
    {
        const bool branch_taken_0x1be25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be25c) {
            ctx->pc = 0x1BE280u;
            goto label_1be280;
        }
    }
    ctx->pc = 0x1BE264u;
    // 0x1be264: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1be264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1be268: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1be268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1be26c: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x1be26cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be270: 0x34844800  ori         $a0, $a0, 0x4800
    ctx->pc = 0x1be270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18432);
    // 0x1be274: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x1be274u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1be278: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1BE278u;
    {
        const bool branch_taken_0x1be278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE278u;
        // 0x1be27c: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be278) {
            ctx->pc = 0x1BE408u;
            goto label_1be408;
        }
    }
    ctx->pc = 0x1BE280u;
label_1be280:
    // 0x1be280: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x1be280u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be284: 0x30c34000  andi        $v1, $a2, 0x4000
    ctx->pc = 0x1be284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x1be288: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE288u;
    {
        const bool branch_taken_0x1be288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE288u;
        // 0x1be28c: 0x30c3bfff  andi        $v1, $a2, 0xBFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)49151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be288) {
            ctx->pc = 0x1BE298u;
            goto label_1be298;
        }
    }
    ctx->pc = 0x1BE290u;
    // 0x1be290: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1be290u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be294: 0x0  nop
    ctx->pc = 0x1be294u;
    // NOP
label_1be298:
    // 0x1be298: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1be298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be29c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1be29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1be2a0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE2A0u;
    {
        const bool branch_taken_0x1be2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2a0) {
            ctx->pc = 0x1BE2F0u;
            goto label_1be2f0;
        }
    }
    ctx->pc = 0x1BE2A8u;
    // 0x1be2a8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1be2ac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE2ACu;
    {
        const bool branch_taken_0x1be2ac = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1BE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2ACu;
        // 0x1be2b0: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2ac) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE2B4u;
    // 0x1be2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE2D8u;
            goto label_1be2d8;
        }
    }
    ctx->pc = 0x1BE2C0u;
label_1be2c0:
    // 0x1be2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1be2c4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1be2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1be2c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1be2c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2cc: 0x0  nop
    ctx->pc = 0x1be2ccu;
    // NOP
    // 0x1be2d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1be2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1be2d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1be2d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1be2d8:
    // 0x1be2d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1be2dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be2e0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1be2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be2e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1be2e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1be2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be2ec: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1be2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_1be2f0:
    // 0x1be2f0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1be2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1be2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2f8: 0x0  nop
    ctx->pc = 0x1be2f8u;
    // NOP
    // 0x1be2fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE300u;
    {
        const bool branch_taken_0x1be300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be300) {
            ctx->pc = 0x1BE310u;
            goto label_1be310;
        }
    }
    ctx->pc = 0x1BE308u;
    // 0x1be308: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1be308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1be30c: 0x0  nop
    ctx->pc = 0x1be30cu;
    // NOP
label_1be310:
    // 0x1be310: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1be310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1be314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be318: 0x0  nop
    ctx->pc = 0x1be318u;
    // NOP
    // 0x1be31c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1be31cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be320: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE320u;
    {
        const bool branch_taken_0x1be320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be320) {
            ctx->pc = 0x1BE340u;
            goto label_1be340;
        }
    }
    ctx->pc = 0x1BE328u;
    // 0x1be328: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1be328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be32c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1be32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1be330: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1be330u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be334: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1BE334u;
    {
        const bool branch_taken_0x1be334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE334u;
        // 0x1be338: 0xa0807845  sb          $zero, 0x7845($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 30789), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be334) {
            ctx->pc = 0x1BE408u;
            goto label_1be408;
        }
    }
    ctx->pc = 0x1BE33Cu;
    // 0x1be33c: 0x0  nop
    ctx->pc = 0x1be33cu;
    // NOP
label_1be340:
    // 0x1be340: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1be340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be344: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x1be344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x1be348: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x1be348u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1be34c: 0x90827845  lbu         $v0, 0x7845($a0)
    ctx->pc = 0x1be34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30789)));
    // 0x1be350: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BE350u;
    {
        const bool branch_taken_0x1be350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be350) {
            ctx->pc = 0x1BE3F8u;
            goto label_1be3f8;
        }
    }
    ctx->pc = 0x1BE358u;
    // 0x1be358: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1be35c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1be360: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE360u;
    {
        const bool branch_taken_0x1be360 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE360u;
        // 0x1be364: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be360) {
            ctx->pc = 0x1BE374u;
            goto label_1be374;
        }
    }
    ctx->pc = 0x1BE368u;
    // 0x1be368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be36c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE36Cu;
    {
        const bool branch_taken_0x1be36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be36c) {
            ctx->pc = 0x1BE38Cu;
            goto label_1be38c;
        }
    }
    ctx->pc = 0x1BE374u;
label_1be374:
    // 0x1be374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be378: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be380: 0x0  nop
    ctx->pc = 0x1be380u;
    // NOP
    // 0x1be384: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1be384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1be388: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1be388u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1be38c:
    // 0x1be38c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1be38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be390: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be398: 0x0  nop
    ctx->pc = 0x1be398u;
    // NOP
    // 0x1be39c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1be39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1be3a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be3a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE3A4u;
    {
        const bool branch_taken_0x1be3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be3a4) {
            ctx->pc = 0x1BE3BCu;
            goto label_1be3bc;
        }
    }
    ctx->pc = 0x1BE3ACu;
    // 0x1be3ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1be3b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1be3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be3b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE3B4u;
    {
        const bool branch_taken_0x1be3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B4u;
        // 0x1be3b8: 0x3103c  dsll32      $v0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3b4) {
            ctx->pc = 0x1BE3D8u;
            goto label_1be3d8;
        }
    }
    ctx->pc = 0x1BE3BCu;
label_1be3bc:
    // 0x1be3bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1be3bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1be3c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1be3c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be3c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1be3c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1be3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be3cc: 0x0  nop
    ctx->pc = 0x1be3ccu;
    // NOP
    // 0x1be3d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be3d4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1be3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1be3d8:
    // 0x1be3d8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1be3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1be3dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be3e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be3e4: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1BE3E4u;
    SET_GPR_U32(ctx, 31, 0x1BE3ECu);
    ctx->pc = 0x1BE3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3E4u;
    // 0x1be3e8: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1BE3E4u, 0x1BE3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3ECu;
label_1be3ec:
    // 0x1be3ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE3ECu;
    {
        const bool branch_taken_0x1be3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be3ec) {
            ctx->pc = 0x1BE408u;
            goto label_1be408;
        }
    }
    ctx->pc = 0x1BE3F4u;
    // 0x1be3f4: 0x0  nop
    ctx->pc = 0x1be3f4u;
    // NOP
label_1be3f8:
    // 0x1be3f8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1be3fc: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1BE3FCu;
    SET_GPR_U32(ctx, 31, 0x1BE404u);
    ctx->pc = 0x1BE400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3FCu;
    // 0x1be400: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1BE3FCu, 0x1BE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE404u;
label_1be404:
    // 0x1be404: 0x0  nop
    ctx->pc = 0x1be404u;
    // NOP
label_1be408:
    // 0x1be408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE40Cu;
        // 0x1be410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE414u;
}
