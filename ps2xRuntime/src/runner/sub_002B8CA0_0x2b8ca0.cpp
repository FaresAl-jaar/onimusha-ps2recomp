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

// Function: sub_002B8CA0
// Address: 0x2b8ca0 - 0x2b9118
void sub_002B8CA0_0x2b8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8CA0_0x2b8ca0");
#endif

    switch (ctx->pc) {
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90ecu: goto label_2b90ec;
        default: break;
    }

    ctx->pc = 0x2b8ca0u;

    // 0x2b8ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8ca8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8cac: 0x838389cc  lb          $v1, -0x7634($gp)
    ctx->pc = 0x2b8cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
    // 0x2b8cb0: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2B8CB0u;
    {
        const bool branch_taken_0x2b8cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CB0u;
        // 0x2b8cb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8cb0) {
            ctx->pc = 0x2B8EB8u;
            goto label_2b8eb8;
        }
    }
    ctx->pc = 0x2B8CB8u;
    // 0x2b8cb8: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2b8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8cbc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b8cc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b8cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8cc4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8cc8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8ccc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8cd0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b8cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b8cd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8cd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8cdc: 0x0  nop
    ctx->pc = 0x2b8cdcu;
    // NOP
    // 0x2b8ce0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8ce4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8ce8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8CE8u;
    {
        const bool branch_taken_0x2b8ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8ce8) {
            ctx->pc = 0x2B8D00u;
            goto label_2b8d00;
        }
    }
    ctx->pc = 0x2B8CF0u;
    // 0x2b8cf0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8cf4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8cf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8CF8u;
    {
        const bool branch_taken_0x2b8cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CF8u;
        // 0x2b8cfc: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8cf8) {
            ctx->pc = 0x2B8D1Cu;
            goto label_2b8d1c;
        }
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8d04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8d08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8d08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8d0c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8d10: 0x0  nop
    ctx->pc = 0x2b8d10u;
    // NOP
    // 0x2b8d14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8d18: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2b8d1c:
    // 0x2b8d1c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d24: 0xa42474b0  sh          $a0, 0x74B0($at)
    ctx->pc = 0x2b8d24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6774B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6774B0u, _value); } while (0);
    // 0x2b8d28: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b8d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8d2c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8d30: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8d34: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8d38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d40: 0x0  nop
    ctx->pc = 0x2b8d40u;
    // NOP
    // 0x2b8d44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8d48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8d4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8D4Cu;
    {
        const bool branch_taken_0x2b8d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8d4c) {
            ctx->pc = 0x2B8D64u;
            goto label_2b8d64;
        }
    }
    ctx->pc = 0x2B8D54u;
    // 0x2b8d54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8d54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8d58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8D5Cu;
    {
        const bool branch_taken_0x2b8d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D5Cu;
        // 0x2b8d60: 0x3c034220  lui         $v1, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d5c) {
            ctx->pc = 0x2B8D80u;
            goto label_2b8d80;
        }
    }
    ctx->pc = 0x2B8D64u;
label_2b8d64:
    // 0x2b8d64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8d64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8d68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8d6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8d70: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8d74: 0x0  nop
    ctx->pc = 0x2b8d74u;
    // NOP
    // 0x2b8d78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8d7c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2b8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_2b8d80:
    // 0x2b8d80: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d88: 0xa42474b2  sh          $a0, 0x74B2($at)
    ctx->pc = 0x2b8d88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6774B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6774B2u, _value); } while (0);
    // 0x2b8d8c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b8d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8d90: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8d94: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8d98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8d9c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8d9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8da4: 0x0  nop
    ctx->pc = 0x2b8da4u;
    // NOP
    // 0x2b8da8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8dac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8db0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8DB0u;
    {
        const bool branch_taken_0x2b8db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8db0) {
            ctx->pc = 0x2B8DC8u;
            goto label_2b8dc8;
        }
    }
    ctx->pc = 0x2B8DB8u;
    // 0x2b8db8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8dbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8dc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8DC0u;
    {
        const bool branch_taken_0x2b8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DC0u;
        // 0x2b8dc4: 0x3c0341d0  lui         $v1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8dc0) {
            ctx->pc = 0x2B8DE4u;
            goto label_2b8de4;
        }
    }
    ctx->pc = 0x2B8DC8u;
label_2b8dc8:
    // 0x2b8dc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8dcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8dd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8dd4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8dd8: 0x0  nop
    ctx->pc = 0x2b8dd8u;
    // NOP
    // 0x2b8ddc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8de0: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
