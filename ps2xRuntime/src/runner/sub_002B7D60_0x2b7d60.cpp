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

// Function: sub_002B7D60
// Address: 0x2b7d60 - 0x2b8c6c
void sub_002B7D60_0x2b7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D60_0x2b7d60");
#endif

    switch (ctx->pc) {
        case 0x2b8038u: goto label_2b8038;
        case 0x2b80a8u: goto label_2b80a8;
        case 0x2b811cu: goto label_2b811c;
        case 0x2b81d8u: goto label_2b81d8;
        case 0x2b8240u: goto label_2b8240;
        case 0x2b824cu: goto label_2b824c;
        case 0x2b8274u: goto label_2b8274;
        case 0x2b827cu: goto label_2b827c;
        case 0x2b82acu: goto label_2b82ac;
        case 0x2b83b0u: goto label_2b83b0;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b882cu: goto label_2b882c;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8a44u: goto label_2b8a44;
        case 0x2b8a54u: goto label_2b8a54;
        case 0x2b8a64u: goto label_2b8a64;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8aa4u: goto label_2b8aa4;
        case 0x2b8ab4u: goto label_2b8ab4;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8c3cu: goto label_2b8c3c;
        default: break;
    }

    ctx->pc = 0x2b7d60u;

    // 0x2b7d60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b7d64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b7d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b7d68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b7d6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b7d70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b7d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b7d74: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2b7d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b7d78: 0x838389bc  lb          $v1, -0x7644($gp)
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x2b7d7c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B7D7Cu;
    {
        const bool branch_taken_0x2b7d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D7Cu;
        // 0x2b7d80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d7c) {
            ctx->pc = 0x2B7DF8u;
            goto label_2b7df8;
        }
    }
    ctx->pc = 0x2B7D84u;
    // 0x2b7d84: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7d88: 0x3c034290  lui         $v1, 0x4290
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17040 << 16));
    // 0x2b7d8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b7d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7d90: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b7d94: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b7d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b7d98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7d9c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b7d9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b7da0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7da0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7da8: 0x0  nop
    ctx->pc = 0x2b7da8u;
    // NOP
    // 0x2b7dac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b7db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7db4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7DB4u;
    {
        const bool branch_taken_0x2b7db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7db4) {
            ctx->pc = 0x2B7DCCu;
            goto label_2b7dcc;
        }
    }
    ctx->pc = 0x2B7DBCu;
    // 0x2b7dbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7dc0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7dc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7DC4u;
    {
        const bool branch_taken_0x2b7dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7dc4) {
            ctx->pc = 0x2B7DE4u;
            goto label_2b7de4;
        }
    }
    ctx->pc = 0x2B7DCCu;
label_2b7dcc:
    // 0x2b7dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7dd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7dd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7dd8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7ddc: 0x0  nop
    ctx->pc = 0x2b7ddcu;
    // NOP
    // 0x2b7de0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7de4:
    // 0x2b7de4: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b7de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b7de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7dec: 0xa4247468  sh          $a0, 0x7468($at)
    ctx->pc = 0x2b7decu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x677468u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x677468u, _value); } while (0);
    // 0x2b7df0: 0xa38389bc  sb          $v1, -0x7644($gp)
    ctx->pc = 0x2b7df0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937020), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7df4: 0x0  nop
    ctx->pc = 0x2b7df4u;
    // NOP
label_2b7df8:
    // 0x2b7df8: 0x838389c0  lb          $v1, -0x7640($gp)
    ctx->pc = 0x2b7df8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x2b7dfc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B7DFCu;
    {
        const bool branch_taken_0x2b7dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7dfc) {
            ctx->pc = 0x2B7E78u;
            goto label_2b7e78;
        }
    }
    ctx->pc = 0x2B7E04u;
    // 0x2b7e04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7e08: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b7e0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b7e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7e10: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2b7e14: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2b7e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2b7e18: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b7e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b7e1c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7e20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7e20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7e28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b7e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b7e2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b7e30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7e34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7E34u;
    {
        const bool branch_taken_0x2b7e34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E34u;
        // 0x2b7e38: 0x94257468  lhu         $a1, 0x7468($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 29800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e34) {
            ctx->pc = 0x2B7E4Cu;
            goto label_2b7e4c;
        }
    }
    ctx->pc = 0x2B7E3Cu;
    // 0x2b7e3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7e3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7e40: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7e44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7E44u;
    {
        const bool branch_taken_0x2b7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E44u;
        // 0x2b7e48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e44) {
            ctx->pc = 0x2B7E68u;
            goto label_2b7e68;
        }
    }
    ctx->pc = 0x2B7E4Cu;
label_2b7e4c:
    // 0x2b7e4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7e4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7e50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7e54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7e58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7e5c: 0x0  nop
    ctx->pc = 0x2b7e5cu;
    // NOP
    // 0x2b7e60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b7e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7e68:
    // 0x2b7e68: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b7e6c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b7e70: 0xa38389c0  sb          $v1, -0x7640($gp)
    ctx->pc = 0x2b7e70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937024), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7e74: 0xa4247470  sh          $a0, 0x7470($at)
    ctx->pc = 0x2b7e74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x677470u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x677470u, _value); } while (0);
label_2b7e78:
    // 0x2b7e78: 0x838389c4  lb          $v1, -0x763C($gp)
    ctx->pc = 0x2b7e78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937028)));
    // 0x2b7e7c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B7E7Cu;
    {
        const bool branch_taken_0x2b7e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7e7c) {
            ctx->pc = 0x2B7EF8u;
            goto label_2b7ef8;
        }
    }
    ctx->pc = 0x2B7E84u;
    // 0x2b7e84: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7e88: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b7e8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b7e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7e90: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2b7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2b7e94: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2b7e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2b7e98: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b7e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b7e9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7ea0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7ea0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ea8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b7ea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b7eac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7eacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b7eb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7eb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7EB4u;
    {
        const bool branch_taken_0x2b7eb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EB4u;
        // 0x2b7eb8: 0x94257470  lhu         $a1, 0x7470($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 29808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7eb4) {
            ctx->pc = 0x2B7ECCu;
            goto label_2b7ecc;
        }
    }
    ctx->pc = 0x2B7EBCu;
    // 0x2b7ebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7ec0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7EC4u;
    {
        const bool branch_taken_0x2b7ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EC4u;
        // 0x2b7ec8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ec4) {
            ctx->pc = 0x2B7EE8u;
            goto label_2b7ee8;
        }
    }
    ctx->pc = 0x2B7ECCu;
label_2b7ecc:
    // 0x2b7ecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7eccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7ed0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7ed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7ed8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7edc: 0x0  nop
    ctx->pc = 0x2b7edcu;
    // NOP
    // 0x2b7ee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b7ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7ee8:
    // 0x2b7ee8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b7eec: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b7eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b7ef0: 0xa38389c4  sb          $v1, -0x763C($gp)
    ctx->pc = 0x2b7ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937028), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7ef4: 0xa4247478  sh          $a0, 0x7478($at)
    ctx->pc = 0x2b7ef4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x677478u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x677478u, _value); } while (0);
label_2b7ef8:
    // 0x2b7ef8: 0x8e4629c0  lw          $a2, 0x29C0($s2)
    ctx->pc = 0x2b7ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b7efc: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2b7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2b7f00: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2b7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2b7f04: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x2b7f04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x2b7f08: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2b7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2b7f0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7f10: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x2b7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2b7f14: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B7F14u;
    {
        const bool branch_taken_0x2b7f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f14) {
            ctx->pc = 0x2B7FD0u;
            goto label_2b7fd0;
        }
    }
    ctx->pc = 0x2B7F1Cu;
    // 0x2b7f1c: 0xc46200a8  lwc1        $f2, 0xA8($v1)
    ctx->pc = 0x2b7f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7f20: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2b7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2b7f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7f28: 0x0  nop
    ctx->pc = 0x2b7f28u;
    // NOP
    // 0x2b7f2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b7f30: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7f38: 0x0  nop
    ctx->pc = 0x2b7f38u;
    // NOP
    // 0x2b7f3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7f40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7F40u;
    {
        const bool branch_taken_0x2b7f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7f40) {
            ctx->pc = 0x2B7F58u;
            goto label_2b7f58;
        }
    }
    ctx->pc = 0x2B7F48u;
    // 0x2b7f48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7f4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7f50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7F50u;
    {
        const bool branch_taken_0x2b7f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F50u;
        // 0x2b7f54: 0x3c034470  lui         $v1, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f50) {
            ctx->pc = 0x2B7F74u;
            goto label_2b7f74;
        }
    }
    ctx->pc = 0x2B7F58u;
