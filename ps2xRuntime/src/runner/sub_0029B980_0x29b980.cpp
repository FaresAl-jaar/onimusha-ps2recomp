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

// Function: sub_0029B980
// Address: 0x29b980 - 0x29c014
void sub_0029B980_0x29b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B980_0x29b980");
#endif

    switch (ctx->pc) {
        case 0x29ba5cu: goto label_29ba5c;
        case 0x29baf4u: goto label_29baf4;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29be84u: goto label_29be84;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bf0cu: goto label_29bf0c;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bffcu: goto label_29bffc;
        default: break;
    }

    ctx->pc = 0x29b980u;

    // 0x29b980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b994: 0xa0800171  sb          $zero, 0x171($a0)
    ctx->pc = 0x29b994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 369), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b998: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b99c: 0x10800198  beqz        $a0, . + 4 + (0x198 << 2)
    ctx->pc = 0x29B99Cu;
    {
        const bool branch_taken_0x29b99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b99c) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29B9A4u;
    // 0x29b9a4: 0x92250163  lbu         $a1, 0x163($s1)
    ctx->pc = 0x29b9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 355)));
    // 0x29b9a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b9ac: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29B9ACu;
    {
        const bool branch_taken_0x29b9ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9ACu;
        // 0x29b9b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9ac) {
            ctx->pc = 0x29B9E0u;
            goto label_29b9e0;
        }
    }
    ctx->pc = 0x29B9B4u;
    // 0x29b9b4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B9B4u;
    {
        const bool branch_taken_0x29b9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29b9b4) {
            ctx->pc = 0x29B9C8u;
            goto label_29b9c8;
        }
    }
    ctx->pc = 0x29B9BCu;
    // 0x29b9bc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x29B9BCu;
    {
        const bool branch_taken_0x29b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9bc) {
            ctx->pc = 0x29BAD0u;
            goto label_29bad0;
        }
    }
    ctx->pc = 0x29B9C4u;
    // 0x29b9c4: 0x0  nop
    ctx->pc = 0x29b9c4u;
    // NOP
label_29b9c8:
    // 0x29b9c8: 0x92230162  lbu         $v1, 0x162($s1)
    ctx->pc = 0x29b9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x29b9cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B9CCu;
    {
        const bool branch_taken_0x29b9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9CCu;
        // 0x29b9d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9cc) {
            ctx->pc = 0x29B9D8u;
            goto label_29b9d8;
        }
    }
    ctx->pc = 0x29B9D4u;
    // 0x29b9d4: 0xa2230162  sb          $v1, 0x162($s1)
    ctx->pc = 0x29b9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 3));
label_29b9d8:
    // 0x29b9d8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x29B9D8u;
    {
        const bool branch_taken_0x29b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9D8u;
        // 0x29b9dc: 0xa2200163  sb          $zero, 0x163($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 355), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9d8) {
            ctx->pc = 0x29BAD0u;
            goto label_29bad0;
        }
    }
    ctx->pc = 0x29B9E0u;
label_29b9e0:
    // 0x29b9e0: 0x92230162  lbu         $v1, 0x162($s1)
    ctx->pc = 0x29b9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x29b9e4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x29B9E4u;
    {
        const bool branch_taken_0x29b9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9e4) {
            ctx->pc = 0x29BAC8u;
            goto label_29bac8;
        }
    }
    ctx->pc = 0x29B9ECu;
    // 0x29b9ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b9f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29b9f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29b9f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b9f8: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x29b9fc: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x29b9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x29ba00: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29ba04: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29ba04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ba08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ba08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ba0c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29ba0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29ba10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29ba10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29ba14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29ba14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ba18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BA18u;
    {
        const bool branch_taken_0x29ba18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA18u;
        // 0x29ba1c: 0x92260160  lbu         $a2, 0x160($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba18) {
            ctx->pc = 0x29BA30u;
            goto label_29ba30;
        }
    }
    ctx->pc = 0x29BA20u;
    // 0x29ba20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ba20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ba24: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29ba24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29ba28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BA28u;
    {
        const bool branch_taken_0x29ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA28u;
        // 0x29ba2c: 0xc5082b  sltu        $at, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba28) {
            ctx->pc = 0x29BA4Cu;
            goto label_29ba4c;
        }
    }
    ctx->pc = 0x29BA30u;
