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

// Function: sub_002ABDE0
// Address: 0x2abde0 - 0x2ac038
void sub_002ABDE0_0x2abde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABDE0_0x2abde0");
#endif

    switch (ctx->pc) {
        case 0x2abe3cu: goto label_2abe3c;
        case 0x2ac020u: goto label_2ac020;
        default: break;
    }

    ctx->pc = 0x2abde0u;

    // 0x2abde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abde4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2abde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2abde8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2abdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2abdf0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2abdf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdf8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x2abdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x2abdfc: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2abdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x2abe00: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2abe00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2abe04: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2ABE04u;
    {
        const bool branch_taken_0x2abe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ABE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE04u;
        // 0x2abe08: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe04) {
            ctx->pc = 0x2ABF88u;
            goto label_2abf88;
        }
    }
    ctx->pc = 0x2ABE0Cu;
    // 0x2abe0c: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2ABE0Cu;
    {
        const bool branch_taken_0x2abe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2abe0c) {
            ctx->pc = 0x2ABF00u;
            goto label_2abf00;
        }
    }
    ctx->pc = 0x2ABE14u;
    // 0x2abe14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abe18: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2ABE18u;
    {
        const bool branch_taken_0x2abe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2abe18) {
            ctx->pc = 0x2ABEF0u;
            goto label_2abef0;
        }
    }
    ctx->pc = 0x2ABE20u;
    // 0x2abe20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABE20u;
    {
        const bool branch_taken_0x2abe20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe20) {
            ctx->pc = 0x2ABE30u;
            goto label_2abe30;
        }
    }
    ctx->pc = 0x2ABE28u;
    // 0x2abe28: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2ABE28u;
    {
        const bool branch_taken_0x2abe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe28) {
            ctx->pc = 0x2AC028u;
            goto label_2ac028;
        }
    }
    ctx->pc = 0x2ABE30u;
label_2abe30:
    // 0x2abe30: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x2abe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2abe34: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2ABE34u;
    SET_GPR_U32(ctx, 31, 0x2ABE3Cu);
    ctx->pc = 0x2ABE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE34u;
    // 0x2abe38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2ABE34u, 0x2ABE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE3Cu;
label_2abe3c:
    // 0x2abe3c: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2abe40: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2abe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2abe44: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2abe44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abe48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2abe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2abe4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abe4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abe50: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x2abe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x2abe54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2abe54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2abe58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2abe5c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2abe5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2abe60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2abe60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2abe64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2abe64u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2abe68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abe68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2abe6c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2abe6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abe70: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2abe70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2abe74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2abe74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abe78: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x2abe78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2abe7c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2abe7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2abe80: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x2abe80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2abe84: 0xa60500c2  sh          $a1, 0xC2($s0)
    ctx->pc = 0x2abe84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 5));
    // 0x2abe88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abe88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe8c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2abe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abe90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2abe90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2abe94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2abe94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2abe98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2abe98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abe9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABE9Cu;
    {
        const bool branch_taken_0x2abe9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abe9c) {
            ctx->pc = 0x2ABEB4u;
            goto label_2abeb4;
        }
    }
    ctx->pc = 0x2ABEA4u;
    // 0x2abea4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abea8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abeac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABEACu;
    {
        const bool branch_taken_0x2abeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEACu;
        // 0x2abeb0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abeac) {
            ctx->pc = 0x2ABED0u;
            goto label_2abed0;
        }
    }
    ctx->pc = 0x2ABEB4u;
label_2abeb4:
    // 0x2abeb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2abeb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2abeb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2abeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2abebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abec0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abec4: 0x0  nop
    ctx->pc = 0x2abec4u;
    // NOP
    // 0x2abec8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2abec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2abecc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2abeccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2abed0:
    // 0x2abed0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2abed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2abed4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2abed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2abed8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2abed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abedc: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2abedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2abee0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2abee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2abee4: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2abee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2abee8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2abee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2abeec: 0x0  nop
    ctx->pc = 0x2abeecu;
    // NOP
