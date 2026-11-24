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

// Function: sub_003793B0
// Address: 0x3793b0 - 0x379998
void sub_003793B0_0x3793b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003793B0_0x3793b0");
#endif

    switch (ctx->pc) {
        case 0x3795acu: goto label_3795ac;
        case 0x3795bcu: goto label_3795bc;
        case 0x3797c4u: goto label_3797c4;
        case 0x3797dcu: goto label_3797dc;
        case 0x3797e8u: goto label_3797e8;
        case 0x37981cu: goto label_37981c;
        case 0x37982cu: goto label_37982c;
        default: break;
    }

    ctx->pc = 0x3793b0u;

    // 0x3793b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3793b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3793b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3793b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3793b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3793b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3793bc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3793bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3793c0: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x3793c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3793c4: 0x10200170  beqz        $at, . + 4 + (0x170 << 2)
    ctx->pc = 0x3793C4u;
    {
        const bool branch_taken_0x3793c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3793C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793C4u;
        // 0x3793c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3793c4) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x3793CCu;
    // 0x3793cc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3793ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3793d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3793d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3793d4: 0x24841c60  addiu       $a0, $a0, 0x1C60
    ctx->pc = 0x3793d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7264));
    // 0x3793d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3793d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3793dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3793dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3793e0: 0x600008  jr          $v1
    ctx->pc = 0x3793E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3793E8u: goto label_3793e8;
            case 0x379418u: goto label_379418;
            case 0x379420u: goto label_379420;
            case 0x3795A0u: goto label_3795a0;
            case 0x3797A0u: goto label_3797a0;
            case 0x379838u: goto label_379838;
            case 0x379908u: goto label_379908;
            case 0x379910u: goto label_379910;
            case 0x379970u: goto label_379970;
            case 0x379978u: goto label_379978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3793E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3793E8u;
label_3793e8:
    // 0x3793e8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3793e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3793ec: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3793ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3793f0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x3793f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3793f4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3793f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3793f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3793f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3793fc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3793fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379400: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379404: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x379404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37940c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x37940cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x379410: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x379410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x379414: 0x0  nop
    ctx->pc = 0x379414u;
    // NOP
label_379418:
    // 0x379418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37941c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37941cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379420:
    // 0x379420: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x379424: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x379424u;
    {
        const bool branch_taken_0x379424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379424u;
        // 0x379428: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379424) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x37942Cu;
    // 0x37942c: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x37942Cu;
    {
        const bool branch_taken_0x37942c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37942c) {
            ctx->pc = 0x3794E0u;
            goto label_3794e0;
        }
    }
    ctx->pc = 0x379434u;
    // 0x379434: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379434u;
    {
        const bool branch_taken_0x379434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x379434) {
            ctx->pc = 0x379448u;
            goto label_379448;
        }
    }
    ctx->pc = 0x37943Cu;
    // 0x37943c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x37943Cu;
    {
        const bool branch_taken_0x37943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37943c) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379444u;
    // 0x379444: 0x0  nop
    ctx->pc = 0x379444u;
    // NOP
label_379448:
    // 0x379448: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x379448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x37944c: 0x34660dcd  ori         $a2, $v1, 0xDCD
    ctx->pc = 0x37944cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x379450: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x379450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x379454: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x379454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x379458: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37945c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37945cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x379460: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x379464: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x379464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x379468: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x379468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37946c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37946cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x379470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379474: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x379474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x379478: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x379478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37947c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x37947cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x379480: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x379480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x379484: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x379484u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x379488: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x379488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37948c: 0xa2032b88  sb          $v1, 0x2B88($s0)
    ctx->pc = 0x37948cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11144), (uint8_t)GPR_U32(ctx, 3));
    // 0x379490: 0xa2052b89  sb          $a1, 0x2B89($s0)
    ctx->pc = 0x379490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11145), (uint8_t)GPR_U32(ctx, 5));
    // 0x379494: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x379494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379498: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x379498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37949c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37949cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3794a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3794a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3794a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3794A4u;
    {
        const bool branch_taken_0x3794a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3794a4) {
            ctx->pc = 0x3794BCu;
            goto label_3794bc;
        }
    }
    ctx->pc = 0x3794ACu;
    // 0x3794ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3794acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3794b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3794b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3794b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3794B4u;
    {
        const bool branch_taken_0x3794b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3794B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794B4u;
        // 0x3794b8: 0xa6042b8a  sh          $a0, 0x2B8A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11146), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794b4) {
            ctx->pc = 0x3794D8u;
            goto label_3794d8;
        }
    }
    ctx->pc = 0x3794BCu;
