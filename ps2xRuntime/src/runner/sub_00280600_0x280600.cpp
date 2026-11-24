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

// Function: sub_00280600
// Address: 0x280600 - 0x2809d8
void sub_00280600_0x280600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280600_0x280600");
#endif

    switch (ctx->pc) {
        case 0x2807d0u: goto label_2807d0;
        case 0x280818u: goto label_280818;
        case 0x280904u: goto label_280904;
        default: break;
    }

    ctx->pc = 0x280600u;

    // 0x280600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280604: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x280608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28060c: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x280610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280614: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x280614u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x280618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28061c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x280620: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x280620u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x280624: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28062c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x28062cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280630: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x280630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280634: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x280634u;
    {
        const bool branch_taken_0x280634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280634) {
            ctx->pc = 0x280650u;
            goto label_280650;
        }
    }
    ctx->pc = 0x28063Cu;
    // 0x28063c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x280640: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x280640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x280644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280644u;
    {
        const bool branch_taken_0x280644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280644u;
        // 0x280648: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280644) {
            ctx->pc = 0x280660u;
            goto label_280660;
        }
    }
    ctx->pc = 0x28064Cu;
    // 0x28064c: 0x0  nop
    ctx->pc = 0x28064cu;
    // NOP
label_280650:
    // 0x280650: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x280654: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x280654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x280658: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x280658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28065c: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x28065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
label_280660:
    // 0x280660: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x280660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x280664: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x280664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280668: 0x106500d7  beq         $v1, $a1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x280668u;
    {
        const bool branch_taken_0x280668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x28066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280668u;
        // 0x28066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280668) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280670u;
    // 0x280670: 0x10640091  beq         $v1, $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x280670u;
    {
        const bool branch_taken_0x280670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x280670) {
            ctx->pc = 0x2808B8u;
            goto label_2808b8;
        }
    }
    ctx->pc = 0x280678u;
    // 0x280678: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280678u;
    {
        const bool branch_taken_0x280678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280678) {
            ctx->pc = 0x280688u;
            goto label_280688;
        }
    }
    ctx->pc = 0x280680u;
    // 0x280680: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x280680u;
    {
        const bool branch_taken_0x280680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280680) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280688u;
label_280688:
    // 0x280688: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x280688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x28068c: 0x24634490  addiu       $v1, $v1, 0x4490
    ctx->pc = 0x28068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17552));
    // 0x280690: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x280690u;
    { uint32_t bits = FAST_READ32(0x4E4490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280694: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x280694u;
    { uint32_t bits = FAST_READ32(0x4E4494u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280698: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x280698u;
    { uint32_t bits = FAST_READ32(0x4E4498u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28069c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x28069cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2806a0: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2806a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2806a4: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2806a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x2806a8: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x2806a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2806ac: 0xa203083c  sb          $v1, 0x83C($s0)
    ctx->pc = 0x2806acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2806b0: 0xa204083b  sb          $a0, 0x83B($s0)
    ctx->pc = 0x2806b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 4));
    // 0x2806b4: 0x8e0629c0  lw          $a2, 0x29C0($s0)
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2806b8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2806b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2806bc: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2806BCu;
    {
        const bool branch_taken_0x2806bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2806bc) {
            ctx->pc = 0x280888u;
            goto label_280888;
        }
    }
    ctx->pc = 0x2806C4u;
    // 0x2806c4: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x2806c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2806c8: 0x14650021  bne         $v1, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2806C8u;
    {
        const bool branch_taken_0x2806c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2806c8) {
            ctx->pc = 0x280750u;
            goto label_280750;
        }
    }
    ctx->pc = 0x2806D0u;
    // 0x2806d0: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x2806d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x2806d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2806d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2806d8: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2806D8u;
    {
        const bool branch_taken_0x2806d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2806d8) {
            ctx->pc = 0x280750u;
            goto label_280750;
        }
    }
    ctx->pc = 0x2806E0u;
    // 0x2806e0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2806e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2806e4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2806e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2806e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2806e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2806ec: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2806ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2806f0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2806f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2806f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2806f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2806f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2806fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2806fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280704: 0x0  nop
    ctx->pc = 0x280704u;
    // NOP
    // 0x280708: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28070c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28070cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280710: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280710u;
    {
        const bool branch_taken_0x280710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280710) {
            ctx->pc = 0x280728u;
            goto label_280728;
        }
    }
    ctx->pc = 0x280718u;
    // 0x280718: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28071c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x28071cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280720u;
    {
        const bool branch_taken_0x280720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280720u;
        // 0x280724: 0xa6040786  sh          $a0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280720) {
            ctx->pc = 0x280744u;
            goto label_280744;
        }
    }
    ctx->pc = 0x280728u;
