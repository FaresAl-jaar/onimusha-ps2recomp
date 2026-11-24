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

// Function: sub_0035CA60
// Address: 0x35ca60 - 0x35ce10
void sub_0035CA60_0x35ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CA60_0x35ca60");
#endif

    switch (ctx->pc) {
        case 0x35cb18u: goto label_35cb18;
        case 0x35cc10u: goto label_35cc10;
        case 0x35cc28u: goto label_35cc28;
        case 0x35cc9cu: goto label_35cc9c;
        case 0x35cd40u: goto label_35cd40;
        case 0x35cd58u: goto label_35cd58;
        case 0x35cdc0u: goto label_35cdc0;
        case 0x35cdd8u: goto label_35cdd8;
        default: break;
    }

    ctx->pc = 0x35ca60u;

    // 0x35ca60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35ca64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35ca68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35ca6c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x35ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x35ca70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ca74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ca78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ca7c: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x35ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35ca80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ca84: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x35CA84u;
    {
        const bool branch_taken_0x35ca84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA84u;
        // 0x35ca88: 0x3c068000  lui         $a2, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca84) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CA8Cu;
    // 0x35ca8c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x35ca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x35ca90: 0x146000d9  bnez        $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x35CA90u;
    {
        const bool branch_taken_0x35ca90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ca90) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CA98u;
    // 0x35ca98: 0x8f888bbc  lw          $t0, -0x7444($gp)
    ctx->pc = 0x35ca98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35ca9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35caa0: 0x81030550  lb          $v1, 0x550($t0)
    ctx->pc = 0x35caa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1360)));
    // 0x35caa4: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CAA4u;
    {
        const bool branch_taken_0x35caa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x35caa4) {
            ctx->pc = 0x35CAC0u;
            goto label_35cac0;
        }
    }
    ctx->pc = 0x35CAACu;
    // 0x35caac: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x35CAACu;
    {
        const bool branch_taken_0x35caac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35caac) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CAB4u;
    // 0x35cab4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x35CAB4u;
    {
        const bool branch_taken_0x35cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cab4) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CABCu;
    // 0x35cabc: 0x0  nop
    ctx->pc = 0x35cabcu;
    // NOP
label_35cac0:
    // 0x35cac0: 0x81040551  lb          $a0, 0x551($t0)
    ctx->pc = 0x35cac0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1361)));
    // 0x35cac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35cac8: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x35CAC8u;
    {
        const bool branch_taken_0x35cac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAC8u;
        // 0x35cacc: 0x25050551  addiu       $a1, $t0, 0x551 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1361));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cac8) {
            ctx->pc = 0x35CC88u;
            goto label_35cc88;
        }
    }
    ctx->pc = 0x35CAD0u;
    // 0x35cad0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cad4: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x35CAD4u;
    {
        const bool branch_taken_0x35cad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35cad4) {
            ctx->pc = 0x35CBB8u;
            goto label_35cbb8;
        }
    }
    ctx->pc = 0x35CADCu;
    // 0x35cadc: 0x10870010  beq         $a0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x35CADCu;
    {
        const bool branch_taken_0x35cadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x35cadc) {
            ctx->pc = 0x35CB20u;
            goto label_35cb20;
        }
    }
    ctx->pc = 0x35CAE4u;
    // 0x35cae4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CAE4u;
    {
        const bool branch_taken_0x35cae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cae4) {
            ctx->pc = 0x35CAF8u;
            goto label_35caf8;
        }
    }
    ctx->pc = 0x35CAECu;
    // 0x35caec: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x35CAECu;
    {
        const bool branch_taken_0x35caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35caec) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CAF4u;
    // 0x35caf4: 0x0  nop
    ctx->pc = 0x35caf4u;
    // NOP