label_2b7f58:
    // 0x2b7f58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7f58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7f5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7f60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7f64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7f68: 0x0  nop
    ctx->pc = 0x2b7f68u;
    // NOP
    // 0x2b7f6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b7f70: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x2b7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
label_2b7f74:
    // 0x2b7f74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7f78: 0x0  nop
    ctx->pc = 0x2b7f78u;
    // NOP
    // 0x2b7f7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b7f80: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7f88: 0x0  nop
    ctx->pc = 0x2b7f88u;
    // NOP
    // 0x2b7f8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7f90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7F90u;
    {
        const bool branch_taken_0x2b7f90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F90u;
        // 0x2b7f94: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f90) {
            ctx->pc = 0x2B7FA8u;
            goto label_2b7fa8;
        }
    }
    ctx->pc = 0x2B7F98u;
    // 0x2b7f98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7f9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7fa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7FA0u;
    {
        const bool branch_taken_0x2b7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FA0u;
        // 0x2b7fa4: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fa0) {
            ctx->pc = 0x2B7FC4u;
            goto label_2b7fc4;
        }
    }
    ctx->pc = 0x2B7FA8u;
label_2b7fa8:
    // 0x2b7fa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7fa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7fac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7fb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7fb4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7fb8: 0x0  nop
    ctx->pc = 0x2b7fb8u;
    // NOP
    // 0x2b7fbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b7fc0: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x2b7fc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2b7fc4:
    // 0x2b7fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7FC4u;
    {
        const bool branch_taken_0x2b7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fc4) {
            ctx->pc = 0x2B7FD8u;
            goto label_2b7fd8;
        }
    }
    ctx->pc = 0x2B7FCCu;
    // 0x2b7fcc: 0x0  nop
    ctx->pc = 0x2b7fccu;
    // NOP
label_2b7fd0:
    // 0x2b7fd0: 0x64110140  daddiu      $s1, $zero, 0x140
    ctx->pc = 0x2b7fd0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
    // 0x2b7fd4: 0x641003c0  daddiu      $s0, $zero, 0x3C0
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)960);
label_2b7fd8:
    // 0x2b7fd8: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7fdc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2b7fe0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2b7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2b7fe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b7fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b7fe8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b7fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b7fec: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2b7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x2b7ff0: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x2b7ff4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b7ff8: 0xae4306c8  sw          $v1, 0x6C8($s2)
    ctx->pc = 0x2b7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1736), GPR_U32(ctx, 3));
    // 0x2b7ffc: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x2b7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2b8000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b8004: 0xae4306cc  sw          $v1, 0x6CC($s2)
    ctx->pc = 0x2b8004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
    // 0x2b8008: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x2b8008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b800c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2b800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2b8010: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b8010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b8014: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x2b8014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b8018: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8018u;
    {
        const bool branch_taken_0x2b8018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8018) {
            ctx->pc = 0x2B8038u;
            goto label_2b8038;
        }
    }
    ctx->pc = 0x2B8020u;
    // 0x2b8020: 0x92430821  lbu         $v1, 0x821($s2)
    ctx->pc = 0x2b8020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
    // 0x2b8024: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2b8024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b8028: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8028u;
    {
        const bool branch_taken_0x2b8028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8028u;
        // 0x2b802c: 0x3c048432  lui         $a0, 0x8432 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33842 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8028) {
            ctx->pc = 0x2B8038u;
            goto label_2b8038;
        }
    }
    ctx->pc = 0x2B8030u;
    // 0x2b8030: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B8030u;
    SET_GPR_U32(ctx, 31, 0x2B8038u);
    ctx->pc = 0x2B8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8030u;
    // 0x2b8034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B8030u, 0x2B8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8038u;
label_2b8038:
    // 0x2b8038: 0x92430821  lbu         $v1, 0x821($s2)
    ctx->pc = 0x2b8038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
    // 0x2b803c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2b803cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b8040: 0x10200303  beqz        $at, . + 4 + (0x303 << 2)
    ctx->pc = 0x2B8040u;
    {
        const bool branch_taken_0x2b8040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8040u;
        // 0x2b8044: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8040) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8048u;
    // 0x2b8048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b804c: 0x24847490  addiu       $a0, $a0, 0x7490
    ctx->pc = 0x2b804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29840));
    // 0x2b8050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8054: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b8054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8058: 0x600008  jr          $v1
    ctx->pc = 0x2B8058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B8060u: goto label_2b8060;
            case 0x2B81F8u: goto label_2b81f8;
            case 0x2B8460u: goto label_2b8460;
            case 0x2B8578u: goto label_2b8578;
            case 0x2B8798u: goto label_2b8798;
            case 0x2B8C18u: goto label_2b8c18;
            case 0x2B8C48u: goto label_2b8c48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B8060u;
label_2b8060:
    // 0x2b8060: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b8064: 0x24424fd8  addiu       $v0, $v0, 0x4FD8
    ctx->pc = 0x2b8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20440));
    // 0x2b8068: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b8068u;
    { uint32_t bits = FAST_READ32(0x4E4FD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b806c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b806cu;
    { uint32_t bits = FAST_READ32(0x4E4FDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b8070u;
    { uint32_t bits = FAST_READ32(0x4E4FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8074: 0xe64206a0  swc1        $f2, 0x6A0($s2)
    ctx->pc = 0x2b8074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1696), bits); }
    // 0x2b8078: 0xe64106a4  swc1        $f1, 0x6A4($s2)
    ctx->pc = 0x2b8078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1700), bits); }
    // 0x2b807c: 0xe64006a8  swc1        $f0, 0x6A8($s2)
    ctx->pc = 0x2b807cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1704), bits); }
    // 0x2b8080: 0x9642082a  lhu         $v0, 0x82A($s2)
    ctx->pc = 0x2b8080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b8084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b8084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b8088: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2B8088u;
    {
        const bool branch_taken_0x2b8088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8088) {
            ctx->pc = 0x2B81C0u;
            goto label_2b81c0;
        }
    }
    ctx->pc = 0x2B8090u;
    // 0x2b8090: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x2b8090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b8094: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x2b8094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2b8098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b809c: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2b809cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2b80a0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2B80A0u;
    SET_GPR_U32(ctx, 31, 0x2B80A8u);
    ctx->pc = 0x2B80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B80A0u;
    // 0x2b80a4: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B80A0u, 0x2B80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B80A8u;
label_2b80a8:
    // 0x2b80a8: 0x8e4529c0  lw          $a1, 0x29C0($s2)
    ctx->pc = 0x2b80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b80ac: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b80acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b80b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b80b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b80b4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b80b8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b80b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b80bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b80c0: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x2b80c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b80c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b80c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b80c8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b80cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b80ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b80d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b80d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b80d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b80d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b80d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b80d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b80dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B80DCu;
    {
        const bool branch_taken_0x2b80dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b80dc) {
            ctx->pc = 0x2B80F4u;
            goto label_2b80f4;
        }
    }
    ctx->pc = 0x2B80E4u;
    // 0x2b80e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b80e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b80e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b80e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b80ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B80ECu;
    {
        const bool branch_taken_0x2b80ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80ECu;
        // 0x2b80f0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80ec) {
            ctx->pc = 0x2B8110u;
            goto label_2b8110;
        }
    }
    ctx->pc = 0x2B80F4u;