label_2b8de4:
    // 0x2b8de4: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8dec: 0xa42474b4  sh          $a0, 0x74B4($at)
    ctx->pc = 0x2b8decu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6774B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6774B4u, _value); } while (0);
    // 0x2b8df0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b8df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8df4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8df8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8dfc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8e00: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8e00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e08: 0x0  nop
    ctx->pc = 0x2b8e08u;
    // NOP
    // 0x2b8e0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8e10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8e14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8E14u;
    {
        const bool branch_taken_0x2b8e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8e14) {
            ctx->pc = 0x2B8E2Cu;
            goto label_2b8e2c;
        }
    }
    ctx->pc = 0x2B8E1Cu;
    // 0x2b8e1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8e20: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8E24u;
    {
        const bool branch_taken_0x2b8e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E24u;
        // 0x2b8e28: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e24) {
            ctx->pc = 0x2B8E48u;
            goto label_2b8e48;
        }
    }
    ctx->pc = 0x2B8E2Cu;
label_2b8e2c:
    // 0x2b8e2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8e2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8e30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8e34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8e38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8e3c: 0x0  nop
    ctx->pc = 0x2b8e3cu;
    // NOP
    // 0x2b8e40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b8e44: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2b8e48:
    // 0x2b8e48: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e50: 0xa42474b6  sh          $a0, 0x74B6($at)
    ctx->pc = 0x2b8e50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6774B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6774B6u, _value); } while (0);
    // 0x2b8e54: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b8e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8e58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b8e5c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b8e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b8e60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b8e64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b8e64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e6c: 0x0  nop
    ctx->pc = 0x2b8e6cu;
    // NOP
    // 0x2b8e70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b8e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b8e74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8e78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8E78u;
    {
        const bool branch_taken_0x2b8e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8e78) {
            ctx->pc = 0x2B8E90u;
            goto label_2b8e90;
        }
    }
    ctx->pc = 0x2B8E80u;
    // 0x2b8e80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8e80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8e84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8e88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8E88u;
    {
        const bool branch_taken_0x2b8e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e88) {
            ctx->pc = 0x2B8EA8u;
            goto label_2b8ea8;
        }
    }
    ctx->pc = 0x2B8E90u;
label_2b8e90:
    // 0x2b8e90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b8e90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8e94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8e98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8e9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8ea0: 0x0  nop
    ctx->pc = 0x2b8ea0u;
    // NOP
    // 0x2b8ea4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b8ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b8ea8:
    // 0x2b8ea8: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b8ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b8eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8eb0: 0xa42474b8  sh          $a0, 0x74B8($at)
    ctx->pc = 0x2b8eb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6774B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6774B8u, _value); } while (0);
    // 0x2b8eb4: 0xa38389cc  sb          $v1, -0x7634($gp)
    ctx->pc = 0x2b8eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937036), (uint8_t)GPR_U32(ctx, 3));
label_2b8eb8:
    // 0x2b8eb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8ebc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2b8ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2b8ec0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2b8ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2b8ec4: 0xa023e000  sb          $v1, -0x2000($at)
    ctx->pc = 0x2b8ec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2b8ec8: 0x8e0729c0  lw          $a3, 0x29C0($s0)
    ctx->pc = 0x2b8ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b8ecc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2b8ed0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b8ed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8ed8: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2b8edc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2b8edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2b8ee0: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x2b8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x2b8ee4: 0x8e0406c8  lw          $a0, 0x6C8($s0)
    ctx->pc = 0x2b8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2b8ee8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b8ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b8eec: 0xae0406c8  sw          $a0, 0x6C8($s0)
    ctx->pc = 0x2b8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 4));
    // 0x2b8ef0: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2b8ef4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b8ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b8ef8: 0xae0406cc  sw          $a0, 0x6CC($s0)
    ctx->pc = 0x2b8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 4));
    // 0x2b8efc: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x2b8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x2b8f00: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2b8f04: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2b8f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b8f08: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2b8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2b8f0c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2b8f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2b8f10: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2B8F10u;
    {
        const bool branch_taken_0x2b8f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F10u;
        // 0x2b8f14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f10) {
            ctx->pc = 0x2B90F8u;
            goto label_2b90f8;
        }
    }
    ctx->pc = 0x2B8F18u;
    // 0x2b8f18: 0x10850067  beq         $a0, $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2B8F18u;
    {
        const bool branch_taken_0x2b8f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F18u;
        // 0x2b8f1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f18) {
            ctx->pc = 0x2B90B8u;
            goto label_2b90b8;
        }
    }
    ctx->pc = 0x2B8F20u;
    // 0x2b8f20: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B8F20u;
    {
        const bool branch_taken_0x2b8f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b8f20) {
            ctx->pc = 0x2B8F98u;
            goto label_2b8f98;
        }
    }
    ctx->pc = 0x2B8F28u;
    // 0x2b8f28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8F28u;
    {
        const bool branch_taken_0x2b8f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f28) {
            ctx->pc = 0x2B8F38u;
            goto label_2b8f38;
        }
    }
    ctx->pc = 0x2B8F30u;
    // 0x2b8f30: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2B8F30u;
    {
        const bool branch_taken_0x2b8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f30) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B8F38u;
