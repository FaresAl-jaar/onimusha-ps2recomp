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

// Function: sub_003EE260
// Address: 0x3ee260 - 0x3ee788
void sub_003EE260_0x3ee260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE260_0x3ee260");
#endif

    switch (ctx->pc) {
        case 0x3ee4f4u: goto label_3ee4f4;
        case 0x3ee4fcu: goto label_3ee4fc;
        case 0x3ee504u: goto label_3ee504;
        case 0x3ee5c4u: goto label_3ee5c4;
        case 0x3ee5d0u: goto label_3ee5d0;
        case 0x3ee5f0u: goto label_3ee5f0;
        case 0x3ee600u: goto label_3ee600;
        case 0x3ee614u: goto label_3ee614;
        case 0x3ee630u: goto label_3ee630;
        case 0x3ee6b8u: goto label_3ee6b8;
        case 0x3ee6c8u: goto label_3ee6c8;
        case 0x3ee700u: goto label_3ee700;
        case 0x3ee710u: goto label_3ee710;
        case 0x3ee760u: goto label_3ee760;
        case 0x3ee768u: goto label_3ee768;
        case 0x3ee770u: goto label_3ee770;
        default: break;
    }

    ctx->pc = 0x3ee260u;

    // 0x3ee260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ee260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ee264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ee268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ee26c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3ee26cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ee270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee274: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ee274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ee278: 0x10a400f9  beq         $a1, $a0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3EE278u;
    {
        const bool branch_taken_0x3ee278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE278u;
        // 0x3ee27c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee278) {
            ctx->pc = 0x3EE660u;
            goto label_3ee660;
        }
    }
    ctx->pc = 0x3EE280u;
    // 0x3ee280: 0x10a300f5  beq         $a1, $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x3EE280u;
    {
        const bool branch_taken_0x3ee280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ee280) {
            ctx->pc = 0x3EE658u;
            goto label_3ee658;
        }
    }
    ctx->pc = 0x3EE288u;
    // 0x3ee288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ee288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee28c: 0x10a4006c  beq         $a1, $a0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3EE28Cu;
    {
        const bool branch_taken_0x3ee28c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ee28c) {
            ctx->pc = 0x3EE440u;
            goto label_3ee440;
        }
    }
    ctx->pc = 0x3EE294u;
    // 0x3ee294: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE294u;
    {
        const bool branch_taken_0x3ee294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee294) {
            ctx->pc = 0x3EE2A8u;
            goto label_3ee2a8;
        }
    }
    ctx->pc = 0x3EE29Cu;
    // 0x3ee29c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x3EE29Cu;
    {
        const bool branch_taken_0x3ee29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee29c) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE2A4u;
    // 0x3ee2a4: 0x0  nop
    ctx->pc = 0x3ee2a4u;
    // NOP
label_3ee2a8:
    // 0x3ee2a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee2ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee2b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ee2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee2b4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ee2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee2b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee2bc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ee2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee2c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ee2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ee2c4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ee2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ee2c8: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ee2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee2cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ee2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ee2d0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ee2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ee2d4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ee2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ee2d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ee2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ee2dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ee2e0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ee2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ee2e4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ee2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ee2e8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ee2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ee2ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE2ECu;
    {
        const bool branch_taken_0x3ee2ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3EE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE2ECu;
        // 0x3ee2f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2ec) {
            ctx->pc = 0x3EE300u;
            goto label_3ee300;
        }
    }
    ctx->pc = 0x3EE2F4u;
    // 0x3ee2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EE2F8u;
    {
        const bool branch_taken_0x3ee2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE2F8u;
        // 0x3ee2fc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2f8) {
            ctx->pc = 0x3EE318u;
            goto label_3ee318;
        }
    }
    ctx->pc = 0x3EE300u;
