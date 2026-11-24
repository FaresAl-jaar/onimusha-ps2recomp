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

// Function: sub_0038E260
// Address: 0x38e260 - 0x38e638
void sub_0038E260_0x38e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E260_0x38e260");
#endif

    switch (ctx->pc) {
        case 0x38e2a8u: goto label_38e2a8;
        case 0x38e2c0u: goto label_38e2c0;
        case 0x38e310u: goto label_38e310;
        case 0x38e39cu: goto label_38e39c;
        case 0x38e3a4u: goto label_38e3a4;
        case 0x38e3b8u: goto label_38e3b8;
        case 0x38e434u: goto label_38e434;
        case 0x38e450u: goto label_38e450;
        case 0x38e458u: goto label_38e458;
        case 0x38e46cu: goto label_38e46c;
        case 0x38e478u: goto label_38e478;
        case 0x38e4f8u: goto label_38e4f8;
        case 0x38e534u: goto label_38e534;
        case 0x38e54cu: goto label_38e54c;
        case 0x38e598u: goto label_38e598;
        case 0x38e5b4u: goto label_38e5b4;
        case 0x38e5c8u: goto label_38e5c8;
        case 0x38e5d8u: goto label_38e5d8;
        case 0x38e5f0u: goto label_38e5f0;
        default: break;
    }

    ctx->pc = 0x38e260u;

    // 0x38e260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38e264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e268: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x38e26c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38e270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38e274: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38e274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38e27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e284: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x38e284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38e288: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x38E288u;
    {
        const bool branch_taken_0x38e288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38e288) {
            ctx->pc = 0x38E308u;
            goto label_38e308;
        }
    }
    ctx->pc = 0x38E290u;
    // 0x38e290: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E290u;
    {
        const bool branch_taken_0x38e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e290) {
            ctx->pc = 0x38E2A0u;
            goto label_38e2a0;
        }
    }
    ctx->pc = 0x38E298u;
    // 0x38e298: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x38E298u;
    {
        const bool branch_taken_0x38e298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e298) {
            ctx->pc = 0x38E618u;
            goto label_38e618;
        }
    }
    ctx->pc = 0x38E2A0u;
label_38e2a0:
    // 0x38e2a0: 0xc0e40d4  jal         func_390350
    ctx->pc = 0x38E2A0u;
    SET_GPR_U32(ctx, 31, 0x38E2A8u);
    ctx->pc = 0x390350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390350u, 0x38E2A0u, 0x38E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E2A8u;
label_38e2a8:
    // 0x38e2a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E2A8u;
    {
        const bool branch_taken_0x38e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2A8u;
        // 0x38e2ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2a8) {
            ctx->pc = 0x38E2B8u;
            goto label_38e2b8;
        }
    }
    ctx->pc = 0x38E2B0u;
    // 0x38e2b0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x38E2B0u;
    {
        const bool branch_taken_0x38e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2B0u;
        // 0x38e2b4: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2b0) {
            ctx->pc = 0x38E618u;
            goto label_38e618;
        }
    }
    ctx->pc = 0x38E2B8u;
label_38e2b8:
    // 0x38e2b8: 0xc0e4104  jal         func_390410
    ctx->pc = 0x38E2B8u;
    SET_GPR_U32(ctx, 31, 0x38E2C0u);
    ctx->pc = 0x390410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390410u, 0x38E2B8u, 0x38E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E2C0u;
label_38e2c0:
    // 0x38e2c0: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x38e2c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x38e2c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E2C4u;
    {
        const bool branch_taken_0x38e2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2C4u;
        // 0x38e2c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2c4) {
            ctx->pc = 0x38E2D8u;
            goto label_38e2d8;
        }
    }
    ctx->pc = 0x38E2CCu;
    // 0x38e2cc: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x38E2CCu;
    {
        const bool branch_taken_0x38e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2CCu;
        // 0x38e2d0: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2cc) {
            ctx->pc = 0x38E618u;
            goto label_38e618;
        }
    }
    ctx->pc = 0x38E2D4u;
    // 0x38e2d4: 0x0  nop
    ctx->pc = 0x38e2d4u;
    // NOP