label_3794bc:
    // 0x3794bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3794bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3794c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3794c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3794c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3794c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3794c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3794cc: 0x0  nop
    ctx->pc = 0x3794ccu;
    // NOP
    // 0x3794d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3794d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3794d4: 0xa6042b8a  sh          $a0, 0x2B8A($s0)
    ctx->pc = 0x3794d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11146), (uint16_t)GPR_U32(ctx, 4));
label_3794d8:
    // 0x3794d8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3794D8u;
    {
        const bool branch_taken_0x3794d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3794d8) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x3794E0u;
label_3794e0:
    // 0x3794e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3794e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3794e4: 0x34660dcd  ori         $a2, $v1, 0xDCD
    ctx->pc = 0x3794e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3794e8: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x3794e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3794ec: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x3794ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x3794f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3794f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3794f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3794f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3794f8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3794f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3794fc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3794fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x379500: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x379500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379504: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x379508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37950c: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x37950cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x379510: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x379510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x379514: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x379514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x379518: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x379518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x37951c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x37951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x379520: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x379520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x379524: 0xa2032b88  sb          $v1, 0x2B88($s0)
    ctx->pc = 0x379524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11144), (uint8_t)GPR_U32(ctx, 3));
    // 0x379528: 0xa2052b89  sb          $a1, 0x2B89($s0)
    ctx->pc = 0x379528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11145), (uint8_t)GPR_U32(ctx, 5));
    // 0x37952c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379530: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x379530u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x379534: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x379534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x379538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x379538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37953c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37953Cu;
    {
        const bool branch_taken_0x37953c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37953c) {
            ctx->pc = 0x379554u;
            goto label_379554;
        }
    }
    ctx->pc = 0x379544u;
    // 0x379544: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x379548: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x379548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37954c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37954Cu;
    {
        const bool branch_taken_0x37954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37954Cu;
        // 0x379550: 0xa6042b8a  sh          $a0, 0x2B8A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11146), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37954c) {
            ctx->pc = 0x379570u;
            goto label_379570;
        }
    }
    ctx->pc = 0x379554u;
label_379554:
    // 0x379554: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x379554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379558: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37955c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37955cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x379560: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x379560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x379564: 0x0  nop
    ctx->pc = 0x379564u;
    // NOP
    // 0x379568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x379568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37956c: 0xa6042b8a  sh          $a0, 0x2B8A($s0)
    ctx->pc = 0x37956cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11146), (uint16_t)GPR_U32(ctx, 4));
label_379570:
    // 0x379570: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x379570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379574: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x379574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379578: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x379578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x37957c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x37957cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379580: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379584: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x379584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379588: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37958c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x37958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379594: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x379594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x379598: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x379598u;
    {
        const bool branch_taken_0x379598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379598u;
        // 0x37959c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379598) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x3795A0u;
label_3795a0:
    // 0x3795a0: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3795a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3795a4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3795A4u;
    SET_GPR_U32(ctx, 31, 0x3795ACu);
    ctx->pc = 0x3795A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795A4u;
    // 0x3795a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3795A4u, 0x3795ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795ACu;
label_3795ac:
    // 0x3795ac: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3795acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3795b0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x3795b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3795b4: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3795B4u;
    SET_GPR_U32(ctx, 31, 0x3795BCu);
    ctx->pc = 0x3795B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795B4u;
    // 0x3795b8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3795B4u, 0x3795BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795BCu;
label_3795bc:
    // 0x3795bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3795BCu;
    {
        const bool branch_taken_0x3795bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3795bc) {
            ctx->pc = 0x3795D0u;
            goto label_3795d0;
        }
    }
    ctx->pc = 0x3795C4u;
    // 0x3795c4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3795c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3795c8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x3795c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x3795cc: 0x0  nop
    ctx->pc = 0x3795ccu;
    // NOP