label_29ba30:
    // 0x29ba30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29ba30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29ba34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29ba38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ba38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ba3c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x29ba3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29ba40: 0x0  nop
    ctx->pc = 0x29ba40u;
    // NOP
    // 0x29ba44: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29ba44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29ba48: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x29ba48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_29ba4c:
    // 0x29ba4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BA4Cu;
    {
        const bool branch_taken_0x29ba4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba4c) {
            ctx->pc = 0x29BA60u;
            goto label_29ba60;
        }
    }
    ctx->pc = 0x29BA54u;
    // 0x29ba54: 0xc0a8680  jal         func_2A1A00
    ctx->pc = 0x29BA54u;
    SET_GPR_U32(ctx, 31, 0x29BA5Cu);
    ctx->pc = 0x2A1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1A00u, 0x29BA54u, 0x29BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA5Cu;
label_29ba5c:
    // 0x29ba5c: 0x0  nop
    ctx->pc = 0x29ba5cu;
    // NOP
label_29ba60:
    // 0x29ba60: 0xa2200162  sb          $zero, 0x162($s1)
    ctx->pc = 0x29ba60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ba64: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ba68: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29ba6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29ba6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29ba70: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x29ba74: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x29ba74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x29ba78: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29ba7c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29ba7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29ba80: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29ba80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ba84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ba84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ba88: 0x0  nop
    ctx->pc = 0x29ba88u;
    // NOP
    // 0x29ba8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29ba8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29ba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29ba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ba94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BA94u;
    {
        const bool branch_taken_0x29ba94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ba94) {
            ctx->pc = 0x29BAACu;
            goto label_29baac;
        }
    }
    ctx->pc = 0x29BA9Cu;
    // 0x29ba9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ba9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29baa0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29baa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29baa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BAA4u;
    {
        const bool branch_taken_0x29baa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAA4u;
        // 0x29baa8: 0xa2240160  sb          $a0, 0x160($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29baa4) {
            ctx->pc = 0x29BAC8u;
            goto label_29bac8;
        }
    }
    ctx->pc = 0x29BAACu;
label_29baac:
    // 0x29baac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29baacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bab0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29bab4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bab8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29babc: 0x0  nop
    ctx->pc = 0x29babcu;
    // NOP
    // 0x29bac0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29bac4: 0xa2240160  sb          $a0, 0x160($s1)
    ctx->pc = 0x29bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
label_29bac8:
    // 0x29bac8: 0xa2200163  sb          $zero, 0x163($s1)
    ctx->pc = 0x29bac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 355), (uint8_t)GPR_U32(ctx, 0));
    // 0x29bacc: 0x0  nop
    ctx->pc = 0x29baccu;
    // NOP
label_29bad0:
    // 0x29bad0: 0x92230162  lbu         $v1, 0x162($s1)
    ctx->pc = 0x29bad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x29bad4: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x29BAD4u;
    {
        const bool branch_taken_0x29bad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAD4u;
        // 0x29bad8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bad4) {
            ctx->pc = 0x29BE30u;
            goto label_29be30;
        }
    }
    ctx->pc = 0x29BADCu;
    // 0x29badc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x29badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29bae0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x29bae4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29bae8: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x29baec: 0xc041442  jal         func_105108
    ctx->pc = 0x29BAECu;
    SET_GPR_U32(ctx, 31, 0x29BAF4u);
    ctx->pc = 0x29BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BAECu;
    // 0x29baf0: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x29BAECu, 0x29BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAF4u;
label_29baf4:
    // 0x29baf4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29baf8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29bafc: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x29bafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x29bb00: 0x92250162  lbu         $a1, 0x162($s1)
    ctx->pc = 0x29bb00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x29bb04: 0x10a3005a  beq         $a1, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x29BB04u;
    {
        const bool branch_taken_0x29bb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB04u;
        // 0x29bb08: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb04) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB0Cu;
    // 0x29bb0c: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x29BB0Cu;
    {
        const bool branch_taken_0x29bb0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29bb0c) {
            ctx->pc = 0x29BBE0u;
            goto label_29bbe0;
        }
    }
    ctx->pc = 0x29BB14u;
    // 0x29bb14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29bb18: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29BB18u;
    {
        const bool branch_taken_0x29bb18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB18u;
        // 0x29bb1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb18) {
            ctx->pc = 0x29BB78u;
            goto label_29bb78;
        }
    }
    ctx->pc = 0x29BB20u;
    // 0x29bb20: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x29BB20u;
    {
        const bool branch_taken_0x29bb20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x29BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB20u;
        // 0x29bb24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb20) {
            ctx->pc = 0x29BB58u;
            goto label_29bb58;
        }
    }
    ctx->pc = 0x29BB28u;
    // 0x29bb28: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BB28u;
    {
        const bool branch_taken_0x29bb28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29bb28) {
            ctx->pc = 0x29BB38u;
            goto label_29bb38;
        }
    }
    ctx->pc = 0x29BB30u;
    // 0x29bb30: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x29BB30u;
    {
        const bool branch_taken_0x29bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb30) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB38u;
