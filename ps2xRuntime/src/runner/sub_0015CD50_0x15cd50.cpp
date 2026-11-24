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

// Function: sub_0015CD50
// Address: 0x15cd50 - 0x15d230
void sub_0015CD50_0x15cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CD50_0x15cd50");
#endif

    switch (ctx->pc) {
        case 0x15cd84u: goto label_15cd84;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cf00u: goto label_15cf00;
        case 0x15cf18u: goto label_15cf18;
        default: break;
    }

    ctx->pc = 0x15cd50u;

    // 0x15cd50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15cd54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cd58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cd5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cd64: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x15cd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15cd68: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15CD68u;
    {
        const bool branch_taken_0x15cd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD68u;
        // 0x15cd6c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd68) {
            ctx->pc = 0x15CDA8u;
            goto label_15cda8;
        }
    }
    ctx->pc = 0x15CD70u;
    // 0x15cd70: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x15cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x15cd74: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15cd78: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x15cd7c: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x15CD7Cu;
    SET_GPR_U32(ctx, 31, 0x15CD84u);
    ctx->pc = 0x15CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD7Cu;
    // 0x15cd80: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x15CD7Cu, 0x15CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD84u;
label_15cd84:
    // 0x15cd84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CD84u;
    {
        const bool branch_taken_0x15cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD84u;
        // 0x15cd88: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd84) {
            ctx->pc = 0x15CDA0u;
            goto label_15cda0;
        }
    }
    ctx->pc = 0x15CD8Cu;
    // 0x15cd8c: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x15cd8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15cd90: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15cd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15cd94: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x15CD94u;
    {
        const bool branch_taken_0x15cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD94u;
        // 0x15cd98: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd94) {
            ctx->pc = 0x15D218u;
            goto label_15d218;
        }
    }
    ctx->pc = 0x15CD9Cu;
    // 0x15cd9c: 0x0  nop
    ctx->pc = 0x15cd9cu;
    // NOP
label_15cda0:
    // 0x15cda0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cda4: 0xa2430030  sb          $v1, 0x30($s2)
    ctx->pc = 0x15cda4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 3));
