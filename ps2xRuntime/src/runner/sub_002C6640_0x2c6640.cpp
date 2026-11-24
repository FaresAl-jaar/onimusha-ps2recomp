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

// Function: sub_002C6640
// Address: 0x2c6640 - 0x2c67ac
void sub_002C6640_0x2c6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6640_0x2c6640");
#endif

    ctx->pc = 0x2c6640u;

    // 0x2c6640: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2c6640u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c6644: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C6644u;
    {
        const bool branch_taken_0x2c6644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6644u;
        // 0x2c6648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6644) {
            ctx->pc = 0x2C66E8u;
            goto label_2c66e8;
        }
    }
    ctx->pc = 0x2C664Cu;
    // 0x2c664c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2c664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c6650: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6650u;
    {
        const bool branch_taken_0x2c6650 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6650u;
        // 0x2c6654: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6650) {
            ctx->pc = 0x2C6664u;
            goto label_2c6664;
        }
    }
    ctx->pc = 0x2C6658u;
    // 0x2c6658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c665c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C665Cu;
    {
        const bool branch_taken_0x2c665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C665Cu;
        // 0x2c6660: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c665c) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C6664u;
label_2c6664:
    // 0x2c6664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c6664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c666c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c666cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6670: 0x0  nop
    ctx->pc = 0x2c6670u;
    // NOP
    // 0x2c6674: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c6674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6678: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6678u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c667c:
    // 0x2c667c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6680: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c6684: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c6684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6688: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c668c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c668cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6694: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c6694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c669c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c669cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c66a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C66A0u;
    {
        const bool branch_taken_0x2c66a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c66a0) {
            ctx->pc = 0x2C66B8u;
            goto label_2c66b8;
        }
    }
    ctx->pc = 0x2C66A8u;
    // 0x2c66a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c66a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c66ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c66acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c66b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C66B0u;
    {
        const bool branch_taken_0x2c66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66B0u;
        // 0x2c66b4: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66b0) {
            ctx->pc = 0x2C66D4u;
            goto label_2c66d4;
        }
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c66b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c66bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c66c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c66c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c66c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c66c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c66c8: 0x0  nop
    ctx->pc = 0x2c66c8u;
    // NOP
    // 0x2c66cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c66ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c66d0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c66d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c66d4:
    // 0x2c66d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c66d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c66d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C66D8u;
    {
        const bool branch_taken_0x2c66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c66d8) {
            ctx->pc = 0x2C66E8u;
            goto label_2c66e8;
        }
    }
    ctx->pc = 0x2C66E0u;
    // 0x2c66e0: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2c66e0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c66e4: 0x0  nop
    ctx->pc = 0x2c66e4u;
    // NOP
label_2c66e8:
    // 0x2c66e8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C66E8u;
    {
        const bool branch_taken_0x2c66e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66E8u;
        // 0x2c66ec: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66e8) {
            ctx->pc = 0x2C66F8u;
            goto label_2c66f8;
        }
    }
    ctx->pc = 0x2C66F0u;
    // 0x2c66f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C66F0u;
    {
        const bool branch_taken_0x2c66f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F0u;
        // 0x2c66f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66f0) {
            ctx->pc = 0x2C6778u;
            goto label_2c6778;
        }
    }
    ctx->pc = 0x2C66F8u;
label_2c66f8:
    // 0x2c66f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C66F8u;
    {
        const bool branch_taken_0x2c66f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F8u;
        // 0x2c66fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66f8) {
            ctx->pc = 0x2C670Cu;
            goto label_2c670c;
        }
    }
    ctx->pc = 0x2C6700u;
    // 0x2c6700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6704u;
    {
        const bool branch_taken_0x2c6704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6704u;
        // 0x2c6708: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6704) {
            ctx->pc = 0x2C6724u;
            goto label_2c6724;
        }
    }
    ctx->pc = 0x2C670Cu;
label_2c670c:
    // 0x2c670c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c6714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6718: 0x0  nop
    ctx->pc = 0x2c6718u;
    // NOP
    // 0x2c671c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c671cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6720: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6720u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c6724:
    // 0x2c6724: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6728: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c672c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c672cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6730: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c6734: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c673c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c673cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6740: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c6744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c6744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6748: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6748u;
    {
        const bool branch_taken_0x2c6748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6748) {
            ctx->pc = 0x2C6760u;
            goto label_2c6760;
        }
    }
    ctx->pc = 0x2C6750u;
    // 0x2c6750: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6754: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6758u;
    {
        const bool branch_taken_0x2c6758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6758) {
            ctx->pc = 0x2C6778u;
            goto label_2c6778;
        }
    }
    ctx->pc = 0x2C6760u;
label_2c6760:
    // 0x2c6760: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6760u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6764: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c6768: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c676c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c676cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6770: 0x0  nop
    ctx->pc = 0x2c6770u;
    // NOP
    // 0x2c6774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c6778:
    // 0x2c6778: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2c6778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c677c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c6780: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c6780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c6784: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2c6784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2c6788: 0x246351e0  addiu       $v1, $v1, 0x51E0
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20960));
    // 0x2c678c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c678cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6790: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c6790u;
    { uint32_t bits = FAST_READ32(0x4E51E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6794: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c6794u;
    { uint32_t bits = FAST_READ32(0x4E51E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6798: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c6798u;
    { uint32_t bits = FAST_READ32(0x4E51E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c679c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c679cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c67a0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c67a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c67a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67A4u;
        // 0x2c67a8: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C67A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C67ACu;
}
