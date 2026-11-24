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

// Function: sub_003B2290
// Address: 0x3b2290 - 0x3b23bc
void sub_003B2290_0x3b2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2290_0x3b2290");
#endif

    switch (ctx->pc) {
        case 0x3b22d0u: goto label_3b22d0;
        case 0x3b230cu: goto label_3b230c;
        case 0x3b2318u: goto label_3b2318;
        case 0x3b236cu: goto label_3b236c;
        case 0x3b2388u: goto label_3b2388;
        default: break;
    }

    ctx->pc = 0x3b2290u;

    // 0x3b2290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b2294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2298: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b2298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b229c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3b229cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b22a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b22a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b22a4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3b22a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3b22a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b22a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b22ac: 0x460d6581  sub.s       $f22, $f12, $f13
    ctx->pc = 0x3b22acu;
    ctx->f[22] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x3b22b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b22b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b22b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b22b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b22b8: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3b22b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x3b22bc: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x3b22bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x3b22c0: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x3b22c0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x3b22c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3b22c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3b22c8: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B22C8u;
    SET_GPR_U32(ctx, 31, 0x3B22D0u);
    ctx->pc = 0x3B22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B22C8u;
    // 0x3b22cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B22C8u, 0x3B22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B22D0u;
label_3b22d0:
    // 0x3b22d0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x3b22d4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3b22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3b22d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b22d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b22dc: 0x0  nop
    ctx->pc = 0x3b22dcu;
    // NOP
    // 0x3b22e0: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x3b22e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x3b22e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b22e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B22E8u;
    {
        const bool branch_taken_0x3b22e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22e8) {
            ctx->pc = 0x3B2300u;
            goto label_3b2300;
        }
    }
    ctx->pc = 0x3B22F0u;
    // 0x3b22f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3b22f4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3B22F4u;
    {
        const bool branch_taken_0x3b22f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B22F4u;
        // 0x3b22f8: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b22f4) {
            ctx->pc = 0x3B2398u;
            goto label_3b2398;
        }
    }
    ctx->pc = 0x3B22FCu;
    // 0x3b22fc: 0x0  nop
    ctx->pc = 0x3b22fcu;
    // NOP
label_3b2300:
    // 0x3b2300: 0x4616bdc2  mul.s       $f23, $f23, $f22
    ctx->pc = 0x3b2300u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x3b2304: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B2304u;
    SET_GPR_U32(ctx, 31, 0x3B230Cu);
    ctx->pc = 0x3B2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2304u;
    // 0x3b2308: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B2304u, 0x3B230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B230Cu;
label_3b230c:
    // 0x3b230c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3b230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b2310: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B2310u;
    SET_GPR_U32(ctx, 31, 0x3B2318u);
    ctx->pc = 0x3B2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2310u;
    // 0x3b2314: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B2310u, 0x3B2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2318u;
label_3b2318:
    // 0x3b2318: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3b2318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b231c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3B231Cu;
    {
        const bool branch_taken_0x3b231c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b231c) {
            ctx->pc = 0x3B2348u;
            goto label_3b2348;
        }
    }
    ctx->pc = 0x3B2324u;
    // 0x3b2324: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3b2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b232c: 0x0  nop
    ctx->pc = 0x3b232cu;
    // NOP
    // 0x3b2330: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x3b2330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x3b2334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2338: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2338u;
    {
        const bool branch_taken_0x3b2338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2338) {
            ctx->pc = 0x3B2348u;
            goto label_3b2348;
        }
    }
    ctx->pc = 0x3B2340u;
    // 0x3b2340: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B2340u;
    {
        const bool branch_taken_0x3b2340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2340u;
        // 0x3b2344: 0xe6170000  swc1        $f23, 0x0($s0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2340) {
            ctx->pc = 0x3B2390u;
            goto label_3b2390;
        }
    }
    ctx->pc = 0x3B2348u;
label_3b2348:
    // 0x3b2348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b234c: 0x0  nop
    ctx->pc = 0x3b234cu;
    // NOP
    // 0x3b2350: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x3b2350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2354: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2354u;
    {
        const bool branch_taken_0x3b2354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2354) {
            ctx->pc = 0x3B2378u;
            goto label_3b2378;
        }
    }
    ctx->pc = 0x3B235Cu;
    // 0x3b235c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2360: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b2360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b2364: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B2364u;
    SET_GPR_U32(ctx, 31, 0x3B236Cu);
    ctx->pc = 0x3B2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2364u;
    // 0x3b2368: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B2364u, 0x3B236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B236Cu;
label_3b236c:
    // 0x3b236c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B236Cu;
    {
        const bool branch_taken_0x3b236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B236Cu;
        // 0x3b2370: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b236c) {
            ctx->pc = 0x3B2390u;
            goto label_3b2390;
        }
    }
    ctx->pc = 0x3B2374u;
    // 0x3b2374: 0x0  nop
    ctx->pc = 0x3b2374u;
    // NOP
label_3b2378:
    // 0x3b2378: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b237c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b237cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b2380: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B2380u;
    SET_GPR_U32(ctx, 31, 0x3B2388u);
    ctx->pc = 0x3B2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2380u;
    // 0x3b2384: 0x46140341  sub.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B2380u, 0x3B2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2388u;
label_3b2388:
    // 0x3b2388: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3b238c: 0x0  nop
    ctx->pc = 0x3b238cu;
    // NOP
label_3b2390:
    // 0x3b2390: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2394: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3b2394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3b2398:
    // 0x3b2398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b239c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b239cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b23a0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3b23a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3b23a4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3b23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b23a8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b23ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b23b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b23b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b23b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B23B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23B4u;
        // 0x3b23b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B23B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B23BCu;
}