label_2b80f4:
    // 0x2b80f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b80f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b80f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b80fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b80fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8100: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8104: 0x0  nop
    ctx->pc = 0x2b8104u;
    // NOP
    // 0x2b8108: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b8108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b810c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b8110:
    // 0x2b8110: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b8114: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B8114u;
    SET_GPR_U32(ctx, 31, 0x2B811Cu);
    ctx->pc = 0x2B8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8114u;
    // 0x2b8118: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B8114u, 0x2B811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B811Cu;
label_2b811c:
    // 0x2b811c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b811cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8120: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2b8124: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x2b8124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2b8128: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b8128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b812c: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x2b812cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8130: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2b8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2b8134: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x2b8134u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8138: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b813c: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x2b813cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x2b8140: 0xa64407f0  sh          $a0, 0x7F0($s2)
    ctx->pc = 0x2b8140u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8144: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b8148: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b814c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b814cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8150: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8154: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8158: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b815c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b815cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b8160: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8168: 0x0  nop
    ctx->pc = 0x2b8168u;
    // NOP
    // 0x2b816c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b816cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8174: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8174u;
    {
        const bool branch_taken_0x2b8174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8174) {
            ctx->pc = 0x2B818Cu;
            goto label_2b818c;
        }
    }
    ctx->pc = 0x2B817Cu;
    // 0x2b817c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b817cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8180: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8184u;
    {
        const bool branch_taken_0x2b8184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8184u;
        // 0x2b8188: 0xa6440826  sh          $a0, 0x826($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8184) {
            ctx->pc = 0x2B81A8u;
            goto label_2b81a8;
        }
    }
    ctx->pc = 0x2B818Cu;
label_2b818c:
    // 0x2b818c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b818cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8190: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8194: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8198: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b819c: 0x0  nop
    ctx->pc = 0x2b819cu;
    // NOP
    // 0x2b81a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b81a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b81a4: 0xa6440826  sh          $a0, 0x826($s2)
    ctx->pc = 0x2b81a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 4));
label_2b81a8:
    // 0x2b81a8: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b81ac: 0x94247478  lhu         $a0, 0x7478($at)
    ctx->pc = 0x2b81acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x677478u));
    // 0x2b81b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b81b4: 0xa6440828  sh          $a0, 0x828($s2)
    ctx->pc = 0x2b81b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b81b8: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x2B81B8u;
    {
        const bool branch_taken_0x2b81b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81B8u;
        // 0x2b81bc: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81b8) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B81C0u;
label_2b81c0:
    // 0x2b81c0: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x2b81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b81c4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2b81c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2b81c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b81c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81cc: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2b81ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2b81d0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2B81D0u;
    SET_GPR_U32(ctx, 31, 0x2B81D8u);
    ctx->pc = 0x2B81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B81D0u;
    // 0x2b81d4: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B81D0u, 0x2B81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81D8u;
label_2b81d8:
    // 0x2b81d8: 0x8e4529c0  lw          $a1, 0x29C0($s2)
    ctx->pc = 0x2b81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b81dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b81e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b81e4: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x2b81e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b81e8: 0xa64407f0  sh          $a0, 0x7F0($s2)
    ctx->pc = 0x2b81e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b81ec: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x2B81ECu;
    {
        const bool branch_taken_0x2b81ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81ECu;
        // 0x2b81f0: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81ec) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B81F4u;
    // 0x2b81f4: 0x0  nop
    ctx->pc = 0x2b81f4u;
    // NOP
label_2b81f8:
    // 0x2b81f8: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x2b81f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b81fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B81FCu;
    {
        const bool branch_taken_0x2b81fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81FCu;
        // 0x2b8200: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81fc) {
            ctx->pc = 0x2B8218u;
            goto label_2b8218;
        }
    }
    ctx->pc = 0x2B8204u;
    // 0x2b8204: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b8204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8208: 0xa6440826  sh          $a0, 0x826($s2)
    ctx->pc = 0x2b8208u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b820c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b8210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8210u;
    {
        const bool branch_taken_0x2b8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8210u;
        // 0x2b8214: 0xa64307f0  sh          $v1, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8210) {
            ctx->pc = 0x2B8220u;
            goto label_2b8220;
        }
    }
    ctx->pc = 0x2B8218u;
label_2b8218:
    // 0x2b8218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b8218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b821c: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x2b821cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2b8220:
    // 0x2b8220: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8224: 0x96440828  lhu         $a0, 0x828($s2)
    ctx->pc = 0x2b8224u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b8228: 0x94237470  lhu         $v1, 0x7470($at)
    ctx->pc = 0x2b8228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x677470u));
    // 0x2b822c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B822Cu;
    {
        const bool branch_taken_0x2b822c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b822c) {
            ctx->pc = 0x2B8258u;
            goto label_2b8258;
        }
    }
    ctx->pc = 0x2B8234u;
    // 0x2b8234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8238: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B8238u;
    SET_GPR_U32(ctx, 31, 0x2B8240u);
    ctx->pc = 0x2B823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8238u;
    // 0x2b823c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B8238u, 0x2B8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8240u;
label_2b8240:
    // 0x2b8240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8244: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B8244u;
    SET_GPR_U32(ctx, 31, 0x2B824Cu);
    ctx->pc = 0x2B8248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8244u;
    // 0x2b8248: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B8244u, 0x2B824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B824Cu;
label_2b824c:
    // 0x2b824c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B824Cu;
    {
        const bool branch_taken_0x2b824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b824c) {
            ctx->pc = 0x2B82B0u;
            goto label_2b82b0;
        }
    }
    ctx->pc = 0x2B8254u;
    // 0x2b8254: 0x0  nop
    ctx->pc = 0x2b8254u;
    // NOP
label_2b8258:
    // 0x2b8258: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b825c: 0x94237468  lhu         $v1, 0x7468($at)
    ctx->pc = 0x2b825cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x677468u));
    // 0x2b8260: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B8260u;
    {
        const bool branch_taken_0x2b8260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8260) {
            ctx->pc = 0x2B82B0u;
            goto label_2b82b0;
        }
    }
    ctx->pc = 0x2B8268u;
    // 0x2b8268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b826c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B826Cu;
    SET_GPR_U32(ctx, 31, 0x2B8274u);
    ctx->pc = 0x2B8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B826Cu;
    // 0x2b8270: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B826Cu, 0x2B8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8274u;
label_2b8274:
    // 0x2b8274: 0xc0962b8  jal         func_258AE0
    ctx->pc = 0x2B8274u;
    SET_GPR_U32(ctx, 31, 0x2B827Cu);
    ctx->pc = 0x258AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AE0u, 0x2B8274u, 0x2B827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B827Cu;
label_2b827c:
    // 0x2b827c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8280: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b8280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b8284: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2b8288: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2b8288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2b828c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b828cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b8298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b829c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b829cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b82a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2B82A4u;
    SET_GPR_U32(ctx, 31, 0x2B82ACu);
    ctx->pc = 0x2B82A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B82A4u;
    // 0x2b82a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2B82A4u, 0x2B82ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82ACu;
label_2b82ac:
    // 0x2b82ac: 0x0  nop
    ctx->pc = 0x2b82acu;
    // NOP
