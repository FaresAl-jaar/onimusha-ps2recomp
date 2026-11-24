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

// Function: sub_002809E0
// Address: 0x2809e0 - 0x280e08
void sub_002809E0_0x2809e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002809E0_0x2809e0");
#endif

    switch (ctx->pc) {
        case 0x280bb0u: goto label_280bb0;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bf8u: goto label_280bf8;
        case 0x280c00u: goto label_280c00;
        case 0x280d34u: goto label_280d34;
        default: break;
    }

    ctx->pc = 0x2809e0u;

    // 0x2809e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2809e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2809e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2809e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2809e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2809e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2809ec: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x2809ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x2809f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2809f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2809f4: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2809f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2809f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2809f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809fc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x280a00: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x280a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x280a04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x280a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280a0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x280a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280a10: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x280a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280a14: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x280A14u;
    {
        const bool branch_taken_0x280a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280a14) {
            ctx->pc = 0x280A30u;
            goto label_280a30;
        }
    }
    ctx->pc = 0x280A1Cu;
    // 0x280a1c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x280a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x280a20: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x280a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x280a24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280A24u;
    {
        const bool branch_taken_0x280a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A24u;
        // 0x280a28: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a24) {
            ctx->pc = 0x280A40u;
            goto label_280a40;
        }
    }
    ctx->pc = 0x280A2Cu;
    // 0x280a2c: 0x0  nop
    ctx->pc = 0x280a2cu;
    // NOP
label_280a30:
    // 0x280a30: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x280a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x280a34: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x280a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x280a38: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x280a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x280a3c: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x280a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
label_280a40:
    // 0x280a40: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x280a40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x280a44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x280a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280a48: 0x10a400eb  beq         $a1, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x280A48u;
    {
        const bool branch_taken_0x280a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x280A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A48u;
        // 0x280a4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a48) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280A50u;
    // 0x280a50: 0x10a300a5  beq         $a1, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x280A50u;
    {
        const bool branch_taken_0x280a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x280a50) {
            ctx->pc = 0x280CE8u;
            goto label_280ce8;
        }
    }
    ctx->pc = 0x280A58u;
    // 0x280a58: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280A58u;
    {
        const bool branch_taken_0x280a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x280a58) {
            ctx->pc = 0x280A68u;
            goto label_280a68;
        }
    }
    ctx->pc = 0x280A60u;
    // 0x280a60: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x280A60u;
    {
        const bool branch_taken_0x280a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280a60) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280A68u;
label_280a68:
    // 0x280a68: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x280a6c: 0x246344a0  addiu       $v1, $v1, 0x44A0
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17568));
    // 0x280a70: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x280a70u;
    { uint32_t bits = FAST_READ32(0x4E44A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280a74: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x280a74u;
    { uint32_t bits = FAST_READ32(0x4E44A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280a78: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x280a78u;
    { uint32_t bits = FAST_READ32(0x4E44A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a7c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x280a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x280a80: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x280a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x280a84: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x280a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x280a88: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x280a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x280a8c: 0xa203083c  sb          $v1, 0x83C($s0)
    ctx->pc = 0x280a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x280a90: 0xa204083b  sb          $a0, 0x83B($s0)
    ctx->pc = 0x280a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 4));
    // 0x280a94: 0x8e0629c0  lw          $a2, 0x29C0($s0)
    ctx->pc = 0x280a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x280a98: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x280a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x280a9c: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x280A9Cu;
    {
        const bool branch_taken_0x280a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a9c) {
            ctx->pc = 0x280C68u;
            goto label_280c68;
        }
    }
    ctx->pc = 0x280AA4u;
    // 0x280aa4: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x280aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x280aa8: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x280AA8u;
    {
        const bool branch_taken_0x280aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x280aa8) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280AB0u;
    // 0x280ab0: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x280ab0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x280ab4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x280ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x280ab8: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x280AB8u;
    {
        const bool branch_taken_0x280ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x280ab8) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280AC0u;
    // 0x280ac0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x280ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280ac4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x280ac8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x280ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280acc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x280accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x280ad0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x280ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x280ad4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x280ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x280ad8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x280ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280adc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280adcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280ae4: 0x0  nop
    ctx->pc = 0x280ae4u;
    // NOP
    // 0x280ae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x280aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280af0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280AF0u;
    {
        const bool branch_taken_0x280af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280af0) {
            ctx->pc = 0x280B08u;
            goto label_280b08;
        }
    }
    ctx->pc = 0x280AF8u;
    // 0x280af8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280afc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280B00u;
    {
        const bool branch_taken_0x280b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B00u;
        // 0x280b04: 0xa6040786  sh          $a0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b00) {
            ctx->pc = 0x280B24u;
            goto label_280b24;
        }
    }
    ctx->pc = 0x280B08u;
label_280b08:
    // 0x280b08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280b0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x280b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280b10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280b14: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280b18: 0x0  nop
    ctx->pc = 0x280b18u;
    // NOP
    // 0x280b1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x280b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x280b20: 0xa6040786  sh          $a0, 0x786($s0)
    ctx->pc = 0x280b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 4));