label_3ee300:
    // 0x3ee300: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ee300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ee304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ee304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ee308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ee308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee30c: 0x0  nop
    ctx->pc = 0x3ee30cu;
    // NOP
    // 0x3ee310: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ee310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ee314: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ee314u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ee318:
    // 0x3ee318: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x3ee318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x3ee31c: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x3ee31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x3ee320: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3ee320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3ee324: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3ee324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x3ee328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ee328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee32c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ee32cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee330: 0x0  nop
    ctx->pc = 0x3ee330u;
    // NOP
    // 0x3ee334: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ee338: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ee33c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x3ee33cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ee340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ee340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee348: 0x0  nop
    ctx->pc = 0x3ee348u;
    // NOP
    // 0x3ee34c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ee34cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ee350: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee354: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE354u;
    {
        const bool branch_taken_0x3ee354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee354) {
            ctx->pc = 0x3EE36Cu;
            goto label_3ee36c;
        }
    }
    ctx->pc = 0x3EE35Cu;
    // 0x3ee35c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee35cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee360: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ee360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ee364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EE364u;
    {
        const bool branch_taken_0x3ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee364) {
            ctx->pc = 0x3EE384u;
            goto label_3ee384;
        }
    }
    ctx->pc = 0x3EE36Cu;
label_3ee36c:
    // 0x3ee36c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ee36cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ee370: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee374: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee378: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ee378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ee37c: 0x0  nop
    ctx->pc = 0x3ee37cu;
    // NOP
    // 0x3ee380: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ee380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3ee384:
    // 0x3ee384: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE384u;
    {
        const bool branch_taken_0x3ee384 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3EE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE384u;
        // 0x3ee388: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee384) {
            ctx->pc = 0x3EE398u;
            goto label_3ee398;
        }
    }
    ctx->pc = 0x3EE38Cu;
    // 0x3ee38c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ee38cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EE390u;
    {
        const bool branch_taken_0x3ee390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE390u;
        // 0x3ee394: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee390) {
            ctx->pc = 0x3EE3B0u;
            goto label_3ee3b0;
        }
    }
    ctx->pc = 0x3EE398u;
label_3ee398:
    // 0x3ee398: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ee398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3ee39c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ee39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ee3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ee3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee3a4: 0x0  nop
    ctx->pc = 0x3ee3a4u;
    // NOP
    // 0x3ee3a8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ee3a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3ee3ac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3ee3acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3ee3b0:
    // 0x3ee3b0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ee3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ee3b4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ee3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ee3b8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ee3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ee3bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ee3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ee3c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ee3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee3c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ee3c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ee3cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ee3ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ee3d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ee3d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee3d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE3D4u;
    {
        const bool branch_taken_0x3ee3d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee3d4) {
            ctx->pc = 0x3EE3ECu;
            goto label_3ee3ec;
        }
    }
    ctx->pc = 0x3EE3DCu;
    // 0x3ee3dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee3dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee3e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ee3e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ee3e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE3E4u;
    {
        const bool branch_taken_0x3ee3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3E4u;
        // 0x3ee3e8: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee3e4) {
            ctx->pc = 0x3EE408u;
            goto label_3ee408;
        }
    }
    ctx->pc = 0x3EE3ECu;
label_3ee3ec:
    // 0x3ee3ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ee3ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ee3f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee3f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ee3f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ee3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ee3fc: 0x0  nop
    ctx->pc = 0x3ee3fcu;
    // NOP
    // 0x3ee400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ee400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ee404: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3ee408:
    // 0x3ee408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ee40c: 0xa6022bb0  sh          $v0, 0x2BB0($s0)
    ctx->pc = 0x3ee40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11184), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee410: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3ee410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ee414: 0xa6022bb2  sh          $v0, 0x2BB2($s0)
    ctx->pc = 0x3ee414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11186), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee418: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ee418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ee41c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ee41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ee420: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3ee420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3ee424: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ee424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ee428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ee42c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ee42cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3ee430: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3ee430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ee434: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3ee434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3ee438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ee438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ee43c: 0xa2022bb4  sb          $v0, 0x2BB4($s0)
    ctx->pc = 0x3ee43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11188), (uint8_t)GPR_U32(ctx, 2));
