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

// Function: sub_003F3470
// Address: 0x3f3470 - 0x3f35c0
void sub_003F3470_0x3f3470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3470_0x3f3470");
#endif

    switch (ctx->pc) {
        case 0x3f35b4u: goto label_3f35b4;
        default: break;
    }

    ctx->pc = 0x3f3470u;

    // 0x3f3470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3474: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f3474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f3478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f347c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f347cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f3480: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x3f3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3488: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f3488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f348c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f348cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f3490: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f3494: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f3494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f3498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f349c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f349cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f34a0: 0xa08501d0  sb          $a1, 0x1D0($a0)
    ctx->pc = 0x3f34a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f34a4: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34a8: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f34a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f34ac: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f34acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f34b0: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34b4: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f34b8: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34bc: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f34c0: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x3f34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f34c8: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f34cc: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34d0: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f34d4: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f34d8: 0xa04501f0  sb          $a1, 0x1F0($v0)
    ctx->pc = 0x3f34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f34dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f34dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f34e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f34e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f34e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f34e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f34e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f34e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f34ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F34ECu;
    {
        const bool branch_taken_0x3f34ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f34ec) {
            ctx->pc = 0x3F3504u;
            goto label_3f3504;
        }
    }
    ctx->pc = 0x3F34F4u;
    // 0x3f34f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f34f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f34f8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f34f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f34fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F34FCu;
    {
        const bool branch_taken_0x3f34fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34FCu;
        // 0x3f3500: 0x8f878d3c  lw          $a3, -0x72C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34fc) {
            ctx->pc = 0x3F3520u;
            goto label_3f3520;
        }
    }
    ctx->pc = 0x3F3504u;
label_3f3504:
    // 0x3f3504: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3508: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f350c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f350cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3510: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3514: 0x0  nop
    ctx->pc = 0x3f3514u;
    // NOP
    // 0x3f3518: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f3518u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f351c: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x3f351cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_3f3520:
    // 0x3f3520: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3524: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3528: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f352c: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f352cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f3530: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x3f3530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    // 0x3f3534: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3538: 0x246302a0  addiu       $v1, $v1, 0x2A0
    ctx->pc = 0x3f3538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
    // 0x3f353c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3540: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3544: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f3544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f3548: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x3f3548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f354c: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f354cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f3550: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f3550u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660290u));
    // 0x3f3554: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3554u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3558: 0x8f858d3c  lw          $a1, -0x72C4($gp)
    ctx->pc = 0x3f3558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f355c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3560: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3564: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3568: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f356c: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f356cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f3570: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f3570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f3574: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f3574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f3578: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f3578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f357c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f357cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6602A0u));
    // 0x3f3580: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3580u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3584: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3588: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f358c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3590: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f3590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3594: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f3594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f3598: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f3598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f359c: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f359cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f35a0: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f35a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f35a4: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f35a8: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f35ac: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F35ACu;
    SET_GPR_U32(ctx, 31, 0x3F35B4u);
    ctx->pc = 0x3F35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F35ACu;
    // 0x3f35b0: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F35ACu, 0x3F35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F35B4u;
label_3f35b4:
    // 0x3f35b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f35b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f35b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F35B8u;
        // 0x3f35bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F35B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F35C0u;
}
