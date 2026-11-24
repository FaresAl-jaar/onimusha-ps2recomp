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

// Function: sub_00160280
// Address: 0x160280 - 0x160760
void sub_00160280_0x160280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160280_0x160280");
#endif

    switch (ctx->pc) {
        case 0x1602b4u: goto label_1602b4;
        case 0x160420u: goto label_160420;
        case 0x160430u: goto label_160430;
        case 0x160448u: goto label_160448;
        default: break;
    }

    ctx->pc = 0x160280u;

    // 0x160280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x160284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16028c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160294: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x160294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x160298: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x160298u;
    {
        const bool branch_taken_0x160298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160298u;
        // 0x16029c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160298) {
            ctx->pc = 0x1602D8u;
            goto label_1602d8;
        }
    }
    ctx->pc = 0x1602A0u;
    // 0x1602a0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1602a4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1602a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1602a8: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x1602ac: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1602ACu;
    SET_GPR_U32(ctx, 31, 0x1602B4u);
    ctx->pc = 0x1602B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602ACu;
    // 0x1602b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1602ACu, 0x1602B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602B4u;
label_1602b4:
    // 0x1602b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1602B4u;
    {
        const bool branch_taken_0x1602b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1602B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602B4u;
        // 0x1602b8: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602b4) {
            ctx->pc = 0x1602D0u;
            goto label_1602d0;
        }
    }
    ctx->pc = 0x1602BCu;
    // 0x1602bc: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x1602bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1602c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1602c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1602c4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1602C4u;
    {
        const bool branch_taken_0x1602c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602C4u;
        // 0x1602c8: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602c4) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x1602CCu;
    // 0x1602cc: 0x0  nop
    ctx->pc = 0x1602ccu;
    // NOP
label_1602d0:
    // 0x1602d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1602d4: 0xa2430030  sb          $v1, 0x30($s2)
    ctx->pc = 0x1602d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 3));
label_1602d8:
    // 0x1602d8: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x1602d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1602dc: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1602DCu;
    {
        const bool branch_taken_0x1602dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1602dc) {
            ctx->pc = 0x160488u;
            goto label_160488;
        }
    }
    ctx->pc = 0x1602E4u;
    // 0x1602e4: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1602e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1602ec: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1602ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1602f0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1602f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1602f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1602f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1602f8: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x1602f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1602fc: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x1602fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160300: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x160300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160304: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x160304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160308: 0x460321c2  mul.s       $f7, $f4, $f3
    ctx->pc = 0x160308u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x16030c: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x16030cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x160310: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x160310u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x160314: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x160314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x160318: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x160318u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x16031c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16031cu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x160320: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x160320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160324: 0x0  nop
    ctx->pc = 0x160324u;
    // NOP
    // 0x160328: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x160328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x16032c: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x16032cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160330: 0x0  nop
    ctx->pc = 0x160330u;
    // NOP
    // 0x160334: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x160334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x160338: 0x44012800  mfc1        $at, $f5
    ctx->pc = 0x160338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x16033c: 0x0  nop
    ctx->pc = 0x16033cu;
    // NOP
    // 0x160340: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x160340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x160344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160348: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x160348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16034c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x160350: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x160350u;
    runtime->Store128(rdram, ctx, 0x70000010u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x160354: 0x44013800  mfc1        $at, $f7
    ctx->pc = 0x160354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160358: 0x0  nop
    ctx->pc = 0x160358u;
    // NOP
    // 0x16035c: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x16035cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x160360: 0x44011800  mfc1        $at, $f3
    ctx->pc = 0x160360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160364: 0x0  nop
    ctx->pc = 0x160364u;
    // NOP
    // 0x160368: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x160368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x16036c: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x16036cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160370: 0x0  nop
    ctx->pc = 0x160370u;
    // NOP
    // 0x160374: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x160374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x160378: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x160378u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16037c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x160380: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x160380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x160384: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x160384u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x160388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16038c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16038cu;
    runtime->Store128(rdram, ctx, 0x70000020u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x160390: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x160390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x160394: 0x0  nop
    ctx->pc = 0x160394u;
    // NOP
    // 0x160398: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x160398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x16039c: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x16039cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1603a0: 0x0  nop
    ctx->pc = 0x1603a0u;
    // NOP
    // 0x1603a4: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x1603a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x1603a8: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x1603a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1603ac: 0x0  nop
    ctx->pc = 0x1603acu;
    // NOP
    // 0x1603b0: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x1603b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x1603b4: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1603b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1603b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1603bc: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x1603bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1603c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603c4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1603c4u;
    runtime->Store128(rdram, ctx, 0x70000030u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1603c8: 0x44013000  mfc1        $at, $f6
    ctx->pc = 0x1603c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1603cc: 0x0  nop
    ctx->pc = 0x1603ccu;
    // NOP
    // 0x1603d0: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x1603d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x1603d4: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x1603d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1603d8: 0x0  nop
    ctx->pc = 0x1603d8u;
    // NOP
    // 0x1603dc: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x1603dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x1603e0: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x1603e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1603e4: 0x0  nop
    ctx->pc = 0x1603e4u;
    // NOP
    // 0x1603e8: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x1603e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x1603ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1603f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1603f8: 0xe420003c  swc1        $f0, 0x3C($at)
    ctx->pc = 0x1603f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000003Cu, bits); }
    // 0x1603fc: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x160400: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160404: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x160404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x160408: 0xe420002c  swc1        $f0, 0x2C($at)
    ctx->pc = 0x160408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000002Cu, bits); }
    // 0x16040c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16040cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160410: 0xe420001c  swc1        $f0, 0x1C($at)
    ctx->pc = 0x160410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000001Cu, bits); }
    // 0x160414: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160418: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x160418u;
    SET_GPR_U32(ctx, 31, 0x160420u);
    ctx->pc = 0x16041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160418u;
    // 0x16041c: 0xe420000c  swc1        $f0, 0xC($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x160418u, 0x160420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160420u;