label_2b82b0:
    // 0x2b82b0: 0x96430828  lhu         $v1, 0x828($s2)
    ctx->pc = 0x2b82b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b82b4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2B82B4u;
    {
        const bool branch_taken_0x2b82b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82b4) {
            ctx->pc = 0x2B83B8u;
            goto label_2b83b8;
        }
    }
    ctx->pc = 0x2B82BCu;
    // 0x2b82bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b82c0: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x2b82c4: 0xa6430828  sh          $v1, 0x828($s2)
    ctx->pc = 0x2b82c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b82c8: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x2b82c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x2b82cc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b82ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b82d0: 0xac22fe44  sw          $v0, -0x1BC($at)
    ctx->pc = 0x2b82d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE44u, _value); } while (0);
    // 0x2b82d4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b82d8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2b82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2b82dc: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b82e0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2b82e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2b82e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b82e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b82e8: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x2b82e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2b82ec: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b82f0: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b82f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b82f4: 0x96440828  lhu         $a0, 0x828($s2)
    ctx->pc = 0x2b82f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b82f8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B82F8u;
    {
        const bool branch_taken_0x2b82f8 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2b82f8) {
            ctx->pc = 0x2B830Cu;
            goto label_2b830c;
        }
    }
    ctx->pc = 0x2B8300u;
    // 0x2b8300: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b8300u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8304u;
    {
        const bool branch_taken_0x2b8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8304u;
        // 0x2b8308: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8304) {
            ctx->pc = 0x2B8328u;
            goto label_2b8328;
        }
    }
    ctx->pc = 0x2B830Cu;
label_2b830c:
    // 0x2b830c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b830cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b8310: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b8314: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b8314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b8318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b831c: 0x0  nop
    ctx->pc = 0x2b831cu;
    // NOP
    // 0x2b8320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b8320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b8324: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b8324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b8328:
    // 0x2b8328: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8328u;
    {
        const bool branch_taken_0x2b8328 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8328u;
        // 0x2b832c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8328) {
            ctx->pc = 0x2B833Cu;
            goto label_2b833c;
        }
    }
    ctx->pc = 0x2B8330u;
    // 0x2b8330: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b8330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8334u;
    {
        const bool branch_taken_0x2b8334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8334u;
        // 0x2b8338: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8334) {
            ctx->pc = 0x2B8358u;
            goto label_2b8358;
        }
    }
    ctx->pc = 0x2B833Cu;
label_2b833c:
    // 0x2b833c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b833cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b8340: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b8344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b8344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b8348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b834c: 0x0  nop
    ctx->pc = 0x2b834cu;
    // NOP
    // 0x2b8350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b8350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b8354: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b8354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b8358:
    // 0x2b8358: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b835c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8360: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b8360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b8364: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8368: 0x3c064316  lui         $a2, 0x4316
    ctx->pc = 0x2b8368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17174 << 16));
    // 0x2b836c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8374: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b8374u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8378: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b837c: 0xac22fe48  sw          $v0, -0x1B8($at)
    ctx->pc = 0x2b837cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE48u, _value); } while (0);
    // 0x2b8380: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8384: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x2b8384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b8388: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b838c: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b838cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b8390: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8394: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b8398: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b839c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2b839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2b83a0: 0xe420fe4c  swc1        $f0, -0x1B4($at)
    ctx->pc = 0x2b83a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE4Cu, _value); } while (0); }
    // 0x2b83a4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b83a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b83a8: 0xc064084  jal         func_190210
    ctx->pc = 0x2B83A8u;
    SET_GPR_U32(ctx, 31, 0x2B83B0u);
    ctx->pc = 0x2B83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83A8u;
    // 0x2b83ac: 0xac22fe84  sw          $v0, -0x17C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x2B83A8u, 0x2B83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83B0u;
label_2b83b0:
    // 0x2b83b0: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x2B83B0u;
    {
        const bool branch_taken_0x2b83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b83b0) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B83B8u;
label_2b83b8:
    // 0x2b83b8: 0x8e4a0148  lw          $t2, 0x148($s2)
    ctx->pc = 0x2b83b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b83bc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2b83bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2b83c0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2b83c4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b83c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b83c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2b83c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b83cc: 0x2407007d  addiu       $a3, $zero, 0x7D
    ctx->pc = 0x2b83ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2b83d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b83d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b83d4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b83d8: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
    // 0x2b83dc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b83dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b83e0: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2b83e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2b83e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b83e8: 0xae490148  sw          $t1, 0x148($s2)
    ctx->pc = 0x2b83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 9));
    // 0x2b83ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b83ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b83f0: 0xa64807f0  sh          $t0, 0x7F0($s2)
    ctx->pc = 0x2b83f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b83f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b83f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b83f8: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b83f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b83fc: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b83fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8400: 0xa64707f2  sh          $a3, 0x7F2($s2)
    ctx->pc = 0x2b8400u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8404: 0xa24607f5  sb          $a2, 0x7F5($s2)
    ctx->pc = 0x2b8404u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b8408: 0xae4507ec  sw          $a1, 0x7EC($s2)
    ctx->pc = 0x2b8408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 5));
    // 0x2b840c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8410: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b8410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b8414: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8418: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b841c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B841Cu;
    {
        const bool branch_taken_0x2b841c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b841c) {
            ctx->pc = 0x2B8434u;
            goto label_2b8434;
        }
    }
    ctx->pc = 0x2B8424u;
    // 0x2b8424: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8428: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b842c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B842Cu;
    {
        const bool branch_taken_0x2b842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B842Cu;
        // 0x2b8430: 0xa6440828  sh          $a0, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b842c) {
            ctx->pc = 0x2B8450u;
            goto label_2b8450;
        }
    }
    ctx->pc = 0x2B8434u;
label_2b8434:
    // 0x2b8434: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8438: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b843c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b843cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8440: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8444: 0x0  nop
    ctx->pc = 0x2b8444u;
    // NOP
    // 0x2b8448: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b844c: 0xa6440828  sh          $a0, 0x828($s2)
    ctx->pc = 0x2b844cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
label_2b8450:
    // 0x2b8450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8454: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x2B8454u;
    {
        const bool branch_taken_0x2b8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8454u;
        // 0x2b8458: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8454) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B845Cu;
    // 0x2b845c: 0x0  nop
    ctx->pc = 0x2b845cu;
    // NOP
label_2b8460:
    // 0x2b8460: 0x8e452ab0  lw          $a1, 0x2AB0($s2)
    ctx->pc = 0x2b8460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b8464: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8464u;
    {
        const bool branch_taken_0x2b8464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8464) {
            ctx->pc = 0x2B84B0u;
            goto label_2b84b0;
        }
    }
    ctx->pc = 0x2B846Cu;
    // 0x2b846c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B846Cu;
    {
        const bool branch_taken_0x2b846c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b846c) {
            ctx->pc = 0x2B8488u;
            goto label_2b8488;
        }
    }
    ctx->pc = 0x2B8474u;
    // 0x2b8474: 0x8ca329c0  lw          $v1, 0x29C0($a1)
    ctx->pc = 0x2b8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x2b8478: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2b8478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b847c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B847Cu;
    {
        const bool branch_taken_0x2b847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b847c) {
            ctx->pc = 0x2B84B0u;
            goto label_2b84b0;
        }
    }
    ctx->pc = 0x2B8484u;
    // 0x2b8484: 0x0  nop
    ctx->pc = 0x2b8484u;
    // NOP
label_2b8488:
    // 0x2b8488: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B8488u;
    {
        const bool branch_taken_0x2b8488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8488) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B8490u;
    // 0x2b8490: 0x90a3065c  lbu         $v1, 0x65C($a1)
    ctx->pc = 0x2b8490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x2b8494: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2b8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2b8498: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8498u;
    {
        const bool branch_taken_0x2b8498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8498) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B84A0u;
    // 0x2b84a0: 0x90a30780  lbu         $v1, 0x780($a1)
    ctx->pc = 0x2b84a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x2b84a4: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B84A4u;
    {
        const bool branch_taken_0x2b84a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b84a4) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B84ACu;
    // 0x2b84ac: 0x0  nop
    ctx->pc = 0x2b84acu;
    // NOP