label_29bb38:
    // 0x29bb38: 0xc621015c  lwc1        $f1, 0x15C($s1)
    ctx->pc = 0x29bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb3c: 0xc6200154  lwc1        $f0, 0x154($s1)
    ctx->pc = 0x29bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bb40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb44: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x29BB44u;
    {
        const bool branch_taken_0x29bb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bb44) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB4Cu;
    // 0x29bb4c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x29BB4Cu;
    {
        const bool branch_taken_0x29bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB4Cu;
        // 0x29bb50: 0xa2240162  sb          $a0, 0x162($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb4c) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB54u;
    // 0x29bb54: 0x0  nop
    ctx->pc = 0x29bb54u;
    // NOP
label_29bb58:
    // 0x29bb58: 0xc621015c  lwc1        $f1, 0x15C($s1)
    ctx->pc = 0x29bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bb5c: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x29bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29bb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb64: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x29BB64u;
    {
        const bool branch_taken_0x29bb64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB64u;
        // 0x29bb68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb64) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB6Cu;
    // 0x29bb6c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x29BB6Cu;
    {
        const bool branch_taken_0x29bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB6Cu;
        // 0x29bb70: 0xa2230162  sb          $v1, 0x162($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb6c) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BB74u;
    // 0x29bb74: 0x0  nop
    ctx->pc = 0x29bb74u;
    // NOP
label_29bb78:
    // 0x29bb78: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29bb7c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bb80: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x29bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x29bb84: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29bb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29bb88: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x29bb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x29bb8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29bb8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bb90: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29bb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bb98: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29bb98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29bb9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29bb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29bba0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29bba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bba4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BBA4u;
    {
        const bool branch_taken_0x29bba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bba4) {
            ctx->pc = 0x29BBBCu;
            goto label_29bbbc;
        }
    }
    ctx->pc = 0x29BBACu;
    // 0x29bbac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bbacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bbb0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bbb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bbb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BBB4u;
    {
        const bool branch_taken_0x29bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBB4u;
        // 0x29bbb8: 0xa2240160  sb          $a0, 0x160($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbb4) {
            ctx->pc = 0x29BBD8u;
            goto label_29bbd8;
        }
    }
    ctx->pc = 0x29BBBCu;
label_29bbbc:
    // 0x29bbbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29bbbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bbc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29bbc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bbc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bbc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bbcc: 0x0  nop
    ctx->pc = 0x29bbccu;
    // NOP
    // 0x29bbd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29bbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29bbd4: 0xa2240160  sb          $a0, 0x160($s1)
    ctx->pc = 0x29bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
label_29bbd8:
    // 0x29bbd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29BBD8u;
    {
        const bool branch_taken_0x29bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bbd8) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BBE0u;
label_29bbe0:
    // 0x29bbe0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x29bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x29bbe4: 0xc621015c  lwc1        $f1, 0x15C($s1)
    ctx->pc = 0x29bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bbe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bbec: 0x0  nop
    ctx->pc = 0x29bbecu;
    // NOP
    // 0x29bbf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29bbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bbf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x29BBF4u;
    {
        const bool branch_taken_0x29bbf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BBF4u;
        // 0x29bbf8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bbf4) {
            ctx->pc = 0x29BC08u;
            goto label_29bc08;
        }
    }
    ctx->pc = 0x29BBFCu;
    // 0x29bbfc: 0xa2230162  sb          $v1, 0x162($s1)
    ctx->pc = 0x29bbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 3));
    // 0x29bc00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29BC00u;
    {
        const bool branch_taken_0x29bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC00u;
        // 0x29bc04: 0xa2200160  sb          $zero, 0x160($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc00) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BC08u;
label_29bc08:
    // 0x29bc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29bc0c: 0xa2230162  sb          $v1, 0x162($s1)
    ctx->pc = 0x29bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 354), (uint8_t)GPR_U32(ctx, 3));
    // 0x29bc10: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x29bc14: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bc18: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29bc1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29bc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29bc20: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x29bc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x29bc24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29bc24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bc28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29bc2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29bc30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29bc34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29bc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29bc38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29bc38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bc3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BC3Cu;
    {
        const bool branch_taken_0x29bc3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bc3c) {
            ctx->pc = 0x29BC54u;
            goto label_29bc54;
        }
    }
    ctx->pc = 0x29BC44u;
    // 0x29bc44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bc44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bc48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bc48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bc4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BC4Cu;
    {
        const bool branch_taken_0x29bc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC4Cu;
        // 0x29bc50: 0xa2240160  sb          $a0, 0x160($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc4c) {
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BC54u;
label_29bc54:
    // 0x29bc54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29bc54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bc58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29bc5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bc5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bc60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bc64: 0x0  nop
    ctx->pc = 0x29bc64u;
    // NOP
    // 0x29bc68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29bc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29bc6c: 0xa2240160  sb          $a0, 0x160($s1)
    ctx->pc = 0x29bc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 4));