label_160420:
    // 0x160420: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x160424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x160424u;
    {
        const bool branch_taken_0x160424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160424u;
        // 0x160428: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160424) {
            ctx->pc = 0x160478u;
            goto label_160478;
        }
    }
    ctx->pc = 0x16042Cu;
    // 0x16042c: 0x0  nop
    ctx->pc = 0x16042cu;
    // NOP
label_160430:
    // 0x160430: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x160430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x160434: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x160434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x160438: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x160438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x16043c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x16043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160440: 0xc041442  jal         func_105108
    ctx->pc = 0x160440u;
    SET_GPR_U32(ctx, 31, 0x160448u);
    ctx->pc = 0x160444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160440u;
    // 0x160444: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x160440u, 0x160448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160448u;
label_160448:
    // 0x160448: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16044c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x160450: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x160454: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x160458: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x160458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16045c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160460: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x160460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160464: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x160464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160468: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x160468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16046c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x16046cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x160470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x160470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x160474: 0x0  nop
    ctx->pc = 0x160474u;
    // NOP
label_160478:
    // 0x160478: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x160478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16047c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16047Cu;
    {
        const bool branch_taken_0x16047c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16047Cu;
        // 0x160480: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16047c) {
            ctx->pc = 0x160430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160430;
        }
    }
    ctx->pc = 0x160484u;
    // 0x160484: 0xa2430031  sb          $v1, 0x31($s2)
    ctx->pc = 0x160484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 3));
label_160488:
    // 0x160488: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x16048c: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x16048cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x160490: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x160490u;
    {
        const bool branch_taken_0x160490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160490u;
        // 0x160494: 0x9066000f  lbu         $a2, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160490) {
            ctx->pc = 0x1604E0u;
            goto label_1604e0;
        }
    }
    ctx->pc = 0x160498u;
    // 0x160498: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16049c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1604a0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1604a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1604a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1604a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1604A8u;
    {
        const bool branch_taken_0x1604a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A8u;
        // 0x1604ac: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604a8) {
            ctx->pc = 0x1604C8u;
            goto label_1604c8;
        }
    }
    ctx->pc = 0x1604B0u;
    // 0x1604b0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1604b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1604b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1604B4u;
    {
        const bool branch_taken_0x1604b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604b4) {
            ctx->pc = 0x1604E0u;
            goto label_1604e0;
        }
    }
    ctx->pc = 0x1604BCu;
    // 0x1604bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1604BCu;
    {
        const bool branch_taken_0x1604bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604BCu;
        // 0x1604c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604bc) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604C4u;
    // 0x1604c4: 0x0  nop
    ctx->pc = 0x1604c4u;
    // NOP
label_1604c8:
    // 0x1604c8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1604c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1604cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1604d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1604D0u;
    {
        const bool branch_taken_0x1604d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D0u;
        // 0x1604d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604d0) {
            ctx->pc = 0x1604E0u;
            goto label_1604e0;
        }
    }
    ctx->pc = 0x1604D8u;
    // 0x1604d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1604D8u;
    {
        const bool branch_taken_0x1604d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604d8) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1604E0u;
    {
        const bool branch_taken_0x1604e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E0u;
        // 0x1604e4: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604e0) {
            ctx->pc = 0x160508u;
            goto label_160508;
        }
    }
    ctx->pc = 0x1604E8u;
    // 0x1604e8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1604e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1604ec: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x1604ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x1604f0: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x1604f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x1604f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1604f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1604f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1604F8u;
    {
        const bool branch_taken_0x1604f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F8u;
        // 0x1604fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f8) {
            ctx->pc = 0x160508u;
            goto label_160508;
        }
    }
    ctx->pc = 0x160500u;
    // 0x160500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160500u;
    {
        const bool branch_taken_0x160500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160500) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160508u;
