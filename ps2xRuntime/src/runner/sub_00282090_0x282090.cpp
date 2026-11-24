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

// Function: sub_00282090
// Address: 0x282090 - 0x2823e8
void sub_00282090_0x282090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282090_0x282090");
#endif

    switch (ctx->pc) {
        case 0x2820ecu: goto label_2820ec;
        case 0x28213cu: goto label_28213c;
        case 0x2821e8u: goto label_2821e8;
        case 0x282330u: goto label_282330;
        case 0x282398u: goto label_282398;
        case 0x2823d4u: goto label_2823d4;
        default: break;
    }

    ctx->pc = 0x282090u;

    // 0x282090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282094: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28209c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x28209cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2820a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2820a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2820a4: 0x8786817c  lh          $a2, -0x7E84($gp)
    ctx->pc = 0x2820a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x2820a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2820a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820ac: 0x9385817e  lbu         $a1, -0x7E82($gp)
    ctx->pc = 0x2820acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934910)));
    // 0x2820b0: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x2820b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2820b4: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x2820b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2820b8: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2820b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2820bc: 0x1083009e  beq         $a0, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x2820BCu;
    {
        const bool branch_taken_0x2820bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2820C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820BCu;
        // 0x2820c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820bc) {
            ctx->pc = 0x282338u;
            goto label_282338;
        }
    }
    ctx->pc = 0x2820C4u;
    // 0x2820c4: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x2821D0u;
            goto label_2821d0;
        }
    }
    ctx->pc = 0x2820CCu;
    // 0x2820cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2820CCu;
    {
        const bool branch_taken_0x2820cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820cc) {
            ctx->pc = 0x2820E0u;
            goto label_2820e0;
        }
    }
    ctx->pc = 0x2820D4u;
    // 0x2820d4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2820D4u;
    {
        const bool branch_taken_0x2820d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820d4) {
            ctx->pc = 0x2823B0u;
            goto label_2823b0;
        }
    }
    ctx->pc = 0x2820DCu;
    // 0x2820dc: 0x0  nop
    ctx->pc = 0x2820dcu;
    // NOP
label_2820e0:
    // 0x2820e0: 0xc60d07a8  lwc1        $f13, 0x7A8($s0)
    ctx->pc = 0x2820e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2820e4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2820E4u;
    SET_GPR_U32(ctx, 31, 0x2820ECu);
    ctx->pc = 0x2820E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820E4u;
    // 0x2820e8: 0xc60c07a0  lwc1        $f12, 0x7A0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2820E4u, 0x2820ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820ECu;
label_2820ec:
    // 0x2820ec: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2820ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2820f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2820f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2820f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2820f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2820f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2820f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2820fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2820fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282100: 0x0  nop
    ctx->pc = 0x282100u;
    // NOP
    // 0x282104: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x282104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x282108: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x282108u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28210c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28210cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x282110: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x282110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x282114: 0x0  nop
    ctx->pc = 0x282114u;
    // NOP
    // 0x282118: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x282118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28211c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28211cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x282120: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x282120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x282124: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x282124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x282128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x282128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28212c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x28212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x282130: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x282130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x282134: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x282134u;
    SET_GPR_U32(ctx, 31, 0x28213Cu);
    ctx->pc = 0x282138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282134u;
    // 0x282138: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x282134u, 0x28213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28213Cu;