label_29bc70:
    // 0x29bc70: 0x92240162  lbu         $a0, 0x162($s1)
    ctx->pc = 0x29bc70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 354)));
    // 0x29bc74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29bc78: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x29BC78u;
    {
        const bool branch_taken_0x29bc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC78u;
        // 0x29bc7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc78) {
            ctx->pc = 0x29BD20u;
            goto label_29bd20;
        }
    }
    ctx->pc = 0x29BC80u;
    // 0x29bc80: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BC80u;
    {
        const bool branch_taken_0x29bc80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29bc80) {
            ctx->pc = 0x29BCA0u;
            goto label_29bca0;
        }
    }
    ctx->pc = 0x29BC88u;
    // 0x29bc88: 0x92230160  lbu         $v1, 0x160($s1)
    ctx->pc = 0x29bc88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x29bc8c: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x29BC8Cu;
    {
        const bool branch_taken_0x29bc8c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x29bc8c) {
            ctx->pc = 0x29BD20u;
            goto label_29bd20;
        }
    }
    ctx->pc = 0x29BC94u;
    // 0x29bc94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29bc98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x29BC98u;
    {
        const bool branch_taken_0x29bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BC98u;
        // 0x29bc9c: 0xa2230160  sb          $v1, 0x160($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc98) {
            ctx->pc = 0x29BD20u;
            goto label_29bd20;
        }
    }
    ctx->pc = 0x29BCA0u;
label_29bca0:
    // 0x29bca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29bca4: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x29BCA4u;
    {
        const bool branch_taken_0x29bca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29bca4) {
            ctx->pc = 0x29BD20u;
            goto label_29bd20;
        }
    }
    ctx->pc = 0x29BCACu;
    // 0x29bcac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bcb0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29bcb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29bcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29bcb8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x29bcbc: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x29bcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x29bcc0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29bcc4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29bcc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bcc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bccc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29bcccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29bcd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29bcd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29bcd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29bcd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bcd8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BCD8u;
    {
        const bool branch_taken_0x29bcd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCD8u;
        // 0x29bcdc: 0x92250160  lbu         $a1, 0x160($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcd8) {
            ctx->pc = 0x29BCF0u;
            goto label_29bcf0;
        }
    }
    ctx->pc = 0x29BCE0u;
    // 0x29bce0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bce4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BCE8u;
    {
        const bool branch_taken_0x29bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCE8u;
        // 0x29bcec: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bce8) {
            ctx->pc = 0x29BD0Cu;
            goto label_29bd0c;
        }
    }
    ctx->pc = 0x29BCF0u;
label_29bcf0:
    // 0x29bcf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29bcf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bcf4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29bcf8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bcf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bcfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bcfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bd00: 0x0  nop
    ctx->pc = 0x29bd00u;
    // NOP
    // 0x29bd04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29bd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29bd08: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x29bd08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29bd0c:
    // 0x29bd0c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BD0Cu;
    {
        const bool branch_taken_0x29bd0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd0c) {
            ctx->pc = 0x29BD20u;
            goto label_29bd20;
        }
    }
    ctx->pc = 0x29BD14u;
    // 0x29bd14: 0x92230160  lbu         $v1, 0x160($s1)
    ctx->pc = 0x29bd14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x29bd18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29bd1c: 0xa2230160  sb          $v1, 0x160($s1)
    ctx->pc = 0x29bd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 352), (uint8_t)GPR_U32(ctx, 3));