label_38e2d8:
    // 0x38e2d8: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x38e2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e2dc: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x38e2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38e2e0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x38e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x38e2e4: 0xa68207f2  sh          $v0, 0x7F2($s4)
    ctx->pc = 0x38e2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e2e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38e2ec: 0xa28207f5  sb          $v0, 0x7F5($s4)
    ctx->pc = 0x38e2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e2f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38e2f4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x38e2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38e2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e2fc: 0xae8307ec  sw          $v1, 0x7EC($s4)
    ctx->pc = 0x38e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 3));
    // 0x38e300: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x38e300u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x38e304: 0x0  nop
    ctx->pc = 0x38e304u;
    // NOP
label_38e308:
    // 0x38e308: 0xc0e3744  jal         func_38DD10
    ctx->pc = 0x38E308u;
    SET_GPR_U32(ctx, 31, 0x38E310u);
    ctx->pc = 0x38E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E308u;
    // 0x38e30c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DD10u, 0x38E308u, 0x38E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E310u;
label_38e310:
    // 0x38e310: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38e314: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x38e314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x38e318: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38e318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38e31c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x38e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x38e320: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x38e320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x38e324: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38e328: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38e328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38e32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e330: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38e330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38e334: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38e334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38e338: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38e338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38e33c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38E33Cu;
    {
        const bool branch_taken_0x38e33c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E33Cu;
        // 0x38e340: 0x96850824  lhu         $a1, 0x824($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e33c) {
            ctx->pc = 0x38E354u;
            goto label_38e354;
        }
    }
    ctx->pc = 0x38E344u;
    // 0x38e344: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e348: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e34c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38E34Cu;
    {
        const bool branch_taken_0x38e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E34Cu;
        // 0x38e350: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e34c) {
            ctx->pc = 0x38E370u;
            goto label_38e370;
        }
    }
    ctx->pc = 0x38E354u;
label_38e354:
    // 0x38e354: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38e354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38e358: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e35c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e35cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e360: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e364: 0x0  nop
    ctx->pc = 0x38e364u;
    // NOP
    // 0x38e368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38e368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38e36c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x38e36cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38e370:
    // 0x38e370: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x38E370u;
    {
        const bool branch_taken_0x38e370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e370) {
            ctx->pc = 0x38E3C0u;
            goto label_38e3c0;
        }
    }
    ctx->pc = 0x38E378u;
    // 0x38e378: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38E378u;
    {
        const bool branch_taken_0x38e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e378) {
            ctx->pc = 0x38E3C0u;
            goto label_38e3c0;
        }
    }
    ctx->pc = 0x38E380u;
    // 0x38e380: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x38e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x38e384: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x38e384u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38e388: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x38E388u;
    {
        const bool branch_taken_0x38e388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E388u;
        // 0x38e38c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e388) {
            ctx->pc = 0x38E3C0u;
            goto label_38e3c0;
        }
    }
    ctx->pc = 0x38E390u;
    // 0x38e390: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38e394: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x38E394u;
    SET_GPR_U32(ctx, 31, 0x38E39Cu);
    ctx->pc = 0x38E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E394u;
    // 0x38e398: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x38E394u, 0x38E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E39Cu;
label_38e39c:
    // 0x38e39c: 0xc096e44  jal         func_25B910
    ctx->pc = 0x38E39Cu;
    SET_GPR_U32(ctx, 31, 0x38E3A4u);
    ctx->pc = 0x38E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E39Cu;
    // 0x38e3a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x38E39Cu, 0x38E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3A4u;