label_28213c:
    // 0x28213c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x28213cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x282140: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x282140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x282144: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x282144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x282148: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28214c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x282150: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x282150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x282154: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x282154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x282158: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x28215c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x28215cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282160: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282168: 0x0  nop
    ctx->pc = 0x282168u;
    // NOP
    // 0x28216c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28216cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282174: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282174u;
    {
        const bool branch_taken_0x282174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282174) {
            ctx->pc = 0x28218Cu;
            goto label_28218c;
        }
    }
    ctx->pc = 0x28217Cu;
    // 0x28217c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28217cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282180: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282184u;
    {
        const bool branch_taken_0x282184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282184u;
        // 0x282188: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282184) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x28218Cu;
label_28218c:
    // 0x28218c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28218cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282190: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282194: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282198: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28219c: 0x0  nop
    ctx->pc = 0x28219cu;
    // NOP
    // 0x2821a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2821a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2821a4: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x2821a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2821a8:
    // 0x2821a8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2821a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2821ac: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2821acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821b0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2821b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2821b4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2821b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2821bc: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2821bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2821c0: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2821c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821c4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2821c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2821c8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x2821c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x2821cc: 0x0  nop
    ctx->pc = 0x2821ccu;
    // NOP
label_2821d0:
    // 0x2821d0: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x2821d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2821d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2821d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2821dc: 0x9045002c  lbu         $a1, 0x2C($v0)
    ctx->pc = 0x2821dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2821e0: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x2821E0u;
    SET_GPR_U32(ctx, 31, 0x2821E8u);
    ctx->pc = 0x2821E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821E0u;
    // 0x2821e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x2821E0u, 0x2821E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821E8u;
label_2821e8:
    // 0x2821e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2821e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2821ec: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x2821ECu;
    {
        const bool branch_taken_0x2821ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821ec) {
            ctx->pc = 0x2823B0u;
            goto label_2823b0;
        }
    }
    ctx->pc = 0x2821F4u;
    // 0x2821f4: 0x92030783  lbu         $v1, 0x783($s0)
    ctx->pc = 0x2821f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1923)));
    // 0x2821f8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2821F8u;
    {
        const bool branch_taken_0x2821f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821f8) {
            ctx->pc = 0x2822A0u;
            goto label_2822a0;
        }
    }
    ctx->pc = 0x282200u;
    // 0x282200: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x282200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x282204: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x282204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282208: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x282208u;
    {
        const bool branch_taken_0x282208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282208) {
            ctx->pc = 0x2822A0u;
            goto label_2822a0;
        }
    }
    ctx->pc = 0x282210u;
    // 0x282210: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x282210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282214: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x282214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x282218: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x282218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28221c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x28221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x282220: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x282220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x282224: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x282224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x282228: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28222c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28222cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282234: 0x0  nop
    ctx->pc = 0x282234u;
    // NOP
    // 0x282238: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28223c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28223cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282240: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x282240u;
    {
        const bool branch_taken_0x282240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282240) {
            ctx->pc = 0x282258u;
            goto label_282258;
        }
    }
    ctx->pc = 0x282248u;
    // 0x282248: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28224c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x28224cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282250u;
    {
        const bool branch_taken_0x282250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282250u;
        // 0x282254: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282250) {
            ctx->pc = 0x282274u;
            goto label_282274;
        }
    }
    ctx->pc = 0x282258u;
label_282258:
    // 0x282258: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282258u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28225c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x282260: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282264: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x282264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x282268: 0x0  nop
    ctx->pc = 0x282268u;
    // NOP
    // 0x28226c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x28226cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x282270: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x282270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_282274:
    // 0x282274: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x282274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x282278: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x282278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28227c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28227cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x282280: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x282280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x282284: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x282284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x282288: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x282288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x28228c: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x28228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x282290: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x282290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x282294: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x282294u;
    {
        const bool branch_taken_0x282294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282294u;
        // 0x282298: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282294) {
            ctx->pc = 0x2823B0u;
            goto label_2823b0;
        }
    }
    ctx->pc = 0x28229Cu;
    // 0x28229c: 0x0  nop
    ctx->pc = 0x28229cu;
    // NOP