label_29bd20:
    // 0x29bd20: 0x92250160  lbu         $a1, 0x160($s1)
    ctx->pc = 0x29bd20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x29bd24: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x29BD24u;
    {
        const bool branch_taken_0x29bd24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd24) {
            ctx->pc = 0x29BE28u;
            goto label_29be28;
        }
    }
    ctx->pc = 0x29BD2Cu;
    // 0x29bd2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bd30: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29bd34: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29bd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29bd38: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x29bd3c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x29bd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x29bd40: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29bd44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29bd44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29bd48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29bd48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29bd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd50: 0x0  nop
    ctx->pc = 0x29bd50u;
    // NOP
    // 0x29bd54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29bd54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29bd58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29bd58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bd5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29BD5Cu;
    {
        const bool branch_taken_0x29bd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bd5c) {
            ctx->pc = 0x29BD74u;
            goto label_29bd74;
        }
    }
    ctx->pc = 0x29BD64u;
    // 0x29bd64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bd64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bd68: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bd68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bd6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BD6Cu;
    {
        const bool branch_taken_0x29bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD6Cu;
        // 0x29bd70: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd6c) {
            ctx->pc = 0x29BD90u;
            goto label_29bd90;
        }
    }
    ctx->pc = 0x29BD74u;
label_29bd74:
    // 0x29bd74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29bd74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bd78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29bd7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29bd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29bd80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x29bd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29bd84: 0x0  nop
    ctx->pc = 0x29bd84u;
    // NOP
    // 0x29bd88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29bd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29bd8c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x29bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_29bd90:
    // 0x29bd90: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x29BD90u;
    {
        const bool branch_taken_0x29bd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29bd90) {
            ctx->pc = 0x29BDD0u;
            goto label_29bdd0;
        }
    }
    ctx->pc = 0x29BD98u;
    // 0x29bd98: 0x92230161  lbu         $v1, 0x161($s1)
    ctx->pc = 0x29bd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 353)));
    // 0x29bd9c: 0x1064001e  beq         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29BD9Cu;
    {
        const bool branch_taken_0x29bd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29bd9c) {
            ctx->pc = 0x29BE18u;
            goto label_29be18;
        }
    }
    ctx->pc = 0x29BDA4u;
    // 0x29bda4: 0xc0a8680  jal         func_2A1A00
    ctx->pc = 0x29BDA4u;
    SET_GPR_U32(ctx, 31, 0x29BDACu);
    ctx->pc = 0x29BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDA4u;
    // 0x29bda8: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1A00u, 0x29BDA4u, 0x29BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDACu;
label_29bdac:
    // 0x29bdac: 0xc040274  jal         func_1009D0
    ctx->pc = 0x29BDACu;
    SET_GPR_U32(ctx, 31, 0x29BDB4u);
    ctx->pc = 0x29BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDACu;
    // 0x29bdb0: 0x26240164  addiu       $a0, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x29BDACu, 0x29BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDB4u;
label_29bdb4:
    // 0x29bdb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29BDB4u;
    {
        const bool branch_taken_0x29bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDB4u;
        // 0x29bdb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bdb4) {
            ctx->pc = 0x29BE18u;
            goto label_29be18;
        }
    }
    ctx->pc = 0x29BDBCu;
    // 0x29bdbc: 0xc040250  jal         func_100940
    ctx->pc = 0x29BDBCu;
    SET_GPR_U32(ctx, 31, 0x29BDC4u);
    ctx->pc = 0x29BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDBCu;
    // 0x29bdc0: 0x26390164  addiu       $t9, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x29BDBCu, 0x29BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDC4u;
label_29bdc4:
    // 0x29bdc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29BDC4u;
    {
        const bool branch_taken_0x29bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bdc4) {
            ctx->pc = 0x29BE18u;
            goto label_29be18;
        }
    }
    ctx->pc = 0x29BDCCu;
    // 0x29bdcc: 0x0  nop
    ctx->pc = 0x29bdccu;
    // NOP
label_29bdd0:
    // 0x29bdd0: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x29bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x29bdd4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x29bdd4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x29bdd8: 0x0  nop
    ctx->pc = 0x29bdd8u;
    // NOP
    // 0x29bddc: 0x0  nop
    ctx->pc = 0x29bddcu;
    // NOP
    // 0x29bde0: 0x1012  mflo        $v0
    ctx->pc = 0x29bde0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29bde4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29bde8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29bdec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bdf0: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x29BDF0u;
    SET_GPR_U32(ctx, 31, 0x29BDF8u);
    ctx->pc = 0x29BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDF0u;
    // 0x29bdf4: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x29BDF0u, 0x29BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDF8u;
