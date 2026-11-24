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

// Function: sub_00193D70
// Address: 0x193d70 - 0x194248
void sub_00193D70_0x193d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193D70_0x193d70");
#endif

    switch (ctx->pc) {
        case 0x193dd8u: goto label_193dd8;
        case 0x193ff8u: goto label_193ff8;
        case 0x1940f8u: goto label_1940f8;
        case 0x194108u: goto label_194108;
        case 0x194118u: goto label_194118;
        case 0x194130u: goto label_194130;
        case 0x194138u: goto label_194138;
        case 0x194168u: goto label_194168;
        case 0x194188u: goto label_194188;
        case 0x1941a8u: goto label_1941a8;
        default: break;
    }

    ctx->pc = 0x193d70u;

    // 0x193d70: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x193d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x193d74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x193d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x193d78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x193d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x193d7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x193d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x193d80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x193d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x193d84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x193d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x193d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x193d8c: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x193d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x193d90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x193d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x193d94: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193d9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193da4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193da8: 0x1460011b  bnez        $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x193DA8u;
    {
        const bool branch_taken_0x193da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DA8u;
        // 0x193dac: 0xafa400ac  sw          $a0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193da8) {
            ctx->pc = 0x194218u;
            goto label_194218;
        }
    }
    ctx->pc = 0x193DB0u;
    // 0x193db0: 0x2ae10010  slti        $at, $s7, 0x10
    ctx->pc = 0x193db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x193db4: 0x10200118  beqz        $at, . + 4 + (0x118 << 2)
    ctx->pc = 0x193DB4u;
    {
        const bool branch_taken_0x193db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DB4u;
        // 0x193db8: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193db4) {
            ctx->pc = 0x194218u;
            goto label_194218;
        }
    }
    ctx->pc = 0x193DBCu;
    // 0x193dbc: 0x102000a2  beqz        $at, . + 4 + (0xA2 << 2)
    ctx->pc = 0x193DBCu;
    {
        const bool branch_taken_0x193dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DBCu;
        // 0x193dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dbc) {
            ctx->pc = 0x194048u;
            goto label_194048;
        }
    }
    ctx->pc = 0x193DC4u;
    // 0x193dc4: 0x2ae10009  slti        $at, $s7, 0x9
    ctx->pc = 0x193dc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x193dc8: 0x14200081  bnez        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x193DC8u;
    {
        const bool branch_taken_0x193dc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x193DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DC8u;
        // 0x193dcc: 0x26e4fff8  addiu       $a0, $s7, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dc8) {
            ctx->pc = 0x193FD0u;
            goto label_193fd0;
        }
    }
    ctx->pc = 0x193DD0u;
    // 0x193dd0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x193dd4: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_193dd8:
    // 0x193dd8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x193ddc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x193ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193de0: 0xa4302a  slt         $a2, $a1, $a0
    ctx->pc = 0x193de0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x193de4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193de8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193dec: 0x0  nop
    ctx->pc = 0x193decu;
    // NOP
    // 0x193df0: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x193df0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x193df4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x193df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193dfc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e00: 0x0  nop
    ctx->pc = 0x193e00u;
    // NOP
    // 0x193e04: 0xa4470024  sh          $a3, 0x24($v0)
    ctx->pc = 0x193e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e08: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x193e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e10: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e14: 0x0  nop
    ctx->pc = 0x193e14u;
    // NOP
    // 0x193e18: 0xa4470048  sh          $a3, 0x48($v0)
    ctx->pc = 0x193e18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e1c: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x193e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e24: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e28: 0x0  nop
    ctx->pc = 0x193e28u;
    // NOP
    // 0x193e2c: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x193e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e30: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x193e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e38: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e3c: 0x0  nop
    ctx->pc = 0x193e3cu;
    // NOP
    // 0x193e40: 0xa4470026  sh          $a3, 0x26($v0)
    ctx->pc = 0x193e40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e44: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x193e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e4c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e50: 0x0  nop
    ctx->pc = 0x193e50u;
    // NOP
    // 0x193e54: 0xa447004a  sh          $a3, 0x4A($v0)
    ctx->pc = 0x193e54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e58: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x193e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e60: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e64: 0x0  nop
    ctx->pc = 0x193e64u;
    // NOP
    // 0x193e68: 0xa4470004  sh          $a3, 0x4($v0)
    ctx->pc = 0x193e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e6c: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x193e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e74: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e78: 0x0  nop
    ctx->pc = 0x193e78u;
    // NOP
    // 0x193e7c: 0xa4470028  sh          $a3, 0x28($v0)
    ctx->pc = 0x193e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e80: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x193e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e88: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193e8c: 0x0  nop
    ctx->pc = 0x193e8cu;
    // NOP
    // 0x193e90: 0xa447004c  sh          $a3, 0x4C($v0)
    ctx->pc = 0x193e90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 76), (uint16_t)GPR_U32(ctx, 7));
    // 0x193e94: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x193e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e9c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193ea0: 0x0  nop
    ctx->pc = 0x193ea0u;
    // NOP
    // 0x193ea4: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x193ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x193ea8: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x193ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193eac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193eb0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193eb4: 0x0  nop
    ctx->pc = 0x193eb4u;
    // NOP
    // 0x193eb8: 0xa447002a  sh          $a3, 0x2A($v0)
    ctx->pc = 0x193eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 7));
    // 0x193ebc: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x193ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193ec4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193ec8: 0x0  nop
    ctx->pc = 0x193ec8u;
    // NOP
    // 0x193ecc: 0xa447004e  sh          $a3, 0x4E($v0)
    ctx->pc = 0x193eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 78), (uint16_t)GPR_U32(ctx, 7));
    // 0x193ed0: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x193ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193ed8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193edc: 0x0  nop
    ctx->pc = 0x193edcu;
    // NOP
    // 0x193ee0: 0xa4470008  sh          $a3, 0x8($v0)
    ctx->pc = 0x193ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x193ee4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x193ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ee8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193eec: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193ef0: 0x0  nop
    ctx->pc = 0x193ef0u;
    // NOP
    // 0x193ef4: 0xa447002c  sh          $a3, 0x2C($v0)
    ctx->pc = 0x193ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 7));
    // 0x193ef8: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x193ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193efc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f00: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f04: 0x0  nop
    ctx->pc = 0x193f04u;
    // NOP
    // 0x193f08: 0xa4470050  sh          $a3, 0x50($v0)
    ctx->pc = 0x193f08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f0c: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x193f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f14: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f18: 0x0  nop
    ctx->pc = 0x193f18u;
    // NOP
    // 0x193f1c: 0xa447000a  sh          $a3, 0xA($v0)
    ctx->pc = 0x193f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f20: 0xc4600164  lwc1        $f0, 0x164($v1)
    ctx->pc = 0x193f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f28: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f2c: 0x0  nop
    ctx->pc = 0x193f2cu;
    // NOP
    // 0x193f30: 0xa447002e  sh          $a3, 0x2E($v0)
    ctx->pc = 0x193f30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f34: 0xc4600168  lwc1        $f0, 0x168($v1)
    ctx->pc = 0x193f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f3c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f40: 0x0  nop
    ctx->pc = 0x193f40u;
    // NOP
    // 0x193f44: 0xa4470052  sh          $a3, 0x52($v0)
    ctx->pc = 0x193f44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 82), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f48: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x193f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f50: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f54: 0x0  nop
    ctx->pc = 0x193f54u;
    // NOP
    // 0x193f58: 0xa447000c  sh          $a3, 0xC($v0)
    ctx->pc = 0x193f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f5c: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x193f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f64: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f68: 0x0  nop
    ctx->pc = 0x193f68u;
    // NOP
    // 0x193f6c: 0xa4470030  sh          $a3, 0x30($v0)
    ctx->pc = 0x193f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f70: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x193f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f78: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f7c: 0x0  nop
    ctx->pc = 0x193f7cu;
    // NOP
    // 0x193f80: 0xa4470054  sh          $a3, 0x54($v0)
    ctx->pc = 0x193f80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 84), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f84: 0xc46001e0  lwc1        $f0, 0x1E0($v1)
    ctx->pc = 0x193f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193f8c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193f90: 0x0  nop
    ctx->pc = 0x193f90u;
    // NOP
    // 0x193f94: 0xa447000e  sh          $a3, 0xE($v0)
    ctx->pc = 0x193f94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x193f98: 0xc46001e4  lwc1        $f0, 0x1E4($v1)
    ctx->pc = 0x193f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193fa0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193fa4: 0x0  nop
    ctx->pc = 0x193fa4u;
    // NOP
    // 0x193fa8: 0xa4470032  sh          $a3, 0x32($v0)
    ctx->pc = 0x193fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 7));
    // 0x193fac: 0xc46001e8  lwc1        $f0, 0x1E8($v1)
    ctx->pc = 0x193facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193fb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193fb4: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x193fb8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x193fbc: 0x0  nop
    ctx->pc = 0x193fbcu;
    // NOP
    // 0x193fc0: 0xa4470056  sh          $a3, 0x56($v0)
    ctx->pc = 0x193fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 86), (uint16_t)GPR_U32(ctx, 7));
    // 0x193fc4: 0x14c0ff84  bnez        $a2, . + 4 + (-0x7C << 2)
    ctx->pc = 0x193FC4u;
    {
        const bool branch_taken_0x193fc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x193FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FC4u;
        // 0x193fc8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fc4) {
            ctx->pc = 0x193DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193dd8;
        }
    }
    ctx->pc = 0x193FCCu;
    // 0x193fcc: 0x0  nop
    ctx->pc = 0x193fccu;
    // NOP
