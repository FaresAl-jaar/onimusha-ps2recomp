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

// Function: sub_001637B0
// Address: 0x1637b0 - 0x163c90
void sub_001637B0_0x1637b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001637B0_0x1637b0");
#endif

    switch (ctx->pc) {
        case 0x1637e4u: goto label_1637e4;
        case 0x163950u: goto label_163950;
        case 0x163960u: goto label_163960;
        case 0x163978u: goto label_163978;
        default: break;
    }

    ctx->pc = 0x1637b0u;

    // 0x1637b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1637b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1637b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1637b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1637b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1637bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1637bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1637c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1637c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1637c4: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x1637c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1637c8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1637C8u;
    {
        const bool branch_taken_0x1637c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1637CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637C8u;
        // 0x1637cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637c8) {
            ctx->pc = 0x163808u;
            goto label_163808;
        }
    }
    ctx->pc = 0x1637D0u;
    // 0x1637d0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1637d4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1637d8: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x1637dc: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1637DCu;
    SET_GPR_U32(ctx, 31, 0x1637E4u);
    ctx->pc = 0x1637E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637DCu;
    // 0x1637e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1637DCu, 0x1637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637E4u;
label_1637e4:
    // 0x1637e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1637E4u;
    {
        const bool branch_taken_0x1637e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1637E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637E4u;
        // 0x1637e8: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637e4) {
            ctx->pc = 0x163800u;
            goto label_163800;
        }
    }
    ctx->pc = 0x1637ECu;
    // 0x1637ec: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x1637ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1637f0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1637f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1637f4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1637F4u;
    {
        const bool branch_taken_0x1637f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637F4u;
        // 0x1637f8: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637f4) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x1637FCu;
    // 0x1637fc: 0x0  nop
    ctx->pc = 0x1637fcu;
    // NOP
label_163800:
    // 0x163800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163804: 0xa2430030  sb          $v1, 0x30($s2)
    ctx->pc = 0x163804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 3));
label_163808:
    // 0x163808: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x163808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x16380c: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x16380Cu;
    {
        const bool branch_taken_0x16380c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16380c) {
            ctx->pc = 0x1639B8u;
            goto label_1639b8;
        }
    }
    ctx->pc = 0x163814u;
    // 0x163814: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x163818: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16381c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x16381cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x163820: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x163820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x163824: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x163828: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x163828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16382c: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x16382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163830: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x163830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163834: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x163834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163838: 0x460321c2  mul.s       $f7, $f4, $f3
    ctx->pc = 0x163838u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x16383c: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x16383cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x163840: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x163840u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x163844: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x163844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x163848: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x163848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x16384c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16384cu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x163850: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x163850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163854: 0x0  nop
    ctx->pc = 0x163854u;
    // NOP
    // 0x163858: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x163858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x16385c: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x16385cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163860: 0x0  nop
    ctx->pc = 0x163860u;
    // NOP
    // 0x163864: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x163864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x163868: 0x44012800  mfc1        $at, $f5
    ctx->pc = 0x163868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x16386c: 0x0  nop
    ctx->pc = 0x16386cu;
    // NOP
    // 0x163870: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x163870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x163874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163878: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16387c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x163880: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x163880u;
    runtime->Store128(rdram, ctx, 0x70000010u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x163884: 0x44013800  mfc1        $at, $f7
    ctx->pc = 0x163884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163888: 0x0  nop
    ctx->pc = 0x163888u;
    // NOP
    // 0x16388c: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x16388cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x163890: 0x44011800  mfc1        $at, $f3
    ctx->pc = 0x163890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163894: 0x0  nop
    ctx->pc = 0x163894u;
    // NOP
    // 0x163898: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x163898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x16389c: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x16389cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1638a0: 0x0  nop
    ctx->pc = 0x1638a0u;
    // NOP
    // 0x1638a4: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x1638a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x1638a8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1638a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1638ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1638b0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1638b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1638b4: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x1638b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x1638b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1638b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1638bc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1638bcu;
    runtime->Store128(rdram, ctx, 0x70000020u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1638c0: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x1638c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1638c4: 0x0  nop
    ctx->pc = 0x1638c4u;
    // NOP
    // 0x1638c8: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x1638c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x1638cc: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x1638ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1638d0: 0x0  nop
    ctx->pc = 0x1638d0u;
    // NOP
    // 0x1638d4: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x1638d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x1638d8: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x1638d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1638dc: 0x0  nop
    ctx->pc = 0x1638dcu;
    // NOP
    // 0x1638e0: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x1638e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x1638e4: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1638e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1638e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1638ec: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x1638ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1638f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1638f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1638f4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1638f4u;
    runtime->Store128(rdram, ctx, 0x70000030u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1638f8: 0x44013000  mfc1        $at, $f6
    ctx->pc = 0x1638f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1638fc: 0x0  nop
    ctx->pc = 0x1638fcu;
    // NOP
    // 0x163900: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x163900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x163904: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x163904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163908: 0x0  nop
    ctx->pc = 0x163908u;
    // NOP
    // 0x16390c: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x16390cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x163910: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x163910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x163914: 0x0  nop
    ctx->pc = 0x163914u;
    // NOP
    // 0x163918: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x163918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x16391c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16391cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163920: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x163920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x163924: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x163928: 0xe420003c  swc1        $f0, 0x3C($at)
    ctx->pc = 0x163928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000003Cu, bits); }
    // 0x16392c: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x16392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x163930: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x163930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x163934: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x163934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x163938: 0xe420002c  swc1        $f0, 0x2C($at)
    ctx->pc = 0x163938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000002Cu, bits); }
    // 0x16393c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x163940: 0xe420001c  swc1        $f0, 0x1C($at)
    ctx->pc = 0x163940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000001Cu, bits); }
    // 0x163944: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x163948: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x163948u;
    SET_GPR_U32(ctx, 31, 0x163950u);
    ctx->pc = 0x16394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163948u;
    // 0x16394c: 0xe420000c  swc1        $f0, 0xC($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x163948u, 0x163950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163950u;
