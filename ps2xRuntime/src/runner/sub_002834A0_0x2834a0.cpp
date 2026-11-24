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

// Function: sub_002834A0
// Address: 0x2834a0 - 0x2839b0
void sub_002834A0_0x2834a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002834A0_0x2834a0");
#endif

    switch (ctx->pc) {
        case 0x28350cu: goto label_28350c;
        case 0x283608u: goto label_283608;
        case 0x283678u: goto label_283678;
        case 0x283740u: goto label_283740;
        case 0x2837d8u: goto label_2837d8;
        case 0x283848u: goto label_283848;
        case 0x2838d4u: goto label_2838d4;
        default: break;
    }

    ctx->pc = 0x2834a0u;

    // 0x2834a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2834a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2834a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2834a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2834ac: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x2834acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2834b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2834b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2834b4: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x2834b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2834b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2834b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2834bc: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x2834bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2834c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2834c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2834c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2834c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834c8: 0x878381a8  lh          $v1, -0x7E58($gp)
    ctx->pc = 0x2834c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934952)));
    // 0x2834cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2834ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2834d0: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x2834d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2834d4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2834d4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2834d8: 0x878381ac  lh          $v1, -0x7E54($gp)
    ctx->pc = 0x2834d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934956)));
    // 0x2834dc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2834dcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2834e0: 0x878381b0  lh          $v1, -0x7E50($gp)
    ctx->pc = 0x2834e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x2834e4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2834e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2834e8: 0x878381b4  lh          $v1, -0x7E4C($gp)
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934964)));
    // 0x2834ec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2834ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2834f0: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x2834f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2834f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2834f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2834f8: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x2834f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2834fc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x283500: 0x9045004c  lbu         $a1, 0x4C($v0)
    ctx->pc = 0x283500u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x283504: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x283504u;
    SET_GPR_U32(ctx, 31, 0x28350Cu);
    ctx->pc = 0x283508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283504u;
    // 0x283508: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x283504u, 0x28350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28350Cu;
label_28350c:
    // 0x28350c: 0x92440821  lbu         $a0, 0x821($s2)
    ctx->pc = 0x28350cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
    // 0x283510: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283514: 0x108300e4  beq         $a0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x283514u;
    {
        const bool branch_taken_0x283514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x283518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283514u;
        // 0x283518: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283514) {
            ctx->pc = 0x2838A8u;
            goto label_2838a8;
        }
    }
    ctx->pc = 0x28351Cu;
    // 0x28351c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283520: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x283520u;
    {
        const bool branch_taken_0x283520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x283524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283520u;
        // 0x283524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283520) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x283528u;
    // 0x283528: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x283528u;
    {
        const bool branch_taken_0x283528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x283528) {
            ctx->pc = 0x283578u;
            goto label_283578;
        }
    }
    ctx->pc = 0x283530u;
    // 0x283530: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283530u;
    {
        const bool branch_taken_0x283530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x283530) {
            ctx->pc = 0x283540u;
            goto label_283540;
        }
    }
    ctx->pc = 0x283538u;
    // 0x283538: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x283538u;
    {
        const bool branch_taken_0x283538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283538) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283540u;
label_283540:
    // 0x283540: 0x92440839  lbu         $a0, 0x839($s2)
    ctx->pc = 0x283540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2105)));
    // 0x283544: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x283544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x283548: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x28354c: 0x9084005c  lbu         $a0, 0x5C($a0)
    ctx->pc = 0x28354cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x283550: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x283550u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x283554: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x283554u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x283558: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x283558u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x28355c: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x28355cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x283560: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x283560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x283564: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x283564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x283568: 0xa6400826  sh          $zero, 0x826($s2)
    ctx->pc = 0x283568u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x28356c: 0xa640082a  sh          $zero, 0x82A($s2)
    ctx->pc = 0x28356cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x283570: 0xa2450821  sb          $a1, 0x821($s2)
    ctx->pc = 0x283570u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x283574: 0x0  nop
    ctx->pc = 0x283574u;
    // NOP