label_193fd0:
    // 0x193fd0: 0xb7082a  slt         $at, $a1, $s7
    ctx->pc = 0x193fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x193fd4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x193FD4u;
    {
        const bool branch_taken_0x193fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fd4) {
            ctx->pc = 0x194048u;
            goto label_194048;
        }
    }
    ctx->pc = 0x193FDCu;
    // 0x193fdc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x193fe0: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x193fe4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x193fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x193fe8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x193fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x193fec: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x193fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x193ff0: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x193ff4: 0x0  nop
    ctx->pc = 0x193ff4u;
    // NOP
label_193ff8:
    // 0x193ff8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x193ffc: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x193ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194000: 0xb7102a  slt         $v0, $a1, $s7
    ctx->pc = 0x194000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x194004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19400c: 0x0  nop
    ctx->pc = 0x19400cu;
    // NOP
    // 0x194010: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x194010u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x194014: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x194014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194018: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19401c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19401cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194020: 0x0  nop
    ctx->pc = 0x194020u;
    // NOP
    // 0x194024: 0xa4830024  sh          $v1, 0x24($a0)
    ctx->pc = 0x194024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x194028: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x194028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19402c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19402cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194030: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x194030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x194034: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194038: 0x0  nop
    ctx->pc = 0x194038u;
    // NOP
    // 0x19403c: 0xa4830048  sh          $v1, 0x48($a0)
    ctx->pc = 0x19403cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x194040: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x194040u;
    {
        const bool branch_taken_0x194040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194040u;
        // 0x194044: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194040) {
            ctx->pc = 0x193FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193ff8;
        }
    }
    ctx->pc = 0x194048u;
