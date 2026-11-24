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

// Function: sub_002BD070
// Address: 0x2bd070 - 0x2bd1bc
void sub_002BD070_0x2bd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD070_0x2bd070");
#endif

    ctx->pc = 0x2bd070u;

    // 0x2bd070: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd074: 0xa082005f  sb          $v0, 0x5F($a0)
    ctx->pc = 0x2bd074u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd078: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2bd078u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd07c: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BD07Cu;
    {
        const bool branch_taken_0x2bd07c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD07Cu;
        // 0x2bd080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd07c) {
            ctx->pc = 0x2BD120u;
            goto label_2bd120;
        }
    }
    ctx->pc = 0x2BD084u;
    // 0x2bd084: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2bd084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bd088: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD088u;
    {
        const bool branch_taken_0x2bd088 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD088u;
        // 0x2bd08c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd088) {
            ctx->pc = 0x2BD09Cu;
            goto label_2bd09c;
        }
    }
    ctx->pc = 0x2BD090u;
    // 0x2bd090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd094: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD094u;
    {
        const bool branch_taken_0x2bd094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD094u;
        // 0x2bd098: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd094) {
            ctx->pc = 0x2BD0B4u;
            goto label_2bd0b4;
        }
    }
    ctx->pc = 0x2BD09Cu;
label_2bd09c:
    // 0x2bd09c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd0a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd0a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0a8: 0x0  nop
    ctx->pc = 0x2bd0a8u;
    // NOP
    // 0x2bd0ac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd0b0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd0b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd0b4:
    // 0x2bd0b4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd0b8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd0bc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd0c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd0c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd0ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd0d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd0d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd0d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd0d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD0D8u;
    {
        const bool branch_taken_0x2bd0d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd0d8) {
            ctx->pc = 0x2BD0F0u;
            goto label_2bd0f0;
        }
    }
    ctx->pc = 0x2BD0E0u;
    // 0x2bd0e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd0e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd0e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd0e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd0e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD0E8u;
    {
        const bool branch_taken_0x2bd0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E8u;
        // 0x2bd0ec: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0e8) {
            ctx->pc = 0x2BD10Cu;
            goto label_2bd10c;
        }
    }
    ctx->pc = 0x2BD0F0u;
label_2bd0f0:
    // 0x2bd0f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd0f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd0f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd0f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd0fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd0fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd100: 0x0  nop
    ctx->pc = 0x2bd100u;
    // NOP
    // 0x2bd104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd108: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bd108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bd10c:
    // 0x2bd10c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bd10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bd110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD110u;
    {
        const bool branch_taken_0x2bd110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd110) {
            ctx->pc = 0x2BD120u;
            goto label_2bd120;
        }
    }
    ctx->pc = 0x2BD118u;
    // 0x2bd118: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2bd118u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2bd11c: 0x0  nop
    ctx->pc = 0x2bd11cu;
    // NOP
label_2bd120:
    // 0x2bd120: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD120u;
    {
        const bool branch_taken_0x2bd120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD120u;
        // 0x2bd124: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd120) {
            ctx->pc = 0x2BD130u;
            goto label_2bd130;
        }
    }
    ctx->pc = 0x2BD128u;
    // 0x2bd128: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BD128u;
    {
        const bool branch_taken_0x2bd128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd128) {
            ctx->pc = 0x2BD1B0u;
            goto label_2bd1b0;
        }
    }
    ctx->pc = 0x2BD130u;
label_2bd130:
    // 0x2bd130: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD130u;
    {
        const bool branch_taken_0x2bd130 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD130u;
        // 0x2bd134: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd130) {
            ctx->pc = 0x2BD144u;
            goto label_2bd144;
        }
    }
    ctx->pc = 0x2BD138u;
    // 0x2bd138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd13c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD13Cu;
    {
        const bool branch_taken_0x2bd13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD13Cu;
        // 0x2bd140: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd13c) {
            ctx->pc = 0x2BD15Cu;
            goto label_2bd15c;
        }
    }
    ctx->pc = 0x2BD144u;
label_2bd144:
    // 0x2bd144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd148: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd150: 0x0  nop
    ctx->pc = 0x2bd150u;
    // NOP
    // 0x2bd154: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd158: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd158u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd15c:
    // 0x2bd15c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd160: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd164: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd168: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd16c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd174: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd178: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd17c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd180: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD180u;
    {
        const bool branch_taken_0x2bd180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd180) {
            ctx->pc = 0x2BD198u;
            goto label_2bd198;
        }
    }
    ctx->pc = 0x2BD188u;
    // 0x2bd188: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd18c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd18cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD190u;
    {
        const bool branch_taken_0x2bd190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd190) {
            ctx->pc = 0x2BD1B0u;
            goto label_2bd1b0;
        }
    }
    ctx->pc = 0x2BD198u;
label_2bd198:
    // 0x2bd198: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd198u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd19c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd1a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd1a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd1a8: 0x0  nop
    ctx->pc = 0x2bd1a8u;
    // NOP
    // 0x2bd1ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bd1b0:
    // 0x2bd1b0: 0xa4830080  sh          $v1, 0x80($a0)
    ctx->pc = 0x2bd1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bd1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1B4u;
        // 0x2bd1b8: 0x24c20004  addiu       $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD1BCu;
}