label_3795d0:
    // 0x3795d0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3795d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3795d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3795d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3795d8: 0x0  nop
    ctx->pc = 0x3795d8u;
    // NOP
    // 0x3795dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3795dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3795e0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x3795E0u;
    {
        const bool branch_taken_0x3795e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3795E0u;
        // 0x3795e4: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3795e0) {
            ctx->pc = 0x379610u;
            goto label_379610;
        }
    }
    ctx->pc = 0x3795E8u;
    // 0x3795e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3795e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3795ec: 0x78231bf0  lq          $v1, 0x1BF0($at)
    ctx->pc = 0x3795ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 7152)));
    // 0x3795f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3795f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3795f4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x3795f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x3795f8: 0x7e032b30  sq          $v1, 0x2B30($s0)
    ctx->pc = 0x3795f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11056), GPR_VEC(ctx, 3));
    // 0x3795fc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3795fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379600: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x379600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x379604: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x379604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x379608: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x379608u;
    {
        const bool branch_taken_0x379608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379608u;
        // 0x37960c: 0xae022b48  sw          $v0, 0x2B48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379608) {
            ctx->pc = 0x379638u;
            goto label_379638;
        }
    }
    ctx->pc = 0x379610u;
label_379610:
    // 0x379610: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379614: 0x78241c00  lq          $a0, 0x1C00($at)
    ctx->pc = 0x379614u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x681C00u));
    // 0x379618: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x379618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x37961c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37961cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379620: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x379620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x379624: 0x7e042b30  sq          $a0, 0x2B30($s0)
    ctx->pc = 0x379624u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11056), GPR_VEC(ctx, 4));
    // 0x379628: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x379628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37962c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37962cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x379630: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x379630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x379634: 0xae022b48  sw          $v0, 0x2B48($s0)
    ctx->pc = 0x379634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 2));