label_38e3a4:
    // 0x38e3a4: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x38e3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x38e3a8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x38e3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38e3ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x38e3acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x38e3b0: 0xc097498  jal         func_25D260
    ctx->pc = 0x38E3B0u;
    SET_GPR_U32(ctx, 31, 0x38E3B8u);
    ctx->pc = 0x38E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3B0u;
    // 0x38e3b4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38E3B0u, 0x38E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3B8u;
label_38e3b8:
    // 0x38e3b8: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x38e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e3bc: 0x0  nop
    ctx->pc = 0x38e3bcu;
    // NOP
label_38e3c0:
    // 0x38e3c0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x38e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x38e3c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38e3c8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38e3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38e3cc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38e3d0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38e3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38e3d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38e3d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38e3d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38e3dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38e3dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38e3e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e3e4: 0x0  nop
    ctx->pc = 0x38e3e4u;
    // NOP
    // 0x38e3e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38e3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38e3ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38e3ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38e3f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38E3F0u;
    {
        const bool branch_taken_0x38e3f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3F0u;
        // 0x38e3f4: 0x96850824  lhu         $a1, 0x824($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e3f0) {
            ctx->pc = 0x38E408u;
            goto label_38e408;
        }
    }
    ctx->pc = 0x38E3F8u;
    // 0x38e3f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e3f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e3fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38E400u;
    {
        const bool branch_taken_0x38e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e400) {
            ctx->pc = 0x38E420u;
            goto label_38e420;
        }
    }
    ctx->pc = 0x38E408u;
label_38e408:
    // 0x38e408: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38e408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38e40c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e410: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e414: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e418: 0x0  nop
    ctx->pc = 0x38e418u;
    // NOP
    // 0x38e41c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38e41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38e420:
    // 0x38e420: 0x14a40017  bne         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x38E420u;
    {
        const bool branch_taken_0x38e420 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x38e420) {
            ctx->pc = 0x38E480u;
            goto label_38e480;
        }
    }
    ctx->pc = 0x38E428u;
    // 0x38e428: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x38e428u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x38e42c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x38E42Cu;
    SET_GPR_U32(ctx, 31, 0x38E434u);
    ctx->pc = 0x38E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E42Cu;
    // 0x38e430: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x38E42Cu, 0x38E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E434u;
label_38e434:
    // 0x38e434: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x38e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x38e438: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x38e438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x38e43c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38e440: 0x24c62170  addiu       $a2, $a2, 0x2170
    ctx->pc = 0x38e440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8560));
    // 0x38e444: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x38e448: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x38E448u;
    SET_GPR_U32(ctx, 31, 0x38E450u);
    ctx->pc = 0x38E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E448u;
    // 0x38e44c: 0x24450840  addiu       $a1, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x38E448u, 0x38E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E450u;
label_38e450:
    // 0x38e450: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x38E450u;
    SET_GPR_U32(ctx, 31, 0x38E458u);
    ctx->pc = 0x38E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E450u;
    // 0x38e454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x38E450u, 0x38E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E458u;
label_38e458:
    // 0x38e458: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x38e458u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x38e45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e460: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x38e460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38e464: 0xc0aa268  jal         func_2A89A0
    ctx->pc = 0x38E464u;
    SET_GPR_U32(ctx, 31, 0x38E46Cu);
    ctx->pc = 0x38E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E464u;
    // 0x38e468: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A89A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A89A0u, 0x38E464u, 0x38E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E46Cu;
label_38e46c:
    // 0x38e46c: 0x8e842958  lw          $a0, 0x2958($s4)
    ctx->pc = 0x38e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10584)));
    // 0x38e470: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x38E470u;
    SET_GPR_U32(ctx, 31, 0x38E478u);
    ctx->pc = 0x38E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E470u;
    // 0x38e474: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x38E470u, 0x38E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E478u;
label_38e478:
    // 0x38e478: 0xae902958  sw          $s0, 0x2958($s4)
    ctx->pc = 0x38e478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10584), GPR_U32(ctx, 16));
    // 0x38e47c: 0x0  nop
    ctx->pc = 0x38e47cu;
    // NOP