label_2abef0:
    // 0x2abef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2abef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2abef4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2ABEF4u;
    {
        const bool branch_taken_0x2abef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEF4u;
        // 0x2abef8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abef4) {
            ctx->pc = 0x2AC028u;
            goto label_2ac028;
        }
    }
    ctx->pc = 0x2ABEFCu;
    // 0x2abefc: 0x0  nop
    ctx->pc = 0x2abefcu;
    // NOP
label_2abf00:
    // 0x2abf00: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2abf04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2abf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abf08: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2abf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2abf0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2abf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2abf10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2abf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2abf14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2abf14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abf18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2abf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2abf1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2abf20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2abf24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2abf24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2abf28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2abf28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abf2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABF2Cu;
    {
        const bool branch_taken_0x2abf2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abf2c) {
            ctx->pc = 0x2ABF44u;
            goto label_2abf44;
        }
    }
    ctx->pc = 0x2ABF34u;
    // 0x2abf34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abf34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abf38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abf3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABF3Cu;
    {
        const bool branch_taken_0x2abf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF3Cu;
        // 0x2abf40: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf3c) {
            ctx->pc = 0x2ABF60u;
            goto label_2abf60;
        }
    }
    ctx->pc = 0x2ABF44u;
label_2abf44:
    // 0x2abf44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2abf44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2abf48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2abf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2abf4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abf4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abf50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abf50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abf54: 0x0  nop
    ctx->pc = 0x2abf54u;
    // NOP
    // 0x2abf58: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2abf58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2abf5c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2abf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2abf60:
    // 0x2abf60: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2abf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2abf64: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2abf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abf68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2abf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2abf6c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2abf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2abf70: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2abf70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2abf74: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2abf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2abf78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2abf7c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2abf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2abf80: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2ABF80u;
    {
        const bool branch_taken_0x2abf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF80u;
        // 0x2abf84: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf80) {
            ctx->pc = 0x2AC028u;
            goto label_2ac028;
        }
    }
    ctx->pc = 0x2ABF88u;
label_2abf88:
    // 0x2abf88: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2abf88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2abf8c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2ABF8Cu;
    {
        const bool branch_taken_0x2abf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf8c) {
            ctx->pc = 0x2AC028u;
            goto label_2ac028;
        }
    }
    ctx->pc = 0x2ABF94u;
    // 0x2abf94: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x2abf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x2abf98: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2abf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2abf9c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x2abf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2abfa0: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abfa4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2abfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2abfa8: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x2abfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2abfac: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2abfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2abfb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abfb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2abfb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2abfb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2abfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abfc0: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x2abfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2abfc4: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2abfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x2abfc8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2abfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abfcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2abfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2abfd0: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2abfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x2abfd4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2abfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abfd8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2abfd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2abfdc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2abfdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2abfe0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2abfe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abfe4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABFE4u;
    {
        const bool branch_taken_0x2abfe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abfe4) {
            ctx->pc = 0x2ABFFCu;
            goto label_2abffc;
        }
    }
    ctx->pc = 0x2ABFECu;
    // 0x2abfec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abfecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abff0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2abff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2abff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABFF4u;
    {
        const bool branch_taken_0x2abff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFF4u;
        // 0x2abff8: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abff4) {
            ctx->pc = 0x2AC018u;
            goto label_2ac018;
        }
    }
    ctx->pc = 0x2ABFFCu;
label_2abffc:
    // 0x2abffc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2abffcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac000: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac004: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac008: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ac008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ac00c: 0x0  nop
    ctx->pc = 0x2ac00cu;
    // NOP
    // 0x2ac010: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ac010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ac014: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ac018:
    // 0x2ac018: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x2AC018u;
    SET_GPR_U32(ctx, 31, 0x2AC020u);
    ctx->pc = 0x2AC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC018u;
    // 0x2ac01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x2AC018u, 0x2AC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC020u;
label_2ac020:
    // 0x2ac020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac024: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2ac024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ac028:
    // 0x2ac028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac030: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC030u;
        // 0x2ac034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC038u;
}