label_379638:
    // 0x379638: 0x92022b88  lbu         $v0, 0x2B88($s0)
    ctx->pc = 0x379638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x37963c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37963Cu;
    {
        const bool branch_taken_0x37963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37963Cu;
        // 0x379640: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37963c) {
            ctx->pc = 0x379670u;
            goto label_379670;
        }
    }
    ctx->pc = 0x379644u;
    // 0x379644: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x379644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x379648: 0xc4221bf0  lwc1        $f2, 0x1BF0($at)
    ctx->pc = 0x379648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37964c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37964cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379650: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379654: 0xc4211c00  lwc1        $f1, 0x1C00($at)
    ctx->pc = 0x379654u;
    { uint32_t bits = FAST_READ32(0x681C00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379658: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x379658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37965c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x37965cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x379660: 0x0  nop
    ctx->pc = 0x379660u;
    // NOP
    // 0x379664: 0x0  nop
    ctx->pc = 0x379664u;
    // NOP
    // 0x379668: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x379668u;
    {
        const bool branch_taken_0x379668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379668u;
        // 0x37966c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x379668) {
            ctx->pc = 0x3796A0u;
            goto label_3796a0;
        }
    }
    ctx->pc = 0x379670u;
label_379670:
    // 0x379670: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379674: 0xc4231bf0  lwc1        $f3, 0x1BF0($at)
    ctx->pc = 0x379674u;
    { uint32_t bits = FAST_READ32(0x681BF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x379678: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x379678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x37967c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379680: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x379680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x379684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x379684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379688: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x37968c: 0xc4221c00  lwc1        $f2, 0x1C00($at)
    ctx->pc = 0x37968cu;
    { uint32_t bits = FAST_READ32(0x681C00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x379690: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x379690u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x379694: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x379694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x379698: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x379698u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37969c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x37969cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3796a0:
    // 0x3796a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3796a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3796a4: 0xe6002b30  swc1        $f0, 0x2B30($s0)
    ctx->pc = 0x3796a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11056), bits); }
    // 0x3796a8: 0xe6002b20  swc1        $f0, 0x2B20($s0)
    ctx->pc = 0x3796a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11040), bits); }
    // 0x3796ac: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x3796acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3796b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3796b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3796b4: 0xe6002b34  swc1        $f0, 0x2B34($s0)
    ctx->pc = 0x3796b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11060), bits); }
    // 0x3796b8: 0xe6002b24  swc1        $f0, 0x2B24($s0)
    ctx->pc = 0x3796b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11044), bits); }
    // 0x3796bc: 0xae022b3c  sw          $v0, 0x2B3C($s0)
    ctx->pc = 0x3796bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11068), GPR_U32(ctx, 2));
    // 0x3796c0: 0xae022b2c  sw          $v0, 0x2B2C($s0)
    ctx->pc = 0x3796c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11052), GPR_U32(ctx, 2));
    // 0x3796c4: 0xae002b40  sw          $zero, 0x2B40($s0)
    ctx->pc = 0x3796c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11072), GPR_U32(ctx, 0));
    // 0x3796c8: 0xae002b44  sw          $zero, 0x2B44($s0)
    ctx->pc = 0x3796c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 0));
    // 0x3796cc: 0xae002b4c  sw          $zero, 0x2B4C($s0)
    ctx->pc = 0x3796ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11084), GPR_U32(ctx, 0));
    // 0x3796d0: 0x7a022b20  lq          $v0, 0x2B20($s0)
    ctx->pc = 0x3796d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3796d4: 0x7e022b50  sq          $v0, 0x2B50($s0)
    ctx->pc = 0x3796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11088), GPR_VEC(ctx, 2));
    // 0x3796d8: 0xc6012b38  lwc1        $f1, 0x2B38($s0)
    ctx->pc = 0x3796d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3796dc: 0xc6002b28  lwc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3796dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3796e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3796e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3796e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3796e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3796e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3796E8u;
    {
        const bool branch_taken_0x3796e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3796e8) {
            ctx->pc = 0x3796F4u;
            goto label_3796f4;
        }
    }
    ctx->pc = 0x3796F0u;
    // 0x3796f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3796f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3796f4:
    // 0x3796f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3796f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3796f8: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x3796f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x3796fc: 0x3c021b4e  lui         $v0, 0x1B4E
    ctx->pc = 0x3796fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6990 << 16));
    // 0x379700: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x379704: 0x344681b5  ori         $a2, $v0, 0x81B5
    ctx->pc = 0x379704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33205);
    // 0x379708: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x379708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x37970c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x37970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x379710: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x379710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x379714: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x379714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379718: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x379718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x37971c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x37971cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x379720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379724: 0x24e5012b  addiu       $a1, $a3, 0x12B
    ctx->pc = 0x379724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 299));
    // 0x379728: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x379728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37972c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37972cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379730: 0x0  nop
    ctx->pc = 0x379730u;
    // NOP
    // 0x379734: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x379734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x379738: 0x1810  mfhi        $v1
    ctx->pc = 0x379738u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37973c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x37973cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x379740: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x379740u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x379744: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x379744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x379748: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x379748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x37974c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x37974cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x379750: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x379750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x379754: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x379754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x379758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37975c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37975cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379760: 0x0  nop
    ctx->pc = 0x379760u;
    // NOP
    // 0x379764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x379764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x379768: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x379768u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x37976c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37976cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x379770: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x379770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x379774: 0x0  nop
    ctx->pc = 0x379774u;
    // NOP
    // 0x379778: 0xa2032b68  sb          $v1, 0x2B68($s0)
    ctx->pc = 0x379778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 3));
    // 0x37977c: 0xae042b60  sw          $a0, 0x2B60($s0)
    ctx->pc = 0x37977cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 4));
    // 0x379780: 0x82032b68  lb          $v1, 0x2B68($s0)
    ctx->pc = 0x379780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11112)));
    // 0x379784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379788: 0x0  nop
    ctx->pc = 0x379788u;
    // NOP
    // 0x37978c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37978cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x379790: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x379790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x379794: 0xe6002b64  swc1        $f0, 0x2B64($s0)
    ctx->pc = 0x379794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x379798: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x379798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37979c: 0x0  nop
    ctx->pc = 0x37979cu;
    // NOP
