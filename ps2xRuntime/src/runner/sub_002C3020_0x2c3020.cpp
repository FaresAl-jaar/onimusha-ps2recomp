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

// Function: sub_002C3020
// Address: 0x2c3020 - 0x2c3204
void sub_002C3020_0x2c3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3020_0x2c3020");
#endif

    switch (ctx->pc) {
        case 0x2c31d0u: goto label_2c31d0;
        default: break;
    }

    ctx->pc = 0x2c3020u;

    // 0x2c3020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3028: 0x90c90002  lbu         $t1, 0x2($a2)
    ctx->pc = 0x2c3028u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c302c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c302cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c3030: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C30D0u;
            goto label_2c30d0;
        }
    }
    ctx->pc = 0x2C3038u;
    // 0x2c3038: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2c3038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c303c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C303Cu;
    {
        const bool branch_taken_0x2c303c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C303Cu;
        // 0x2c3040: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c303c) {
            ctx->pc = 0x2C3050u;
            goto label_2c3050;
        }
    }
    ctx->pc = 0x2C3044u;
    // 0x2c3044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3048u;
    {
        const bool branch_taken_0x2c3048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3048u;
        // 0x2c304c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3048) {
            ctx->pc = 0x2C3068u;
            goto label_2c3068;
        }
    }
    ctx->pc = 0x2C3050u;
label_2c3050:
    // 0x2c3050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c3050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c3054: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c3054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c3058: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c3058u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c305c: 0x0  nop
    ctx->pc = 0x2c305cu;
    // NOP
    // 0x2c3060: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c3060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c3064: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c3064u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c3068:
    // 0x2c3068: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c306c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c3070: 0x34678889  ori         $a3, $v1, 0x8889
    ctx->pc = 0x2c3070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c3074: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c3074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c3078: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2c3078u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c307c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c307cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3080: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c3080u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c3084: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c3084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c3088: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c3088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c308c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C308Cu;
    {
        const bool branch_taken_0x2c308c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c308c) {
            ctx->pc = 0x2C30A4u;
            goto label_2c30a4;
        }
    }
    ctx->pc = 0x2C3094u;
    // 0x2c3094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c3094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c3098: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c3098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c309c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C309Cu;
    {
        const bool branch_taken_0x2c309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C309Cu;
        // 0x2c30a0: 0x7182b  sltu        $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c309c) {
            ctx->pc = 0x2C30C0u;
            goto label_2c30c0;
        }
    }
    ctx->pc = 0x2C30A4u;
label_2c30a4:
    // 0x2c30a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c30a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c30a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c30ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c30acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c30b0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c30b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c30b4: 0x0  nop
    ctx->pc = 0x2c30b4u;
    // NOP
    // 0x2c30b8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c30b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c30bc: 0x7182b  sltu        $v1, $zero, $a3
    ctx->pc = 0x2c30bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2c30c0:
    // 0x2c30c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c30c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c30c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C30C4u;
    {
        const bool branch_taken_0x2c30c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c30c4) {
            ctx->pc = 0x2C30D0u;
            goto label_2c30d0;
        }
    }
    ctx->pc = 0x2C30CCu;
    // 0x2c30cc: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x2c30ccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2c30d0:
    // 0x2c30d0: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C30D0u;
    {
        const bool branch_taken_0x2c30d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30D0u;
        // 0x2c30d4: 0x94880058  lhu         $t0, 0x58($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30d0) {
            ctx->pc = 0x2C30E0u;
            goto label_2c30e0;
        }
    }
    ctx->pc = 0x2C30D8u;
    // 0x2c30d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C30D8u;
    {
        const bool branch_taken_0x2c30d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30D8u;
        // 0x2c30dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30d8) {
            ctx->pc = 0x2C3164u;
            goto label_2c3164;
        }
    }
    ctx->pc = 0x2C30E0u;
label_2c30e0:
    // 0x2c30e0: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2c30e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c30e4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C30E4u;
    {
        const bool branch_taken_0x2c30e4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E4u;
        // 0x2c30e8: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30e4) {
            ctx->pc = 0x2C30F8u;
            goto label_2c30f8;
        }
    }
    ctx->pc = 0x2C30ECu;
    // 0x2c30ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c30ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c30f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C30F0u;
    {
        const bool branch_taken_0x2c30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30F0u;
        // 0x2c30f4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30f0) {
            ctx->pc = 0x2C3110u;
            goto label_2c3110;
        }
    }
    ctx->pc = 0x2C30F8u;