label_29bdf8:
    // 0x29bdf8: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x29bdf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x29bdfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29be00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BE00u;
    {
        const bool branch_taken_0x29be00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be00) {
            ctx->pc = 0x29BE18u;
            goto label_29be18;
        }
    }
    ctx->pc = 0x29BE08u;
    // 0x29be08: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x29be08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x29be0c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x29be0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x29be10: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x29be10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x29be14: 0x0  nop
    ctx->pc = 0x29be14u;
    // NOP
label_29be18:
    // 0x29be18: 0x92230160  lbu         $v1, 0x160($s1)
    ctx->pc = 0x29be18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x29be1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29BE1Cu;
    {
        const bool branch_taken_0x29be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE1Cu;
        // 0x29be20: 0xa2230161  sb          $v1, 0x161($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 353), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be1c) {
            ctx->pc = 0x29BE30u;
            goto label_29be30;
        }
    }
    ctx->pc = 0x29BE24u;
    // 0x29be24: 0x0  nop
    ctx->pc = 0x29be24u;
    // NOP
label_29be28:
    // 0x29be28: 0xa2200161  sb          $zero, 0x161($s1)
    ctx->pc = 0x29be28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 353), (uint8_t)GPR_U32(ctx, 0));
    // 0x29be2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29be30:
    // 0x29be30: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x29be30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29be34: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29be34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29be38: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x29BE38u;
    {
        const bool branch_taken_0x29be38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29be38) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BE40u;
    // 0x29be40: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x29BE40u;
    {
        const bool branch_taken_0x29be40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE40u;
        // 0x29be44: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be40) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BE48u;
    // 0x29be48: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x29be48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x29be4c: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x29be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x29be50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29be50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29be54: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29BE54u;
    {
        const bool branch_taken_0x29be54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29be54) {
            ctx->pc = 0x29BEE0u;
            goto label_29bee0;
        }
    }
    ctx->pc = 0x29BE5Cu;
    // 0x29be5c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x29be5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29be60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29be64: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BE64u;
    {
        const bool branch_taken_0x29be64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29be64) {
            ctx->pc = 0x29BE8Cu;
            goto label_29be8c;
        }
    }
    ctx->pc = 0x29BE6Cu;
    // 0x29be6c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x29be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29be70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29be70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be74: 0xde260120  ld          $a2, 0x120($s1)
    ctx->pc = 0x29be74u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x29be78: 0xde270128  ld          $a3, 0x128($s1)
    ctx->pc = 0x29be78u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x29be7c: 0xc0a76ec  jal         func_29DBB0
    ctx->pc = 0x29BE7Cu;
    SET_GPR_U32(ctx, 31, 0x29BE84u);
    ctx->pc = 0x29BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE7Cu;
    // 0x29be80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DBB0u, 0x29BE7Cu, 0x29BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE84u;
label_29be84:
    // 0x29be84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BE84u;
    {
        const bool branch_taken_0x29be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE84u;
        // 0x29be88: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be84) {
            ctx->pc = 0x29BEA8u;
            goto label_29bea8;
        }
    }
    ctx->pc = 0x29BE8Cu;
label_29be8c:
    // 0x29be8c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x29be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29be90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29be90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be94: 0xde260120  ld          $a2, 0x120($s1)
    ctx->pc = 0x29be94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x29be98: 0xde270128  ld          $a3, 0x128($s1)
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x29be9c: 0xc0a7640  jal         func_29D900
    ctx->pc = 0x29BE9Cu;
    SET_GPR_U32(ctx, 31, 0x29BEA4u);
    ctx->pc = 0x29BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE9Cu;
    // 0x29bea0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D900u, 0x29BE9Cu, 0x29BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEA4u;
label_29bea4:
    // 0x29bea4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x29bea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29bea8:
    // 0x29bea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29beac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BEACu;
    {
        const bool branch_taken_0x29beac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29beac) {
            ctx->pc = 0x29BEC0u;
            goto label_29bec0;
        }
    }
    ctx->pc = 0x29BEB4u;
    // 0x29beb4: 0x92230171  lbu         $v1, 0x171($s1)
    ctx->pc = 0x29beb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 369)));
    // 0x29beb8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x29beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x29bebc: 0xa2230171  sb          $v1, 0x171($s1)
    ctx->pc = 0x29bebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 369), (uint8_t)GPR_U32(ctx, 3));