label_3ee440:
    // 0x3ee440: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ee440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ee444: 0xc6012b68  lwc1        $f1, 0x2B68($s0)
    ctx->pc = 0x3ee444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee448: 0x2442593a  addiu       $v0, $v0, 0x593A
    ctx->pc = 0x3ee448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22842));
    // 0x3ee44c: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ee450: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ee450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ee454: 0xe6002b64  swc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x3ee458: 0x82042b55  lb          $a0, 0x2B55($s0)
    ctx->pc = 0x3ee458u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3ee45c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3ee45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ee468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ee46c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3ee46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee470: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EE470u;
    {
        const bool branch_taken_0x3ee470 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ee470) {
            ctx->pc = 0x3EE498u;
            goto label_3ee498;
        }
    }
    ctx->pc = 0x3EE478u;
    // 0x3ee478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee47c: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x3ee47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ee480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ee484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ee484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee488: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x3EE488u;
    {
        const bool branch_taken_0x3ee488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee488) {
            ctx->pc = 0x3EE4B8u;
            goto label_3ee4b8;
        }
    }
    ctx->pc = 0x3EE490u;
    // 0x3ee490: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3EE490u;
    {
        const bool branch_taken_0x3ee490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE490u;
        // 0x3ee494: 0xe6002b64  swc1        $f0, 0x2B64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee490) {
            ctx->pc = 0x3EE4B8u;
            goto label_3ee4b8;
        }
    }
    ctx->pc = 0x3EE498u;
label_3ee498:
    // 0x3ee498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee49c: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x3ee49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee4a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ee4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ee4a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ee4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee4a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE4A8u;
    {
        const bool branch_taken_0x3ee4a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee4a8) {
            ctx->pc = 0x3EE4B8u;
            goto label_3ee4b8;
        }
    }
    ctx->pc = 0x3EE4B0u;
    // 0x3ee4b0: 0xe6002b64  swc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x3ee4b4: 0x0  nop
    ctx->pc = 0x3ee4b4u;
    // NOP
label_3ee4b8:
    // 0x3ee4b8: 0x86022b60  lh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee4b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3ee4bc: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ee4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee4c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ee4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee4c8: 0x0  nop
    ctx->pc = 0x3ee4c8u;
    // NOP
    // 0x3ee4cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ee4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ee4d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3ee4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3ee4d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee4d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ee4d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ee4d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ee4dc: 0x0  nop
    ctx->pc = 0x3ee4dcu;
    // NOP
    // 0x3ee4e0: 0xa6022b60  sh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee4e4: 0x86022b60  lh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee4e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3ee4e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ee4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ee4ec: 0xc0fb714  jal         func_3EDC50
    ctx->pc = 0x3EE4ECu;
    SET_GPR_U32(ctx, 31, 0x3EE4F4u);
    ctx->pc = 0x3EE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE4ECu;
    // 0x3ee4f0: 0xa6022b60  sh          $v0, 0x2B60($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC50u, 0x3EE4ECu, 0x3EE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE4F4u;
label_3ee4f4:
    // 0x3ee4f4: 0xc0fb724  jal         func_3EDC90
    ctx->pc = 0x3EE4F4u;
    SET_GPR_U32(ctx, 31, 0x3EE4FCu);
    ctx->pc = 0x3EE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE4F4u;
    // 0x3ee4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC90u, 0x3EE4F4u, 0x3EE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE4FCu;
label_3ee4fc:
    // 0x3ee4fc: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE4FCu;
    SET_GPR_U32(ctx, 31, 0x3EE504u);
    ctx->pc = 0x3EE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE4FCu;
    // 0x3ee500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE4FCu, 0x3EE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE504u;