label_2b8f38:
    // 0x2b8f38: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2b8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2b8f3c: 0x24844fe8  addiu       $a0, $a0, 0x4FE8
    ctx->pc = 0x2b8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20456));
    // 0x2b8f40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b8f44: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b8f44u;
    { uint32_t bits = FAST_READ32(0x4E4FE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8f48: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2b8f4c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b8f4cu;
    { uint32_t bits = FAST_READ32(0x4E4FECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f50: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b8f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b8f54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b8f54u;
    { uint32_t bits = FAST_READ32(0x4E4FF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f5c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2b8f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2b8f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f64: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2b8f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2b8f68: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2b8f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x2b8f6c: 0xa6002ace  sh          $zero, 0x2ACE($s0)
    ctx->pc = 0x2b8f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10958), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b8f70: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2b8f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8f74: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2b8f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8f78: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2b8f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8f7c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2b8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8f80: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x2B8F80u;
    SET_GPR_U32(ctx, 31, 0x2B8F88u);
    ctx->pc = 0x2B8F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F80u;
    // 0x2b8f84: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x2B8F80u, 0x2B8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F88u;
label_2b8f88:
    // 0x2b8f88: 0xa600082c  sh          $zero, 0x82C($s0)
    ctx->pc = 0x2b8f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b8f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8f90: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B8F90u;
    {
        const bool branch_taken_0x2b8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F90u;
        // 0x2b8f94: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f90) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B8F98u;
label_2b8f98:
    // 0x2b8f98: 0x9605082c  lhu         $a1, 0x82C($s0)
    ctx->pc = 0x2b8f98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x2b8f9c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b8fa0: 0x246374b0  addiu       $v1, $v1, 0x74B0
    ctx->pc = 0x2b8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29872));
    // 0x2b8fa4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2b8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b8fa8: 0xa604082c  sh          $a0, 0x82C($s0)
    ctx->pc = 0x2b8fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b8fac: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x2b8facu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x2b8fb0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b8fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8fb8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2b8fb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8fbc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2b8fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b8fc0: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2B8FC0u;
    {
        const bool branch_taken_0x2b8fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC0u;
        // 0x2b8fc4: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fc0) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B8FC8u;
    // 0x2b8fc8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2b8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b8fcc: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b8fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b8fd0: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B8FD0u;
    SET_GPR_U32(ctx, 31, 0x2B8FD8u);
    ctx->pc = 0x2B8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FD0u;
    // 0x2b8fd4: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B8FD0u, 0x2B8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FD8u;
label_2b8fd8:
    // 0x2b8fd8: 0x92032ad8  lbu         $v1, 0x2AD8($s0)
    ctx->pc = 0x2b8fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x2b8fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8fe0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B8FE0u;
    {
        const bool branch_taken_0x2b8fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FE0u;
        // 0x2b8fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fe0) {
            ctx->pc = 0x2B9048u;
            goto label_2b9048;
        }
    }
    ctx->pc = 0x2B8FE8u;
    // 0x2b8fe8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B8FE8u;
    {
        const bool branch_taken_0x2b8fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8fe8) {
            ctx->pc = 0x2B9048u;
            goto label_2b9048;
        }
    }
    ctx->pc = 0x2B8FF0u;
    // 0x2b8ff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8FF0u;
    {
        const bool branch_taken_0x2b8ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ff0) {
            ctx->pc = 0x2B9000u;
            goto label_2b9000;
        }
    }
    ctx->pc = 0x2B8FF8u;
    // 0x2b8ff8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8FF8u;
    {
        const bool branch_taken_0x2b8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ff8) {
            ctx->pc = 0x2B9098u;
            goto label_2b9098;
        }
    }
    ctx->pc = 0x2B9000u;
label_2b9000:
    // 0x2b9000: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x2b9000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2b9004: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b9004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b9008: 0x3c024b00  lui         $v0, 0x4B00
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19200 << 16));
    // 0x2b900c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2b900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2b9010: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2b9010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2b9014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9018: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2b9018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b901c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b901cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b9020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9024: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b9024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b9028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b902c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2B902Cu;
    SET_GPR_U32(ctx, 31, 0x2B9034u);
    ctx->pc = 0x2B9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B902Cu;
    // 0x2b9030: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2B902Cu, 0x2B9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9034u;
