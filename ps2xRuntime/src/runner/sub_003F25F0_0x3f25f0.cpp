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

// Function: sub_003F25F0
// Address: 0x3f25f0 - 0x3f2750
void sub_003F25F0_0x3f25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F25F0_0x3f25f0");
#endif

    switch (ctx->pc) {
        case 0x3f2744u: goto label_3f2744;
        default: break;
    }

    ctx->pc = 0x3f25f0u;

    // 0x3f25f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f25f4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f25f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f25fc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f25fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2600: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f2600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f2604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f2608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f260c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2610: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2614: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f261c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2620: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f2620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2624: 0xa0a60390  sb          $a2, 0x390($a1)
    ctx->pc = 0x3f2624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 912), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f2628: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f262c: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f262cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2630: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2634: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2638: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f263c: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f263cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f2640: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2644: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2648: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f2648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f264c: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2650: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f2650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f2654: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f2654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f2658: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f265c: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f2660: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f2660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2664: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2668: 0xa04403b0  sb          $a0, 0x3B0($v0)
    ctx->pc = 0x3f2668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f266c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2670: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f2670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2674: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2678: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f267c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F267Cu;
    {
        const bool branch_taken_0x3f267c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f267c) {
            ctx->pc = 0x3F2694u;
            goto label_3f2694;
        }
    }
    ctx->pc = 0x3F2684u;
    // 0x3f2684: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2688: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f268c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F268Cu;
    {
        const bool branch_taken_0x3f268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F268Cu;
        // 0x3f2690: 0x8f878d34  lw          $a3, -0x72CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f268c) {
            ctx->pc = 0x3F26B0u;
            goto label_3f26b0;
        }
    }
    ctx->pc = 0x3F2694u;
label_3f2694:
    // 0x3f2694: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2698: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f269c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f269cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f26a0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f26a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f26a4: 0x0  nop
    ctx->pc = 0x3f26a4u;
    // NOP
    // 0x3f26a8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f26a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f26ac: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f26acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_3f26b0:
    // 0x3f26b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f26b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f26b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f26b8: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f26bc: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f26bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f26c0: 0x24a501b0  addiu       $a1, $a1, 0x1B0
    ctx->pc = 0x3f26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x3f26c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f26c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f26c8: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x3f26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x3f26cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f26d0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f26d4: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f26d8: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f26d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f26dc: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f26e0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f26e0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6601B0u));
    // 0x3f26e4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f26e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f26e8: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f26ec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f26ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f26f0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f26f4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f26f8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f26fc: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f26fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f2700: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f2700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f2704: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f2704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f2708: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f270c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f270cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6601C0u));
    // 0x3f2710: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f2710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2714: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2718: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f271c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2720: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2724: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f2724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f2728: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f2728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f272c: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f272cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f2730: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f2730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f2734: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f2734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f2738: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f273c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F273Cu;
    SET_GPR_U32(ctx, 31, 0x3F2744u);
    ctx->pc = 0x3F2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F273Cu;
    // 0x3f2740: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F273Cu, 0x3F2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2744u;
label_3f2744:
    // 0x3f2744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2748: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2748u;
        // 0x3f274c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2750u;
}