label_35caf8:
    // 0x35caf8: 0x81030564  lb          $v1, 0x564($t0)
    ctx->pc = 0x35caf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1380)));
    // 0x35cafc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CAFCu;
    {
        const bool branch_taken_0x35cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAFCu;
        // 0x35cb00: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cafc) {
            ctx->pc = 0x35CB10u;
            goto label_35cb10;
        }
    }
    ctx->pc = 0x35CB04u;
    // 0x35cb04: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x35CB04u;
    {
        const bool branch_taken_0x35cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB04u;
        // 0x35cb08: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb04) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CB0Cu;
    // 0x35cb0c: 0x0  nop
    ctx->pc = 0x35cb0cu;
    // NOP
label_35cb10:
    // 0x35cb10: 0xc0d71d0  jal         func_35C740
    ctx->pc = 0x35CB10u;
    SET_GPR_U32(ctx, 31, 0x35CB18u);
    ctx->pc = 0x35C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C740u, 0x35CB10u, 0x35CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB18u;
label_35cb18:
    // 0x35cb18: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x35CB18u;
    {
        const bool branch_taken_0x35cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb18) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CB20u;
label_35cb20:
    // 0x35cb20: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35cb24: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x35cb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35cb28: 0x8d050560  lw          $a1, 0x560($t0)
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1376)));
    // 0x35cb2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35cb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35cb30: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x35cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x35cb34: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x35cb34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35cb38: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35cb3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35cb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cb40: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x35cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35cb44: 0xad030560  sw          $v1, 0x560($t0)
    ctx->pc = 0x35cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1376), GPR_U32(ctx, 3));
    // 0x35cb48: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cb4c: 0x8f878bbc  lw          $a3, -0x7444($gp)
    ctx->pc = 0x35cb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cb50: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35cb50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35cb54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35cb54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35cb58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35cb58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cb5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35CB5Cu;
    {
        const bool branch_taken_0x35cb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB5Cu;
        // 0x35cb60: 0x8ce40560  lw          $a0, 0x560($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb5c) {
            ctx->pc = 0x35CB74u;
            goto label_35cb74;
        }
    }
    ctx->pc = 0x35CB64u;
    // 0x35cb64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35cb64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35cb68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x35cb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35cb6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35CB6Cu;
    {
        const bool branch_taken_0x35cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb6c) {
            ctx->pc = 0x35CB88u;
            goto label_35cb88;
        }
    }
    ctx->pc = 0x35CB74u;
label_35cb74:
    // 0x35cb74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35cb74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35cb78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35cb78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35cb7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x35cb7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35cb80: 0x0  nop
    ctx->pc = 0x35cb80u;
    // NOP
    // 0x35cb84: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x35cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_35cb88:
    // 0x35cb88: 0x1483009b  bne         $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x35CB88u;
    {
        const bool branch_taken_0x35cb88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35cb88) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CB90u;
    // 0x35cb90: 0x80e50551  lb          $a1, 0x551($a3)
    ctx->pc = 0x35cb90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1361)));
    // 0x35cb94: 0x3c034349  lui         $v1, 0x4349
    ctx->pc = 0x35cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17225 << 16));
    // 0x35cb98: 0x3464416f  ori         $a0, $v1, 0x416F
    ctx->pc = 0x35cb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16751);
    // 0x35cb9c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x35cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35cba0: 0xa0e30551  sb          $v1, 0x551($a3)
    ctx->pc = 0x35cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1361), (uint8_t)GPR_U32(ctx, 3));
    // 0x35cba4: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cba8: 0xac64055c  sw          $a0, 0x55C($v1)
    ctx->pc = 0x35cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1372), GPR_U32(ctx, 4));
    // 0x35cbac: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cbb0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x35CBB0u;
    {
        const bool branch_taken_0x35cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CBB0u;
        // 0x35cbb4: 0xac600554  sw          $zero, 0x554($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cbb0) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CBB8u;
label_35cbb8:
    // 0x35cbb8: 0x8d040554  lw          $a0, 0x554($t0)
    ctx->pc = 0x35cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1364)));
    // 0x35cbbc: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x35cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x35cbc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35cbc4: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x35cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x35cbc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cbcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35cbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cbd0: 0x841818  mult        $v1, $a0, $a0
    ctx->pc = 0x35cbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35cbd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35cbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35cbd8: 0x0  nop
    ctx->pc = 0x35cbd8u;
    // NOP
    // 0x35cbdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35cbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35cbe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35cbe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35cbe4: 0xe5000558  swc1        $f0, 0x558($t0)
    ctx->pc = 0x35cbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 1368), bits); }
    // 0x35cbe8: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cbec: 0xc4600558  lwc1        $f0, 0x558($v1)
    ctx->pc = 0x35cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cbf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35cbf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35cbf4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x35cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x35cbf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35cbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35cbfc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x35cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x35cc00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x35cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x35cc04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35cc08: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CC08u;
    SET_GPR_U32(ctx, 31, 0x35CC10u);
    ctx->pc = 0x35CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC08u;
    // 0x35cc0c: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CC08u, 0x35CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC10u;