label_38e480:
    // 0x38e480: 0x3c03429a  lui         $v1, 0x429A
    ctx->pc = 0x38e480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17050 << 16));
    // 0x38e484: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38e488: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38e488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38e48c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38e490: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38e490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38e494: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38e494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38e498: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38e498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38e49c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38e49cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38e4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e4a4: 0x0  nop
    ctx->pc = 0x38e4a4u;
    // NOP
    // 0x38e4a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38e4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38e4ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38e4acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38e4b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38E4B0u;
    {
        const bool branch_taken_0x38e4b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4B0u;
        // 0x38e4b4: 0x96850824  lhu         $a1, 0x824($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e4b0) {
            ctx->pc = 0x38E4C8u;
            goto label_38e4c8;
        }
    }
    ctx->pc = 0x38E4B8u;
    // 0x38e4b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e4b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e4bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e4bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e4c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38E4C0u;
    {
        const bool branch_taken_0x38e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e4c0) {
            ctx->pc = 0x38E4E0u;
            goto label_38e4e0;
        }
    }
    ctx->pc = 0x38E4C8u;
label_38e4c8:
    // 0x38e4c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38e4c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38e4cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38e4d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38e4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38e4d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38e4d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38e4d8: 0x0  nop
    ctx->pc = 0x38e4d8u;
    // NOP
    // 0x38e4dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38e4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38e4e0:
    // 0x38e4e0: 0x14a40049  bne         $a1, $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x38E4E0u;
    {
        const bool branch_taken_0x38e4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x38e4e0) {
            ctx->pc = 0x38E608u;
            goto label_38e608;
        }
    }
    ctx->pc = 0x38E4E8u;
    // 0x38e4e8: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x38e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x38e4ec: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x38e4ecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38e4f0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38E4F0u;
    SET_GPR_U32(ctx, 31, 0x38E4F8u);
    ctx->pc = 0x38E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4F0u;
    // 0x38e4f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38E4F0u, 0x38E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4F8u;
label_38e4f8:
    // 0x38e4f8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x38e4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38e4fc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x38e4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38e500: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x38e500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x38e504: 0x92832b3c  lbu         $v1, 0x2B3C($s4)
    ctx->pc = 0x38e504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11068)));
    // 0x38e508: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x38e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38e50c: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x38e50cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38e510: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38e514: 0x24422150  addiu       $v0, $v0, 0x2150
    ctx->pc = 0x38e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x38e518: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38e518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38e51c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x38e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38e520: 0x2012  mflo        $a0
    ctx->pc = 0x38e520u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x38e524: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38e524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38e528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38e52c: 0xc0e4104  jal         func_390410
    ctx->pc = 0x38E52Cu;
    SET_GPR_U32(ctx, 31, 0x38E534u);
    ctx->pc = 0x38E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E52Cu;
    // 0x38e530: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390410u, 0x38E52Cu, 0x38E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E534u;
label_38e534:
    // 0x38e534: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x38e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x38e538: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x38e538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x38e53c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E53Cu;
    {
        const bool branch_taken_0x38e53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e53c) {
            ctx->pc = 0x38E558u;
            goto label_38e558;
        }
    }
    ctx->pc = 0x38E544u;
    // 0x38e544: 0xc0e4104  jal         func_390410
    ctx->pc = 0x38E544u;
    SET_GPR_U32(ctx, 31, 0x38E54Cu);
    ctx->pc = 0x390410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390410u, 0x38E544u, 0x38E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E54Cu;
label_38e54c:
    // 0x38e54c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38e550: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x38e550u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38e554: 0x0  nop
    ctx->pc = 0x38e554u;
    // NOP