label_3797a0:
    // 0x3797a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3797a4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3797a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3797a8: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3797a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3797ac: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3797acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3797b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3797b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3797b4: 0x24c61c30  addiu       $a2, $a2, 0x1C30
    ctx->pc = 0x3797b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7216));
    // 0x3797b8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3797b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3797bc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3797BCu;
    SET_GPR_U32(ctx, 31, 0x3797C4u);
    ctx->pc = 0x3797C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797BCu;
    // 0x3797c0: 0x244506c0  addiu       $a1, $v0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3797BCu, 0x3797C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797C4u;
label_3797c4:
    // 0x3797c4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3797c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3797c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3797c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3797cc: 0x26052b50  addiu       $a1, $s0, 0x2B50
    ctx->pc = 0x3797ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x3797d0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3797d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3797d4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3797D4u;
    SET_GPR_U32(ctx, 31, 0x3797DCu);
    ctx->pc = 0x3797D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797D4u;
    // 0x3797d8: 0x244606f0  addiu       $a2, $v0, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3797D4u, 0x3797DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797DCu;
label_3797dc:
    // 0x3797dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3797dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3797e0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3797E0u;
    SET_GPR_U32(ctx, 31, 0x3797E8u);
    ctx->pc = 0x3797E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797E0u;
    // 0x3797e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3797E0u, 0x3797E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797E8u;
label_3797e8:
    // 0x3797e8: 0xc6002b60  lwc1        $f0, 0x2B60($s0)
    ctx->pc = 0x3797e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3797ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3797ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3797f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3797f4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3797f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3797f8: 0x26082b50  addiu       $t0, $s0, 0x2B50
    ctx->pc = 0x3797f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x3797fc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3797fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x379800: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x379800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379804: 0xc6002b60  lwc1        $f0, 0x2B60($s0)
    ctx->pc = 0x379804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x379808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37980c: 0xe6002b60  swc1        $f0, 0x2B60($s0)
    ctx->pc = 0x37980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11104), bits); }
    // 0x379810: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x379810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x379814: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x379814u;
    SET_GPR_U32(ctx, 31, 0x37981Cu);
    ctx->pc = 0x379818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379814u;
    // 0x379818: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1B90u, 0x379814u, 0x37981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37981Cu;
label_37981c:
    // 0x37981c: 0x26042b50  addiu       $a0, $s0, 0x2B50
    ctx->pc = 0x37981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x379820: 0x26062b40  addiu       $a2, $s0, 0x2B40
    ctx->pc = 0x379820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x379824: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x379824u;
    SET_GPR_U32(ctx, 31, 0x37982Cu);
    ctx->pc = 0x379828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379824u;
    // 0x379828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x379824u, 0x37982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37982Cu;
label_37982c:
    // 0x37982c: 0x82032b68  lb          $v1, 0x2B68($s0)
    ctx->pc = 0x37982cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11112)));
    // 0x379830: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379834: 0xa2032b68  sb          $v1, 0x2B68($s0)
    ctx->pc = 0x379834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 3));