label_2b84b0:
    // 0x2b84b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b84b4: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x2B84B4u;
    {
        const bool branch_taken_0x2b84b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84B4u;
        // 0x2b84b8: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84b4) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B84BCu;
    // 0x2b84bc: 0x0  nop
    ctx->pc = 0x2b84bcu;
    // NOP
label_2b84c0:
    // 0x2b84c0: 0x90a30821  lbu         $v1, 0x821($a1)
    ctx->pc = 0x2b84c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2081)));
    // 0x2b84c4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2b84c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b84c8: 0x142001e1  bnez        $at, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x2B84C8u;
    {
        const bool branch_taken_0x2b84c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b84c8) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B84D0u;
    // 0x2b84d0: 0x8e4a0148  lw          $t2, 0x148($s2)
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b84d4: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x2b84d8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b84dc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2b84dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2b84e0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b84e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b84e4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b84e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b84e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b84e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b84ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2b84ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b84f0: 0x2407007d  addiu       $a3, $zero, 0x7D
    ctx->pc = 0x2b84f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2b84f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b84f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b84f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b84fc: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x2b84fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
    // 0x2b8500: 0x1492025  or          $a0, $t2, $t1
    ctx->pc = 0x2b8500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2b8504: 0xae440148  sw          $a0, 0x148($s2)
    ctx->pc = 0x2b8504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 4));
    // 0x2b8508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b850c: 0xa64807f0  sh          $t0, 0x7F0($s2)
    ctx->pc = 0x2b850cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b8510: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b8510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8514: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b8514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8518: 0xa64707f2  sh          $a3, 0x7F2($s2)
    ctx->pc = 0x2b8518u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b851c: 0xa24607f5  sb          $a2, 0x7F5($s2)
    ctx->pc = 0x2b851cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b8520: 0xae4507ec  sw          $a1, 0x7EC($s2)
    ctx->pc = 0x2b8520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 5));
    // 0x2b8524: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8528: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b8528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b852c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b852cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8534u;
    {
        const bool branch_taken_0x2b8534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8534) {
            ctx->pc = 0x2B854Cu;
            goto label_2b854c;
        }
    }
    ctx->pc = 0x2B853Cu;
    // 0x2b853c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b853cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8540: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8544u;
    {
        const bool branch_taken_0x2b8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8544u;
        // 0x2b8548: 0xa6440828  sh          $a0, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8544) {
            ctx->pc = 0x2B8568u;
            goto label_2b8568;
        }
    }
    ctx->pc = 0x2B854Cu;
label_2b854c:
    // 0x2b854c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b854cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8550: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8554: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8558: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b855c: 0x0  nop
    ctx->pc = 0x2b855cu;
    // NOP
    // 0x2b8560: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8564: 0xa6440828  sh          $a0, 0x828($s2)
    ctx->pc = 0x2b8564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
label_2b8568:
    // 0x2b8568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b856c: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2B856Cu;
    {
        const bool branch_taken_0x2b856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B856Cu;
        // 0x2b8570: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b856c) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8574u;
    // 0x2b8574: 0x0  nop
    ctx->pc = 0x2b8574u;
    // NOP
label_2b8578:
    // 0x2b8578: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2b8578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b857c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b8580: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B8580u;
    {
        const bool branch_taken_0x2b8580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8580u;
        // 0x2b8584: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8580) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B8588u;
    // 0x2b8588: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B8588u;
    {
        const bool branch_taken_0x2b8588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b8588) {
            ctx->pc = 0x2B85E8u;
            goto label_2b85e8;
        }
    }
    ctx->pc = 0x2B8590u;
    // 0x2b8590: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2b8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b8594: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8594u;
    {
        const bool branch_taken_0x2b8594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8594u;
        // 0x2b8598: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8594) {
            ctx->pc = 0x2B85D8u;
            goto label_2b85d8;
        }
    }
    ctx->pc = 0x2B859Cu;
    // 0x2b859c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B859Cu;
    {
        const bool branch_taken_0x2b859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b859c) {
            ctx->pc = 0x2B85C8u;
            goto label_2b85c8;
        }
    }
    ctx->pc = 0x2B85A4u;
    // 0x2b85a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b85a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B85A8u;
    {
        const bool branch_taken_0x2b85a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b85a8) {
            ctx->pc = 0x2B85B8u;
            goto label_2b85b8;
        }
    }
    ctx->pc = 0x2B85B0u;
    // 0x2b85b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B85B0u;
    {
        const bool branch_taken_0x2b85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b85b0) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B85B8u;
label_2b85b8:
    // 0x2b85b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b85b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b85bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B85BCu;
    {
        const bool branch_taken_0x2b85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85BCu;
        // 0x2b85c0: 0xae4304ac  sw          $v1, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85bc) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B85C4u;
    // 0x2b85c4: 0x0  nop
    ctx->pc = 0x2b85c4u;
    // NOP
label_2b85c8:
    // 0x2b85c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b85c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b85cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B85CCu;
    {
        const bool branch_taken_0x2b85cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85CCu;
        // 0x2b85d0: 0xae4304ac  sw          $v1, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85cc) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B85D4u;
    // 0x2b85d4: 0x0  nop
    ctx->pc = 0x2b85d4u;
    // NOP
label_2b85d8:
    // 0x2b85d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b85d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b85dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B85DCu;
    {
        const bool branch_taken_0x2b85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85DCu;
        // 0x2b85e0: 0xae4304ac  sw          $v1, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85dc) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B85E4u;
    // 0x2b85e4: 0x0  nop
    ctx->pc = 0x2b85e4u;
    // NOP
label_2b85e8:
    // 0x2b85e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b85e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b85ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B85ECu;
    {
        const bool branch_taken_0x2b85ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85ECu;
        // 0x2b85f0: 0xae4304ac  sw          $v1, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85ec) {
            ctx->pc = 0x2B8600u;
            goto label_2b8600;
        }
    }
    ctx->pc = 0x2B85F4u;
    // 0x2b85f4: 0x0  nop
    ctx->pc = 0x2b85f4u;
    // NOP
label_2b85f8:
    // 0x2b85f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b85fc: 0xae4304ac  sw          $v1, 0x4AC($s2)
    ctx->pc = 0x2b85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 3));
label_2b8600:
    // 0x2b8600: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x2b8600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b8604: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2b8604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2b8608: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b8608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b860c: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b860cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b8610: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b8610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b8614: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b8614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b8618: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B8618u;
    {
        const bool branch_taken_0x2b8618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8618u;
        // 0x2b861c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8618) {
            ctx->pc = 0x2B8708u;
            goto label_2b8708;
        }
    }
    ctx->pc = 0x2B8620u;
    // 0x2b8620: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2b8624: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
    // 0x2b8628: 0x3444d97c  ori         $a0, $v0, 0xD97C
    ctx->pc = 0x2b8628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2b862c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2b862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2b8630: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b8630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b8634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8638: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b863c: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x2b863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2b8640: 0xac24fe44  sw          $a0, -0x1BC($at)
    ctx->pc = 0x2b8640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x92FE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE44u, _value); } while (0);
    // 0x2b8644: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8648: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b8648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b864c: 0x96440828  lhu         $a0, 0x828($s2)
    ctx->pc = 0x2b864cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b8650: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8650u;
    {
        const bool branch_taken_0x2b8650 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8650u;
        // 0x2b8654: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8650) {
            ctx->pc = 0x2B8664u;
            goto label_2b8664;
        }
    }
    ctx->pc = 0x2B8658u;
    // 0x2b8658: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b8658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b865c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B865Cu;
    {
        const bool branch_taken_0x2b865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B865Cu;
        // 0x2b8660: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b865c) {
            ctx->pc = 0x2B867Cu;
            goto label_2b867c;
        }
    }
    ctx->pc = 0x2B8664u;