label_3ee504:
    // 0x3ee504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE504u;
    {
        const bool branch_taken_0x3ee504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE504u;
        // 0x3ee508: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee504) {
            ctx->pc = 0x3EE518u;
            goto label_3ee518;
        }
    }
    ctx->pc = 0x3EE50Cu;
    // 0x3ee50c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3EE50Cu;
    {
        const bool branch_taken_0x3ee50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE50Cu;
        // 0x3ee510: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee50c) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE514u;
    // 0x3ee514: 0x0  nop
    ctx->pc = 0x3ee514u;
    // NOP
label_3ee518:
    // 0x3ee518: 0x82042b55  lb          $a0, 0x2B55($s0)
    ctx->pc = 0x3ee518u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3ee51c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ee51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ee520: 0x2442593a  addiu       $v0, $v0, 0x593A
    ctx->pc = 0x3ee520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22842));
    // 0x3ee524: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ee528: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3ee528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee52c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ee530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ee534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ee538: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3ee538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee53c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ee53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee540: 0x0  nop
    ctx->pc = 0x3ee540u;
    // NOP
    // 0x3ee544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ee544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ee548: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3ee548u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee54c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x3EE54Cu;
    {
        const bool branch_taken_0x3ee54c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ee54c) {
            ctx->pc = 0x3EE628u;
            goto label_3ee628;
        }
    }
    ctx->pc = 0x3EE554u;
    // 0x3ee554: 0x92022bb4  lbu         $v0, 0x2BB4($s0)
    ctx->pc = 0x3ee554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11188)));
    // 0x3ee558: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3EE558u;
    {
        const bool branch_taken_0x3ee558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee558) {
            ctx->pc = 0x3EE628u;
            goto label_3ee628;
        }
    }
    ctx->pc = 0x3EE560u;
    // 0x3ee560: 0x82042b54  lb          $a0, 0x2B54($s0)
    ctx->pc = 0x3ee560u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11092)));
    // 0x3ee564: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ee564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ee568: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x3ee568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
    // 0x3ee56c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ee56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ee570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee574: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3ee574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee578: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3EE578u;
    {
        const bool branch_taken_0x3ee578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee578) {
            ctx->pc = 0x3EE628u;
            goto label_3ee628;
        }
    }
    ctx->pc = 0x3EE580u;
    // 0x3ee580: 0x86022bb2  lh          $v0, 0x2BB2($s0)
    ctx->pc = 0x3ee580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11186)));
    // 0x3ee584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee588: 0xa6022bb2  sh          $v0, 0x2BB2($s0)
    ctx->pc = 0x3ee588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11186), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee58c: 0x86032bb0  lh          $v1, 0x2BB0($s0)
    ctx->pc = 0x3ee58cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11184)));
    // 0x3ee590: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3EE590u;
    {
        const bool branch_taken_0x3ee590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee590) {
            ctx->pc = 0x3EE628u;
            goto label_3ee628;
        }
    }
    ctx->pc = 0x3EE598u;
    // 0x3ee598: 0x86022bb2  lh          $v0, 0x2BB2($s0)
    ctx->pc = 0x3ee598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11186)));
    // 0x3ee59c: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3EE59Cu;
    {
        const bool branch_taken_0x3ee59c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3ee59c) {
            ctx->pc = 0x3EE628u;
            goto label_3ee628;
        }
    }
    ctx->pc = 0x3EE5A4u;
    // 0x3ee5a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3ee5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3ee5a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ee5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ee5ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ee5acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3ee5b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EE5B0u;
    {
        const bool branch_taken_0x3ee5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee5b0) {
            ctx->pc = 0x3EE5D0u;
            goto label_3ee5d0;
        }
    }
    ctx->pc = 0x3EE5B8u;
    // 0x3ee5b8: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3ee5b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3ee5bc: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EE5BCu;
    SET_GPR_U32(ctx, 31, 0x3EE5C4u);
    ctx->pc = 0x3EE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5BCu;
    // 0x3ee5c0: 0x26042ba0  addiu       $a0, $s0, 0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EE5BCu, 0x3EE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5C4u;
label_3ee5c4:
    // 0x3ee5c4: 0x26042ba0  addiu       $a0, $s0, 0x2BA0
    ctx->pc = 0x3ee5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x3ee5c8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3EE5C8u;
    SET_GPR_U32(ctx, 31, 0x3EE5D0u);
    ctx->pc = 0x3EE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5C8u;
    // 0x3ee5cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3EE5C8u, 0x3EE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5D0u;
label_3ee5d0:
    // 0x3ee5d0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3ee5d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3ee5d4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3ee5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3ee5d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ee5dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3ee5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3ee5e0: 0x26052ba0  addiu       $a1, $s0, 0x2BA0
    ctx->pc = 0x3ee5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x3ee5e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ee5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ee5e8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EE5E8u;
    SET_GPR_U32(ctx, 31, 0x3EE5F0u);
    ctx->pc = 0x3EE5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5E8u;
    // 0x3ee5ec: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EE5E8u, 0x3EE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5F0u;
label_3ee5f0:
    // 0x3ee5f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ee5f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ee5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ee5f8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EE5F8u;
    SET_GPR_U32(ctx, 31, 0x3EE600u);
    ctx->pc = 0x3EE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5F8u;
    // 0x3ee5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EE5F8u, 0x3EE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE600u;
