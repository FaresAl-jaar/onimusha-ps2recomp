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

// Function: sub_001A2280
// Address: 0x1a2280 - 0x1a2384
void sub_001A2280_0x1a2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2280_0x1a2280");
#endif

    ctx->pc = 0x1a2280u;

    // 0x1a2280: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a2280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2284: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a2284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2288: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1a2288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a228c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1a228cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2290: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1a2290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2294: 0x460c2003  div.s       $f0, $f4, $f12
    ctx->pc = 0x1a2294u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[12]); }
    // 0x1a2298: 0x46032203  div.s       $f8, $f4, $f3
    ctx->pc = 0x1a2298u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1a229c: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x1a229cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x1a22a0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x1a22a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a22a4: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x1a22a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x1a22a8: 0x460508c2  mul.s       $f3, $f1, $f5
    ctx->pc = 0x1a22a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a22ac: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x1a22acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[3]));
    // 0x1a22b0: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x1a22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a22b4: 0x460041c7  neg.s       $f7, $f8
    ctx->pc = 0x1a22b4u;
    ctx->f[7] = FPU_NEG_S(ctx->f[8]);
    // 0x1a22b8: 0x46001147  neg.s       $f5, $f2
    ctx->pc = 0x1a22b8u;
    ctx->f[5] = FPU_NEG_S(ctx->f[2]);
    // 0x1a22bc: 0x460640c2  mul.s       $f3, $f8, $f6
    ctx->pc = 0x1a22bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1a22c0: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x1a22c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x1a22c4: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1a22c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a22c8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1a22c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a22cc: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x1a22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a22d0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1a22d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a22d4: 0x46000987  neg.s       $f6, $f1
    ctx->pc = 0x1a22d4u;
    ctx->f[6] = FPU_NEG_S(ctx->f[1]);
    // 0x1a22d8: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x1a22d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x1a22dc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a22dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a22e0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1a22e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a22e4: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x1a22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a22e8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1a22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a22ec: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x1a22ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x1a22f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a22f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a22f4: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x1a22f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a22f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a22fc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1a22fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2300: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1a2300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a2304: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x1a2304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2308: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x1a2308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a230c: 0x46064102  mul.s       $f4, $f8, $f6
    ctx->pc = 0x1a230cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1a2310: 0x460710c2  mul.s       $f3, $f2, $f7
    ctx->pc = 0x1a2310u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a2314: 0x4604301a  mula.s      $f6, $f4
    ctx->pc = 0x1a2314u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x1a2318: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x1a2318u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x1a231c: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1a231cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a2320: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1a2320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1a2324: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x1a2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2328: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1a2328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a232c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1a232cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1a2330: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a2330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a2334: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x1a2334u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1a2338: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1a2338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1a233c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1a233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2340: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1a2340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1a2344: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x1a2344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2348: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x1a2348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1a234c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1a234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2350: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x1a2350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2354: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2354u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a2358: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a2358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a235c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1a235cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a2360: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x1a2360u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x1a2364: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2368: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1a2368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1a236c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1a236cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1a2370: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1a2370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1a2374: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1a2374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1a2378: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1a2378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1a237c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A237Cu;
        // 0x1a2380: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2384u;
}