label_280b24:
    // 0x280b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280b28: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B28u;
        // 0x280b2c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280B30u;
label_280b30:
    // 0x280b30: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x280b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x280b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280b38: 0x14650035  bne         $v1, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x280B38u;
    {
        const bool branch_taken_0x280b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x280b38) {
            ctx->pc = 0x280C10u;
            goto label_280c10;
        }
    }
    ctx->pc = 0x280B40u;
    // 0x280b40: 0x9204083d  lbu         $a0, 0x83D($s0)
    ctx->pc = 0x280b40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2109)));
    // 0x280b44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280b48: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x280B48u;
    {
        const bool branch_taken_0x280b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B48u;
        // 0x280b4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b48) {
            ctx->pc = 0x280BC0u;
            goto label_280bc0;
        }
    }
    ctx->pc = 0x280B50u;
    // 0x280b50: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280B50u;
    {
        const bool branch_taken_0x280b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x280b50) {
            ctx->pc = 0x280B78u;
            goto label_280b78;
        }
    }
    ctx->pc = 0x280B58u;
    // 0x280b58: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280B58u;
    {
        const bool branch_taken_0x280b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x280b58) {
            ctx->pc = 0x280B68u;
            goto label_280b68;
        }
    }
    ctx->pc = 0x280B60u;
    // 0x280b60: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x280B60u;
    {
        const bool branch_taken_0x280b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280b60) {
            ctx->pc = 0x280C08u;
            goto label_280c08;
        }
    }
    ctx->pc = 0x280B68u;