label_29bec0:
    // 0x29bec0: 0x92230123  lbu         $v1, 0x123($s1)
    ctx->pc = 0x29bec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 291)));
    // 0x29bec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BEC4u;
    {
        const bool branch_taken_0x29bec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bec4) {
            ctx->pc = 0x29BED8u;
            goto label_29bed8;
        }
    }
    ctx->pc = 0x29BECCu;
    // 0x29becc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29bed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29BED0u;
    {
        const bool branch_taken_0x29bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BED0u;
        // 0x29bed4: 0xa2230123  sb          $v1, 0x123($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 291), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bed0) {
            ctx->pc = 0x29BEE0u;
            goto label_29bee0;
        }
    }
    ctx->pc = 0x29BED8u;
label_29bed8:
    // 0x29bed8: 0xfe200120  sd          $zero, 0x120($s1)
    ctx->pc = 0x29bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 288), GPR_U64(ctx, 0));
    // 0x29bedc: 0x0  nop
    ctx->pc = 0x29bedcu;
    // NOP
label_29bee0:
    // 0x29bee0: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x29bee4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BEE4u;
    {
        const bool branch_taken_0x29bee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bee4) {
            ctx->pc = 0x29BEF8u;
            goto label_29bef8;
        }
    }
    ctx->pc = 0x29BEECu;
    // 0x29beec: 0xc067c78  jal         func_19F1E0
    ctx->pc = 0x29BEECu;
    SET_GPR_U32(ctx, 31, 0x29BEF4u);
    ctx->pc = 0x19F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1E0u, 0x29BEECu, 0x29BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEF4u;
label_29bef4:
    // 0x29bef4: 0x0  nop
    ctx->pc = 0x29bef4u;
    // NOP
label_29bef8:
    // 0x29bef8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x29bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x29befc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BEFCu;
    {
        const bool branch_taken_0x29befc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29befc) {
            ctx->pc = 0x29BF10u;
            goto label_29bf10;
        }
    }
    ctx->pc = 0x29BF04u;
    // 0x29bf04: 0xc071234  jal         func_1C48D0
    ctx->pc = 0x29BF04u;
    SET_GPR_U32(ctx, 31, 0x29BF0Cu);
    ctx->pc = 0x1C48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48D0u, 0x29BF04u, 0x29BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF0Cu;
label_29bf0c:
    // 0x29bf0c: 0x0  nop
    ctx->pc = 0x29bf0cu;
    // NOP
label_29bf10:
    // 0x29bf10: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x29bf14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BF14u;
    {
        const bool branch_taken_0x29bf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf14) {
            ctx->pc = 0x29BF28u;
            goto label_29bf28;
        }
    }
    ctx->pc = 0x29BF1Cu;
    // 0x29bf1c: 0xc067f58  jal         func_19FD60
    ctx->pc = 0x29BF1Cu;
    SET_GPR_U32(ctx, 31, 0x29BF24u);
    ctx->pc = 0x19FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FD60u, 0x29BF1Cu, 0x29BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF24u;
label_29bf24:
    // 0x29bf24: 0x0  nop
    ctx->pc = 0x29bf24u;
    // NOP
label_29bf28:
    // 0x29bf28: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x29bf28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29bf2c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29bf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x29bf30: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x29BF30u;
    {
        const bool branch_taken_0x29bf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF30u;
        // 0x29bf34: 0x3c01008e  lui         $at, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf30) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BF38u;
    // 0x29bf38: 0x8c23fd88  lw          $v1, -0x278($at)
    ctx->pc = 0x29bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966664)));
    // 0x29bf3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF3Cu;
    {
        const bool branch_taken_0x29bf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF3Cu;
        // 0x29bf40: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf3c) {
            ctx->pc = 0x29BF58u;
            goto label_29bf58;
        }
    }
    ctx->pc = 0x29BF44u;
    // 0x29bf44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf48: 0xc0c35f8  jal         func_30D7E0
    ctx->pc = 0x29BF48u;
    SET_GPR_U32(ctx, 31, 0x29BF50u);
    ctx->pc = 0x29BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF48u;
    // 0x29bf4c: 0x2484b500  addiu       $a0, $a0, -0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D7E0u, 0x29BF48u, 0x29BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF50u;
