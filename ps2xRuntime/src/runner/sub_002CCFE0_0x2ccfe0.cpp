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

// Function: sub_002CCFE0
// Address: 0x2ccfe0 - 0x2cd1b0
void sub_002CCFE0_0x2ccfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCFE0_0x2ccfe0");
#endif

    switch (ctx->pc) {
        case 0x2cd130u: goto label_2cd130;
        case 0x2cd1a0u: goto label_2cd1a0;
        default: break;
    }

    ctx->pc = 0x2ccfe0u;

    // 0x2ccfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ccfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ccfe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccfe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ccfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ccfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccff0: 0x93848a84  lbu         $a0, -0x757C($gp)
    ctx->pc = 0x2ccff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x2ccff4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CCFF4u;
    {
        const bool branch_taken_0x2ccff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ccff4) {
            ctx->pc = 0x2CD020u;
            goto label_2cd020;
        }
    }
    ctx->pc = 0x2CCFFCu;
    // 0x2ccffc: 0x93838a80  lbu         $v1, -0x7580($gp)
    ctx->pc = 0x2ccffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x2cd000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD000u;
    {
        const bool branch_taken_0x2cd000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd000) {
            ctx->pc = 0x2CD018u;
            goto label_2cd018;
        }
    }
    ctx->pc = 0x2CD008u;
    // 0x2cd008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cd00c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD00Cu;
    {
        const bool branch_taken_0x2cd00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD00Cu;
        // 0x2cd010: 0xa3838a80  sb          $v1, -0x7580($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd00c) {
            ctx->pc = 0x2CD020u;
            goto label_2cd020;
        }
    }
    ctx->pc = 0x2CD014u;
    // 0x2cd014: 0x0  nop
    ctx->pc = 0x2cd014u;
    // NOP
label_2cd018:
    // 0x2cd018: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2CD018u;
    {
        const bool branch_taken_0x2cd018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD018u;
        // 0x2cd01c: 0xa3808a84  sb          $zero, -0x757C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd018) {
            ctx->pc = 0x2CD1A0u;
            goto label_2cd1a0;
        }
    }
    ctx->pc = 0x2CD020u;
label_2cd020:
    // 0x2cd020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd024: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CD024u;
    {
        const bool branch_taken_0x2cd024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd024) {
            ctx->pc = 0x2CD0A0u;
            goto label_2cd0a0;
        }
    }
    ctx->pc = 0x2CD02Cu;
    // 0x2cd02c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cd02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd030: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cd030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2cd034: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cd034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cd038: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2cd038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2cd03c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2cd03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2cd040: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cd040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cd044: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cd044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd04c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cd04cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd050: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cd050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cd054: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd058: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD058u;
    {
        const bool branch_taken_0x2cd058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD058u;
        // 0x2cd05c: 0x93858a80  lbu         $a1, -0x7580($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd058) {
            ctx->pc = 0x2CD070u;
            goto label_2cd070;
        }
    }
    ctx->pc = 0x2CD060u;
    // 0x2cd060: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd060u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd064: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD068u;
    {
        const bool branch_taken_0x2cd068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD068u;
        // 0x2cd06c: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd068) {
            ctx->pc = 0x2CD08Cu;
            goto label_2cd08c;
        }
    }
    ctx->pc = 0x2CD070u;
label_2cd070:
    // 0x2cd070: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd070u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd074: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd078: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd078u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd07c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd080: 0x0  nop
    ctx->pc = 0x2cd080u;
    // NOP
    // 0x2cd084: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cd084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cd088: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x2cd088u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2cd08c:
    // 0x2cd08c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD08Cu;
    {
        const bool branch_taken_0x2cd08c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd08c) {
            ctx->pc = 0x2CD0A0u;
            goto label_2cd0a0;
        }
    }
    ctx->pc = 0x2CD094u;
    // 0x2cd094: 0x93838a80  lbu         $v1, -0x7580($gp)
    ctx->pc = 0x2cd094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x2cd098: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd09c: 0xa3838a80  sb          $v1, -0x7580($gp)
    ctx->pc = 0x2cd09cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 3));