label_2b8664:
    // 0x2b8664: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b8668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b8668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b866c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b866cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8670: 0x0  nop
    ctx->pc = 0x2b8670u;
    // NOP
    // 0x2b8674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b8674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b8678: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b8678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b867c:
    // 0x2b867c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B867Cu;
    {
        const bool branch_taken_0x2b867c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B867Cu;
        // 0x2b8680: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b867c) {
            ctx->pc = 0x2B8690u;
            goto label_2b8690;
        }
    }
    ctx->pc = 0x2B8684u;
    // 0x2b8684: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b8684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8688u;
    {
        const bool branch_taken_0x2b8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8688u;
        // 0x2b868c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8688) {
            ctx->pc = 0x2B86ACu;
            goto label_2b86ac;
        }
    }
    ctx->pc = 0x2B8690u;
label_2b8690:
    // 0x2b8690: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b8690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b8694: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b8694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b8698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b8698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b869c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b869cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b86a0: 0x0  nop
    ctx->pc = 0x2b86a0u;
    // NOP
    // 0x2b86a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b86a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b86a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b86a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b86ac:
    // 0x2b86ac: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86b0: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x2b86b4: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b86b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b86b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b86bc: 0x3c064334  lui         $a2, 0x4334
    ctx->pc = 0x2b86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17204 << 16));
    // 0x2b86c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b86c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b86c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b86c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b86cc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86d0: 0xac22fe4c  sw          $v0, -0x1B4($at)
    ctx->pc = 0x2b86d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE4Cu, _value); } while (0);
    // 0x2b86d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b86d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b86d8: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x2b86d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2b86dc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86e0: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b86e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b86e4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86e8: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x2b86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b86ec: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b86f4: 0xe420fe48  swc1        $f0, -0x1B8($at)
    ctx->pc = 0x2b86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE48u, _value); } while (0); }
    // 0x2b86f8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b86fc: 0xc0640a4  jal         func_190290
    ctx->pc = 0x2B86FCu;
    SET_GPR_U32(ctx, 31, 0x2B8704u);
    ctx->pc = 0x2B8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86FCu;
    // 0x2b8700: 0xac22fe84  sw          $v0, -0x17C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190290u, 0x2B86FCu, 0x2B8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8704u;
label_2b8704:
    // 0x2b8704: 0x0  nop
    ctx->pc = 0x2b8704u;
    // NOP
label_2b8708:
    // 0x2b8708: 0x96430828  lhu         $v1, 0x828($s2)
    ctx->pc = 0x2b8708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b870c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B870Cu;
    {
        const bool branch_taken_0x2b870c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b870c) {
            ctx->pc = 0x2B8720u;
            goto label_2b8720;
        }
    }
    ctx->pc = 0x2B8714u;
    // 0x2b8714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b8718: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x2B8718u;
    {
        const bool branch_taken_0x2b8718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8718u;
        // 0x2b871c: 0xa6430828  sh          $v1, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8718) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8720u;
label_2b8720:
    // 0x2b8720: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b8724: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x2b8724u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8728: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2b8728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2b872c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8730: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x2b8734: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b8734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8738: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2b8738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2b873c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b873cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8740: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8748: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b8748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b874c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b874cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8754: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8754u;
    {
        const bool branch_taken_0x2b8754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8754) {
            ctx->pc = 0x2B876Cu;
            goto label_2b876c;
        }
    }
    ctx->pc = 0x2B875Cu;
    // 0x2b875c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b875cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8760: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8764u;
    {
        const bool branch_taken_0x2b8764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8764u;
        // 0x2b8768: 0xa6440828  sh          $a0, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8764) {
            ctx->pc = 0x2B8788u;
            goto label_2b8788;
        }
    }
    ctx->pc = 0x2B876Cu;
label_2b876c:
    // 0x2b876c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b876cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8770: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8774: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8778: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b877c: 0x0  nop
    ctx->pc = 0x2b877cu;
    // NOP
    // 0x2b8780: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8784: 0xa6440828  sh          $a0, 0x828($s2)
    ctx->pc = 0x2b8784u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 4));
label_2b8788:
    // 0x2b8788: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b878c: 0xa6400826  sh          $zero, 0x826($s2)
    ctx->pc = 0x2b878cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b8790: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2B8790u;
    {
        const bool branch_taken_0x2b8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8790u;
        // 0x2b8794: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8790) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8798u;
label_2b8798:
    // 0x2b8798: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x2b8798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b879c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2b879cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2b87a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b87a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b87a4: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b87a8: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b87a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b87ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b87acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b87b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B87B0u;
    {
        const bool branch_taken_0x2b87b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b87b0) {
            ctx->pc = 0x2B88D0u;
            goto label_2b88d0;
        }
    }
    ctx->pc = 0x2B87B8u;
    // 0x2b87b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b87bc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2b87c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b87c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b87c4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b87c8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b87c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b87cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b87d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b87d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b87d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b87d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b87d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b87d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b87dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b87dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b87e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b87e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b87e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B87E4u;
    {
        const bool branch_taken_0x2b87e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87E4u;
        // 0x2b87e8: 0x96440828  lhu         $a0, 0x828($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87e4) {
            ctx->pc = 0x2B87FCu;
            goto label_2b87fc;
        }
    }
    ctx->pc = 0x2B87ECu;
    // 0x2b87ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b87ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b87f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b87f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b87f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B87F4u;
    {
        const bool branch_taken_0x2b87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87F4u;
        // 0x2b87f8: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87f4) {
            ctx->pc = 0x2B8818u;
            goto label_2b8818;
        }
    }
    ctx->pc = 0x2B87FCu;
label_2b87fc:
    // 0x2b87fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b87fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8800: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b8800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8804: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8808: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b8808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b880c: 0x0  nop
    ctx->pc = 0x2b880cu;
    // NOP
    // 0x2b8810: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b8810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b8814: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2b8814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b8818:
    // 0x2b8818: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8818u;
    {
        const bool branch_taken_0x2b8818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8818) {
            ctx->pc = 0x2B8848u;
            goto label_2b8848;
        }
    }
    ctx->pc = 0x2B8820u;
    // 0x2b8820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8824: 0xc064084  jal         func_190210
    ctx->pc = 0x2B8824u;
    SET_GPR_U32(ctx, 31, 0x2B882Cu);
    ctx->pc = 0x2B8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8824u;
    // 0x2b8828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x2B8824u, 0x2B882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B882Cu;
label_2b882c:
    // 0x2b882c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8830: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b8830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b8834: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2b8834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2b8838: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b883c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B883Cu;
    {
        const bool branch_taken_0x2b883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B883Cu;
        // 0x2b8840: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b883c) {
            ctx->pc = 0x2B88D0u;
            goto label_2b88d0;
        }
    }
    ctx->pc = 0x2B8844u;
    // 0x2b8844: 0x0  nop
    ctx->pc = 0x2b8844u;
    // NOP
label_2b8848:
    // 0x2b8848: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b884c: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x2b884cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b8850: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2b8854: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2b8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2b8858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b885c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b885cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8860: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8864: 0xac22fe44  sw          $v0, -0x1BC($at)
    ctx->pc = 0x2b8864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE44u, _value); } while (0);
    // 0x2b8868: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2b886c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8870: 0xac22fe48  sw          $v0, -0x1B8($at)
    ctx->pc = 0x2b8870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE48u, _value); } while (0);
    // 0x2b8874: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x2b8874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x2b8878: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b887c: 0xac22fe4c  sw          $v0, -0x1B4($at)
    ctx->pc = 0x2b887cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE4Cu, _value); } while (0);
    // 0x2b8880: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x2b8880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2b8884: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8888: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b8888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b888c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b8890: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b8894: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2b8894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2b8898: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b889c: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b889cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b88a0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b88a4: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x2b88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b88a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b88a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b88ac: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b88acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b88b0: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x2b88b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b88b4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b88b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b88b8: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b88bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b88c0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b88c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b88c4: 0xc0640a4  jal         func_190290
    ctx->pc = 0x2B88C4u;
    SET_GPR_U32(ctx, 31, 0x2B88CCu);
    ctx->pc = 0x2B88C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88C4u;
    // 0x2b88c8: 0xac22fe84  sw          $v0, -0x17C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190290u, 0x2B88C4u, 0x2B88CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88CCu;
