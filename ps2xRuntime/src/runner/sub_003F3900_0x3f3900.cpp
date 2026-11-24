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

// Function: sub_003F3900
// Address: 0x3f3900 - 0x3f3a50
void sub_003F3900_0x3f3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3900_0x3f3900");
#endif

    switch (ctx->pc) {
        case 0x3f3a44u: goto label_3f3a44;
        default: break;
    }

    ctx->pc = 0x3f3900u;

    // 0x3f3900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3904: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f3904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f3908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f390c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f3910: 0x8f848d40  lw          $a0, -0x72C0($gp)
    ctx->pc = 0x3f3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3918: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f3918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f391c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f3920: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f3920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f3924: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f3924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f3928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f392c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f392cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f3930: 0xa08501d0  sb          $a1, 0x1D0($a0)
    ctx->pc = 0x3f3930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f3934: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3938: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f3938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f393c: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f393cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f3940: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3944: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f3944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f3948: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f394c: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f394cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f3950: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x3f3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3954: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f3954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f3958: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f3958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f395c: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3960: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f3960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f3964: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3968: 0xa04501f0  sb          $a1, 0x1F0($v0)
    ctx->pc = 0x3f3968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f396c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3970: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f3970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3974: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f3978: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f397c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F397Cu;
    {
        const bool branch_taken_0x3f397c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f397c) {
            ctx->pc = 0x3F3994u;
            goto label_3f3994;
        }
    }
    ctx->pc = 0x3F3984u;
    // 0x3f3984: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3988: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f398c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F398Cu;
    {
        const bool branch_taken_0x3f398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F398Cu;
        // 0x3f3990: 0x8f878d40  lw          $a3, -0x72C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f398c) {
            ctx->pc = 0x3F39B0u;
            goto label_3f39b0;
        }
    }
    ctx->pc = 0x3F3994u;
label_3f3994:
    // 0x3f3994: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3998: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f399c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f399cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f39a0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f39a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f39a4: 0x0  nop
    ctx->pc = 0x3f39a4u;
    // NOP
    // 0x3f39a8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f39a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f39ac: 0x8f878d40  lw          $a3, -0x72C0($gp)
    ctx->pc = 0x3f39acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
label_3f39b0:
    // 0x3f39b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f39b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f39b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f39b8: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f39bc: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f39bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f39c0: 0x24a502d0  addiu       $a1, $a1, 0x2D0
    ctx->pc = 0x3f39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x3f39c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f39c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f39c8: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x3f39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x3f39cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f39d0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f39d4: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f39d8: 0x8f878d40  lw          $a3, -0x72C0($gp)
    ctx->pc = 0x3f39d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f39dc: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f39e0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f39e0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6602D0u));
    // 0x3f39e4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f39e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f39e8: 0x8f858d40  lw          $a1, -0x72C0($gp)
    ctx->pc = 0x3f39e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f39ec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f39f0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f39f4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f39f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f39f8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f39fc: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f39fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f3a00: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f3a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f3a04: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f3a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f3a08: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f3a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f3a0c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f3a0cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6602E0u));
    // 0x3f3a10: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3a14: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3a18: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3a1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f3a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3a20: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3a24: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f3a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f3a28: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f3a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f3a2c: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f3a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f3a30: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f3a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f3a34: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f3a38: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3a3c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F3A3Cu;
    SET_GPR_U32(ctx, 31, 0x3F3A44u);
    ctx->pc = 0x3F3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A3Cu;
    // 0x3f3a40: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F3A3Cu, 0x3F3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A44u;
label_3f3a44:
    // 0x3f3a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A48u;
        // 0x3f3a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3A50u;
}