label_160508:
    // 0x160508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16050c: 0x0  nop
    ctx->pc = 0x16050cu;
    // NOP
label_160510:
    // 0x160510: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160510u;
    {
        const bool branch_taken_0x160510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160510) {
            ctx->pc = 0x160528u;
            goto label_160528;
        }
    }
    ctx->pc = 0x160518u;
    // 0x160518: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x160518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x16051c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x160520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160520u;
    {
        const bool branch_taken_0x160520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160520u;
        // 0x160524: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160520) {
            ctx->pc = 0x160538u;
            goto label_160538;
        }
    }
    ctx->pc = 0x160528u;
label_160528:
    // 0x160528: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x160528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x16052c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x16052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x160530: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x160530u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x160534: 0x0  nop
    ctx->pc = 0x160534u;
    // NOP
label_160538:
    // 0x160538: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x160538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x16053c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x16053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x160540: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160540u;
    {
        const bool branch_taken_0x160540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160540) {
            ctx->pc = 0x160550u;
            goto label_160550;
        }
    }
    ctx->pc = 0x160548u;
    // 0x160548: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160548u;
    {
        const bool branch_taken_0x160548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160548) {
            ctx->pc = 0x160558u;
            goto label_160558;
        }
    }
    ctx->pc = 0x160550u;
label_160550:
    // 0x160550: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x160550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160554: 0x0  nop
    ctx->pc = 0x160554u;
    // NOP
label_160558:
    // 0x160558: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x160558u;
    {
        const bool branch_taken_0x160558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160558) {
            ctx->pc = 0x160608u;
            goto label_160608;
        }
    }
    ctx->pc = 0x160560u;
    // 0x160560: 0x824300a2  lb          $v1, 0xA2($s2)
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 162)));
    // 0x160564: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160568: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x160568u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x16056c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x16056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x160570: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x160570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x160574: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x160574u;
    {
        const bool branch_taken_0x160574 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x160574) {
            ctx->pc = 0x1605D8u;
            goto label_1605d8;
        }
    }
    ctx->pc = 0x16057Cu;
    // 0x16057c: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x16057cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x160580: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x160584: 0x924400a1  lbu         $a0, 0xA1($s2)
    ctx->pc = 0x160584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 161)));
    // 0x160588: 0x924500a0  lbu         $a1, 0xA0($s2)
    ctx->pc = 0x160588u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x16058c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x160590: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x160590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x160594: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x160598: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x16059c: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x16059cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1605a0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1605A0u;
    {
        const bool branch_taken_0x1605a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a0) {
            ctx->pc = 0x1605C8u;
            goto label_1605c8;
        }
    }
    ctx->pc = 0x1605A8u;
    // 0x1605a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1605A8u;
    {
        const bool branch_taken_0x1605a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A8u;
        // 0x1605ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a8) {
            ctx->pc = 0x1605B8u;
            goto label_1605b8;
        }
    }
    ctx->pc = 0x1605B0u;
    // 0x1605b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1605B0u;
    {
        const bool branch_taken_0x1605b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605b0) {
            ctx->pc = 0x1605C8u;
            goto label_1605c8;
        }
    }
    ctx->pc = 0x1605B8u;
label_1605b8:
    // 0x1605b8: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x1605b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x1605bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1605bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605c0: 0xa24300a0  sb          $v1, 0xA0($s2)
    ctx->pc = 0x1605c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x1605c4: 0x0  nop
    ctx->pc = 0x1605c4u;
    // NOP
label_1605c8:
    // 0x1605c8: 0xa24600a3  sb          $a2, 0xA3($s2)
    ctx->pc = 0x1605c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 6));
    // 0x1605cc: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x1605ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1605d0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1605d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1605d4: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x1605d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