label_15cda8:
    // 0x15cda8: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x15cda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x15cdac: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x15CDACu;
    {
        const bool branch_taken_0x15cdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cdac) {
            ctx->pc = 0x15CF58u;
            goto label_15cf58;
        }
    }
    ctx->pc = 0x15CDB4u;
    // 0x15cdb4: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x15cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15cdb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15cdbc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15cdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15cdc0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15cdc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15cdc4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15cdc8: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x15cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15cdcc: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x15cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cdd0: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x15cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cdd4: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x15cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cdd8: 0x460321c2  mul.s       $f7, $f4, $f3
    ctx->pc = 0x15cdd8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15cddc: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x15cddcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15cde0: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x15cde0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15cde4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15cde4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15cde8: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x15cde8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x15cdec: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15cdecu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15cdf0: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x15cdf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15cdf4: 0x0  nop
    ctx->pc = 0x15cdf4u;
    // NOP
    // 0x15cdf8: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x15cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x15cdfc: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x15cdfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce00: 0x0  nop
    ctx->pc = 0x15ce00u;
    // NOP
    // 0x15ce04: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x15ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x15ce08: 0x44012800  mfc1        $at, $f5
    ctx->pc = 0x15ce08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce0c: 0x0  nop
    ctx->pc = 0x15ce0cu;
    // NOP
    // 0x15ce10: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x15ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x15ce14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ce14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ce18: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15ce1c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x15ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x15ce20: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15ce20u;
    runtime->Store128(rdram, ctx, 0x70000010u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15ce24: 0x44013800  mfc1        $at, $f7
    ctx->pc = 0x15ce24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce28: 0x0  nop
    ctx->pc = 0x15ce28u;
    // NOP
    // 0x15ce2c: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x15ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x15ce30: 0x44011800  mfc1        $at, $f3
    ctx->pc = 0x15ce30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce34: 0x0  nop
    ctx->pc = 0x15ce34u;
    // NOP
    // 0x15ce38: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x15ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x15ce3c: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x15ce3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce40: 0x0  nop
    ctx->pc = 0x15ce40u;
    // NOP
    // 0x15ce44: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x15ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x15ce48: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15ce48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x15ce4c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15ce50: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x15ce50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x15ce54: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x15ce54u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x15ce58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ce58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ce5c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15ce5cu;
    runtime->Store128(rdram, ctx, 0x70000020u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15ce60: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x15ce60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce64: 0x0  nop
    ctx->pc = 0x15ce64u;
    // NOP
    // 0x15ce68: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x15ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x15ce6c: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x15ce6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce70: 0x0  nop
    ctx->pc = 0x15ce70u;
    // NOP
    // 0x15ce74: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x15ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x15ce78: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x15ce78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce7c: 0x0  nop
    ctx->pc = 0x15ce7cu;
    // NOP
    // 0x15ce80: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x15ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x15ce84: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x15ce84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x15ce88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15ce8c: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x15ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x15ce90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ce90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ce94: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15ce94u;
    runtime->Store128(rdram, ctx, 0x70000030u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15ce98: 0x44013000  mfc1        $at, $f6
    ctx->pc = 0x15ce98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ce9c: 0x0  nop
    ctx->pc = 0x15ce9cu;
    // NOP
    // 0x15cea0: 0xac410000  sw          $at, 0x0($v0)
    ctx->pc = 0x15cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 1));
    // 0x15cea4: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x15cea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15cea8: 0x0  nop
    ctx->pc = 0x15cea8u;
    // NOP
    // 0x15ceac: 0xac410004  sw          $at, 0x4($v0)
    ctx->pc = 0x15ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 1));
    // 0x15ceb0: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x15ceb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15ceb4: 0x0  nop
    ctx->pc = 0x15ceb4u;
    // NOP
    // 0x15ceb8: 0xac410008  sw          $at, 0x8($v0)
    ctx->pc = 0x15ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 1));
    // 0x15cebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cec0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15cec4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15cec8: 0xe420003c  swc1        $f0, 0x3C($at)
    ctx->pc = 0x15cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000003Cu, bits); }
    // 0x15cecc: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x15ced0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15ced4: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x15ced4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15ced8: 0xe420002c  swc1        $f0, 0x2C($at)
    ctx->pc = 0x15ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000002Cu, bits); }
    // 0x15cedc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15cee0: 0xe420001c  swc1        $f0, 0x1C($at)
    ctx->pc = 0x15cee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000001Cu, bits); }
    // 0x15cee4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15cee8: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x15CEE8u;
    SET_GPR_U32(ctx, 31, 0x15CEF0u);
    ctx->pc = 0x15CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEE8u;
    // 0x15ceec: 0xe420000c  swc1        $f0, 0xC($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x15CEE8u, 0x15CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEF0u;
label_15cef0:
    // 0x15cef0: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x15cef4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15CEF4u;
    {
        const bool branch_taken_0x15cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF4u;
        // 0x15cef8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cef4) {
            ctx->pc = 0x15CF48u;
            goto label_15cf48;
        }
    }
    ctx->pc = 0x15CEFCu;
    // 0x15cefc: 0x0  nop
    ctx->pc = 0x15cefcu;
    // NOP
label_15cf00:
    // 0x15cf00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15cf04: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x15cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15cf08: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x15cf08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15cf0c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15cf10: 0xc041442  jal         func_105108
    ctx->pc = 0x15CF10u;
    SET_GPR_U32(ctx, 31, 0x15CF18u);
    ctx->pc = 0x15CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF10u;
    // 0x15cf14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x15CF10u, 0x15CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15cf1c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15cf20: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x15cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15cf24: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x15cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x15cf28: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x15cf2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15cf30: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x15cf30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15cf34: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15cf34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cf38: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x15cf38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15cf3c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x15cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15cf40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15cf44: 0x0  nop
    ctx->pc = 0x15cf44u;
    // NOP