label_379838:
    // 0x379838: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x37983c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x37983Cu;
    {
        const bool branch_taken_0x37983c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37983c) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x379844u;
    // 0x379844: 0x82032b68  lb          $v1, 0x2B68($s0)
    ctx->pc = 0x379844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11112)));
    // 0x379848: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x379848u;
    {
        const bool branch_taken_0x379848 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379848) {
            ctx->pc = 0x3798D8u;
            goto label_3798d8;
        }
    }
    ctx->pc = 0x379850u;
    // 0x379850: 0x82032b89  lb          $v1, 0x2B89($s0)
    ctx->pc = 0x379850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11145)));
    // 0x379854: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379858: 0xa2032b89  sb          $v1, 0x2B89($s0)
    ctx->pc = 0x379858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11145), (uint8_t)GPR_U32(ctx, 3));
    // 0x37985c: 0x92032b88  lbu         $v1, 0x2B88($s0)
    ctx->pc = 0x37985cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x379860: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x379860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x379864: 0xa2032b88  sb          $v1, 0x2B88($s0)
    ctx->pc = 0x379864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11144), (uint8_t)GPR_U32(ctx, 3));
    // 0x379868: 0x86032b8a  lh          $v1, 0x2B8A($s0)
    ctx->pc = 0x379868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11146)));
    // 0x37986c: 0xa6032b86  sh          $v1, 0x2B86($s0)
    ctx->pc = 0x37986cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11142), (uint16_t)GPR_U32(ctx, 3));
    // 0x379870: 0x82032b89  lb          $v1, 0x2B89($s0)
    ctx->pc = 0x379870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11145)));
    // 0x379874: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x379874u;
    {
        const bool branch_taken_0x379874 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379874) {
            ctx->pc = 0x3798A8u;
            goto label_3798a8;
        }
    }
    ctx->pc = 0x37987Cu;
    // 0x37987c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x37987cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379880: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x379884: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x379884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379888: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37988c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x37988cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x379890: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x379890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379894: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x379894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x379898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x379898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37989c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x37989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3798a0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3798A0u;
    {
        const bool branch_taken_0x3798a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3798A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798A0u;
        // 0x3798a4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798a0) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x3798A8u;
label_3798a8:
    // 0x3798a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3798a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3798ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3798acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3798b0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3798b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3798b4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3798b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3798b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3798b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3798bc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3798bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3798c0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3798c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3798c4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3798c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3798c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3798c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3798cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3798CCu;
    {
        const bool branch_taken_0x3798cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3798D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798CCu;
        // 0x3798d0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798cc) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x3798D4u;
    // 0x3798d4: 0x0  nop
    ctx->pc = 0x3798d4u;
    // NOP
label_3798d8:
    // 0x3798d8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3798d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3798dc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3798dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3798e0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x3798e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3798e4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3798e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3798e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3798e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3798ec: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3798ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3798f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3798f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3798f4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3798f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3798f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3798f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3798fc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3798fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x379900: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x379900u;
    {
        const bool branch_taken_0x379900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379900u;
        // 0x379904: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379900) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x379908u;
label_379908:
    // 0x379908: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x379908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37990c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37990cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379910:
    // 0x379910: 0x86032b86  lh          $v1, 0x2B86($s0)
    ctx->pc = 0x379910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11142)));
    // 0x379914: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379914u;
    {
        const bool branch_taken_0x379914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379914) {
            ctx->pc = 0x379928u;
            goto label_379928;
        }
    }
    ctx->pc = 0x37991Cu;
    // 0x37991c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379920: 0xa6032b86  sh          $v1, 0x2B86($s0)
    ctx->pc = 0x379920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11142), (uint16_t)GPR_U32(ctx, 3));
    // 0x379924: 0x0  nop
    ctx->pc = 0x379924u;
    // NOP
label_379928:
    // 0x379928: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x37992c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37992Cu;
    {
        const bool branch_taken_0x37992c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37992c) {
            ctx->pc = 0x379940u;
            goto label_379940;
        }
    }
    ctx->pc = 0x379934u;
    // 0x379934: 0x86032b86  lh          $v1, 0x2B86($s0)
    ctx->pc = 0x379934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11142)));
    // 0x379938: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x379938u;
    {
        const bool branch_taken_0x379938 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379938) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x379940u;
label_379940:
    // 0x379940: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x379940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379944: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x379944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379948: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x379948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x37994c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x37994cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379950: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379954: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x379954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379958: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37995c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x37995cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379964: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x379964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x379968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x379968u;
    {
        const bool branch_taken_0x379968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379968u;
        // 0x37996c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379968) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x379970u;
label_379970:
    // 0x379970: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x379970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x379974: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x379974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379978:
    // 0x379978: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x37997c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37997Cu;
    {
        const bool branch_taken_0x37997c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37997Cu;
        // 0x379980: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37997c) {
            ctx->pc = 0x379988u;
            goto label_379988;
        }
    }
    ctx->pc = 0x379984u;
    // 0x379984: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x379984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_379988:
    // 0x379988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37998c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37998cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379990: 0x3e00008  jr          $ra
    ctx->pc = 0x379990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379990u;
        // 0x379994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379998u;
}