label_163950:
    // 0x163950: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x163950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x163954: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x163954u;
    {
        const bool branch_taken_0x163954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163954u;
        // 0x163958: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163954) {
            ctx->pc = 0x1639A8u;
            goto label_1639a8;
        }
    }
    ctx->pc = 0x16395Cu;
    // 0x16395c: 0x0  nop
    ctx->pc = 0x16395cu;
    // NOP
label_163960:
    // 0x163960: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x163964: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x163964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x163968: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x163968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x16396c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x16396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163970: 0xc041442  jal         func_105108
    ctx->pc = 0x163970u;
    SET_GPR_U32(ctx, 31, 0x163978u);
    ctx->pc = 0x163974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163970u;
    // 0x163974: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x163970u, 0x163978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163978u;
label_163978:
    // 0x163978: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x163978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16397c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x163980: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x163980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x163984: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x163988: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16398c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163990: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x163990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163994: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x163994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163998: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x163998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16399c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x16399cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1639a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1639a4: 0x0  nop
    ctx->pc = 0x1639a4u;
    // NOP
label_1639a8:
    // 0x1639a8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1639a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1639ac: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1639ACu;
    {
        const bool branch_taken_0x1639ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639ACu;
        // 0x1639b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639ac) {
            ctx->pc = 0x163960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163960;
        }
    }
    ctx->pc = 0x1639B4u;
    // 0x1639b4: 0xa2430031  sb          $v1, 0x31($s2)
    ctx->pc = 0x1639b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 3));
label_1639b8:
    // 0x1639b8: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1639bc: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x1639bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x1639c0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1639C0u;
    {
        const bool branch_taken_0x1639c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C0u;
        // 0x1639c4: 0x9066000f  lbu         $a2, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c0) {
            ctx->pc = 0x163A10u;
            goto label_163a10;
        }
    }
    ctx->pc = 0x1639C8u;
    // 0x1639c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1639c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1639cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1639ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1639d0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1639d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1639d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1639d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1639D8u;
    {
        const bool branch_taken_0x1639d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639D8u;
        // 0x1639dc: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639d8) {
            ctx->pc = 0x1639F8u;
            goto label_1639f8;
        }
    }
    ctx->pc = 0x1639E0u;
    // 0x1639e0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1639e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1639e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1639E4u;
    {
        const bool branch_taken_0x1639e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639e4) {
            ctx->pc = 0x163A10u;
            goto label_163a10;
        }
    }
    ctx->pc = 0x1639ECu;
    // 0x1639ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1639ECu;
    {
        const bool branch_taken_0x1639ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639ECu;
        // 0x1639f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639ec) {
            ctx->pc = 0x163A40u;
            goto label_163a40;
        }
    }
    ctx->pc = 0x1639F4u;
    // 0x1639f4: 0x0  nop
    ctx->pc = 0x1639f4u;
    // NOP
label_1639f8:
    // 0x1639f8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1639f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1639fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1639fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x163a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163A00u;
    {
        const bool branch_taken_0x163a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A00u;
        // 0x163a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a00) {
            ctx->pc = 0x163A10u;
            goto label_163a10;
        }
    }
    ctx->pc = 0x163A08u;
    // 0x163a08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163A08u;
    {
        const bool branch_taken_0x163a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a08) {
            ctx->pc = 0x163A40u;
            goto label_163a40;
        }
    }
    ctx->pc = 0x163A10u;