label_15cf48:
    // 0x15cf48: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x15cf48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cf4c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15CF4Cu;
    {
        const bool branch_taken_0x15cf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF4Cu;
        // 0x15cf50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf4c) {
            ctx->pc = 0x15CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cf00;
        }
    }
    ctx->pc = 0x15CF54u;
    // 0x15cf54: 0xa2430031  sb          $v1, 0x31($s2)
    ctx->pc = 0x15cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 3));
label_15cf58:
    // 0x15cf58: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x15cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15cf5c: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x15cf5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x15cf60: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CF60u;
    {
        const bool branch_taken_0x15cf60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF60u;
        // 0x15cf64: 0x9066000f  lbu         $a2, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf60) {
            ctx->pc = 0x15CFB0u;
            goto label_15cfb0;
        }
    }
    ctx->pc = 0x15CF68u;
    // 0x15cf68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15cf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15cf6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x15cf70: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x15cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x15cf74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15cf78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15CF78u;
    {
        const bool branch_taken_0x15cf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF78u;
        // 0x15cf7c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf78) {
            ctx->pc = 0x15CF98u;
            goto label_15cf98;
        }
    }
    ctx->pc = 0x15CF80u;
    // 0x15cf80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15cf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15cf84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15CF84u;
    {
        const bool branch_taken_0x15cf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf84) {
            ctx->pc = 0x15CFB0u;
            goto label_15cfb0;
        }
    }
    ctx->pc = 0x15CF8Cu;
    // 0x15cf8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15CF8Cu;
    {
        const bool branch_taken_0x15cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF8Cu;
        // 0x15cf90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf8c) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CF94u;
    // 0x15cf94: 0x0  nop
    ctx->pc = 0x15cf94u;
    // NOP
label_15cf98:
    // 0x15cf98: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15cf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15cfa0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CFA0u;
    {
        const bool branch_taken_0x15cfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFA0u;
        // 0x15cfa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfa0) {
            ctx->pc = 0x15CFB0u;
            goto label_15cfb0;
        }
    }
    ctx->pc = 0x15CFA8u;
    // 0x15cfa8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15CFA8u;
    {
        const bool branch_taken_0x15cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfa8) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFB0u;
label_15cfb0:
    // 0x15cfb0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CFB0u;
    {
        const bool branch_taken_0x15cfb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFB0u;
        // 0x15cfb4: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfb0) {
            ctx->pc = 0x15CFD8u;
            goto label_15cfd8;
        }
    }
    ctx->pc = 0x15CFB8u;
    // 0x15cfb8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15cfb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15cfbc: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x15cfbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x15cfc0: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x15cfc0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x15cfc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15cfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15cfc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CFC8u;
    {
        const bool branch_taken_0x15cfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFC8u;
        // 0x15cfcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfc8) {
            ctx->pc = 0x15CFD8u;
            goto label_15cfd8;
        }
    }
    ctx->pc = 0x15CFD0u;
    // 0x15cfd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CFD0u;
    {
        const bool branch_taken_0x15cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfd0) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFD8u;
label_15cfd8:
    // 0x15cfd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfdc: 0x0  nop
    ctx->pc = 0x15cfdcu;
    // NOP
label_15cfe0:
    // 0x15cfe0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CFE0u;
    {
        const bool branch_taken_0x15cfe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfe0) {
            ctx->pc = 0x15CFF8u;
            goto label_15cff8;
        }
    }
    ctx->pc = 0x15CFE8u;
    // 0x15cfe8: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x15cfe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15cfec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15cfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x15cff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CFF0u;
    {
        const bool branch_taken_0x15cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF0u;
        // 0x15cff4: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cff0) {
            ctx->pc = 0x15D008u;
            goto label_15d008;
        }
    }
    ctx->pc = 0x15CFF8u;
label_15cff8:
    // 0x15cff8: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x15cff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15cffc: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x15cffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x15d000: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x15d000u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d004: 0x0  nop
    ctx->pc = 0x15d004u;
    // NOP