label_38e558:
    // 0x38e558: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x38e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x38e55c: 0x93001a  div         $zero, $a0, $s3
    ctx->pc = 0x38e55cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38e560: 0x868600c2  lh          $a2, 0xC2($s4)
    ctx->pc = 0x38e560u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x38e564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e568: 0x24c5fe00  addiu       $a1, $a2, -0x200
    ctx->pc = 0x38e568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966784));
    // 0x38e56c: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x38e56cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x38e570: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x38e570u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x38e574: 0x2012  mflo        $a0
    ctx->pc = 0x38e574u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x38e578: 0x4843c  dsll32      $s0, $a0, 16
    ctx->pc = 0x38e578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 16));
    // 0x38e57c: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E57Cu;
    {
        const bool branch_taken_0x38e57c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x38E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E57Cu;
        // 0x38e580: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e57c) {
            ctx->pc = 0x38E588u;
            goto label_38e588;
        }
    }
    ctx->pc = 0x38E584u;
    // 0x38e584: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38e584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e588:
    // 0x38e588: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x38e588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x38e58c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x38E58Cu;
    {
        const bool branch_taken_0x38e58c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E58Cu;
        // 0x38e590: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e58c) {
            ctx->pc = 0x38E608u;
            goto label_38e608;
        }
    }
    ctx->pc = 0x38E594u;
    // 0x38e594: 0x0  nop
    ctx->pc = 0x38e594u;
    // NOP
label_38e598:
    // 0x38e598: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x38e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x38e59c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38e5a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e5a4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x38e5a8: 0x784202b0  lq          $v0, 0x2B0($v0)
    ctx->pc = 0x38e5a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x38e5ac: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x38E5ACu;
    SET_GPR_U32(ctx, 31, 0x38E5B4u);
    ctx->pc = 0x38E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5ACu;
    // 0x38e5b0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x38E5ACu, 0x38E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5B4u;
label_38e5b4:
    // 0x38e5b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x38e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x38e5b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38e5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38e5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38e5c0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x38E5C0u;
    SET_GPR_U32(ctx, 31, 0x38E5C8u);
    ctx->pc = 0x38E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5C0u;
    // 0x38e5c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x38E5C0u, 0x38E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5C8u;
label_38e5c8:
    // 0x38e5c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38e5cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x38e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38e5d0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x38E5D0u;
    SET_GPR_U32(ctx, 31, 0x38E5D8u);
    ctx->pc = 0x38E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5D0u;
    // 0x38e5d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x38E5D0u, 0x38E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5D8u;
label_38e5d8:
    // 0x38e5d8: 0x928408e8  lbu         $a0, 0x8E8($s4)
    ctx->pc = 0x38e5d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x38e5dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e5e0: 0x92882b3c  lbu         $t0, 0x2B3C($s4)
    ctx->pc = 0x38e5e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11068)));
    // 0x38e5e4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x38e5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38e5e8: 0xc0bc73c  jal         func_2F1CF0
    ctx->pc = 0x38E5E8u;
    SET_GPR_U32(ctx, 31, 0x38E5F0u);
    ctx->pc = 0x38E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5E8u;
    // 0x38e5ec: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF0u, 0x38E5E8u, 0x38E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5F0u;
label_38e5f0:
    // 0x38e5f0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x38e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x38e5f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38e5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x38e5f8: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x38e5f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x38e5fc: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x38e5fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x38e600: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x38E600u;
    {
        const bool branch_taken_0x38e600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E600u;
        // 0x38e604: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e600) {
            ctx->pc = 0x38E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e598;
        }
    }
    ctx->pc = 0x38E608u;
label_38e608:
    // 0x38e608: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x38e608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x38e60c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E60Cu;
    {
        const bool branch_taken_0x38e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E60Cu;
        // 0x38e610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e60c) {
            ctx->pc = 0x38E618u;
            goto label_38e618;
        }
    }
    ctx->pc = 0x38E614u;
    // 0x38e614: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x38e614u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
label_38e618:
    // 0x38e618: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38e618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e61c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38e61cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38e620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e630: 0x3e00008  jr          $ra
    ctx->pc = 0x38E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E630u;
        // 0x38e634: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E638u;
}