label_280b68:
    // 0x280b68: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x280b68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x280b6c: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x280b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x280b70: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x280B70u;
    {
        const bool branch_taken_0x280b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B70u;
        // 0x280b74: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b70) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280B78u;
label_280b78:
    // 0x280b78: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x280b78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x280b7c: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x280b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x280b80: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x280b84: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x280b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x280b88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x280b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280b8c: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x280b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x280b90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x280B90u;
    {
        const bool branch_taken_0x280b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280b90) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280B98u;
    // 0x280b98: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x280b9c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x280b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x280ba0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280BA0u;
    {
        const bool branch_taken_0x280ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BA0u;
        // 0x280ba4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ba0) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280BA8u;
    // 0x280ba8: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x280BA8u;
    SET_GPR_U32(ctx, 31, 0x280BB0u);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x280BA8u, 0x280BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BB0u;
label_280bb0:
    // 0x280bb0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x280bb4: 0x10000090  b           . + 4 + (0x90 << 2)
label_280bb8:
    if (ctx->pc == 0x280BB8u) {
        ctx->pc = 0x280BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB4u;
        // 0x280bb8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280BBCu;
        goto label_fallthrough_0x280bb4;
    }
    ctx->pc = 0x280BB4u;
    {
        const bool branch_taken_0x280bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB4u;
        // 0x280bb8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bb4) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
label_fallthrough_0x280bb4:
    ctx->pc = 0x280BBCu;
    // 0x280bbc: 0x0  nop
    ctx->pc = 0x280bbcu;
    // NOP
label_280bc0:
    // 0x280bc0: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x280bc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x280bc4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x280bc8: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x280bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x280bcc: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x280bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x280bd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x280bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280bd4: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x280bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x280bd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x280BD8u;
    {
        const bool branch_taken_0x280bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280bd8) {
            ctx->pc = 0x280BF8u;
            goto label_280bf8;
        }
    }
    ctx->pc = 0x280BE0u;
    // 0x280be0: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x280be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x280be4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x280be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x280be8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280BE8u;
    {
        const bool branch_taken_0x280be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BE8u;
        // 0x280bec: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280be8) {
            ctx->pc = 0x280BF8u;
            goto label_280bf8;
        }
    }
    ctx->pc = 0x280BF0u;
    // 0x280bf0: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x280BF0u;
    SET_GPR_U32(ctx, 31, 0x280BF8u);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x280BF0u, 0x280BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BF8u;
label_280bf8:
    // 0x280bf8: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x280bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x280bfc: 0x1000007e  b           . + 4 + (0x7E << 2)
label_280c00:
    if (ctx->pc == 0x280C00u) {
        ctx->pc = 0x280C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BFCu;
        // 0x280c00: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280C04u;
        goto label_fallthrough_0x280bfc;
    }
    ctx->pc = 0x280BFCu;
    {
        const bool branch_taken_0x280bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BFCu;
        // 0x280c00: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bfc) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
label_fallthrough_0x280bfc:
    ctx->pc = 0x280C04u;
    // 0x280c04: 0x0  nop
    ctx->pc = 0x280c04u;
    // NOP
label_280c08:
    // 0x280c08: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x280C08u;
    {
        const bool branch_taken_0x280c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C08u;
        // 0x280c0c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c08) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280C10u;
label_280c10:
    // 0x280c10: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x280c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x280c14: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x280c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x280c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x280c1c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x280c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x280c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280c24: 0x0  nop
    ctx->pc = 0x280c24u;
    // NOP
    // 0x280c28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x280c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x280c2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280C30u;
    {
        const bool branch_taken_0x280c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c30) {
            ctx->pc = 0x280C48u;
            goto label_280c48;
        }
    }
    ctx->pc = 0x280C38u;
    // 0x280c38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280c38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280c3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280c40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280C40u;
    {
        const bool branch_taken_0x280c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C40u;
        // 0x280c44: 0xa6040784  sh          $a0, 0x784($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c40) {
            ctx->pc = 0x280C64u;
            goto label_280c64;
        }
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280c4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x280c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280c50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280c54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280c58: 0x0  nop
    ctx->pc = 0x280c58u;
    // NOP
    // 0x280c5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x280c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x280c60: 0xa6040784  sh          $a0, 0x784($s0)
    ctx->pc = 0x280c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 4));
label_280c64:
    // 0x280c64: 0x0  nop
    ctx->pc = 0x280c64u;
    // NOP
label_280c68:
    // 0x280c68: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x280c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x280c6c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x280c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280c70: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x280c74: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x280c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280c78: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x280c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x280c7c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280c7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c80: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x280c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280c88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x280c88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280c8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x280c90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280c90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280C94u;
    {
        const bool branch_taken_0x280c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c94) {
            ctx->pc = 0x280CACu;
            goto label_280cac;
        }
    }
    ctx->pc = 0x280C9Cu;
    // 0x280c9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280ca0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280ca4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280CA4u;
    {
        const bool branch_taken_0x280ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA4u;
        // 0x280ca8: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ca4) {
            ctx->pc = 0x280CC8u;
            goto label_280cc8;
        }
    }
    ctx->pc = 0x280CACu;