label_15d008:
    // 0x15d008: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x15d008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x15d00c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x15d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15d010: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D010u;
    {
        const bool branch_taken_0x15d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D010u;
        // 0x15d014: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d010) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15D018u;
    // 0x15d018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D018u;
    {
        const bool branch_taken_0x15d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d018) {
            ctx->pc = 0x15D028u;
            goto label_15d028;
        }
    }
    ctx->pc = 0x15D020u;
label_15d020:
    // 0x15d020: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15d020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d024: 0x0  nop
    ctx->pc = 0x15d024u;
    // NOP
label_15d028:
    // 0x15d028: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15D028u;
    {
        const bool branch_taken_0x15d028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d028) {
            ctx->pc = 0x15D0D8u;
            goto label_15d0d8;
        }
    }
    ctx->pc = 0x15D030u;
    // 0x15d030: 0x824300a2  lb          $v1, 0xA2($s2)
    ctx->pc = 0x15d030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 162)));
    // 0x15d034: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15d038: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x15d038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d03c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15d040: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15d040u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15d044: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15D044u;
    {
        const bool branch_taken_0x15d044 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15d044) {
            ctx->pc = 0x15D0A8u;
            goto label_15d0a8;
        }
    }
    ctx->pc = 0x15D04Cu;
    // 0x15d04c: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x15d04cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x15d050: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d054: 0x924400a1  lbu         $a0, 0xA1($s2)
    ctx->pc = 0x15d054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 161)));
    // 0x15d058: 0x924500a0  lbu         $a1, 0xA0($s2)
    ctx->pc = 0x15d058u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x15d05c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15d060: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x15d060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x15d064: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x15d064u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x15d068: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15d068u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15d06c: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x15d06cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15d070: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D070u;
    {
        const bool branch_taken_0x15d070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D070u;
        // 0x15d074: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d070) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15D078u;
    // 0x15d078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D078u;
    {
        const bool branch_taken_0x15d078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D078u;
        // 0x15d07c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d078) {
            ctx->pc = 0x15D088u;
            goto label_15d088;
        }
    }
    ctx->pc = 0x15D080u;
    // 0x15d080: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D080u;
    {
        const bool branch_taken_0x15d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d080) {
            ctx->pc = 0x15D098u;
            goto label_15d098;
        }
    }
    ctx->pc = 0x15D088u;
label_15d088:
    // 0x15d088: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x15d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x15d08c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15d08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d090: 0xa24300a0  sb          $v1, 0xA0($s2)
    ctx->pc = 0x15d090u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d094: 0x0  nop
    ctx->pc = 0x15d094u;
    // NOP
label_15d098:
    // 0x15d098: 0xa24600a3  sb          $a2, 0xA3($s2)
    ctx->pc = 0x15d098u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d09c: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x15d09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x15d0a0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d0a4: 0xa24300a2  sb          $v1, 0xA2($s2)
    ctx->pc = 0x15d0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 3));
label_15d0a8:
    // 0x15d0a8: 0x924600a3  lbu         $a2, 0xA3($s2)
    ctx->pc = 0x15d0a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 163)));
    // 0x15d0ac: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x15d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x15d0b0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15d0b4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x15d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x15d0b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15d0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15d0bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d0c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d0c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15d0c8: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x15d0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x15d0cc: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x15d0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x15d0d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d0d4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x15d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_15d0d8:
    // 0x15d0d8: 0x924300a8  lbu         $v1, 0xA8($s2)
    ctx->pc = 0x15d0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x15d0dc: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x15D0DCu;
    {
        const bool branch_taken_0x15d0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0dc) {
            ctx->pc = 0x15D218u;
            goto label_15d218;
        }
    }
    ctx->pc = 0x15D0E4u;
    // 0x15d0e4: 0x924300a9  lbu         $v1, 0xA9($s2)
    ctx->pc = 0x15d0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 169)));
    // 0x15d0e8: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x15D0E8u;
    {
        const bool branch_taken_0x15d0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E8u;
        // 0x15d0ec: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0e8) {
            ctx->pc = 0x15D190u;
            goto label_15d190;
        }
    }
    ctx->pc = 0x15D0F0u;
    // 0x15d0f0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x15d0f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15d0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15d0f8: 0x864500aa  lh          $a1, 0xAA($s2)
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x15d0fc: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x15d0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x15d100: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x15d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15d104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15d108: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15d108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15d10c: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x15d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d110: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15d110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x15d114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d118: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x15d11c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d120: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15d124: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x15d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d128: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x15d128u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x15d12c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15d12cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15d130: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15d130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15d134: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15d134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d138: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15D138u;
    {
        const bool branch_taken_0x15d138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D138u;
        // 0x15d13c: 0x9085000b  lbu         $a1, 0xB($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d138) {
            ctx->pc = 0x15D150u;
            goto label_15d150;
        }
    }
    ctx->pc = 0x15D140u;
    // 0x15d140: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15d144: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15d144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15d148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D148u;
    {
        const bool branch_taken_0x15d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D148u;
        // 0x15d14c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d148) {
            ctx->pc = 0x15D16Cu;
            goto label_15d16c;
        }
    }
    ctx->pc = 0x15D150u;