label_1605d8:
    // 0x1605d8: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x1605d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x1605dc: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x1605dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1605e0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1605e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1605e4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1605e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1605e8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1605ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1605ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1605f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1605f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1605f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1605f8: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1605f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1605fc: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x160600: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x160600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x160604: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x160604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_160608:
    // 0x160608: 0x924300a8  lbu         $v1, 0xA8($s2)
    ctx->pc = 0x160608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x16060c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x16060Cu;
    {
        const bool branch_taken_0x16060c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16060c) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x160614u;
    // 0x160614: 0x924300a9  lbu         $v1, 0xA9($s2)
    ctx->pc = 0x160614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 169)));
    // 0x160618: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x160618u;
    {
        const bool branch_taken_0x160618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160618u;
        // 0x16061c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160618) {
            ctx->pc = 0x1606C0u;
            goto label_1606c0;
        }
    }
    ctx->pc = 0x160620u;
    // 0x160620: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x160624: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x160624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160628: 0x864500aa  lh          $a1, 0xAA($s2)
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x16062c: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x160630: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x160630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x160634: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x160638: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x160638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16063c: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x16063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160640: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x160640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x160644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160648: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x160648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x16064c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x160650: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x160650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x160654: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x160654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x160658: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x160658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x16065c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16065cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x160660: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x160660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x160664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x160664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160668: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x160668u;
    {
        const bool branch_taken_0x160668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160668u;
        // 0x16066c: 0x9085000b  lbu         $a1, 0xB($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160668) {
            ctx->pc = 0x160680u;
            goto label_160680;
        }
    }
    ctx->pc = 0x160670u;
    // 0x160670: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x160674: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x160674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x160678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160678u;
    {
        const bool branch_taken_0x160678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160678u;
        // 0x16067c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160678) {
            ctx->pc = 0x16069Cu;
            goto label_16069c;
        }
    }
    ctx->pc = 0x160680u;
label_160680:
    // 0x160680: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x160680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x160684: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x160688: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16068c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16068cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x160690: 0x0  nop
    ctx->pc = 0x160690u;
    // NOP
    // 0x160694: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x160694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x160698: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x160698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16069c:
    // 0x16069c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1606a0: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x1606a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1606a4: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1606a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1606a8: 0x964300aa  lhu         $v1, 0xAA($s2)
    ctx->pc = 0x1606a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x1606ac: 0x94840052  lhu         $a0, 0x52($a0)
    ctx->pc = 0x1606acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x1606b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1606b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1606b4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1606b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1606b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1606B8u;
    {
        const bool branch_taken_0x1606b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606B8u;
        // 0x1606bc: 0xa64300aa  sh          $v1, 0xAA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606b8) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x1606C0u;
label_1606c0:
    // 0x1606c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1606c4: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x1606c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x1606c8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1606c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1606cc: 0x92460023  lbu         $a2, 0x23($s2)
    ctx->pc = 0x1606ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x1606d0: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1606d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1606d4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1606d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1606d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1606d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1606dc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1606e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1606e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1606e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1606e8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1606e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1606ec: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x1606ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x1606f0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1606f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1606f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1606f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1606f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1606F8u;
    {
        const bool branch_taken_0x1606f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606f8) {
            ctx->pc = 0x160720u;
            goto label_160720;
        }
    }
    ctx->pc = 0x160700u;
    // 0x160700: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x160700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x160704: 0x924300ab  lbu         $v1, 0xAB($s2)
    ctx->pc = 0x160704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 171)));
    // 0x160708: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x160708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16070c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x16070cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160710: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x160710u;
    {
        const bool branch_taken_0x160710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160710) {
            ctx->pc = 0x160740u;
            goto label_160740;
        }
    }
    ctx->pc = 0x160718u;
    // 0x160718: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x160718u;
    {
        const bool branch_taken_0x160718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160718u;
        // 0x16071c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160718) {
            ctx->pc = 0x160740u;
            goto label_160740;
        }
    }
    ctx->pc = 0x160720u;
label_160720:
    // 0x160720: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x160720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x160724: 0x924300aa  lbu         $v1, 0xAA($s2)
    ctx->pc = 0x160724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x160728: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x160728u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16072c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x16072cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x160730: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x160730u;
    {
        const bool branch_taken_0x160730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160730) {
            ctx->pc = 0x160740u;
            goto label_160740;
        }
    }
    ctx->pc = 0x160738u;
    // 0x160738: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x160738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16073c: 0x0  nop
    ctx->pc = 0x16073cu;
    // NOP
label_160740:
    // 0x160740: 0xa2440023  sb          $a0, 0x23($s2)
    ctx->pc = 0x160740u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x160744: 0x0  nop
    ctx->pc = 0x160744u;
    // NOP
label_160748:
    // 0x160748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16074c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16074cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160758: 0x3e00008  jr          $ra
    ctx->pc = 0x160758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160758u;
        // 0x16075c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160760u;
}