label_2822a0:
    // 0x2822a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2822a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2822a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2822a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2822a8: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x2822a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2822ac: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2822acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2822b0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2822b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2822b4: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x2822b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x2822b8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2822b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2822bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2822bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2822c0: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2822c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2822c4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2822c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x2822c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2822c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2822cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2822d0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x2822d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x2822d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2822d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2822d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2822dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2822dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2822e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2822e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2822e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2822e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2822e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2822ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2822ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2822f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2822f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2822f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2822F4u;
    {
        const bool branch_taken_0x2822f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2822f4) {
            ctx->pc = 0x28230Cu;
            goto label_28230c;
        }
    }
    ctx->pc = 0x2822FCu;
    // 0x2822fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2822fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282300: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282304u;
    {
        const bool branch_taken_0x282304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282304u;
        // 0x282308: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282304) {
            ctx->pc = 0x282328u;
            goto label_282328;
        }
    }
    ctx->pc = 0x28230Cu;
label_28230c:
    // 0x28230c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28230cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282314: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282318: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28231c: 0x0  nop
    ctx->pc = 0x28231cu;
    // NOP
    // 0x282320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282324: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282328:
    // 0x282328: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282328u;
    SET_GPR_U32(ctx, 31, 0x282330u);
    ctx->pc = 0x28232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282328u;
    // 0x28232c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282328u, 0x282330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282330u;
label_282330:
    // 0x282330: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x282330u;
    {
        const bool branch_taken_0x282330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282330) {
            ctx->pc = 0x2823B0u;
            goto label_2823b0;
        }
    }
    ctx->pc = 0x282338u;
label_282338:
    // 0x282338: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x282338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x28233c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28233Cu;
    {
        const bool branch_taken_0x28233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28233c) {
            ctx->pc = 0x282350u;
            goto label_282350;
        }
    }
    ctx->pc = 0x282344u;
    // 0x282344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x282344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x282348: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x282348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
    // 0x28234c: 0x0  nop
    ctx->pc = 0x28234cu;
    // NOP
label_282350:
    // 0x282350: 0x920a0002  lbu         $t2, 0x2($s0)
    ctx->pc = 0x282350u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x282354: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x282354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x282358: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x282358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x28235c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28235cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282360: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x282360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x282364: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x282364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x282368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28236c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28236cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282370: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x282374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282378: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28237c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x28237cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x282380: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x282384: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x282388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28238c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282390: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x282390u;
    SET_GPR_U32(ctx, 31, 0x282398u);
    ctx->pc = 0x282394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282390u;
    // 0x282394: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x282390u, 0x282398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282398u;
label_282398:
    // 0x282398: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x28239c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28239Cu;
    {
        const bool branch_taken_0x28239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28239Cu;
        // 0x2823a0: 0x260307a0  addiu       $v1, $s0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28239c) {
            ctx->pc = 0x2823B0u;
            goto label_2823b0;
        }
    }
    ctx->pc = 0x2823A4u;
    // 0x2823a4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2823a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2823a8: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x2823a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x2823ac: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2823acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2823b0:
    // 0x2823b0: 0x8e0306bc  lw          $v1, 0x6BC($s0)
    ctx->pc = 0x2823b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1724)));
    // 0x2823b4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2823b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2823b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2823B8u;
    {
        const bool branch_taken_0x2823b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2823b8) {
            ctx->pc = 0x2823D8u;
            goto label_2823d8;
        }
    }
    ctx->pc = 0x2823C0u;
    // 0x2823c0: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2823c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2823c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2823C4u;
    {
        const bool branch_taken_0x2823c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823C4u;
        // 0x2823c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823c4) {
            ctx->pc = 0x2823D8u;
            goto label_2823d8;
        }
    }
    ctx->pc = 0x2823CCu;
    // 0x2823cc: 0xc0a0644  jal         func_281910
    ctx->pc = 0x2823CCu;
    SET_GPR_U32(ctx, 31, 0x2823D4u);
    ctx->pc = 0x2823D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823CCu;
    // 0x2823d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281910u, 0x2823CCu, 0x2823D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823D4u;
label_2823d4:
    // 0x2823d4: 0x0  nop
    ctx->pc = 0x2823d4u;
    // NOP
label_2823d8:
    // 0x2823d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2823d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2823dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2823dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2823e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2823E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2823E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823E0u;
        // 0x2823e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2823E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2823E8u;
}