label_15d150:
    // 0x15d150: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15d150u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d154: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15d158: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15d15c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15d15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15d160: 0x0  nop
    ctx->pc = 0x15d160u;
    // NOP
    // 0x15d164: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15d164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15d168: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15d168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15d16c:
    // 0x15d16c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d170: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x15d170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d174: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x15d174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x15d178: 0x964300aa  lhu         $v1, 0xAA($s2)
    ctx->pc = 0x15d178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x15d17c: 0x94840052  lhu         $a0, 0x52($a0)
    ctx->pc = 0x15d17cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x15d180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d184: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15d184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15d188: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15D188u;
    {
        const bool branch_taken_0x15d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D188u;
        // 0x15d18c: 0xa64300aa  sh          $v1, 0xAA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d188) {
            ctx->pc = 0x15D218u;
            goto label_15d218;
        }
    }
    ctx->pc = 0x15D190u;
label_15d190:
    // 0x15d190: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d194: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15d194u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d198: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15d198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15d19c: 0x92460023  lbu         $a2, 0x23($s2)
    ctx->pc = 0x15d19cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x15d1a0: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15d1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15d1a4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15d1a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d1ac: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15d1b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15d1b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15d1b8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15d1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15d1bc: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15d1c0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15d1c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15d1c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D1C8u;
    {
        const bool branch_taken_0x15d1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1c8) {
            ctx->pc = 0x15D1F0u;
            goto label_15d1f0;
        }
    }
    ctx->pc = 0x15D1D0u;
    // 0x15d1d0: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x15d1d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x15d1d4: 0x924300ab  lbu         $v1, 0xAB($s2)
    ctx->pc = 0x15d1d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 171)));
    // 0x15d1d8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15d1dc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15d1dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d1e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15D1E0u;
    {
        const bool branch_taken_0x15d1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1e0) {
            ctx->pc = 0x15D210u;
            goto label_15d210;
        }
    }
    ctx->pc = 0x15D1E8u;
    // 0x15d1e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D210u;
            goto label_15d210;
        }
    }
    ctx->pc = 0x15D1F0u;
label_15d1f0:
    // 0x15d1f0: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x15d1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x15d1f4: 0x924300aa  lbu         $v1, 0xAA($s2)
    ctx->pc = 0x15d1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x15d1f8: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x15d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15d1fc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x15d1fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d200: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D200u;
    {
        const bool branch_taken_0x15d200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d200) {
            ctx->pc = 0x15D210u;
            goto label_15d210;
        }
    }
    ctx->pc = 0x15D208u;
    // 0x15d208: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d20c: 0x0  nop
    ctx->pc = 0x15d20cu;
    // NOP
label_15d210:
    // 0x15d210: 0xa2440023  sb          $a0, 0x23($s2)
    ctx->pc = 0x15d210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d214: 0x0  nop
    ctx->pc = 0x15d214u;
    // NOP
label_15d218:
    // 0x15d218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d228: 0x3e00008  jr          $ra
    ctx->pc = 0x15D228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D228u;
        // 0x15d22c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D230u;
}