label_163a10:
    // 0x163a10: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x163A10u;
    {
        const bool branch_taken_0x163a10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A10u;
        // 0x163a14: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a10) {
            ctx->pc = 0x163A38u;
            goto label_163a38;
        }
    }
    ctx->pc = 0x163A18u;
    // 0x163a18: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x163a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x163a1c: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x163a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x163a20: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x163a24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x163a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163a28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163A28u;
    {
        const bool branch_taken_0x163a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A28u;
        // 0x163a2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a28) {
            ctx->pc = 0x163A38u;
            goto label_163a38;
        }
    }
    ctx->pc = 0x163A30u;
    // 0x163a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163A30u;
    {
        const bool branch_taken_0x163a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a30) {
            ctx->pc = 0x163A40u;
            goto label_163a40;
        }
    }
    ctx->pc = 0x163A38u;
label_163a38:
    // 0x163a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163a3c: 0x0  nop
    ctx->pc = 0x163a3cu;
    // NOP
label_163a40:
    // 0x163a40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163A40u;
    {
        const bool branch_taken_0x163a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a40) {
            ctx->pc = 0x163A58u;
            goto label_163a58;
        }
    }
    ctx->pc = 0x163A48u;
    // 0x163a48: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x163a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x163a4c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x163a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x163a50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163A50u;
    {
        const bool branch_taken_0x163a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A50u;
        // 0x163a54: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a50) {
            ctx->pc = 0x163A68u;
            goto label_163a68;
        }
    }
    ctx->pc = 0x163A58u;
label_163a58:
    // 0x163a58: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x163a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x163a5c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x163a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x163a60: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x163a60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x163a64: 0x0  nop
    ctx->pc = 0x163a64u;
    // NOP
label_163a68:
    // 0x163a68: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x163a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x163a6c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x163a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x163a70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163A70u;
    {
        const bool branch_taken_0x163a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A70u;
        // 0x163a74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a70) {
            ctx->pc = 0x163A80u;
            goto label_163a80;
        }
    }
    ctx->pc = 0x163A78u;
    // 0x163a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163A78u;
    {
        const bool branch_taken_0x163a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a78) {
            ctx->pc = 0x163A88u;
            goto label_163a88;
        }
    }
    ctx->pc = 0x163A80u;
label_163a80:
    // 0x163a80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a84: 0x0  nop
    ctx->pc = 0x163a84u;
    // NOP
label_163a88:
    // 0x163a88: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x163A88u;
    {
        const bool branch_taken_0x163a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a88) {
            ctx->pc = 0x163B38u;
            goto label_163b38;
        }
    }
    ctx->pc = 0x163A90u;
    // 0x163a90: 0x824300a2  lb          $v1, 0xA2($s2)
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 162)));
    // 0x163a94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x163a98: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x163a98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x163a9c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x163a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x163aa0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x163aa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x163aa4: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x163AA4u;
    {
        const bool branch_taken_0x163aa4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x163aa4) {
            ctx->pc = 0x163B08u;
            goto label_163b08;
        }
    }
    ctx->pc = 0x163AACu;
    // 0x163aac: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x163aacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x163ab0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x163ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163ab4: 0x924400a1  lbu         $a0, 0xA1($s2)
    ctx->pc = 0x163ab4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 161)));
    // 0x163ab8: 0x924500a0  lbu         $a1, 0xA0($s2)
    ctx->pc = 0x163ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x163abc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x163abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x163ac0: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x163ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x163ac4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x163ac8: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x163acc: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x163accu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x163ad0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x163AD0u;
    {
        const bool branch_taken_0x163ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AD0u;
        // 0x163ad4: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ad0) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163AD8u;
    // 0x163ad8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163AD8u;
    {
        const bool branch_taken_0x163ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AD8u;
        // 0x163adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ad8) {
            ctx->pc = 0x163AE8u;
            goto label_163ae8;
        }
    }
    ctx->pc = 0x163AE0u;
    // 0x163ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163AE0u;
    {
        const bool branch_taken_0x163ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ae0) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163AE8u;
label_163ae8:
    // 0x163ae8: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x163ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x163aec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x163aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163af0: 0xa24300a0  sb          $v1, 0xA0($s2)
    ctx->pc = 0x163af0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x163af4: 0x0  nop
    ctx->pc = 0x163af4u;
    // NOP
label_163af8:
    // 0x163af8: 0xa24600a3  sb          $a2, 0xA3($s2)
    ctx->pc = 0x163af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 6));
    // 0x163afc: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x163afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x163b00: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x163b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x163b04: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x163b04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
