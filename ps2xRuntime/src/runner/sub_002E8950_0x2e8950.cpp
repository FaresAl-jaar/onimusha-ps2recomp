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

// Function: sub_002E8950
// Address: 0x2e8950 - 0x2e8b50
void sub_002E8950_0x2e8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8950_0x2e8950");
#endif

    switch (ctx->pc) {
        case 0x2e89a0u: goto label_2e89a0;
        case 0x2e8b28u: goto label_2e8b28;
        default: break;
    }

    ctx->pc = 0x2e8950u;

    // 0x2e8950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8954: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e8954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e8958: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e8958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e895c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2e8960: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e8960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e8964: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e8964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e8968: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e8968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e896c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e8970: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e8970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8974: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e8974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8978: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e8978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e897c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8984: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e8984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e8988: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e8988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e898c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e898cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e8990: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2e8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2e8994: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e8994u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8998: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2E8998u;
    SET_GPR_U32(ctx, 31, 0x2E89A0u);
    ctx->pc = 0x2E899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8998u;
    // 0x2e899c: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2E8998u, 0x2E89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89A0u;
label_2e89a0:
    // 0x2e89a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e89a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89a4: 0x10a00060  beqz        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2E89A4u;
    {
        const bool branch_taken_0x2e89a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89a4) {
            ctx->pc = 0x2E8B28u;
            goto label_2e8b28;
        }
    }
    ctx->pc = 0x2E89ACu;
    // 0x2e89ac: 0x86380000  lh          $t8, 0x0($s1)
    ctx->pc = 0x2e89acu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e89b0: 0x3c024438  lui         $v0, 0x4438
    ctx->pc = 0x2e89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17464 << 16));
    // 0x2e89b4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2e89b8: 0x13543c  dsll32      $t2, $s3, 16
    ctx->pc = 0x2e89b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2e89bc: 0x144c3c  dsll32      $t1, $s4, 16
    ctx->pc = 0x2e89bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2e89c0: 0x862f0004  lh          $t7, 0x4($s1)
    ctx->pc = 0x2e89c0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e89c4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2e89c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e89c8: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x2e89c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x2e89cc: 0x862e0006  lh          $t6, 0x6($s1)
    ctx->pc = 0x2e89ccu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2e89d0: 0x123600  sll         $a2, $s2, 24
    ctx->pc = 0x2e89d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x2e89d4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2e89d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2e89d8: 0x344c0154  ori         $t4, $v0, 0x154
    ctx->pc = 0x2e89d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x2e89dc: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x2e89dcu;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e89e0: 0xc45825  or          $t3, $a2, $a0
    ctx->pc = 0x2e89e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2e89e4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2e89e4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2e89e8: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2e89e8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2e89ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e89ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e89f0: 0x1f83021  addu        $a2, $t7, $t8
    ctx->pc = 0x2e89f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x2e89f4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2e89f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2e89f8: 0x25420f20  addiu       $v0, $t2, 0xF20
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3872));
    // 0x2e89fc: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x2e89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x2e8a00: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e8a00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e8a04: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x2e8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x2e8a08: 0x66900  sll         $t5, $a2, 4
    ctx->pc = 0x2e8a08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e8a0c: 0xacab0008  sw          $t3, 0x8($a1)
    ctx->pc = 0x2e8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 11));
    // 0x2e8a10: 0x1c33021  addu        $a2, $t6, $v1
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2e8a14: 0xacb00010  sw          $s0, 0x10($a1)
    ctx->pc = 0x2e8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
    // 0x2e8a18: 0x244c0  sll         $t0, $v0, 19
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x2e8a1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e8a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e8a20: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x2e8a20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8a24: 0x922c0009  lbu         $t4, 0x9($s1)
    ctx->pc = 0x2e8a24u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x2e8a28: 0x25220700  addiu       $v0, $t1, 0x700
    ctx->pc = 0x2e8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x2e8a2c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8a30: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2e8a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2e8a34: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2e8a34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2e8a38: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e8a38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e8a3c: 0xf2100  sll         $a0, $t7, 4
    ctx->pc = 0x2e8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2e8a40: 0xe85825  or          $t3, $a3, $t0
    ctx->pc = 0x2e8a40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2e8a44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8a44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e8a48: 0xe7d00  sll         $t7, $t6, 20
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
    // 0x2e8a4c: 0x8f8025  or          $s0, $a0, $t7
    ctx->pc = 0x2e8a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
    // 0x2e8a50: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x2e8a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x2e8a54: 0xa4ac0016  sh          $t4, 0x16($a1)
    ctx->pc = 0x2e8a54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 12));
    // 0x2e8a58: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x2e8a58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x2e8a5c: 0xacab0020  sw          $t3, 0x20($a1)
    ctx->pc = 0x2e8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 11));
    // 0x2e8a60: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e8a64: 0x867025  or          $t6, $a0, $a2
    ctx->pc = 0x2e8a64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2e8a68: 0x1a66825  or          $t5, $t5, $a2
    ctx->pc = 0x2e8a68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x2e8a6c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2e8a70: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x2e8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x2e8a74: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2e8a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2e8a78: 0x348c2000  ori         $t4, $a0, 0x2000
    ctx->pc = 0x2e8a78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2e8a7c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e8a80: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x2e8a80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e8a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a88: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2e8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2e8a8c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e8a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e8a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e8a94: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2e8a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2e8a98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8a98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8a9c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2e8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2e8aa0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e8aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8aa4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8aa8: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x2e8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x2e8aac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e8aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e8ab0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e8ab4: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x2e8ab4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8ab8: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x2e8ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2e8abc: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2e8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x2e8ac0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2e8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2e8ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e8ac8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e8ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e8acc: 0x0  nop
    ctx->pc = 0x2e8accu;
    // NOP
    // 0x2e8ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e8ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8ad8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e8adc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e8adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8ae0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8ae0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8ae4: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x2e8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x2e8ae8: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x2e8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x2e8aec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2e8aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e8af0: 0xaca70038  sw          $a3, 0x38($a1)
    ctx->pc = 0x2e8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 7));
    // 0x2e8af4: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2e8af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2e8af8: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x2e8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x2e8afc: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x2e8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x2e8b00: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x2e8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x2e8b04: 0xacb00018  sw          $s0, 0x18($a1)
    ctx->pc = 0x2e8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 16));
    // 0x2e8b08: 0xacaf001c  sw          $t7, 0x1C($a1)
    ctx->pc = 0x2e8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 15));
    // 0x2e8b0c: 0xacae0030  sw          $t6, 0x30($a1)
    ctx->pc = 0x2e8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 14));
    // 0x2e8b10: 0xacad0034  sw          $t5, 0x34($a1)
    ctx->pc = 0x2e8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 13));
    // 0x2e8b14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e8b18: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x2e8b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x2e8b1c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2e8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2e8b20: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2E8B20u;
    SET_GPR_U32(ctx, 31, 0x2E8B28u);
    ctx->pc = 0x2E8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B20u;
    // 0x2e8b24: 0xa0ab000f  sb          $t3, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2E8B20u, 0x2E8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B28u;
label_2e8b28:
    // 0x2e8b28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8b2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8b30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e8b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8b34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e8b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8b38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8b3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8b40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B48u;
        // 0x2e8b4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8B50u;
}
