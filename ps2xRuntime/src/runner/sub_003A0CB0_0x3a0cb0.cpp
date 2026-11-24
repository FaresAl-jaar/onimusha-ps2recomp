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

// Function: sub_003A0CB0
// Address: 0x3a0cb0 - 0x3a0e80
void sub_003A0CB0_0x3a0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0CB0_0x3a0cb0");
#endif

    switch (ctx->pc) {
        case 0x3a0cf0u: goto label_3a0cf0;
        case 0x3a0e60u: goto label_3a0e60;
        default: break;
    }

    ctx->pc = 0x3a0cb0u;

    // 0x3a0cb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a0cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a0cb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a0cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a0cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a0cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a0cc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a0cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0cc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a0cc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a0cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0cd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a0cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0cd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0cd8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0cdc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3a0cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ce0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3a0ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ce4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3a0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3a0ce8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3A0CE8u;
    SET_GPR_U32(ctx, 31, 0x3A0CF0u);
    ctx->pc = 0x3A0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0CE8u;
    // 0x3a0cec: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3A0CE8u, 0x3A0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CF0u;
label_3a0cf0:
    // 0x3a0cf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a0cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0cf4: 0x10a0005a  beqz        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3A0CF4u;
    {
        const bool branch_taken_0x3a0cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0cf4) {
            ctx->pc = 0x3A0E60u;
            goto label_3a0e60;
        }
    }
    ctx->pc = 0x3A0CFCu;
    // 0x3a0cfc: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x3a0cfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a0d00: 0x3c024438  lui         $v0, 0x4438
    ctx->pc = 0x3a0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17464 << 16));
    // 0x3a0d04: 0x13543c  dsll32      $t2, $s3, 16
    ctx->pc = 0x3a0d04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) << (32 + 16));
    // 0x3a0d08: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x3a0d08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x3a0d0c: 0x864f0004  lh          $t7, 0x4($s2)
    ctx->pc = 0x3a0d0cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3a0d10: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x3a0d10u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0d14: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x3a0d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a0d18: 0x344b0154  ori         $t3, $v0, 0x154
    ctx->pc = 0x3a0d18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x3a0d1c: 0x864e0006  lh          $t6, 0x6($s2)
    ctx->pc = 0x3a0d1cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3a0d20: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x3a0d20u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3a0d24: 0x25420f20  addiu       $v0, $t2, 0xF20
    ctx->pc = 0x3a0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3872));
    // 0x3a0d28: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3a0d28u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x3a0d2c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a0d2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a0d30: 0x244c0  sll         $t0, $v0, 19
    ctx->pc = 0x3a0d30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3a0d34: 0x25220700  addiu       $v0, $t1, 0x700
    ctx->pc = 0x3a0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x3a0d38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a0d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a0d3c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3a0d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a0d40: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x3a0d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3a0d44: 0x1e63021  addu        $a2, $t7, $a2
    ctx->pc = 0x3a0d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x3a0d48: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x3a0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x3a0d4c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3a0d4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3a0d50: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x3a0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
    // 0x3a0d54: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3a0d54u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3a0d58: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x3a0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x3a0d5c: 0x66900  sll         $t5, $a2, 4
    ctx->pc = 0x3a0d5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3a0d60: 0xacb10010  sw          $s1, 0x10($a1)
    ctx->pc = 0x3a0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
    // 0x3a0d64: 0x1c33021  addu        $a2, $t6, $v1
    ctx->pc = 0x3a0d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3a0d68: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x3a0d68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a0d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a0d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a0d70: 0x92510009  lbu         $s1, 0x9($s2)
    ctx->pc = 0x3a0d70u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x3a0d74: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3a0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x3a0d78: 0x348c2000  ori         $t4, $a0, 0x2000
    ctx->pc = 0x3a0d78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x3a0d7c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3a0d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3a0d80: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3a0d80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3a0d84: 0xe8c025  or          $t8, $a3, $t0
    ctx->pc = 0x3a0d84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3a0d88: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x3a0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3a0d8c: 0xf2100  sll         $a0, $t7, 4
    ctx->pc = 0x3a0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3a0d90: 0xe5d00  sll         $t3, $t6, 20
    ctx->pc = 0x3a0d90u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
    // 0x3a0d94: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x3a0d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x3a0d98: 0x1ab7825  or          $t7, $t5, $t3
    ctx->pc = 0x3a0d98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x3a0d9c: 0x8b8025  or          $s0, $a0, $t3
    ctx->pc = 0x3a0d9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x3a0da0: 0xa4b10016  sh          $s1, 0x16($a1)
    ctx->pc = 0x3a0da0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x3a0da4: 0x867025  or          $t6, $a0, $a2
    ctx->pc = 0x3a0da4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3a0da8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3a0da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3a0dac: 0xacb80020  sw          $t8, 0x20($a1)
    ctx->pc = 0x3a0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 24));
    // 0x3a0db0: 0x1a66825  or          $t5, $t5, $a2
    ctx->pc = 0x3a0db0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x3a0db4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a0db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a0db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a0dbc: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x3a0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x3a0dc0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3a0dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a0dc4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3a0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3a0dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a0dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a0dcc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x3a0dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3a0dd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3a0dd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3a0dd4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3a0dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0dd8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x3a0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3a0ddc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3a0ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3a0de0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3a0de0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3a0de4: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x3a0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x3a0de8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a0dec: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x3a0decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3a0df0: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x3a0df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3a0df4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x3a0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x3a0df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a0df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a0dfc: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x3a0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x3a0e00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a0e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a0e04: 0x0  nop
    ctx->pc = 0x3a0e04u;
    // NOP
    // 0x3a0e08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3a0e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3a0e0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3a0e0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3a0e10: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x3a0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3a0e14: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3a0e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3a0e18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3a0e18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3a0e1c: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x3a0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x3a0e20: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x3a0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x3a0e24: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3a0e24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3a0e28: 0xaca70038  sw          $a3, 0x38($a1)
    ctx->pc = 0x3a0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 7));
    // 0x3a0e2c: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x3a0e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3a0e30: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x3a0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x3a0e34: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x3a0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x3a0e38: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x3a0e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x3a0e3c: 0xacb00018  sw          $s0, 0x18($a1)
    ctx->pc = 0x3a0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 16));
    // 0x3a0e40: 0xacaf001c  sw          $t7, 0x1C($a1)
    ctx->pc = 0x3a0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 15));
    // 0x3a0e44: 0xacae0030  sw          $t6, 0x30($a1)
    ctx->pc = 0x3a0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 14));
    // 0x3a0e48: 0xacad0034  sw          $t5, 0x34($a1)
    ctx->pc = 0x3a0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 13));
    // 0x3a0e4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3a0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3a0e50: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x3a0e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x3a0e54: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3a0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3a0e58: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3A0E58u;
    SET_GPR_U32(ctx, 31, 0x3A0E60u);
    ctx->pc = 0x3A0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0E58u;
    // 0x3a0e5c: 0xa0ab000f  sb          $t3, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3A0E58u, 0x3A0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E60u;
label_3a0e60:
    // 0x3a0e60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0e64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a0e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0e68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a0e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0e6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0e78: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E78u;
        // 0x3a0e7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0E80u;
}