label_2b9034:
    // 0x2b9034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9038: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B9038u;
    SET_GPR_U32(ctx, 31, 0x2B9040u);
    ctx->pc = 0x2B903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9038u;
    // 0x2b903c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B9038u, 0x2B9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9040u;
label_2b9040:
    // 0x2b9040: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9040u;
    {
        const bool branch_taken_0x2b9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9040) {
            ctx->pc = 0x2B9098u;
            goto label_2b9098;
        }
    }
    ctx->pc = 0x2B9048u;
label_2b9048:
    // 0x2b9048: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x2b9048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2b904c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b904cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b9050: 0x3c024b00  lui         $v0, 0x4B00
    ctx->pc = 0x2b9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19200 << 16));
    // 0x2b9054: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2b9054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2b9058: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2b9058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2b905c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b905cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9060: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2b9060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b9064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b9064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9068: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b9068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b906c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b906cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9070: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b9070u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9074: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2B9074u;
    SET_GPR_U32(ctx, 31, 0x2B907Cu);
    ctx->pc = 0x2B9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9074u;
    // 0x2b9078: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2B9074u, 0x2B907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B907Cu;
label_2b907c:
    // 0x2b907c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B907Cu;
    SET_GPR_U32(ctx, 31, 0x2B9084u);
    ctx->pc = 0x2B9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B907Cu;
    // 0x2b9080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B907Cu, 0x2B9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9084u;
label_2b9084:
    // 0x2b9084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9088: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b9088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b908c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b908cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9090: 0xc0a9970  jal         func_2A65C0
    ctx->pc = 0x2B9090u;
    SET_GPR_U32(ctx, 31, 0x2B9098u);
    ctx->pc = 0x2B9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9090u;
    // 0x2b9094: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65C0u, 0x2B9090u, 0x2B9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9098u;
label_2b9098:
    // 0x2b9098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b909c: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x2B909Cu;
    SET_GPR_U32(ctx, 31, 0x2B90A4u);
    ctx->pc = 0x2B90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B909Cu;
    // 0x2b90a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x2B909Cu, 0x2B90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90A4u;
label_2b90a4:
    // 0x2b90a4: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x2b90a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b90a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b90ac: 0xa600082c  sh          $zero, 0x82C($s0)
    ctx->pc = 0x2b90acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b90b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B90B0u;
    {
        const bool branch_taken_0x2b90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90B0u;
        // 0x2b90b4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90b0) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B90B8u;
label_2b90b8:
    // 0x2b90b8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2b90b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2b90bc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B90BCu;
    {
        const bool branch_taken_0x2b90bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b90bc) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B90C4u;
    // 0x2b90c4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x2b90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x2b90c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b90c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90cc: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x2b90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x2b90d0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b90d0u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b90d4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b90d4u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b90d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b90d8u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b90dc: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2b90dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2b90e0: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2b90e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2b90e4: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x2B90E4u;
    SET_GPR_U32(ctx, 31, 0x2B90ECu);
    ctx->pc = 0x2B90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90E4u;
    // 0x2b90e8: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x2B90E4u, 0x2B90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90ECu;
label_2b90ec:
    // 0x2b90ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b90f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B90F0u;
    {
        const bool branch_taken_0x2b90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F0u;
        // 0x2b90f4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90f0) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B90F8u;
label_2b90f8:
    // 0x2b90f8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2b90f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2b90fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B90FCu;
    {
        const bool branch_taken_0x2b90fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90FCu;
        // 0x2b9100: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90fc) {
            ctx->pc = 0x2B9108u;
            goto label_2b9108;
        }
    }
    ctx->pc = 0x2B9104u;
    // 0x2b9104: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2b9104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2b9108:
    // 0x2b9108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b910c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b910cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9110: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9110u;
        // 0x2b9114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9118u;
}