label_283578:
    // 0x283578: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x283578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
    // 0x28357c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28357Cu;
    {
        const bool branch_taken_0x28357c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28357c) {
            ctx->pc = 0x283688u;
            goto label_283688;
        }
    }
    ctx->pc = 0x283584u;
    // 0x283584: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x283584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x283588: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x283588u;
    {
        const bool branch_taken_0x283588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283588) {
            ctx->pc = 0x283678u;
            goto label_283678;
        }
    }
    ctx->pc = 0x283590u;
    // 0x283590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283594: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x283594u;
    {
        const bool branch_taken_0x283594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283594u;
        // 0x283598: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283594) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x28359Cu;
    // 0x28359c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x28359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2835a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2835a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2835a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2835a8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2835a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2835ac: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2835acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2835b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2835b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2835b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2835b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2835b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2835b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2835bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2835bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2835c0: 0x0  nop
    ctx->pc = 0x2835c0u;
    // NOP
    // 0x2835c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2835c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2835c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2835c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2835cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2835CCu;
    {
        const bool branch_taken_0x2835cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2835cc) {
            ctx->pc = 0x2835E4u;
            goto label_2835e4;
        }
    }
    ctx->pc = 0x2835D4u;
    // 0x2835d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2835d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2835d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2835d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2835dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2835DCu;
    {
        const bool branch_taken_0x2835dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835DCu;
        // 0x2835e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835dc) {
            ctx->pc = 0x283600u;
            goto label_283600;
        }
    }
    ctx->pc = 0x2835E4u;
label_2835e4:
    // 0x2835e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2835e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2835e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2835e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2835ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2835ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2835f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2835f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2835f4: 0x0  nop
    ctx->pc = 0x2835f4u;
    // NOP
    // 0x2835f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2835f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2835fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2835fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283600:
    // 0x283600: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x283600u;
    SET_GPR_U32(ctx, 31, 0x283608u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x283600u, 0x283608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283608u;
label_283608:
    // 0x283608: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x283608u;
    {
        const bool branch_taken_0x283608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283608) {
            ctx->pc = 0x283678u;
            goto label_283678;
        }
    }
    ctx->pc = 0x283610u;
label_283610:
    // 0x283610: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x283614: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x283614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283618: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x28361c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28361cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283620: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x283620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x283624: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x283624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283628: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x283628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x28362c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28362cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283630: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283634: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283638: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28363c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28363Cu;
    {
        const bool branch_taken_0x28363c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28363c) {
            ctx->pc = 0x283654u;
            goto label_283654;
        }
    }
    ctx->pc = 0x283644u;
    // 0x283644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283648: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28364c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28364Cu;
    {
        const bool branch_taken_0x28364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28364Cu;
        // 0x283650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28364c) {
            ctx->pc = 0x283670u;
            goto label_283670;
        }
    }
    ctx->pc = 0x283654u;
