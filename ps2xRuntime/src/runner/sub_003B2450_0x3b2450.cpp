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

// Function: sub_003B2450
// Address: 0x3b2450 - 0x3b2584
void sub_003B2450_0x3b2450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2450_0x3b2450");
#endif

    switch (ctx->pc) {
        case 0x3b2490u: goto label_3b2490;
        case 0x3b24c8u: goto label_3b24c8;
        case 0x3b24d4u: goto label_3b24d4;
        case 0x3b24e0u: goto label_3b24e0;
        case 0x3b2534u: goto label_3b2534;
        case 0x3b2550u: goto label_3b2550;
        default: break;
    }

    ctx->pc = 0x3b2450u;

    // 0x3b2450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b2454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b245c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3b245cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b2460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b2460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2464: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3b2464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3b2468: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b2468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b246c: 0x460d6581  sub.s       $f22, $f12, $f13
    ctx->pc = 0x3b246cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x3b2470: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b2474: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b2478: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3b2478u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x3b247c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x3b247cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x3b2480: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x3b2480u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x3b2484: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3b2484u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3b2488: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B2488u;
    SET_GPR_U32(ctx, 31, 0x3B2490u);
    ctx->pc = 0x3B248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2488u;
    // 0x3b248c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B2488u, 0x3B2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2490u;
label_3b2490:
    // 0x3b2490: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3b2490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x3b2494: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3b2494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3b2498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b249c: 0x0  nop
    ctx->pc = 0x3b249cu;
    // NOP
    // 0x3b24a0: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x3b24a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x3b24a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b24a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b24a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B24A8u;
    {
        const bool branch_taken_0x3b24a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b24a8) {
            ctx->pc = 0x3B24C0u;
            goto label_3b24c0;
        }
    }
    ctx->pc = 0x3B24B0u;
    // 0x3b24b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3b24b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3B24B4u;
    {
        const bool branch_taken_0x3b24b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24B4u;
        // 0x3b24b8: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b24b4) {
            ctx->pc = 0x3B2560u;
            goto label_3b2560;
        }
    }
    ctx->pc = 0x3B24BCu;
    // 0x3b24bc: 0x0  nop
    ctx->pc = 0x3b24bcu;
    // NOP
label_3b24c0:
    // 0x3b24c0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B24C0u;
    SET_GPR_U32(ctx, 31, 0x3B24C8u);
    ctx->pc = 0x3B24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24C0u;
    // 0x3b24c4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B24C0u, 0x3B24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24C8u;
label_3b24c8:
    // 0x3b24c8: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x3b24c8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x3b24cc: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B24CCu;
    SET_GPR_U32(ctx, 31, 0x3B24D4u);
    ctx->pc = 0x3B24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24CCu;
    // 0x3b24d0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B24CCu, 0x3B24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24D4u;
label_3b24d4:
    // 0x3b24d4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3b24d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b24d8: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B24D8u;
    SET_GPR_U32(ctx, 31, 0x3B24E0u);
    ctx->pc = 0x3B24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B24D8u;
    // 0x3b24dc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B24D8u, 0x3B24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B24E0u;
label_3b24e0:
    // 0x3b24e0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3b24e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b24e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3B24E4u;
    {
        const bool branch_taken_0x3b24e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b24e4) {
            ctx->pc = 0x3B2510u;
            goto label_3b2510;
        }
    }
    ctx->pc = 0x3B24ECu;
    // 0x3b24ec: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3b24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b24f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b24f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b24f4: 0x0  nop
    ctx->pc = 0x3b24f4u;
    // NOP
    // 0x3b24f8: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x3b24f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x3b24fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b24fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2500: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2500u;
    {
        const bool branch_taken_0x3b2500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2500) {
            ctx->pc = 0x3B2510u;
            goto label_3b2510;
        }
    }
    ctx->pc = 0x3B2508u;
    // 0x3b2508: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B2508u;
    {
        const bool branch_taken_0x3b2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2508u;
        // 0x3b250c: 0xe6170000  swc1        $f23, 0x0($s0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2508) {
            ctx->pc = 0x3B2558u;
            goto label_3b2558;
        }
    }
    ctx->pc = 0x3B2510u;
label_3b2510:
    // 0x3b2510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2514: 0x0  nop
    ctx->pc = 0x3b2514u;
    // NOP
    // 0x3b2518: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x3b2518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b251c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B251Cu;
    {
        const bool branch_taken_0x3b251c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b251c) {
            ctx->pc = 0x3B2540u;
            goto label_3b2540;
        }
    }
    ctx->pc = 0x3B2524u;
    // 0x3b2524: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2528: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b2528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b252c: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B252Cu;
    SET_GPR_U32(ctx, 31, 0x3B2534u);
    ctx->pc = 0x3B2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B252Cu;
    // 0x3b2530: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B252Cu, 0x3B2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2534u;
label_3b2534:
    // 0x3b2534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2534u;
    {
        const bool branch_taken_0x3b2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2534u;
        // 0x3b2538: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2534) {
            ctx->pc = 0x3B2558u;
            goto label_3b2558;
        }
    }
    ctx->pc = 0x3B253Cu;
    // 0x3b253c: 0x0  nop
    ctx->pc = 0x3b253cu;
    // NOP
label_3b2540:
    // 0x3b2540: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2544: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b2544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3b2548: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B2548u;
    SET_GPR_U32(ctx, 31, 0x3B2550u);
    ctx->pc = 0x3B254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2548u;
    // 0x3b254c: 0x46140341  sub.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B2548u, 0x3B2550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2550u;
label_3b2550:
    // 0x3b2550: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3b2554: 0x0  nop
    ctx->pc = 0x3b2554u;
    // NOP
label_3b2558:
    // 0x3b2558: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b255c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3b255cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3b2560:
    // 0x3b2560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b2564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2568: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3b2568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3b256c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3b256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b2570: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b2570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b2574: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b2578: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b257c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B257Cu;
        // 0x3b2580: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2584u;
}
