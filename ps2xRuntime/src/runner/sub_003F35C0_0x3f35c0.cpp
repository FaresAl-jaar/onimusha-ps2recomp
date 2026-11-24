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

// Function: sub_003F35C0
// Address: 0x3f35c0 - 0x3f3714
void sub_003F35C0_0x3f35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F35C0_0x3f35c0");
#endif

    switch (ctx->pc) {
        case 0x3f3708u: goto label_3f3708;
        default: break;
    }

    ctx->pc = 0x3f35c0u;

    // 0x3f35c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f35c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f35c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f35cc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f35ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f35d0: 0x8f858d3c  lw          $a1, -0x72C4($gp)
    ctx->pc = 0x3f35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f35d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f35d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f35d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f35d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f35dc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f35e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f35e4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f35e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f35e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f35e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f35ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f35f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f35f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f35f4: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f35f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f35f8: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f35fc: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f35fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f3600: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f3600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f3604: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3608: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f3608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f360c: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3610: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f3610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f3614: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x3f3614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3618: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f361c: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f361cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f3620: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3624: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f3624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f3628: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f362c: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f362cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f3630: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3634: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f3634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3638: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f363c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f363cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f3640: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3640u;
    {
        const bool branch_taken_0x3f3640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3640) {
            ctx->pc = 0x3F3658u;
            goto label_3f3658;
        }
    }
    ctx->pc = 0x3F3648u;
    // 0x3f3648: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f364c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f364cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3650u;
    {
        const bool branch_taken_0x3f3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3650u;
        // 0x3f3654: 0x8f878d3c  lw          $a3, -0x72C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3650) {
            ctx->pc = 0x3F3674u;
            goto label_3f3674;
        }
    }
    ctx->pc = 0x3F3658u;
label_3f3658:
    // 0x3f3658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f365c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f3660: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3664: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3668: 0x0  nop
    ctx->pc = 0x3f3668u;
    // NOP
    // 0x3f366c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f366cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f3670: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x3f3670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_3f3674:
    // 0x3f3674: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3678: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f367c: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f3680: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f3680u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f3684: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x3f3684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x3f3688: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f368c: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x3f368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x3f3690: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3694: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3698: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f3698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f369c: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x3f369cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f36a0: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f36a4: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f36a4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6602B0u));
    // 0x3f36a8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f36ac: 0x8f858d3c  lw          $a1, -0x72C4($gp)
    ctx->pc = 0x3f36acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f36b0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f36b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f36b4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f36b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f36b8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f36b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f36bc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f36c0: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f36c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f36c4: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f36c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f36c8: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f36c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f36cc: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f36ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f36d0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f36d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6602C0u));
    // 0x3f36d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f36d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f36d8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f36dc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f36e0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f36e4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f36e8: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f36e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f36ec: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f36ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f36f0: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f36f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f36f4: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f36f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f36f8: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f36fc: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3700: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F3700u;
    SET_GPR_U32(ctx, 31, 0x3F3708u);
    ctx->pc = 0x3F3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3700u;
    // 0x3f3704: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F3700u, 0x3F3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3708u;
label_3f3708:
    // 0x3f3708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f370c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F370Cu;
        // 0x3f3710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3714u;
}