label_283654:
    // 0x283654: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x283658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28365c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28365cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283660: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x283664: 0x0  nop
    ctx->pc = 0x283664u;
    // NOP
    // 0x283668: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x283668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x28366c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283670:
    // 0x283670: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x283670u;
    SET_GPR_U32(ctx, 31, 0x283678u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x283670u, 0x283678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283678u;
label_283678:
    // 0x283678: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x283678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x28367c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283680: 0xa6430826  sh          $v1, 0x826($s2)
    ctx->pc = 0x283680u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x283684: 0x0  nop
    ctx->pc = 0x283684u;
    // NOP
label_283688:
    // 0x283688: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x283688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28368c: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28368c) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283694u;
    // 0x283694: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x283694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x283698: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x283698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28369c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x28369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2836a0: 0x92470839  lbu         $a3, 0x839($s2)
    ctx->pc = 0x2836a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2105)));
    // 0x2836a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2836a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2836a8: 0x9246083b  lbu         $a2, 0x83B($s2)
    ctx->pc = 0x2836a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2107)));
    // 0x2836ac: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x2836acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
    // 0x2836b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2836b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2836b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2836b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2836bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2836bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2836c0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2836c4: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2836c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2836c8: 0xa246083c  sb          $a2, 0x83C($s2)
    ctx->pc = 0x2836c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x2836cc: 0xa242083b  sb          $v0, 0x83B($s2)
    ctx->pc = 0x2836ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2107), (uint8_t)GPR_U32(ctx, 2));
    // 0x2836d0: 0x92420839  lbu         $v0, 0x839($s2)
    ctx->pc = 0x2836d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2105)));
    // 0x2836d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2836d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2836d8: 0x90420058  lbu         $v0, 0x58($v0)
    ctx->pc = 0x2836d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2836dc: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2836dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2836e0: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2836e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2836e4: 0xa64207f2  sh          $v0, 0x7F2($s2)
    ctx->pc = 0x2836e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2836e8: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x2836e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2836ec: 0xae4507ec  sw          $a1, 0x7EC($s2)
    ctx->pc = 0x2836ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 5));
    // 0x2836f0: 0xa2440821  sb          $a0, 0x821($s2)
    ctx->pc = 0x2836f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2836f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2836f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2836f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2836f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2836fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2836fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283700: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283704: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x283704u;
    {
        const bool branch_taken_0x283704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283704) {
            ctx->pc = 0x28371Cu;
            goto label_28371c;
        }
    }
    ctx->pc = 0x28370Cu;
    // 0x28370c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28370cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283710: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x283710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x283714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283714u;
    {
        const bool branch_taken_0x283714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283714u;
        // 0x283718: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283714) {
            ctx->pc = 0x283738u;
            goto label_283738;
        }
    }
    ctx->pc = 0x28371Cu;
label_28371c:
    // 0x28371c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28371cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283720: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x283720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x283724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283728: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x283728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28372c: 0x0  nop
    ctx->pc = 0x28372cu;
    // NOP
    // 0x283730: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x283730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x283734: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x283734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_283738:
    // 0x283738: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x283738u;
    SET_GPR_U32(ctx, 31, 0x283740u);
    ctx->pc = 0x28373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283738u;
    // 0x28373c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x283738u, 0x283740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283740u;
label_283740:
    // 0x283740: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x283740u;
    {
        const bool branch_taken_0x283740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283740) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283748u;
label_283748:
    // 0x283748: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x283748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
    // 0x28374c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28374Cu;
    {
        const bool branch_taken_0x28374c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28374c) {
            ctx->pc = 0x283858u;
            goto label_283858;
        }
    }
    ctx->pc = 0x283754u;
    // 0x283754: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x283754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x283758: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x283758u;
    {
        const bool branch_taken_0x283758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283758) {
            ctx->pc = 0x283848u;
            goto label_283848;
        }
    }
    ctx->pc = 0x283760u;
    // 0x283760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283764: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x283764u;
    {
        const bool branch_taken_0x283764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283764u;
        // 0x283768: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283764) {
            ctx->pc = 0x2837E0u;
            goto label_2837e0;
        }
    }
    ctx->pc = 0x28376Cu;
    // 0x28376c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x28376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283770: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x283770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x283774: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x283774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283778: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x28377c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x28377cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x283780: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x283780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x283784: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283788: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x283788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28378c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28378cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283790: 0x0  nop
    ctx->pc = 0x283790u;
    // NOP
    // 0x283794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28379c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28379Cu;
    {
        const bool branch_taken_0x28379c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28379c) {
            ctx->pc = 0x2837B4u;
            goto label_2837b4;
        }
    }
    ctx->pc = 0x2837A4u;
    // 0x2837a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2837a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2837a8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2837a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2837ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2837ACu;
    {
        const bool branch_taken_0x2837ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837ACu;
        // 0x2837b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837ac) {
            ctx->pc = 0x2837D0u;
            goto label_2837d0;
        }
    }
    ctx->pc = 0x2837B4u;