label_35cc10:
    // 0x35cc10: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cc14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cc18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35cc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cc1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35cc20: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CC20u;
    SET_GPR_U32(ctx, 31, 0x35CC28u);
    ctx->pc = 0x35CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC20u;
    // 0x35cc24: 0x24450390  addiu       $a1, $v0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CC20u, 0x35CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC28u;
label_35cc28:
    // 0x35cc28: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cc2c: 0x3c034544  lui         $v1, 0x4544
    ctx->pc = 0x35cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17732 << 16));
    // 0x35cc30: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x35cc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x35cc34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35cc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cc38: 0x8c830554  lw          $v1, 0x554($a0)
    ctx->pc = 0x35cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1364)));
    // 0x35cc3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35cc40: 0xac830554  sw          $v1, 0x554($a0)
    ctx->pc = 0x35cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1364), GPR_U32(ctx, 3));
    // 0x35cc44: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cc48: 0xc4620558  lwc1        $f2, 0x558($v1)
    ctx->pc = 0x35cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cc4c: 0xc461055c  lwc1        $f1, 0x55C($v1)
    ctx->pc = 0x35cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35cc50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35cc54: 0xe461055c  swc1        $f1, 0x55C($v1)
    ctx->pc = 0x35cc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1372), bits); }
    // 0x35cc58: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cc5c: 0xc481055c  lwc1        $f1, 0x55C($a0)
    ctx->pc = 0x35cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35cc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cc64: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x35CC64u;
    {
        const bool branch_taken_0x35cc64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35cc64) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CC6Cu;
    // 0x35cc6c: 0x80830551  lb          $v1, 0x551($a0)
    ctx->pc = 0x35cc6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1361)));
    // 0x35cc70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35cc74: 0xa0830551  sb          $v1, 0x551($a0)
    ctx->pc = 0x35cc74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1361), (uint8_t)GPR_U32(ctx, 3));
    // 0x35cc78: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cc7c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x35CC7Cu;
    {
        const bool branch_taken_0x35cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC7Cu;
        // 0x35cc80: 0xa0600564  sb          $zero, 0x564($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc7c) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CC84u;
    // 0x35cc84: 0x0  nop
    ctx->pc = 0x35cc84u;
    // NOP
label_35cc88:
    // 0x35cc88: 0x81020564  lb          $v0, 0x564($t0)
    ctx->pc = 0x35cc88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1380)));
    // 0x35cc8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CC8Cu;
    {
        const bool branch_taken_0x35cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC8Cu;
        // 0x35cc90: 0x25060564  addiu       $a2, $t0, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc8c) {
            ctx->pc = 0x35CCA8u;
            goto label_35cca8;
        }
    }
    ctx->pc = 0x35CC94u;
    // 0x35cc94: 0xc0d71f4  jal         func_35C7D0
    ctx->pc = 0x35CC94u;
    SET_GPR_U32(ctx, 31, 0x35CC9Cu);
    ctx->pc = 0x35C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C7D0u, 0x35CC94u, 0x35CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC9Cu;
label_35cc9c:
    // 0x35cc9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35CC9Cu;
    {
        const bool branch_taken_0x35cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cc9c) {
            ctx->pc = 0x35CD00u;
            goto label_35cd00;
        }
    }
    ctx->pc = 0x35CCA4u;
    // 0x35cca4: 0x0  nop
    ctx->pc = 0x35cca4u;
    // NOP