label_2c30f8:
    // 0x2c30f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c30f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c30fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c30fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c3100: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c3100u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3104: 0x0  nop
    ctx->pc = 0x2c3104u;
    // NOP
    // 0x2c3108: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c3108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c310c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c310cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c3110:
    // 0x2c3110: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3114: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c3118: 0x34678889  ori         $a3, $v1, 0x8889
    ctx->pc = 0x2c3118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c311c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c3120: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2c3120u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3128: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c3128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c312c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c312cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c3130: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c3130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3134: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3134u;
    {
        const bool branch_taken_0x2c3134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3134) {
            ctx->pc = 0x2C314Cu;
            goto label_2c314c;
        }
    }
    ctx->pc = 0x2C313Cu;
    // 0x2c313c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c313cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c3140: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c3140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c3144: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3144u;
    {
        const bool branch_taken_0x2c3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3144) {
            ctx->pc = 0x2C3164u;
            goto label_2c3164;
        }
    }
    ctx->pc = 0x2C314Cu;
label_2c314c:
    // 0x2c314c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c314cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3150: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c3150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c3154: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c3154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c3158: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c3158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c315c: 0x0  nop
    ctx->pc = 0x2c315cu;
    // NOP
    // 0x2c3160: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c3160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_2c3164:
    // 0x2c3164: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x2c3164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c3168: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3168u;
    {
        const bool branch_taken_0x2c3168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3168) {
            ctx->pc = 0x2C3178u;
            goto label_2c3178;
        }
    }
    ctx->pc = 0x2C3170u;
    // 0x2c3170: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c3174: 0x0  nop
    ctx->pc = 0x2c3174u;
    // NOP
label_2c3178:
    // 0x2c3178: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C3178u;
    {
        const bool branch_taken_0x2c3178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3178) {
            ctx->pc = 0x2C31F0u;
            goto label_2c31f0;
        }
    }
    ctx->pc = 0x2C3180u;
    // 0x2c3180: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3184: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3184u;
    {
        const bool branch_taken_0x2c3184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3184u;
        // 0x2c3188: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3184) {
            ctx->pc = 0x2C31D8u;
            goto label_2c31d8;
        }
    }
    ctx->pc = 0x2C318Cu;
    // 0x2c318c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C318Cu;
    {
        const bool branch_taken_0x2c318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C318Cu;
        // 0x2c3190: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c318c) {
            ctx->pc = 0x2C31C8u;
            goto label_2c31c8;
        }
    }
    ctx->pc = 0x2C3194u;
    // 0x2c3194: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c3194u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c3198: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c3198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c319c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c31a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c31a4: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c31a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c31a8: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c31a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c31ac: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c31acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c31b0: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c31b4: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c31b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c31b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c31b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c31bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c31c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C31C0u;
    {
        const bool branch_taken_0x2c31c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31C0u;
        // 0x2c31c4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31c0) {
            ctx->pc = 0x2C31E8u;
            goto label_2c31e8;
        }
    }
    ctx->pc = 0x2C31C8u;
label_2c31c8:
    // 0x2c31c8: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C31C8u;
    SET_GPR_U32(ctx, 31, 0x2C31D0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C31C8u, 0x2C31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31D0u;
label_2c31d0:
    // 0x2c31d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C31D0u;
    {
        const bool branch_taken_0x2c31d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c31d0) {
            ctx->pc = 0x2C31E0u;
            goto label_2c31e0;
        }
    }
    ctx->pc = 0x2C31D8u;
label_2c31d8:
    // 0x2c31d8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c31dc: 0x0  nop
    ctx->pc = 0x2c31dcu;
    // NOP
label_2c31e0:
    // 0x2c31e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c31e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31e4: 0x0  nop
    ctx->pc = 0x2c31e4u;
    // NOP
label_2c31e8:
    // 0x2c31e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C31E8u;
    {
        const bool branch_taken_0x2c31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c31e8) {
            ctx->pc = 0x2C31F8u;
            goto label_2c31f8;
        }
    }
    ctx->pc = 0x2C31F0u;
label_2c31f0:
    // 0x2c31f0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c31f4: 0x0  nop
    ctx->pc = 0x2c31f4u;
    // NOP
label_2c31f8:
    // 0x2c31f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c31f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c31fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C31FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31FCu;
        // 0x2c3200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C31FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3204u;
}