label_2837b4:
    // 0x2837b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2837b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2837b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2837b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2837bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2837bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2837c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2837c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2837c4: 0x0  nop
    ctx->pc = 0x2837c4u;
    // NOP
    // 0x2837c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2837c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2837cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2837ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2837d0:
    // 0x2837d0: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x2837D0u;
    SET_GPR_U32(ctx, 31, 0x2837D8u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x2837D0u, 0x2837D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837D8u;
label_2837d8:
    // 0x2837d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2837D8u;
    {
        const bool branch_taken_0x2837d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2837d8) {
            ctx->pc = 0x283848u;
            goto label_283848;
        }
    }
    ctx->pc = 0x2837E0u;
label_2837e0:
    // 0x2837e0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2837e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2837e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2837e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2837e8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2837e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2837ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2837ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2837f0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2837f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2837f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2837f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2837f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2837f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2837fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2837fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283800: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283804: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28380c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28380Cu;
    {
        const bool branch_taken_0x28380c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28380c) {
            ctx->pc = 0x283824u;
            goto label_283824;
        }
    }
    ctx->pc = 0x283814u;
    // 0x283814: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283818: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28381c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28381Cu;
    {
        const bool branch_taken_0x28381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28381Cu;
        // 0x283820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28381c) {
            ctx->pc = 0x283840u;
            goto label_283840;
        }
    }
    ctx->pc = 0x283824u;
label_283824:
    // 0x283824: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28382c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28382cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283830: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x283834: 0x0  nop
    ctx->pc = 0x283834u;
    // NOP
    // 0x283838: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x283838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x28383c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283840:
    // 0x283840: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x283840u;
    SET_GPR_U32(ctx, 31, 0x283848u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x283840u, 0x283848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283848u;
label_283848:
    // 0x283848: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x283848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x28384c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28384cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283850: 0xa6430826  sh          $v1, 0x826($s2)
    ctx->pc = 0x283850u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x283854: 0x0  nop
    ctx->pc = 0x283854u;
    // NOP
label_283858:
    // 0x283858: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x283858u;
    {
        const bool branch_taken_0x283858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x283858) {
            ctx->pc = 0x283880u;
            goto label_283880;
        }
    }
    ctx->pc = 0x283860u;
    // 0x283860: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x283860u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x283864: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283868: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x283868u;
    {
        const bool branch_taken_0x283868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x283868) {
            ctx->pc = 0x283880u;
            goto label_283880;
        }
    }
    ctx->pc = 0x283870u;
    // 0x283870: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x283870u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
    // 0x283874: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x283874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283878: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x283878u;
    {
        const bool branch_taken_0x283878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283878) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283880u;
label_283880:
    // 0x283880: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x283880u;
    {
        const bool branch_taken_0x283880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x283880) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283888u;
    // 0x283888: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x283888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x28388c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28388Cu;
    {
        const bool branch_taken_0x28388c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28388c) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x283894u;
    // 0x283894: 0x92430839  lbu         $v1, 0x839($s2)
    ctx->pc = 0x283894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2105)));
    // 0x283898: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x283898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28389c: 0x90630054  lbu         $v1, 0x54($v1)
    ctx->pc = 0x28389cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2838a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2838A0u;
    {
        const bool branch_taken_0x2838a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838A0u;
        // 0x2838a4: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838a0) {
            ctx->pc = 0x2838B0u;
            goto label_2838b0;
        }
    }
    ctx->pc = 0x2838A8u;
label_2838a8:
    // 0x2838a8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2838A8u;
    {
        const bool branch_taken_0x2838a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838a8) {
            ctx->pc = 0x283998u;
            goto label_283998;
        }
    }
    ctx->pc = 0x2838B0u;