label_3ee600:
    // 0x3ee600: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3ee600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ee604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ee604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee608: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ee608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ee60c: 0xc0bc7b8  jal         func_2F1EE0
    ctx->pc = 0x3EE60Cu;
    SET_GPR_U32(ctx, 31, 0x3EE614u);
    ctx->pc = 0x3EE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE60Cu;
    // 0x3ee610: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EE0u, 0x3EE60Cu, 0x3EE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE614u;
label_3ee614:
    // 0x3ee614: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3ee614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3ee618: 0xa6022bb2  sh          $v0, 0x2BB2($s0)
    ctx->pc = 0x3ee618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11186), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee61c: 0x86022bb0  lh          $v0, 0x2BB0($s0)
    ctx->pc = 0x3ee61cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11184)));
    // 0x3ee620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee624: 0xa6022bb0  sh          $v0, 0x2BB0($s0)
    ctx->pc = 0x3ee624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11184), (uint16_t)GPR_U32(ctx, 2));
label_3ee628:
    // 0x3ee628: 0xc0fb6fc  jal         func_3EDBF0
    ctx->pc = 0x3EE628u;
    SET_GPR_U32(ctx, 31, 0x3EE630u);
    ctx->pc = 0x3EE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE628u;
    // 0x3ee62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBF0u, 0x3EE628u, 0x3EE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE630u;
label_3ee630:
    // 0x3ee630: 0x7a032b40  lq          $v1, 0x2B40($s0)
    ctx->pc = 0x3ee630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x3ee634: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3ee634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x3ee638: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ee63c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ee63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ee640: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee644: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ee644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ee648: 0x461004b  bgez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3EE648u;
    {
        const bool branch_taken_0x3ee648 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3EE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE648u;
        // 0x3ee64c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee648) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE650u;
    // 0x3ee650: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3EE650u;
    {
        const bool branch_taken_0x3ee650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE650u;
        // 0x3ee654: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee650) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE658u;
label_3ee658:
    // 0x3ee658: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ee658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee65c: 0x0  nop
    ctx->pc = 0x3ee65cu;
    // NOP
label_3ee660:
    // 0x3ee660: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ee664: 0xc6012b68  lwc1        $f1, 0x2B68($s0)
    ctx->pc = 0x3ee664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee668: 0x2442593a  addiu       $v0, $v0, 0x593A
    ctx->pc = 0x3ee668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22842));
    // 0x3ee66c: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ee670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ee670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ee674: 0xe6002b64  swc1        $f0, 0x2B64($s0)
    ctx->pc = 0x3ee674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x3ee678: 0x82042b55  lb          $a0, 0x2B55($s0)
    ctx->pc = 0x3ee678u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3ee67c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3ee67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ee684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ee688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ee68c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3ee68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee690: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EE690u;
    {
        const bool branch_taken_0x3ee690 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ee690) {
            ctx->pc = 0x3EE6E0u;
            goto label_3ee6e0;
        }
    }
    ctx->pc = 0x3EE698u;
    // 0x3ee698: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x3ee698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee69c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ee69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee6a0: 0x0  nop
    ctx->pc = 0x3ee6a0u;
    // NOP
    // 0x3ee6a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ee6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee6a8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3EE6A8u;
    {
        const bool branch_taken_0x3ee6a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6A8u;
        // 0x3ee6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee6a8) {
            ctx->pc = 0x3EE728u;
            goto label_3ee728;
        }
    }
    ctx->pc = 0x3EE6B0u;
    // 0x3ee6b0: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE6B0u;
    SET_GPR_U32(ctx, 31, 0x3EE6B8u);
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE6B0u, 0x3EE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE6B8u;
label_3ee6b8:
    // 0x3ee6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE6B8u;
    {
        const bool branch_taken_0x3ee6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6B8u;
        // 0x3ee6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee6b8) {
            ctx->pc = 0x3EE6D0u;
            goto label_3ee6d0;
        }
    }
    ctx->pc = 0x3EE6C0u;
    // 0x3ee6c0: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EE6C0u;
    SET_GPR_U32(ctx, 31, 0x3EE6C8u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EE6C0u, 0x3EE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE6C8u;
label_3ee6c8:
    // 0x3ee6c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE6C8u;
    {
        const bool branch_taken_0x3ee6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee6c8) {
            ctx->pc = 0x3EE6D8u;
            goto label_3ee6d8;
        }
    }
    ctx->pc = 0x3EE6D0u;