label_280cac:
    // 0x280cac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280cacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280cb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280cb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280cb8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280cbc: 0x0  nop
    ctx->pc = 0x280cbcu;
    // NOP
    // 0x280cc0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x280cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x280cc4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x280cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_280cc8:
    // 0x280cc8: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x280cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x280ccc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x280cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x280cd0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x280cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x280cd4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x280cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x280cd8: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x280cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x280cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280ce0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x280ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x280ce4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x280ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_280ce8:
    // 0x280ce8: 0x96030784  lhu         $v1, 0x784($s0)
    ctx->pc = 0x280ce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1924)));
    // 0x280cec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280CECu;
    {
        const bool branch_taken_0x280cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280cec) {
            ctx->pc = 0x280D00u;
            goto label_280d00;
        }
    }
    ctx->pc = 0x280CF4u;
    // 0x280cf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x280cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x280cf8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x280CF8u;
    {
        const bool branch_taken_0x280cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CF8u;
        // 0x280cfc: 0xa6030784  sh          $v1, 0x784($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cf8) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280D00u;
label_280d00:
    // 0x280d00: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x280d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x280d04: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x280D04u;
    {
        const bool branch_taken_0x280d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d04) {
            ctx->pc = 0x280DF8u;
            goto label_280df8;
        }
    }
    ctx->pc = 0x280D0Cu;
    // 0x280d0c: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x280d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x280d10: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x280d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280d14: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x280D14u;
    {
        const bool branch_taken_0x280d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d14) {
            ctx->pc = 0x280D48u;
            goto label_280d48;
        }
    }
    ctx->pc = 0x280D1Cu;
    // 0x280d1c: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x280d1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x280d20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280d24: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x280D24u;
    {
        const bool branch_taken_0x280d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D24u;
        // 0x280d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d24) {
            ctx->pc = 0x280D48u;
            goto label_280d48;
        }
    }
    ctx->pc = 0x280D2Cu;
    // 0x280d2c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x280D2Cu;
    SET_GPR_U32(ctx, 31, 0x280D34u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x280D2Cu, 0x280D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D34u;
label_280d34:
    // 0x280d34: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x280d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x280d38: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x280d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x280d3c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x280d3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x280d40: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x280d40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x280d44: 0x0  nop
    ctx->pc = 0x280d44u;
    // NOP
label_280d48:
    // 0x280d48: 0x9206083b  lbu         $a2, 0x83B($s0)
    ctx->pc = 0x280d48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x280d4c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x280d50: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x280d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x280d54: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x280d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280d58: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x280d5c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x280d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x280d60: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x280d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x280d64: 0xa206083c  sb          $a2, 0x83C($s0)
    ctx->pc = 0x280d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x280d68: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x280d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x280d6c: 0xa200083b  sb          $zero, 0x83B($s0)
    ctx->pc = 0x280d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 0));
    // 0x280d70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d74: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x280d74u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280d78: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x280d78u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280d7c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x280d7cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280d84: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x280d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x280d88: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x280d88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x280d8c: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x280d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x280d90: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x280d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280d94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x280d94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280d98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x280d9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280da0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280DA0u;
    {
        const bool branch_taken_0x280da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280da0) {
            ctx->pc = 0x280DB8u;
            goto label_280db8;
        }
    }
    ctx->pc = 0x280DA8u;
    // 0x280da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280dac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280DB0u;
    {
        const bool branch_taken_0x280db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DB0u;
        // 0x280db4: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280db0) {
            ctx->pc = 0x280DD4u;
            goto label_280dd4;
        }
    }
    ctx->pc = 0x280DB8u;
label_280db8:
    // 0x280db8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280dbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x280dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280dc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280dc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280dc8: 0x0  nop
    ctx->pc = 0x280dc8u;
    // NOP
    // 0x280dcc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x280dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x280dd0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x280dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_280dd4:
    // 0x280dd4: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x280dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x280dd8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x280dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x280ddc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x280ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280de0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x280de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x280de4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x280de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x280de8: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x280de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x280dec: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x280decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x280df0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x280df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x280df4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x280df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_280df8:
    // 0x280df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e00: 0x3e00008  jr          $ra
    ctx->pc = 0x280E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E00u;
        // 0x280e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E08u;
}