label_29bf50:
    // 0x29bf50: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x29BF50u;
    {
        const bool branch_taken_0x29bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf50) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BF58u;
label_29bf58:
    // 0x29bf58: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29bf5c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29BF5Cu;
    {
        const bool branch_taken_0x29bf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf5c) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BF64u;
    // 0x29bf64: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x29bf64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x29bf68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29bf6c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF6Cu;
    {
        const bool branch_taken_0x29bf6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF6Cu;
        // 0x29bf70: 0x3c040084  lui         $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf6c) {
            ctx->pc = 0x29BF88u;
            goto label_29bf88;
        }
    }
    ctx->pc = 0x29BF74u;
    // 0x29bf74: 0xc061dc0  jal         func_187700
    ctx->pc = 0x29BF74u;
    SET_GPR_U32(ctx, 31, 0x29BF7Cu);
    ctx->pc = 0x29BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF74u;
    // 0x29bf78: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x29BF74u, 0x29BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF7Cu;
label_29bf7c:
    // 0x29bf7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29BF7Cu;
    {
        const bool branch_taken_0x29bf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf7c) {
            ctx->pc = 0x29BFC8u;
            goto label_29bfc8;
        }
    }
    ctx->pc = 0x29BF84u;
    // 0x29bf84: 0x0  nop
    ctx->pc = 0x29bf84u;
    // NOP
label_29bf88:
    // 0x29bf88: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x29bf88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x29bf8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bf90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BF90u;
    {
        const bool branch_taken_0x29bf90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF90u;
        // 0x29bf94: 0x3c040084  lui         $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf90) {
            ctx->pc = 0x29BFA8u;
            goto label_29bfa8;
        }
    }
    ctx->pc = 0x29BF98u;
    // 0x29bf98: 0xc061dc0  jal         func_187700
    ctx->pc = 0x29BF98u;
    SET_GPR_U32(ctx, 31, 0x29BFA0u);
    ctx->pc = 0x29BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF98u;
    // 0x29bf9c: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x29BF98u, 0x29BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFA0u;
label_29bfa0:
    // 0x29bfa0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BFA0u;
    {
        const bool branch_taken_0x29bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bfa0) {
            ctx->pc = 0x29BFC8u;
            goto label_29bfc8;
        }
    }
    ctx->pc = 0x29BFA8u;
label_29bfa8:
    // 0x29bfa8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x29bfa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x29bfac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bfb0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BFB0u;
    {
        const bool branch_taken_0x29bfb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFB0u;
        // 0x29bfb4: 0x3c040084  lui         $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfb0) {
            ctx->pc = 0x29BFD8u;
            goto label_29bfd8;
        }
    }
    ctx->pc = 0x29BFB8u;
    // 0x29bfb8: 0xc061dc0  jal         func_187700
    ctx->pc = 0x29BFB8u;
    SET_GPR_U32(ctx, 31, 0x29BFC0u);
    ctx->pc = 0x29BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFB8u;
    // 0x29bfbc: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x29BFB8u, 0x29BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFC0u;
label_29bfc0:
    // 0x29bfc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BFC0u;
    {
        const bool branch_taken_0x29bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bfc0) {
            ctx->pc = 0x29BFD8u;
            goto label_29bfd8;
        }
    }
    ctx->pc = 0x29BFC8u;
label_29bfc8:
    // 0x29bfc8: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x29bfc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29bfcc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x29bfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29bfd0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29BFD0u;
    {
        const bool branch_taken_0x29bfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bfd0) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BFD8u;
label_29bfd8:
    // 0x29bfd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29bfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29bfdc: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x29bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x29bfe0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x29bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x29bfe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29bfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29bfe8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BFE8u;
    {
        const bool branch_taken_0x29bfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bfe8) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BFF0u;
    // 0x29bff0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29bff4: 0xc05a048  jal         func_168120
    ctx->pc = 0x29BFF4u;
    SET_GPR_U32(ctx, 31, 0x29BFFCu);
    ctx->pc = 0x29BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFF4u;
    // 0x29bff8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168120u, 0x29BFF4u, 0x29BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFFCu;
label_29bffc:
    // 0x29bffc: 0x0  nop
    ctx->pc = 0x29bffcu;
    // NOP
label_29c000:
    // 0x29c000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c00c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C00Cu;
        // 0x29c010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C014u;
}