label_3ee6d0:
    // 0x3ee6d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee6d4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee6d8:
    // 0x3ee6d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3EE6D8u;
    {
        const bool branch_taken_0x3ee6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee6d8) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE6E0u;
label_3ee6e0:
    // 0x3ee6e0: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x3ee6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ee6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ee6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee6e8: 0x0  nop
    ctx->pc = 0x3ee6e8u;
    // NOP
    // 0x3ee6ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ee6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ee6f0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3EE6F0u;
    {
        const bool branch_taken_0x3ee6f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6F0u;
        // 0x3ee6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee6f0) {
            ctx->pc = 0x3EE728u;
            goto label_3ee728;
        }
    }
    ctx->pc = 0x3EE6F8u;
    // 0x3ee6f8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EE6F8u;
    SET_GPR_U32(ctx, 31, 0x3EE700u);
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EE6F8u, 0x3EE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE700u;
label_3ee700:
    // 0x3ee700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE700u;
    {
        const bool branch_taken_0x3ee700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE700u;
        // 0x3ee704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee700) {
            ctx->pc = 0x3EE718u;
            goto label_3ee718;
        }
    }
    ctx->pc = 0x3EE708u;
    // 0x3ee708: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EE708u;
    SET_GPR_U32(ctx, 31, 0x3EE710u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EE708u, 0x3EE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE710u;
label_3ee710:
    // 0x3ee710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE710u;
    {
        const bool branch_taken_0x3ee710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee710) {
            ctx->pc = 0x3EE720u;
            goto label_3ee720;
        }
    }
    ctx->pc = 0x3EE718u;
label_3ee718:
    // 0x3ee718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee71c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee720:
    // 0x3ee720: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3EE720u;
    {
        const bool branch_taken_0x3ee720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee720) {
            ctx->pc = 0x3EE778u;
            goto label_3ee778;
        }
    }
    ctx->pc = 0x3EE728u;
label_3ee728:
    // 0x3ee728: 0x86022b60  lh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3ee72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ee730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee734: 0x0  nop
    ctx->pc = 0x3ee734u;
    // NOP
    // 0x3ee738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ee738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ee73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ee73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ee740: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ee740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ee744: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ee744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ee748: 0x0  nop
    ctx->pc = 0x3ee748u;
    // NOP
    // 0x3ee74c: 0xa6022b60  sh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee74cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ee750: 0x86022b60  lh          $v0, 0x2B60($s0)
    ctx->pc = 0x3ee750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3ee754: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ee754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ee758: 0xc0fb714  jal         func_3EDC50
    ctx->pc = 0x3EE758u;
    SET_GPR_U32(ctx, 31, 0x3EE760u);
    ctx->pc = 0x3EE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE758u;
    // 0x3ee75c: 0xa6022b60  sh          $v0, 0x2B60($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC50u, 0x3EE758u, 0x3EE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE760u;
label_3ee760:
    // 0x3ee760: 0xc0fb724  jal         func_3EDC90
    ctx->pc = 0x3EE760u;
    SET_GPR_U32(ctx, 31, 0x3EE768u);
    ctx->pc = 0x3EE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE760u;
    // 0x3ee764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC90u, 0x3EE760u, 0x3EE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE768u;
label_3ee768:
    // 0x3ee768: 0xc0fb6fc  jal         func_3EDBF0
    ctx->pc = 0x3EE768u;
    SET_GPR_U32(ctx, 31, 0x3EE770u);
    ctx->pc = 0x3EE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE768u;
    // 0x3ee76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBF0u, 0x3EE768u, 0x3EE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE770u;
label_3ee770:
    // 0x3ee770: 0x7a032b40  lq          $v1, 0x2B40($s0)
    ctx->pc = 0x3ee770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x3ee774: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3ee774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3ee778:
    // 0x3ee778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ee77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee780: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE780u;
        // 0x3ee784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE788u;
}