label_163b08:
    // 0x163b08: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x163b08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x163b0c: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x163b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x163b10: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x163b14: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x163b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x163b18: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x163b18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x163b1c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x163b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163b20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163b24: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x163b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163b28: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x163b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x163b2c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x163b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x163b30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163b34: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x163b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_163b38:
    // 0x163b38: 0x924300a8  lbu         $v1, 0xA8($s2)
    ctx->pc = 0x163b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x163b3c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x163B3Cu;
    {
        const bool branch_taken_0x163b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b3c) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x163B44u;
    // 0x163b44: 0x924300a9  lbu         $v1, 0xA9($s2)
    ctx->pc = 0x163b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 169)));
    // 0x163b48: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x163B48u;
    {
        const bool branch_taken_0x163b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B48u;
        // 0x163b4c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b48) {
            ctx->pc = 0x163BF0u;
            goto label_163bf0;
        }
    }
    ctx->pc = 0x163B50u;
    // 0x163b50: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x163b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x163b54: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x163b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x163b58: 0x864500aa  lh          $a1, 0xAA($s2)
    ctx->pc = 0x163b58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x163b5c: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x163b60: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x163b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x163b64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163b68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x163b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163b6c: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x163b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x163b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x163b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b78: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x163b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x163b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163b80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163b84: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x163b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163b88: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x163b88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x163b8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x163b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x163b90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x163b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x163B98u;
    {
        const bool branch_taken_0x163b98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B98u;
        // 0x163b9c: 0x9085000b  lbu         $a1, 0xB($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b98) {
            ctx->pc = 0x163BB0u;
            goto label_163bb0;
        }
    }
    ctx->pc = 0x163BA0u;
    // 0x163ba0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x163ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x163ba4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x163ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x163ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x163BA8u;
    {
        const bool branch_taken_0x163ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA8u;
        // 0x163bac: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba8) {
            ctx->pc = 0x163BCCu;
            goto label_163bcc;
        }
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x163bb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163bb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x163bb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x163bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x163bbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x163bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x163bc0: 0x0  nop
    ctx->pc = 0x163bc0u;
    // NOP
    // 0x163bc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x163bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x163bc8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x163bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_163bcc:
    // 0x163bcc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x163bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x163bd0: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x163bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x163bd4: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x163bd8: 0x964300aa  lhu         $v1, 0xAA($s2)
    ctx->pc = 0x163bd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x163bdc: 0x94840052  lhu         $a0, 0x52($a0)
    ctx->pc = 0x163bdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x163be0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163be4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x163be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x163be8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x163BE8u;
    {
        const bool branch_taken_0x163be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BE8u;
        // 0x163bec: 0xa64300aa  sh          $v1, 0xAA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163be8) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x163BF0u;
label_163bf0:
    // 0x163bf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163bf4: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x163bf8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x163bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x163bfc: 0x92460023  lbu         $a2, 0x23($s2)
    ctx->pc = 0x163bfcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x163c00: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163c04: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x163c08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163c0c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x163c10: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163c14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x163c18: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x163c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x163c1c: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x163c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163c20: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x163c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x163c24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x163c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x163c28: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x163C28u;
    {
        const bool branch_taken_0x163c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c28) {
            ctx->pc = 0x163C50u;
            goto label_163c50;
        }
    }
    ctx->pc = 0x163C30u;
    // 0x163c30: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x163c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x163c34: 0x924300ab  lbu         $v1, 0xAB($s2)
    ctx->pc = 0x163c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 171)));
    // 0x163c38: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x163c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x163c3c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x163c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x163c40: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x163C40u;
    {
        const bool branch_taken_0x163c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c40) {
            ctx->pc = 0x163C70u;
            goto label_163c70;
        }
    }
    ctx->pc = 0x163C48u;
    // 0x163c48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163C48u;
    {
        const bool branch_taken_0x163c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C48u;
        // 0x163c4c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c48) {
            ctx->pc = 0x163C70u;
            goto label_163c70;
        }
    }
    ctx->pc = 0x163C50u;
label_163c50:
    // 0x163c50: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x163c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x163c54: 0x924300aa  lbu         $v1, 0xAA($s2)
    ctx->pc = 0x163c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x163c58: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x163c5c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x163c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163c60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x163C60u;
    {
        const bool branch_taken_0x163c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c60) {
            ctx->pc = 0x163C70u;
            goto label_163c70;
        }
    }
    ctx->pc = 0x163C68u;
    // 0x163c68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x163c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c6c: 0x0  nop
    ctx->pc = 0x163c6cu;
    // NOP
label_163c70:
    // 0x163c70: 0xa2440023  sb          $a0, 0x23($s2)
    ctx->pc = 0x163c70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x163c74: 0x0  nop
    ctx->pc = 0x163c74u;
    // NOP
label_163c78:
    // 0x163c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163c88: 0x3e00008  jr          $ra
    ctx->pc = 0x163C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C88u;
        // 0x163c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C90u;
}