label_2838b0:
    // 0x2838b0: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x2838b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
    // 0x2838b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2838B4u;
    {
        const bool branch_taken_0x2838b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838b4) {
            ctx->pc = 0x2838E0u;
            goto label_2838e0;
        }
    }
    ctx->pc = 0x2838BCu;
    // 0x2838bc: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x2838bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2838c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2838c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2838c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2838c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2838c8: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2838cc: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2838CCu;
    SET_GPR_U32(ctx, 31, 0x2838D4u);
    ctx->pc = 0x2838D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838CCu;
    // 0x2838d0: 0xa642082c  sh          $v0, 0x82C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2838CCu, 0x2838D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838D4u;
label_2838d4:
    // 0x2838d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2838D4u;
    {
        const bool branch_taken_0x2838d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D4u;
        // 0x2838d8: 0xa64207f0  sh          $v0, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d4) {
            ctx->pc = 0x2838E8u;
            goto label_2838e8;
        }
    }
    ctx->pc = 0x2838DCu;
    // 0x2838dc: 0x0  nop
    ctx->pc = 0x2838dcu;
    // NOP
label_2838e0:
    // 0x2838e0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2838e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2838e4: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x2838e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2838e8:
    // 0x2838e8: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2838E8u;
    {
        const bool branch_taken_0x2838e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838e8) {
            ctx->pc = 0x283998u;
            goto label_283998;
        }
    }
    ctx->pc = 0x2838F0u;
    // 0x2838f0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2838f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2838f4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2838f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2838f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2838f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2838fc: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2838fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x283900: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x283900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x283904: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x283904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x283908: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x283908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28390c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28390cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283910: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283914: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283918: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28391c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28391Cu;
    {
        const bool branch_taken_0x28391c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x283920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28391Cu;
        // 0x283920: 0x96450826  lhu         $a1, 0x826($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28391c) {
            ctx->pc = 0x283934u;
            goto label_283934;
        }
    }
    ctx->pc = 0x283924u;
    // 0x283924: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283928: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x283928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28392c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28392Cu;
    {
        const bool branch_taken_0x28392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28392Cu;
        // 0x283930: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28392c) {
            ctx->pc = 0x283950u;
            goto label_283950;
        }
    }
    ctx->pc = 0x283934u;
label_283934:
    // 0x283934: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283934u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283938: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x283938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28393c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28393cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283940: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x283940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x283944: 0x0  nop
    ctx->pc = 0x283944u;
    // NOP
    // 0x283948: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x283948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28394c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x28394cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_283950:
    // 0x283950: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x283950u;
    {
        const bool branch_taken_0x283950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283950) {
            ctx->pc = 0x283998u;
            goto label_283998;
        }
    }
    ctx->pc = 0x283958u;
    // 0x283958: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x283958u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28395c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283960: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x283960u;
    {
        const bool branch_taken_0x283960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x283960) {
            ctx->pc = 0x283998u;
            goto label_283998;
        }
    }
    ctx->pc = 0x283968u;
    // 0x283968: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x283968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
    // 0x28396c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x28396cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283970: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x283970u;
    {
        const bool branch_taken_0x283970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283970) {
            ctx->pc = 0x283998u;
            goto label_283998;
        }
    }
    ctx->pc = 0x283978u;
    // 0x283978: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x283978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x28397c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x28397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283980: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283980u;
    {
        const bool branch_taken_0x283980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283980u;
        // 0x283984: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283980) {
            ctx->pc = 0x283990u;
            goto label_283990;
        }
    }
    ctx->pc = 0x283988u;
    // 0x283988: 0xa6430786  sh          $v1, 0x786($s2)
    ctx->pc = 0x283988u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x28398c: 0x0  nop
    ctx->pc = 0x28398cu;
    // NOP
label_283990:
    // 0x283990: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283994: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x283994u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_283998:
    // 0x283998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28399c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28399cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2839a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2839a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2839a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2839a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2839a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2839A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2839ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839A8u;
        // 0x2839ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2839A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2839B0u;
}