label_280728:
    // 0x280728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28072c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28072cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280730: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280734: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280738: 0x0  nop
    ctx->pc = 0x280738u;
    // NOP
    // 0x28073c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28073cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x280740: 0xa6040786  sh          $a0, 0x786($s0)
    ctx->pc = 0x280740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 4));
label_280744:
    // 0x280744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280748: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x280748u;
    {
        const bool branch_taken_0x280748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280748u;
        // 0x28074c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280748) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280750u;
label_280750:
    // 0x280750: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x280750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x280754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280758: 0x14650035  bne         $v1, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x280758u;
    {
        const bool branch_taken_0x280758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x280758) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x280760u;
    // 0x280760: 0x9204083d  lbu         $a0, 0x83D($s0)
    ctx->pc = 0x280760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2109)));
    // 0x280764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x280764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280768: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x280768u;
    {
        const bool branch_taken_0x280768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280768u;
        // 0x28076c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280768) {
            ctx->pc = 0x2807E0u;
            goto label_2807e0;
        }
    }
    ctx->pc = 0x280770u;
    // 0x280770: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280770u;
    {
        const bool branch_taken_0x280770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x280770) {
            ctx->pc = 0x280798u;
            goto label_280798;
        }
    }
    ctx->pc = 0x280778u;
    // 0x280778: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280778u;
    {
        const bool branch_taken_0x280778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x280778) {
            ctx->pc = 0x280788u;
            goto label_280788;
        }
    }
    ctx->pc = 0x280780u;
    // 0x280780: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x280780u;
    {
        const bool branch_taken_0x280780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280780) {
            ctx->pc = 0x280828u;
            goto label_280828;
        }
    }
    ctx->pc = 0x280788u;
label_280788:
    // 0x280788: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x280788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x28078c: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x28078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x280790: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x280790u;
    {
        const bool branch_taken_0x280790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280790u;
        // 0x280794: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280790) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280798u;
label_280798:
    // 0x280798: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x280798u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x28079c: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x28079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2807a0: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2807a4: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2807a8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2807a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807ac: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x2807b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2807B0u;
    {
        const bool branch_taken_0x2807b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807b0) {
            ctx->pc = 0x2807D0u;
            goto label_2807d0;
        }
    }
    ctx->pc = 0x2807B8u;
    // 0x2807b8: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x2807b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2807bc: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2807bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2807c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2807C0u;
    {
        const bool branch_taken_0x2807c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807C0u;
        // 0x2807c4: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807c0) {
            ctx->pc = 0x2807D0u;
            goto label_2807d0;
        }
    }
    ctx->pc = 0x2807C8u;
    // 0x2807c8: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x2807C8u;
    SET_GPR_U32(ctx, 31, 0x2807D0u);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x2807C8u, 0x2807D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807D0u;
label_2807d0:
    // 0x2807d0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x2807d4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2807D4u;
    {
        const bool branch_taken_0x2807d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807D4u;
        // 0x2807d8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807d4) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x2807DCu;
    // 0x2807dc: 0x0  nop
    ctx->pc = 0x2807dcu;
    // NOP
label_2807e0:
    // 0x2807e0: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x2807e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x2807e4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2807e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2807e8: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2807e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2807ec: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2807f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807f4: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x2807f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2807F8u;
    {
        const bool branch_taken_0x2807f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807f8) {
            ctx->pc = 0x280818u;
            goto label_280818;
        }
    }
    ctx->pc = 0x280800u;
    // 0x280800: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x280800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x280804: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x280804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x280808: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280808u;
    {
        const bool branch_taken_0x280808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280808) {
            ctx->pc = 0x280818u;
            goto label_280818;
        }
    }
    ctx->pc = 0x280810u;
    // 0x280810: 0xc0e0ab4  jal         func_382AD0
    ctx->pc = 0x280810u;
    SET_GPR_U32(ctx, 31, 0x280818u);
    ctx->pc = 0x382AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382AD0u, 0x280810u, 0x280818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280818u;
label_280818:
    // 0x280818: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x28081c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x28081Cu;
    {
        const bool branch_taken_0x28081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28081Cu;
        // 0x280820: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28081c) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280824u;
    // 0x280824: 0x0  nop
    ctx->pc = 0x280824u;
    // NOP
label_280828:
    // 0x280828: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x280828u;
    {
        const bool branch_taken_0x280828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280828u;
        // 0x28082c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280828) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x280830u;
label_280830:
    // 0x280830: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x280834: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x280834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280838: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x280838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28083c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x28083cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x280840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280844: 0x0  nop
    ctx->pc = 0x280844u;
    // NOP
    // 0x280848: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x280848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28084c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28084cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280850: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280850u;
    {
        const bool branch_taken_0x280850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280850) {
            ctx->pc = 0x280868u;
            goto label_280868;
        }
    }
    ctx->pc = 0x280858u;
    // 0x280858: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28085c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x28085cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280860u;
    {
        const bool branch_taken_0x280860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280860u;
        // 0x280864: 0xa6040784  sh          $a0, 0x784($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280860) {
            ctx->pc = 0x280884u;
            goto label_280884;
        }
    }
    ctx->pc = 0x280868u;