label_2b88cc:
    // 0x2b88cc: 0x0  nop
    ctx->pc = 0x2b88ccu;
    // NOP
label_2b88d0:
    // 0x2b88d0: 0x96430828  lhu         $v1, 0x828($s2)
    ctx->pc = 0x2b88d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b88d4: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2B88D4u;
    {
        const bool branch_taken_0x2b88d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88d4) {
            ctx->pc = 0x2B8C00u;
            goto label_2b8c00;
        }
    }
    ctx->pc = 0x2B88DCu;
    // 0x2b88dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b88e0: 0xa6430828  sh          $v1, 0x828($s2)
    ctx->pc = 0x2b88e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b88e4: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x2b88e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b88e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B88E8u;
    {
        const bool branch_taken_0x2b88e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88e8) {
            ctx->pc = 0x2B8900u;
            goto label_2b8900;
        }
    }
    ctx->pc = 0x2B88F0u;
    // 0x2b88f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b88f4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2B88F4u;
    {
        const bool branch_taken_0x2b88f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88F4u;
        // 0x2b88f8: 0xa6430826  sh          $v1, 0x826($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88f4) {
            ctx->pc = 0x2B8BB0u;
            goto label_2b8bb0;
        }
    }
    ctx->pc = 0x2B88FCu;
    // 0x2b88fc: 0x0  nop
    ctx->pc = 0x2b88fcu;
    // NOP
label_2b8900:
    // 0x2b8900: 0x838289c8  lb          $v0, -0x7638($gp)
    ctx->pc = 0x2b8900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x2b8904: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B8904u;
    {
        const bool branch_taken_0x2b8904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8904) {
            ctx->pc = 0x2B8A00u;
            goto label_2b8a00;
        }
    }
    ctx->pc = 0x2B890Cu;
    // 0x2b890c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2b890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8910: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b8910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b8914: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b8914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8918: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b8918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b891c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b8920: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b8920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8924: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b8924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b8928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b892c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b892cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8930: 0x0  nop
    ctx->pc = 0x2b8930u;
    // NOP
    // 0x2b8934: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8938: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b893c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B893Cu;
    {
        const bool branch_taken_0x2b893c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b893c) {
            ctx->pc = 0x2B8954u;
            goto label_2b8954;
        }
    }
    ctx->pc = 0x2B8944u;
    // 0x2b8944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8948: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b894c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B894Cu;
    {
        const bool branch_taken_0x2b894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B894Cu;
        // 0x2b8950: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b894c) {
            ctx->pc = 0x2B8970u;
            goto label_2b8970;
        }
    }
    ctx->pc = 0x2B8954u;
label_2b8954:
    // 0x2b8954: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8958: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b8958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b895c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b895cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8960: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8964: 0x0  nop
    ctx->pc = 0x2b8964u;
    // NOP
    // 0x2b8968: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b8968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b896c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2b8970:
    // 0x2b8970: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8978: 0xa0247488  sb          $a0, 0x7488($at)
    ctx->pc = 0x2b8978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x677488u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x677488u, _value); } while (0);
    // 0x2b897c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8980: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b8980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8984: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b8984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8988: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b898c: 0xa0247489  sb          $a0, 0x7489($at)
    ctx->pc = 0x2b898cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x677489u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x677489u, _value); } while (0);
    // 0x2b8990: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8994: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8998: 0xa024748a  sb          $a0, 0x748A($at)
    ctx->pc = 0x2b8998u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x67748Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x67748Au, _value); } while (0);
    // 0x2b899c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b89a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b89a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b89a4: 0xa024748b  sb          $a0, 0x748B($at)
    ctx->pc = 0x2b89a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x67748Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x67748Bu, _value); } while (0);
    // 0x2b89a8: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b89ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b89acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b89b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b89b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b89b4: 0x0  nop
    ctx->pc = 0x2b89b4u;
    // NOP
    // 0x2b89b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b89b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b89bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B89BCu;
    {
        const bool branch_taken_0x2b89bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89BCu;
        // 0x2b89c0: 0xa024748c  sb          $a0, 0x748C($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 29836), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89bc) {
            ctx->pc = 0x2B89D4u;
            goto label_2b89d4;
        }
    }
    ctx->pc = 0x2B89C4u;
    // 0x2b89c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b89c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b89c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b89c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b89cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B89CCu;
    {
        const bool branch_taken_0x2b89cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b89cc) {
            ctx->pc = 0x2B89ECu;
            goto label_2b89ec;
        }
    }
    ctx->pc = 0x2B89D4u;
label_2b89d4:
    // 0x2b89d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b89d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b89d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b89dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b89dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b89e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b89e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b89e4: 0x0  nop
    ctx->pc = 0x2b89e4u;
    // NOP
    // 0x2b89e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2b89ec:
    // 0x2b89ec: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b89ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b89f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b89f4: 0xa023748d  sb          $v1, 0x748D($at)
    ctx->pc = 0x2b89f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x67748Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x67748Du, _value); } while (0);
    // 0x2b89f8: 0xa38289c8  sb          $v0, -0x7638($gp)
    ctx->pc = 0x2b89f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937032), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b89fc: 0x0  nop
    ctx->pc = 0x2b89fcu;
    // NOP
label_2b8a00:
    // 0x2b8a00: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b8a04: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b8a08: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B8A08u;
    SET_GPR_U32(ctx, 31, 0x2B8A10u);
    ctx->pc = 0x2B8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A08u;
    // 0x2b8a0c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B8A08u, 0x2B8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A10u;
label_2b8a10:
    // 0x2b8a10: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x2b8a10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b8a14: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b8a18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8a1c: 0x0  nop
    ctx->pc = 0x2b8a1cu;
    // NOP
    // 0x2b8a20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8a24: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8A24u;
    {
        const bool branch_taken_0x2b8a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A24u;
        // 0x2b8a28: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a24) {
            ctx->pc = 0x2B8A68u;
            goto label_2b8a68;
        }
    }
    ctx->pc = 0x2B8A2Cu;
    // 0x2b8a2c: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b8a30: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2b8a30u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8a34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b8a38: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2b8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b8a3c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2B8A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A44u);
    ctx->pc = 0x2B8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A3Cu;
    // 0x2b8a40: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2B8A3Cu, 0x2B8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A44u;
label_2b8a44:
    // 0x2b8a44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b8a48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b8a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b8a4c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2B8A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A54u);
    ctx->pc = 0x2B8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A4Cu;
    // 0x2b8a50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2B8A4Cu, 0x2B8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A54u;
label_2b8a54:
    // 0x2b8a54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b8a58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b8a5c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2B8A5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A64u);
    ctx->pc = 0x2B8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A5Cu;
    // 0x2b8a60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2B8A5Cu, 0x2B8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A64u;
label_2b8a64:
    // 0x2b8a64: 0x0  nop
    ctx->pc = 0x2b8a64u;
    // NOP
label_2b8a68:
    // 0x2b8a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b8a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b8a70: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2B8A70u;
    SET_GPR_U32(ctx, 31, 0x2B8A78u);
    ctx->pc = 0x2B8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A70u;
    // 0x2b8a74: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2B8A70u, 0x2B8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A78u;
label_2b8a78:
    // 0x2b8a78: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2b8a7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b8a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b8a80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b8a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b8a84: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x2B8A84u;
    SET_GPR_U32(ctx, 31, 0x2B8A8Cu);
    ctx->pc = 0x2B8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A84u;
    // 0x2b8a88: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x2B8A84u, 0x2B8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A8Cu;
label_2b8a8c:
    // 0x2b8a8c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2b8a90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8a98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b8a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a9c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2B8A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B8AA4u);
    ctx->pc = 0x2B8AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A9Cu;
    // 0x2b8aa0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2B8A9Cu, 0x2B8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AA4u;