label_194048:
    // 0x194048: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19404c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x19404cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x194050: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x194054: 0x27be01b4  addiu       $fp, $sp, 0x1B4
    ctx->pc = 0x194054u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x194058: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x194058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x19405c: 0x3c44821  addu        $t1, $fp, $a0
    ctx->pc = 0x19405cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x194060: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194064: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x194064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194068: 0xc4e1ffe0  lwc1        $f1, -0x20($a3)
    ctx->pc = 0x194068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19406c: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x194070: 0xc4e0ffa0  lwc1        $f0, -0x60($a3)
    ctx->pc = 0x194070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194074: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x194074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x194078: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19407c: 0x246a0190  addiu       $t2, $v1, 0x190
    ctx->pc = 0x19407cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x194080: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194084: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x194088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19408c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19408cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x194090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x194094: 0x0  nop
    ctx->pc = 0x194094u;
    // NOP
    // 0x194098: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x194098u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19409c: 0xc4e1ffe4  lwc1        $f1, -0x1C($a3)
    ctx->pc = 0x19409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1940a0: 0xc4e0ffa4  lwc1        $f0, -0x5C($a3)
    ctx->pc = 0x1940a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1940a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1940a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1940a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1940a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1940ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1940acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1940b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1940b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1940b4: 0x0  nop
    ctx->pc = 0x1940b4u;
    // NOP
    // 0x1940b8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x1940b8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1940bc: 0xc4e1ffe8  lwc1        $f1, -0x18($a3)
    ctx->pc = 0x1940bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1940c0: 0xc4e0ffa8  lwc1        $f0, -0x58($a3)
    ctx->pc = 0x1940c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1940c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1940c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1940c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1940c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1940cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1940ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1940d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1940d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1940d4: 0x0  nop
    ctx->pc = 0x1940d4u;
    // NOP
    // 0x1940d8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1940d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1940dc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x1940dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1940e0: 0xa4620192  sh          $v0, 0x192($v1)
    ctx->pc = 0x1940e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 402), (uint16_t)GPR_U32(ctx, 2));
    // 0x1940e4: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x1940e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1940e8: 0xa46201b6  sh          $v0, 0x1B6($v1)
    ctx->pc = 0x1940e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x1940ec: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x1940ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1940f0: 0xc0524e4  jal         func_149390
    ctx->pc = 0x1940F0u;
    SET_GPR_U32(ctx, 31, 0x1940F8u);
    ctx->pc = 0x1940F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940F0u;
    // 0x1940f4: 0xa46201da  sh          $v0, 0x1DA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 474), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x1940F0u, 0x1940F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940F8u;
