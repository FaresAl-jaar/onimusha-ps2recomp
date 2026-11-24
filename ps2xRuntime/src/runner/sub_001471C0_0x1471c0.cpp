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

// Function: sub_001471C0
// Address: 0x1471c0 - 0x147358
void sub_001471C0_0x1471c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001471C0_0x1471c0");
#endif

    switch (ctx->pc) {
        case 0x14720cu: goto label_14720c;
        default: break;
    }

    ctx->pc = 0x1471c0u;

    // 0x1471c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1471c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1471c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1471c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1471c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1471cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1471ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1471d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1471d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1471d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1471d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1471d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1471dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471e0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1471e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1471e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1471e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1471ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1471ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1471f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1471f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1471f4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x1471f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1471f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1471fc: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1471fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147200: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x147200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x147204: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x147204u;
    SET_GPR_U32(ctx, 31, 0x14720Cu);
    ctx->pc = 0x147208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147204u;
    // 0x147208: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x147204u, 0x14720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14720Cu;
label_14720c:
    // 0x14720c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x14720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147210: 0x46141040  add.s       $f1, $f2, $f20
    ctx->pc = 0x147210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x147214: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147218: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x147218u;
    {
        const bool branch_taken_0x147218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147218) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147220u;
    // 0x147220: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x147220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147224: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x147224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147228: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x147228u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x14722c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14722cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x147230: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x147230u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x147234: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x147234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147238: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147238) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147240u;
    // 0x147240: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x147240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147244: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x147244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147248: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x147248u;
    {
        const bool branch_taken_0x147248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147248) {
            ctx->pc = 0x147330u;
            goto label_147330;
        }
    }
    ctx->pc = 0x147250u;
    // 0x147250: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x147250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147254: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x147254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147258: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x147258u;
    {
        const bool branch_taken_0x147258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147258) {
            ctx->pc = 0x147308u;
            goto label_147308;
        }
    }
    ctx->pc = 0x147260u;
    // 0x147260: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x147260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147264: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x147264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147268: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x147268u;
    {
        const bool branch_taken_0x147268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147268) {
            ctx->pc = 0x1472C8u;
            goto label_1472c8;
        }
    }
    ctx->pc = 0x147270u;
    // 0x147270: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x147274: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x147274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x147278: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x147278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x14727c: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x14727cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x147280: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x147284: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x147284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
    // 0x147288: 0xae3000f0  sw          $s0, 0xF0($s1)
    ctx->pc = 0x147288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
    // 0x14728c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x14728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147290: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x147290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x147294: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x147294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147298: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x147298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x14729c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x14729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472a0: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1472a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1472a4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1472a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472a8: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1472a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1472ac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1472acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472b0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1472b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1472b4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1472b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472b8: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1472b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1472bc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1472bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1472c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1472C0u;
    {
        const bool branch_taken_0x1472c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472C0u;
        // 0x1472c4: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472c0) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x1472C8u;
label_1472c8:
    // 0x1472c8: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x1472c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1472cc: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x1472ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x1472d0: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x1472d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x1472d4: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x1472d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x1472d8: 0xae3000f4  sw          $s0, 0xF4($s1)
    ctx->pc = 0x1472d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
    // 0x1472dc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1472dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472e0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x1472e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1472e4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1472e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472e8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1472e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1472ec: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1472ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472f0: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1472f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1472f4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1472f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472f8: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1472f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1472fc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1472fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x147300: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x147300u;
    {
        const bool branch_taken_0x147300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147300u;
        // 0x147304: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147300) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147308u;
label_147308:
    // 0x147308: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x147308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x14730c: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x14730cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x147310: 0xae3000f8  sw          $s0, 0xF8($s1)
    ctx->pc = 0x147310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 16));
    // 0x147314: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x147314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147318: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x147318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x14731c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x14731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147320: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x147320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x147324: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x147324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x147328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147328u;
    {
        const bool branch_taken_0x147328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147328u;
        // 0x14732c: 0xe6220014  swc1        $f2, 0x14($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147328) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147330u;
label_147330:
    // 0x147330: 0xae3000fc  sw          $s0, 0xFC($s1)
    ctx->pc = 0x147330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 16));
    // 0x147334: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x147334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x147338: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x147338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x14733c: 0x0  nop
    ctx->pc = 0x14733cu;
    // NOP
label_147340:
    // 0x147340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x147340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147348: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x147348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14734c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14734cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147350: 0x3e00008  jr          $ra
    ctx->pc = 0x147350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147350u;
        // 0x147354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147358u;
}
