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

// Function: sub_002BDB20
// Address: 0x2bdb20 - 0x2bdca8
void sub_002BDB20_0x2bdb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDB20_0x2bdb20");
#endif

    ctx->pc = 0x2bdb20u;

    // 0x2bdb20: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2bdb20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bdb24: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2bdb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2bdb28: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x2bdb28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bdb2c: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2bdb2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bdb30: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BDB30u;
    {
        const bool branch_taken_0x2bdb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB30u;
        // 0x2bdb34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb30) {
            ctx->pc = 0x2BDBD0u;
            goto label_2bdbd0;
        }
    }
    ctx->pc = 0x2BDB38u;
    // 0x2bdb38: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2bdb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bdb3c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDB3Cu;
    {
        const bool branch_taken_0x2bdb3c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB3Cu;
        // 0x2bdb40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb3c) {
            ctx->pc = 0x2BDB50u;
            goto label_2bdb50;
        }
    }
    ctx->pc = 0x2BDB44u;
    // 0x2bdb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdb48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDB48u;
    {
        const bool branch_taken_0x2bdb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB48u;
        // 0x2bdb4c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb48) {
            ctx->pc = 0x2BDB68u;
            goto label_2bdb68;
        }
    }
    ctx->pc = 0x2BDB50u;
label_2bdb50:
    // 0x2bdb50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdb54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdb58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdb58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdb5c: 0x0  nop
    ctx->pc = 0x2bdb5cu;
    // NOP
    // 0x2bdb60: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bdb60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdb64: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bdb64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bdb68:
    // 0x2bdb68: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bdb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdb6c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bdb70: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bdb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bdb74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bdb78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdb80: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bdb80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bdb84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdb88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bdb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdb8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDB8Cu;
    {
        const bool branch_taken_0x2bdb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdb8c) {
            ctx->pc = 0x2BDBA4u;
            goto label_2bdba4;
        }
    }
    ctx->pc = 0x2BDB94u;
    // 0x2bdb94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdb94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdb98: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdb98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdb9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDB9Cu;
    {
        const bool branch_taken_0x2bdb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB9Cu;
        // 0x2bdba0: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb9c) {
            ctx->pc = 0x2BDBC0u;
            goto label_2bdbc0;
        }
    }
    ctx->pc = 0x2BDBA4u;
label_2bdba4:
    // 0x2bdba4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bdba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bdbac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdbacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdbb0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdbb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdbb4: 0x0  nop
    ctx->pc = 0x2bdbb4u;
    // NOP
    // 0x2bdbb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdbbc: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bdbbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bdbc0:
    // 0x2bdbc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bdbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bdbc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDBC4u;
    {
        const bool branch_taken_0x2bdbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdbc4) {
            ctx->pc = 0x2BDBD0u;
            goto label_2bdbd0;
        }
    }
    ctx->pc = 0x2BDBCCu;
    // 0x2bdbcc: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2bdbccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2bdbd0:
    // 0x2bdbd0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDBD0u;
    {
        const bool branch_taken_0x2bdbd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBD0u;
        // 0x2bdbd4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbd0) {
            ctx->pc = 0x2BDBE0u;
            goto label_2bdbe0;
        }
    }
    ctx->pc = 0x2BDBD8u;
    // 0x2bdbd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BDBD8u;
    {
        const bool branch_taken_0x2bdbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBD8u;
        // 0x2bdbdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbd8) {
            ctx->pc = 0x2BDC60u;
            goto label_2bdc60;
        }
    }
    ctx->pc = 0x2BDBE0u;
label_2bdbe0:
    // 0x2bdbe0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDBE0u;
    {
        const bool branch_taken_0x2bdbe0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBE0u;
        // 0x2bdbe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbe0) {
            ctx->pc = 0x2BDBF4u;
            goto label_2bdbf4;
        }
    }
    ctx->pc = 0x2BDBE8u;
    // 0x2bdbe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdbec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDBECu;
    {
        const bool branch_taken_0x2bdbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBECu;
        // 0x2bdbf0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbec) {
            ctx->pc = 0x2BDC0Cu;
            goto label_2bdc0c;
        }
    }
    ctx->pc = 0x2BDBF4u;
label_2bdbf4:
    // 0x2bdbf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdbf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bdbfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdbfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc00: 0x0  nop
    ctx->pc = 0x2bdc00u;
    // NOP
    // 0x2bdc04: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bdc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdc08: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bdc08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bdc0c:
    // 0x2bdc0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bdc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdc10: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bdc14: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bdc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bdc18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bdc1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bdc24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bdc28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdc2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bdc2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdc30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDC30u;
    {
        const bool branch_taken_0x2bdc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdc30) {
            ctx->pc = 0x2BDC48u;
            goto label_2bdc48;
        }
    }
    ctx->pc = 0x2BDC38u;
    // 0x2bdc38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdc38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdc3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdc40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDC40u;
    {
        const bool branch_taken_0x2bdc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc40) {
            ctx->pc = 0x2BDC60u;
            goto label_2bdc60;
        }
    }
    ctx->pc = 0x2BDC48u;
label_2bdc48:
    // 0x2bdc48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bdc48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdc4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bdc50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdc50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bdc54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bdc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bdc58: 0x0  nop
    ctx->pc = 0x2bdc58u;
    // NOP
    // 0x2bdc5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bdc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bdc60:
    // 0x2bdc60: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bdc60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bdc64: 0x94820022  lhu         $v0, 0x22($a0)
    ctx->pc = 0x2bdc64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bdc68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDC68u;
    {
        const bool branch_taken_0x2bdc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x3c05004e  lui         $a1, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc68) {
            ctx->pc = 0x2BDC7Cu;
            goto label_2bdc7c;
        }
    }
    ctx->pc = 0x2BDC70u;
    // 0x2bdc70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2bdc74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDC74u;
    {
        const bool branch_taken_0x2bdc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC74u;
        // 0x2bdc78: 0x24a55048  addiu       $a1, $a1, 0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc74) {
            ctx->pc = 0x2BDC80u;
            goto label_2bdc80;
        }
    }
    ctx->pc = 0x2BDC7Cu;
label_2bdc7c:
    // 0x2bdc7c: 0x24a55058  addiu       $a1, $a1, 0x5058
    ctx->pc = 0x2bdc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20568));
label_2bdc80:
    // 0x2bdc80: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2bdc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdc84: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2bdc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2bdc88: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2bdc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc90: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bdc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc94: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bdc94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bdc98: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bdc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bdc9c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bdc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bdca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCA0u;
        // 0x2bdca4: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDCA8u;
}