label_2cd0a0:
    // 0x2cd0a0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2cd0a4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cd0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd0a8: 0x93858a80  lbu         $a1, -0x7580($gp)
    ctx->pc = 0x2cd0a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x2cd0ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cd0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cd0b0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2cd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2cd0b4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2cd0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2cd0b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cd0bc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cd0bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cd0c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cd0c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd0c8: 0x0  nop
    ctx->pc = 0x2cd0c8u;
    // NOP
    // 0x2cd0cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cd0ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cd0d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd0d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd0d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD0D4u;
    {
        const bool branch_taken_0x2cd0d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0D4u;
        // 0x2cd0d8: 0x529c0  sll         $a1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0d4) {
            ctx->pc = 0x2CD0ECu;
            goto label_2cd0ec;
        }
    }
    ctx->pc = 0x2CD0DCu;
    // 0x2cd0dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd0e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD0E4u;
    {
        const bool branch_taken_0x2cd0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0E4u;
        // 0x2cd0e8: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0e4) {
            ctx->pc = 0x2CD108u;
            goto label_2cd108;
        }
    }
    ctx->pc = 0x2CD0ECu;
label_2cd0ec:
    // 0x2cd0ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd0ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd0f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd0f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd0f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cd0f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cd0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cd0fc: 0x0  nop
    ctx->pc = 0x2cd0fcu;
    // NOP
    // 0x2cd100: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cd100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cd104: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2cd104u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_2cd108:
    // 0x2cd108: 0x0  nop
    ctx->pc = 0x2cd108u;
    // NOP
    // 0x2cd10c: 0x0  nop
    ctx->pc = 0x2cd10cu;
    // NOP
    // 0x2cd110: 0x1812  mflo        $v1
    ctx->pc = 0x2cd110u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2cd114: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2cd114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cd118: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CD118u;
    {
        const bool branch_taken_0x2cd118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd118) {
            ctx->pc = 0x2CD1A0u;
            goto label_2cd1a0;
        }
    }
    ctx->pc = 0x2CD120u;
    // 0x2cd120: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2cd120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2cd124: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2cd124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cd128: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2CD128u;
    SET_GPR_U32(ctx, 31, 0x2CD130u);
    ctx->pc = 0x2CD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD128u;
    // 0x2cd12c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2CD128u, 0x2CD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD130u;
label_2cd130:
    // 0x2cd130: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2cd130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2cd134: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x2cd134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x2cd138: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2cd138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2cd13c: 0x34630046  ori         $v1, $v1, 0x46
    ctx->pc = 0x2cd13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)70);
    // 0x2cd140: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cd140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cd144: 0x3c0480ff  lui         $a0, 0x80FF
    ctx->pc = 0x2cd144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33023 << 16));
    // 0x2cd148: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x2cd148u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd14c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2cd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2cd150: 0x346a4000  ori         $t2, $v1, 0x4000
    ctx->pc = 0x2cd150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2cd154: 0x3489ffff  ori         $t1, $a0, 0xFFFF
    ctx->pc = 0x2cd154u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2cd158: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x2cd158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x2cd15c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2cd15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2cd160: 0x34687000  ori         $t0, $v1, 0x7000
    ctx->pc = 0x2cd160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x2cd164: 0x3407fffb  ori         $a3, $zero, 0xFFFB
    ctx->pc = 0x2cd164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x2cd168: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x2cd16c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2cd16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2cd170: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2cd170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x2cd174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd178: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x2cd178u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x2cd17c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2cd17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd180: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x2cd180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x2cd184: 0xa050000f  sb          $s0, 0xF($v0)
    ctx->pc = 0x2cd184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 16));
    // 0x2cd188: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x2cd188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x2cd18c: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x2cd18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x2cd190: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x2cd190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x2cd194: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2cd198: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2CD198u;
    SET_GPR_U32(ctx, 31, 0x2CD1A0u);
    ctx->pc = 0x2CD19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD198u;
    // 0x2cd19c: 0xac47001c  sw          $a3, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2CD198u, 0x2CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1A0u;
label_2cd1a0:
    // 0x2cd1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1A8u;
        // 0x2cd1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD1B0u;
}
