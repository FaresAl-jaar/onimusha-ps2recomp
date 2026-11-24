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

// Function: sub_003F2490
// Address: 0x3f2490 - 0x3f25ec
void sub_003F2490_0x3f2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2490_0x3f2490");
#endif

    switch (ctx->pc) {
        case 0x3f25e0u: goto label_3f25e0;
        default: break;
    }

    ctx->pc = 0x3f2490u;

    // 0x3f2490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2494: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f2494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f249c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f24a0: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x3f24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f24a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f24a8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f24ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f24acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f24b0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f24b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f24b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f24b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f24b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f24bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f24bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f24c0: 0xa0850390  sb          $a1, 0x390($a0)
    ctx->pc = 0x3f24c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f24c4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24c8: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f24c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f24cc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f24d0: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24d4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f24d8: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f24dc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f24e0: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24e4: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f24e8: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24ec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f24f0: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f24f4: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f24f8: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f24fc: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2500: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2504: 0xa04503b0  sb          $a1, 0x3B0($v0)
    ctx->pc = 0x3f2504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2508: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f250c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f250cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2510: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2514: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2518: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2518u;
    {
        const bool branch_taken_0x3f2518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2518) {
            ctx->pc = 0x3F2530u;
            goto label_3f2530;
        }
    }
    ctx->pc = 0x3F2520u;
    // 0x3f2520: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2524: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2528u;
    {
        const bool branch_taken_0x3f2528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2528u;
        // 0x3f252c: 0x8f878d34  lw          $a3, -0x72CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2528) {
            ctx->pc = 0x3F254Cu;
            goto label_3f254c;
        }
    }
    ctx->pc = 0x3F2530u;
label_3f2530:
    // 0x3f2530: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2530u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2534: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2538: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f253c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f253cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2540: 0x0  nop
    ctx->pc = 0x3f2540u;
    // NOP
    // 0x3f2544: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2544u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2548: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f2548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_3f254c:
    // 0x3f254c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f254cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2550: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2554: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f2558: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f2558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f255c: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x3f255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x3f2560: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2564: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x3f2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x3f2568: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f256c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2570: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f2570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f2574: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f2574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2578: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f2578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f257c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f257cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660190u));
    // 0x3f2580: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f2580u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f2584: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f2584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2588: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f2588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f258c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f258cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2590: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f2590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2594: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f2594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2598: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f2598u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f259c: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f259cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f25a0: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f25a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f25a4: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f25a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f25a8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f25a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6601A0u));
    // 0x3f25ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f25acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f25b0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f25b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f25b4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f25b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f25b8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f25b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f25bc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f25bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f25c0: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f25c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f25c4: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f25c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f25c8: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f25c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f25cc: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f25ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f25d0: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f25d4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f25d8: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F25D8u;
    SET_GPR_U32(ctx, 31, 0x3F25E0u);
    ctx->pc = 0x3F25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25D8u;
    // 0x3f25dc: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F25D8u, 0x3F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25E0u;
label_3f25e0:
    // 0x3f25e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f25e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f25e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F25E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25E4u;
        // 0x3f25e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F25E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F25ECu;
}