label_280868:
    // 0x280868: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280868u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28086c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280870: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280874: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x280874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x280878: 0x0  nop
    ctx->pc = 0x280878u;
    // NOP
    // 0x28087c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28087cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x280880: 0xa6040784  sh          $a0, 0x784($s0)
    ctx->pc = 0x280880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 4));
label_280884:
    // 0x280884: 0x0  nop
    ctx->pc = 0x280884u;
    // NOP
label_280888:
    // 0x280888: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x280888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x28088c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x28088cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x280890: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x280894: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x280894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x280898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x280898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28089c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x28089cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x2808a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2808a4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2808a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2808a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2808a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2808ac: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2808acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2808b0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2808b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2808b4: 0x0  nop
    ctx->pc = 0x2808b4u;
    // NOP
label_2808b8:
    // 0x2808b8: 0x96030784  lhu         $v1, 0x784($s0)
    ctx->pc = 0x2808b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1924)));
    // 0x2808bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2808BCu;
    {
        const bool branch_taken_0x2808bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808bc) {
            ctx->pc = 0x2808D0u;
            goto label_2808d0;
        }
    }
    ctx->pc = 0x2808C4u;
    // 0x2808c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2808c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2808c8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2808C8u;
    {
        const bool branch_taken_0x2808c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808C8u;
        // 0x2808cc: 0xa6030784  sh          $v1, 0x784($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808c8) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x2808d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x2808d4: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2808D4u;
    {
        const bool branch_taken_0x2808d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2808d4) {
            ctx->pc = 0x2809C8u;
            goto label_2809c8;
        }
    }
    ctx->pc = 0x2808DCu;
    // 0x2808dc: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2808dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2808e0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2808e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2808e4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2808E4u;
    {
        const bool branch_taken_0x2808e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2808e4) {
            ctx->pc = 0x280918u;
            goto label_280918;
        }
    }
    ctx->pc = 0x2808ECu;
    // 0x2808ec: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x2808ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2808f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2808f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2808f4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2808F4u;
    {
        const bool branch_taken_0x2808f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2808F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808F4u;
        // 0x2808f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808f4) {
            ctx->pc = 0x280918u;
            goto label_280918;
        }
    }
    ctx->pc = 0x2808FCu;
    // 0x2808fc: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2808FCu;
    SET_GPR_U32(ctx, 31, 0x280904u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2808FCu, 0x280904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280904u;
label_280904:
    // 0x280904: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x280908: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x280908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28090c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x28090cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x280910: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x280910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x280914: 0x0  nop
    ctx->pc = 0x280914u;
    // NOP
label_280918:
    // 0x280918: 0x9206083b  lbu         $a2, 0x83B($s0)
    ctx->pc = 0x280918u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x28091c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x28091cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x280920: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x280920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x280924: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x280924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280928: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x280928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x28092c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x280930: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x280930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x280934: 0xa206083c  sb          $a2, 0x83C($s0)
    ctx->pc = 0x280934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x280938: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x280938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x28093c: 0xa200083b  sb          $zero, 0x83B($s0)
    ctx->pc = 0x28093cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 0));
    // 0x280940: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280944: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x280944u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280948: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x280948u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28094c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x28094cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x280950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280954: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x280954u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x280958: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x280958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x28095c: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x28095cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x280960: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x280960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280964: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x280964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280968: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28096c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28096cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280970: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280970u;
    {
        const bool branch_taken_0x280970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280970) {
            ctx->pc = 0x280988u;
            goto label_280988;
        }
    }
    ctx->pc = 0x280978u;
    // 0x280978: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28097c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x28097cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280980: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280980u;
    {
        const bool branch_taken_0x280980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280980u;
        // 0x280984: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280980) {
            ctx->pc = 0x2809A4u;
            goto label_2809a4;
        }
    }
    ctx->pc = 0x280988u;
label_280988:
    // 0x280988: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28098c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x280990: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280994: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280998: 0x0  nop
    ctx->pc = 0x280998u;
    // NOP
    // 0x28099c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x28099cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2809a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2809a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2809a4:
    // 0x2809a4: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x2809a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2809a8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2809a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2809ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2809acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2809b0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2809b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2809b4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2809b8: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2809b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2809bc: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x2809bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2809c0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2809c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2809c4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2809c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2809c8:
    // 0x2809c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2809c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2809cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2809ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2809d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2809D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2809D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809D0u;
        // 0x2809d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2809D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2809D8u;
}
