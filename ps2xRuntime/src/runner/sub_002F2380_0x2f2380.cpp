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

// Function: sub_002F2380
// Address: 0x2f2380 - 0x2f24d4
void sub_002F2380_0x2f2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2380_0x2f2380");
#endif

    switch (ctx->pc) {
        case 0x2f2404u: goto label_2f2404;
        case 0x2f2418u: goto label_2f2418;
        case 0x2f2424u: goto label_2f2424;
        case 0x2f2444u: goto label_2f2444;
        default: break;
    }

    ctx->pc = 0x2f2380u;

    // 0x2f2380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2384: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f238c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f238cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f2390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f2394: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2f2394u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f2398: 0x3c02c244  lui         $v0, 0xC244
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49732 << 16));
    // 0x2f239c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f239cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f23a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f23a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f23a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f23a8: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2f23ac: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2f23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f23b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f23b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f23b4: 0xc4850884  lwc1        $f5, 0x884($a0)
    ctx->pc = 0x2f23b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f23b8: 0xc4840874  lwc1        $f4, 0x874($a0)
    ctx->pc = 0x2f23b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f23bc: 0xc4800894  lwc1        $f0, 0x894($a0)
    ctx->pc = 0x2f23bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23c0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2f23c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2f23c4: 0x26040870  addiu       $a0, $s0, 0x870
    ctx->pc = 0x2f23c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x2f23c8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2f23c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2f23cc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2f23ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2f23d0: 0x46041842  mul.s       $f1, $f3, $f4
    ctx->pc = 0x2f23d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2f23d4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2f23d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f23d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f23d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2f23dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f23dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2f23e0: 0x0  nop
    ctx->pc = 0x2f23e0u;
    // NOP
    // 0x2f23e4: 0x46010544  c1          0x10544
    ctx->pc = 0x2f23e4u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[1]);
    // 0x2f23e8: 0x0  nop
    ctx->pc = 0x2f23e8u;
    // NOP
    // 0x2f23ec: 0x0  nop
    ctx->pc = 0x2f23ecu;
    // NOP
    // 0x2f23f0: 0x46000504  c1          0x504
    ctx->pc = 0x2f23f0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f23f4: 0x0  nop
    ctx->pc = 0x2f23f4u;
    // NOP
    // 0x2f23f8: 0x0  nop
    ctx->pc = 0x2f23f8u;
    // NOP
    // 0x2f23fc: 0xc096908  jal         func_25A420
    ctx->pc = 0x2F23FCu;
    SET_GPR_U32(ctx, 31, 0x2F2404u);
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2F23FCu, 0x2F2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2404u;
label_2f2404:
    // 0x2f2404: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2f2404u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2f2408: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f240c: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2f2410: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2F2410u;
    SET_GPR_U32(ctx, 31, 0x2F2418u);
    ctx->pc = 0x2F2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2410u;
    // 0x2f2414: 0x26060870  addiu       $a2, $s0, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2F2410u, 0x2F2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2418u;
label_2f2418:
    // 0x2f2418: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f241c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2F241Cu;
    SET_GPR_U32(ctx, 31, 0x2F2424u);
    ctx->pc = 0x2F2420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F241Cu;
    // 0x2f2420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2F241Cu, 0x2F2424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2424u;
label_2f2424:
    // 0x2f2424: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2f2424u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2f2428: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f2428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f242c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f242cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2430: 0x4614b303  div.s       $f12, $f22, $f20
    ctx->pc = 0x2f2430u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x2f2434: 0x0  nop
    ctx->pc = 0x2f2434u;
    // NOP
    // 0x2f2438: 0x0  nop
    ctx->pc = 0x2f2438u;
    // NOP
    // 0x2f243c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2F243Cu;
    SET_GPR_U32(ctx, 31, 0x2F2444u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F243Cu, 0x2F2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2444u;
label_2f2444:
    // 0x2f2444: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2f2444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2448: 0x3c03c244  lui         $v1, 0xC244
    ctx->pc = 0x2f2448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49732 << 16));
    // 0x2f244c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2f244cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f2450: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2f2454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f2454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2458: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2f2458u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2f245c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2f245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2f2460: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2f2460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2f2464: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f2464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f2468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f246c: 0x0  nop
    ctx->pc = 0x2f246cu;
    // NOP
    // 0x2f2470: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2f2470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f2474: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2f2474u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2478: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f2478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f247c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F247Cu;
    {
        const bool branch_taken_0x2f247c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F247Cu;
        // 0x2f2480: 0x7e030090  sq          $v1, 0x90($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f247c) {
            ctx->pc = 0x2F2494u;
            goto label_2f2494;
        }
    }
    ctx->pc = 0x2F2484u;
    // 0x2f2484: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2f2488: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x2f2488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f248c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F248Cu;
    {
        const bool branch_taken_0x2f248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F248Cu;
        // 0x2f2490: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f248c) {
            ctx->pc = 0x2F24B0u;
            goto label_2f24b0;
        }
    }
    ctx->pc = 0x2F2494u;
label_2f2494:
    // 0x2f2494: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2f2494u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2f2498: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f2498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2f249c: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f249cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2f24a0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x2f24a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f24a4: 0x0  nop
    ctx->pc = 0x2f24a4u;
    // NOP
    // 0x2f24a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f24a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f24ac: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f24acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2f24b0:
    // 0x2f24b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f24b4: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x2f24b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f24b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f24b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f24bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2f24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f24c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f24c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f24c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f24c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f24c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f24c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f24cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F24CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24CCu;
        // 0x2f24d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F24CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F24D4u;
}