label_2b8aa4:
    // 0x2b8aa4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8aa8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b8aac: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2B8AACu;
    SET_GPR_U32(ctx, 31, 0x2B8AB4u);
    ctx->pc = 0x2B8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AACu;
    // 0x2b8ab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2B8AACu, 0x2B8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AB4u;
label_2b8ab4:
    // 0x2b8ab4: 0x8e4229cc  lw          $v0, 0x29CC($s2)
    ctx->pc = 0x2b8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10700)));
    // 0x2b8ab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8AB8u;
    {
        const bool branch_taken_0x2b8ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ab8) {
            ctx->pc = 0x2B8AC8u;
            goto label_2b8ac8;
        }
    }
    ctx->pc = 0x2B8AC0u;
    // 0x2b8ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8AC0u;
    {
        const bool branch_taken_0x2b8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0x90420010  lbu         $v0, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac0) {
            ctx->pc = 0x2B8ACCu;
            goto label_2b8acc;
        }
    }
    ctx->pc = 0x2B8AC8u;
label_2b8ac8:
    // 0x2b8ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8acc:
    // 0x2b8acc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b8accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8ad0: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x2b8ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b8ad4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b8ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b8ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8adc: 0x2442747f  addiu       $v0, $v0, 0x747F
    ctx->pc = 0x2b8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29823));
    // 0x2b8ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8ae4: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2b8ae4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8ae8: 0xc0bc558  jal         func_2F1560
    ctx->pc = 0x2B8AE8u;
    SET_GPR_U32(ctx, 31, 0x2B8AF0u);
    ctx->pc = 0x2B8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AE8u;
    // 0x2b8aec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1560u, 0x2B8AE8u, 0x2B8AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AF0u;
label_2b8af0:
    // 0x2b8af0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2b8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2b8af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8af8: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2b8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2b8afc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b8b00: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2b8b04: 0xc052214  jal         func_148850
    ctx->pc = 0x2B8B04u;
    SET_GPR_U32(ctx, 31, 0x2B8B0Cu);
    ctx->pc = 0x2B8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B04u;
    // 0x2b8b08: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2B8B04u, 0x2B8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B0Cu;
label_2b8b0c:
    // 0x2b8b0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8b10: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2b8b14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b8b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8b18: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8b1c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b8b20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8b24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b8b24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b8b28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b30: 0x0  nop
    ctx->pc = 0x2b8b30u;
    // NOP
    // 0x2b8b34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8b38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8b3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8B3Cu;
    {
        const bool branch_taken_0x2b8b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8b3c) {
            ctx->pc = 0x2B8B54u;
            goto label_2b8b54;
        }
    }
    ctx->pc = 0x2B8B44u;
    // 0x2b8b44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8b44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8b48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8b48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8b4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8B4Cu;
    {
        const bool branch_taken_0x2b8b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B4Cu;
        // 0x2b8b50: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b4c) {
            ctx->pc = 0x2B8B70u;
            goto label_2b8b70;
        }
    }
    ctx->pc = 0x2B8B54u;
label_2b8b54:
    // 0x2b8b54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8b54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8b58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8b5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8b5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8b60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8b64: 0x0  nop
    ctx->pc = 0x2b8b64u;
    // NOP
    // 0x2b8b68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b8b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b8b6c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2b8b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b8b70:
    // 0x2b8b70: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2b8b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b8b74: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B8B74u;
    SET_GPR_U32(ctx, 31, 0x2B8B7Cu);
    ctx->pc = 0x2B8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B74u;
    // 0x2b8b78: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B8B74u, 0x2B8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B7Cu;
label_2b8b7c:
    // 0x2b8b7c: 0x8e4329cc  lw          $v1, 0x29CC($s2)
    ctx->pc = 0x2b8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10700)));
    // 0x2b8b80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8B80u;
    {
        const bool branch_taken_0x2b8b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8b80) {
            ctx->pc = 0x2B8B90u;
            goto label_2b8b90;
        }
    }
    ctx->pc = 0x2B8B88u;
    // 0x2b8b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8B88u;
    {
        const bool branch_taken_0x2b8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x90630010  lbu         $v1, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b88) {
            ctx->pc = 0x2B8B94u;
            goto label_2b8b94;
        }
    }
    ctx->pc = 0x2B8B90u;
label_2b8b90:
    // 0x2b8b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b8b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b94:
    // 0x2b8b94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b8b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8b98: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b8b9c: 0x24637487  addiu       $v1, $v1, 0x7487
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29831));
    // 0x2b8ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8ba4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2b8ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8ba8: 0xa6430826  sh          $v1, 0x826($s2)
    ctx->pc = 0x2b8ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8bac: 0x0  nop
    ctx->pc = 0x2b8bacu;
    // NOP
label_2b8bb0:
    // 0x2b8bb0: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x2b8bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2b8bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bb8: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B8BB8u;
    {
        const bool branch_taken_0x2b8bb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8bb8) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8BC0u;
    // 0x2b8bc0: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x2b8bc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2b8bc4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b8bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b8bc8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B8BC8u;
    {
        const bool branch_taken_0x2b8bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BC8u;
        // 0x2b8bcc: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bc8) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8BD0u;
    // 0x2b8bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bd4: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2b8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2b8bd8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2b8bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b8bdc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2b8be0: 0xc052214  jal         func_148850
    ctx->pc = 0x2B8BE0u;
    SET_GPR_U32(ctx, 31, 0x2B8BE8u);
    ctx->pc = 0x2B8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BE0u;
    // 0x2b8be4: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2B8BE0u, 0x2B8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BE8u;
label_2b8be8:
    // 0x2b8be8: 0x96420826  lhu         $v0, 0x826($s2)
    ctx->pc = 0x2b8be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b8bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b8becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bf0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2B8BF0u;
    SET_GPR_U32(ctx, 31, 0x2B8BF8u);
    ctx->pc = 0x2B8BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BF0u;
    // 0x2b8bf4: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B8BF0u, 0x2B8BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BF8u;
label_2b8bf8:
    // 0x2b8bf8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B8BF8u;
    {
        const bool branch_taken_0x2b8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0xa6420826  sh          $v0, 0x826($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bf8) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8C00u;
label_2b8c00:
    // 0x2b8c00: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b8c04: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x2b8c04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8c08: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8c0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8C0Cu;
    {
        const bool branch_taken_0x2b8c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C0Cu;
        // 0x2b8c10: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c0c) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8C14u;
    // 0x2b8c14: 0x0  nop
    ctx->pc = 0x2b8c14u;
    // NOP
label_2b8c18:
    // 0x2b8c18: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x2b8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b8c1c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2b8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2b8c20: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8c24: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b8c28: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x2b8c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x2b8c2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8C2Cu;
    {
        const bool branch_taken_0x2b8c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C2Cu;
        // 0x2b8c30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c2c) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8C34u;
    // 0x2b8c34: 0xc040250  jal         func_100940
    ctx->pc = 0x2B8C34u;
    SET_GPR_U32(ctx, 31, 0x2B8C3Cu);
    ctx->pc = 0x2B8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C34u;
    // 0x2b8c38: 0x265906a0  addiu       $t9, $s2, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2B8C34u, 0x2B8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C3Cu;
label_2b8c3c:
    // 0x2b8c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8C40u;
    {
        const bool branch_taken_0x2b8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C40u;
        // 0x2b8c44: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c40) {
            ctx->pc = 0x2B8C50u;
            goto label_2b8c50;
        }
    }
    ctx->pc = 0x2B8C48u;
label_2b8c48:
    // 0x2b8c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c4c: 0xa2430780  sb          $v1, 0x780($s2)
    ctx->pc = 0x2b8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2b8c50:
    // 0x2b8c50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b8c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b8c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8c58: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2b8c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8c5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b8c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8c60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b8c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C64u;
        // 0x2b8c68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8C6Cu;
}