label_35cca8:
    // 0x35cca8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35ccac: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x35ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x35ccb0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x35ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x35ccb4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x35ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x35ccb8: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x35ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x35ccbc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x35ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35ccc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35ccc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35ccc4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x35ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x35ccc8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x35cccc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35ccd0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x35ccd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x35ccd4: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x35ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x35ccd8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x35ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x35ccdc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x35ccdcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x35cce0: 0x0  nop
    ctx->pc = 0x35cce0u;
    // NOP
    // 0x35cce4: 0x0  nop
    ctx->pc = 0x35cce4u;
    // NOP
    // 0x35cce8: 0x1010  mfhi        $v0
    ctx->pc = 0x35cce8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35ccec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CCECu;
    {
        const bool branch_taken_0x35ccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ccec) {
            ctx->pc = 0x35CD00u;
            goto label_35cd00;
        }
    }
    ctx->pc = 0x35CCF4u;
    // 0x35ccf4: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x35ccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x35ccf8: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35ccfc: 0xac400560  sw          $zero, 0x560($v0)
    ctx->pc = 0x35ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 0));
label_35cd00:
    // 0x35cd00: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cd04: 0x27b20044  addiu       $s2, $sp, 0x44
    ctx->pc = 0x35cd04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x35cd08: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x35cd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x35cd0c: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x35cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x35cd10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35cd14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cd18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35cd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cd1c: 0xc4600558  lwc1        $f0, 0x558($v1)
    ctx->pc = 0x35cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cd20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35cd20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35cd24: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x35cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x35cd28: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x35cd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35cd2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35cd30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35cd34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35cd38: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CD38u;
    SET_GPR_U32(ctx, 31, 0x35CD40u);
    ctx->pc = 0x35CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD38u;
    // 0x35cd3c: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CD38u, 0x35CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD40u;
label_35cd40:
    // 0x35cd40: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cd44: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cd48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35cd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cd4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35cd50: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CD50u;
    SET_GPR_U32(ctx, 31, 0x35CD58u);
    ctx->pc = 0x35CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD50u;
    // 0x35cd54: 0x24450390  addiu       $a1, $v0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CD50u, 0x35CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD58u;
label_35cd58:
    // 0x35cd58: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cd5c: 0x3c0345fe  lui         $v1, 0x45FE
    ctx->pc = 0x35cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17918 << 16));
    // 0x35cd60: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x35cd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x35cd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35cd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cd68: 0xc4820558  lwc1        $f2, 0x558($a0)
    ctx->pc = 0x35cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35cd6c: 0xc481055c  lwc1        $f1, 0x55C($a0)
    ctx->pc = 0x35cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cd70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35cd70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35cd74: 0xe481055c  swc1        $f1, 0x55C($a0)
    ctx->pc = 0x35cd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1372), bits); }
    // 0x35cd78: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cd7c: 0xc461055c  lwc1        $f1, 0x55C($v1)
    ctx->pc = 0x35cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cd80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35cd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cd84: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x35CD84u;
    {
        const bool branch_taken_0x35cd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35cd84) {
            ctx->pc = 0x35CDF8u;
            goto label_35cdf8;
        }
    }
    ctx->pc = 0x35CD8Cu;
    // 0x35cd8c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x35cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x35cd90: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x35cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x35cd94: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x35cd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35cd98: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cd9c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x35cda0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35cda4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35cda8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35cda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cdac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35cdb0: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cdb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35cdb8: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CDB8u;
    SET_GPR_U32(ctx, 31, 0x35CDC0u);
    ctx->pc = 0x35CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDB8u;
    // 0x35cdbc: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CDB8u, 0x35CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDC0u;
label_35cdc0:
    // 0x35cdc0: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cdc4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35cdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35cdc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35cdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cdcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35cdd0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35CDD0u;
    SET_GPR_U32(ctx, 31, 0x35CDD8u);
    ctx->pc = 0x35CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDD0u;
    // 0x35cdd4: 0x24450390  addiu       $a1, $v0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35CDD0u, 0x35CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDD8u;
label_35cdd8:
    // 0x35cdd8: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35cddc: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x35cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x35cde0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x35cde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x35cde4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35cde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cde8: 0xc481055c  lwc1        $f1, 0x55C($a0)
    ctx->pc = 0x35cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cdec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35cdecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35cdf0: 0xe480055c  swc1        $f0, 0x55C($a0)
    ctx->pc = 0x35cdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1372), bits); }
    // 0x35cdf4: 0x0  nop
    ctx->pc = 0x35cdf4u;
    // NOP
label_35cdf8:
    // 0x35cdf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ce00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ce00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ce04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ce04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ce08: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE08u;
        // 0x35ce0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE10u;
}
