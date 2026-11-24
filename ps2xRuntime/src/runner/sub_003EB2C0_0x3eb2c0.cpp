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

// Function: sub_003EB2C0
// Address: 0x3eb2c0 - 0x3eb428
void sub_003EB2C0_0x3eb2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB2C0_0x3eb2c0");
#endif

    ctx->pc = 0x3eb2c0u;

    // 0x3eb2c0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eb2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eb2c4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3eb2c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3eb2c8: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x3EB2C8u;
    {
        const bool branch_taken_0x3eb2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2C8u;
        // 0x3eb2cc: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2c8) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB2D0u;
    // 0x3eb2d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eb2d4: 0x24a54e40  addiu       $a1, $a1, 0x4E40
    ctx->pc = 0x3eb2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20032));
    // 0x3eb2d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eb2dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3eb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eb2e0: 0x600008  jr          $v1
    ctx->pc = 0x3EB2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EB2E8u: goto label_3eb2e8;
            case 0x3EB318u: goto label_3eb318;
            case 0x3EB358u: goto label_3eb358;
            case 0x3EB3C0u: goto label_3eb3c0;
            case 0x3EB408u: goto label_3eb408;
            case 0x3EB410u: goto label_3eb410;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB2E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EB2E8u;
label_3eb2e8:
    // 0x3eb2e8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb2ec: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb2f0: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3eb2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3eb2f4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb2f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eb2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb2fc: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3eb2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb300: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb304: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x3eb304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eb308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eb30c: 0xac8507ec  sw          $a1, 0x7EC($a0)
    ctx->pc = 0x3eb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 5));
    // 0x3eb310: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb314: 0x0  nop
    ctx->pc = 0x3eb314u;
    // NOP
label_3eb318:
    // 0x3eb318: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3eb318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3eb31c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3EB31Cu;
    {
        const bool branch_taken_0x3eb31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb31c) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB324u;
    // 0x3eb324: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb328: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x3eb328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3eb32c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb330: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3eb330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb334: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb338: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb33c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3eb33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eb340: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb344: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3eb348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eb348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eb34c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3EB34Cu;
    {
        const bool branch_taken_0x3eb34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB34Cu;
        // 0x3eb350: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb34c) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB354u;
    // 0x3eb354: 0x0  nop
    ctx->pc = 0x3eb354u;
    // NOP
label_3eb358:
    // 0x3eb358: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eb358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eb35c: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb360: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x3eb360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x3eb364: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eb364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eb368: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3eb368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x3eb36c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eb36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eb370: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x3eb370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x3eb374: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3eb374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb378: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eb37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb380: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eb380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eb384: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eb388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eb38c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EB38Cu;
    {
        const bool branch_taken_0x3eb38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eb38c) {
            ctx->pc = 0x3EB3A4u;
            goto label_3eb3a4;
        }
    }
    ctx->pc = 0x3EB394u;
    // 0x3eb394: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb398: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3eb398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3eb39c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB39Cu;
    {
        const bool branch_taken_0x3eb39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB39Cu;
        // 0x3eb3a0: 0xa4852b22  sh          $a1, 0x2B22($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb39c) {
            ctx->pc = 0x3EB3C0u;
            goto label_3eb3c0;
        }
    }
    ctx->pc = 0x3EB3A4u;
label_3eb3a4:
    // 0x3eb3a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eb3a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eb3a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb3ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eb3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eb3b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3eb3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3eb3b4: 0x0  nop
    ctx->pc = 0x3eb3b4u;
    // NOP
    // 0x3eb3b8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3eb3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3eb3bc: 0xa4852b22  sh          $a1, 0x2B22($a0)
    ctx->pc = 0x3eb3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 5));
label_3eb3c0:
    // 0x3eb3c0: 0x84832b22  lh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb3c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11042)));
    // 0x3eb3c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb3c8: 0xa4832b22  sh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb3cc: 0x84832b22  lh          $v1, 0x2B22($a0)
    ctx->pc = 0x3eb3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11042)));
    // 0x3eb3d0: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EB3D0u;
    {
        const bool branch_taken_0x3eb3d0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eb3d0) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB3D8u;
    // 0x3eb3d8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3eb3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb3dc: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3eb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3eb3e0: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3eb3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb3e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3eb3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb3e8: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3eb3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb3f0: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3eb3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eb3f4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb3f8: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3eb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3eb3fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eb400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB400u;
    {
        const bool branch_taken_0x3eb400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB400u;
        // 0x3eb404: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb400) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB408u;
label_3eb408:
    // 0x3eb408: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3eb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eb40c: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x3eb40cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3eb410:
    // 0x3eb410: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3eb410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3eb414: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EB414u;
    {
        const bool branch_taken_0x3eb414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB414u;
        // 0x3eb418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb414) {
            ctx->pc = 0x3EB420u;
            goto label_3eb420;
        }
    }
    ctx->pc = 0x3EB41Cu;
    // 0x3eb41c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3eb41cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eb420:
    // 0x3eb420: 0x3e00008  jr          $ra
    ctx->pc = 0x3EB420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB428u;
}