label_1940f8:
    // 0x1940f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1940f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940fc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1940fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x194100: 0xc0524e4  jal         func_149390
    ctx->pc = 0x194100u;
    SET_GPR_U32(ctx, 31, 0x194108u);
    ctx->pc = 0x194104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194100u;
    // 0x194104: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x194100u, 0x194108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194108u;
label_194108:
    // 0x194108: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x194108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x19410c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x194110: 0xc0524e4  jal         func_149390
    ctx->pc = 0x194110u;
    SET_GPR_U32(ctx, 31, 0x194118u);
    ctx->pc = 0x194114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194110u;
    // 0x194114: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x194110u, 0x194118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194118u;
label_194118:
    // 0x194118: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x194118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x19411c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19411cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194120: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x194120u;
    {
        const bool branch_taken_0x194120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194120u;
        // 0x194124: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194120) {
            ctx->pc = 0x1941E0u;
            goto label_1941e0;
        }
    }
    ctx->pc = 0x194128u;
    // 0x194128: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x194128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19412c: 0x0  nop
    ctx->pc = 0x19412cu;
    // NOP
label_194130:
    // 0x194130: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x194130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194134: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194138:
    // 0x194138: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x194138u;
    {
        const bool branch_taken_0x194138 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x19413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194138u;
        // 0x19413c: 0x1390c3  sra         $s2, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194138) {
            ctx->pc = 0x194148u;
            goto label_194148;
        }
    }
    ctx->pc = 0x194140u;
    // 0x194140: 0x26620007  addiu       $v0, $s3, 0x7
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x194144: 0x290c3  sra         $s2, $v0, 3
    ctx->pc = 0x194144u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
label_194148:
    // 0x194148: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x194148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x19414c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194154: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x194158: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19415c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19415cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194160: 0xc052534  jal         func_1494D0
    ctx->pc = 0x194160u;
    SET_GPR_U32(ctx, 31, 0x194168u);
    ctx->pc = 0x194164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194160u;
    // 0x194164: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1494D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1494D0u, 0x194160u, 0x194168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194168u;
label_194168:
    // 0x194168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19416c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x194170: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x194170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194174: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x194174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19417c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194180: 0xc052534  jal         func_1494D0
    ctx->pc = 0x194180u;
    SET_GPR_U32(ctx, 31, 0x194188u);
    ctx->pc = 0x194184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194180u;
    // 0x194184: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1494D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1494D0u, 0x194180u, 0x194188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194188u;
label_194188:
    // 0x194188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19418c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19418cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194190: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x194194: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x194198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19419c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19419cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941a0: 0xc052534  jal         func_1494D0
    ctx->pc = 0x1941A0u;
    SET_GPR_U32(ctx, 31, 0x1941A8u);
    ctx->pc = 0x1941A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1941A0u;
    // 0x1941a4: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1494D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1494D0u, 0x1941A0u, 0x1941A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941A8u;
label_1941a8:
    // 0x1941a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1941a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1941ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1941acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1941b0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1941b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1941b4: 0x2aa30008  slti        $v1, $s5, 0x8
    ctx->pc = 0x1941b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1941b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1941b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1941bc: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1941bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x1941c0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1941c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1941c4: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1941C4u;
    {
        const bool branch_taken_0x1941c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1941C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941C4u;
        // 0x1941c8: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941c4) {
            ctx->pc = 0x194138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194138;
        }
    }
    ctx->pc = 0x1941CCu;
    // 0x1941cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1941d0: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1941d4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1941d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1941d8: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1941D8u;
    {
        const bool branch_taken_0x1941d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1941DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941D8u;
        // 0x1941dc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941d8) {
            ctx->pc = 0x194130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194130;
        }
    }
    ctx->pc = 0x1941E0u;
label_1941e0:
    // 0x1941e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1941e4: 0x172180  sll         $a0, $s7, 6
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1941e8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1941ec: 0xc4a0ffe0  lwc1        $f0, -0x20($a1)
    ctx->pc = 0x1941ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941f0: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1941f4: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x1941f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1941f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1941f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1941fc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1941fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x194200: 0xc4a0ffe4  lwc1        $f0, -0x1C($a1)
    ctx->pc = 0x194200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194204: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x194204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x194208: 0xc4a0ffe8  lwc1        $f0, -0x18($a1)
    ctx->pc = 0x194208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19420c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x19420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x194210: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x194210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x194214: 0x0  nop
    ctx->pc = 0x194214u;
    // NOP
label_194218:
    // 0x194218: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x194218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19421c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19421cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x194220: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x194220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194224: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x194224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x194228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19422c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19422cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19423c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19423cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194240: 0x3e00008  jr          $ra
    ctx->pc = 0x194240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194248u;
}
