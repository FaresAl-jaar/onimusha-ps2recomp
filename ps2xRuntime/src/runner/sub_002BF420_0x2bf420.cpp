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

// Function: sub_002BF420
// Address: 0x2bf420 - 0x2bf684
void sub_002BF420_0x2bf420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF420_0x2bf420");
#endif

    switch (ctx->pc) {
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf558u: goto label_2bf558;
        default: break;
    }

    ctx->pc = 0x2bf420u;

    // 0x2bf420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bf420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bf424: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bf424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bf428: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bf428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bf42c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bf430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bf434: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x2bf434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
    // 0x2bf438: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bf438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bf43c: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bf440: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bf440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bf444: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bf444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bf44c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2bf44cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bf454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bf458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf45c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf460: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x2bf460u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bf464: 0x908600e9  lbu         $a2, 0xE9($a0)
    ctx->pc = 0x2bf464u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 233)));
    // 0x2bf468: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2bf468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bf46c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2bf46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2bf470: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2bf470u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2bf474: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf478: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bf47c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bf480: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2bf480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf484: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bf484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf488: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bf48c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x2bf48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x2bf490: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BF490u;
    SET_GPR_U32(ctx, 31, 0x2BF498u);
    ctx->pc = 0x2BF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF490u;
    // 0x2bf494: 0x26c50020  addiu       $a1, $s6, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BF490u, 0x2BF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF498u;
label_2bf498:
    // 0x2bf498: 0xa2a200e9  sb          $v0, 0xE9($s5)
    ctx->pc = 0x2bf498u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 233), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf49c: 0xa2b000eb  sb          $s0, 0xEB($s5)
    ctx->pc = 0x2bf49cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 235), (uint8_t)GPR_U32(ctx, 16));
    // 0x2bf4a0: 0xa2a00100  sb          $zero, 0x100($s5)
    ctx->pc = 0x2bf4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf4a4: 0x92a200e9  lbu         $v0, 0xE9($s5)
    ctx->pc = 0x2bf4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 233)));
    // 0x2bf4a8: 0xa2a200ed  sb          $v0, 0xED($s5)
    ctx->pc = 0x2bf4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 237), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf4ac: 0xa2a200ec  sb          $v0, 0xEC($s5)
    ctx->pc = 0x2bf4acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 236), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf4b0: 0x8f828b34  lw          $v0, -0x74CC($gp)
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf4b4: 0x92a300e9  lbu         $v1, 0xE9($s5)
    ctx->pc = 0x2bf4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 233)));
    // 0x2bf4b8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2bf4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bf4bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bf4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bf4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf4c4: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2bf4c8: 0x542023  subu        $a0, $v0, $s4
    ctx->pc = 0x2bf4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2bf4cc: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF4CCu;
    {
        const bool branch_taken_0x2bf4cc = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2bf4cc) {
            ctx->pc = 0x2BF4D8u;
            goto label_2bf4d8;
        }
    }
    ctx->pc = 0x2BF4D4u;
    // 0x2bf4d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf4d8:
    // 0x2bf4d8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf4d8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bf4dc: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf4dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf4e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2bf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2bf4e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bf4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf4e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bf4e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf4ec: 0x0  nop
    ctx->pc = 0x2bf4ecu;
    // NOP
    // 0x2bf4f0: 0x0  nop
    ctx->pc = 0x2bf4f0u;
    // NOP
    // 0x2bf4f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf4f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf4f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bf4fc: 0xa6a200f0  sh          $v0, 0xF0($s5)
    ctx->pc = 0x2bf4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf500: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf500u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bf504: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bf508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf50c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf510: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bf510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf514: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bf514u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf518: 0x0  nop
    ctx->pc = 0x2bf518u;
    // NOP
    // 0x2bf51c: 0x0  nop
    ctx->pc = 0x2bf51cu;
    // NOP
    // 0x2bf520: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf524: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2bf524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bf528: 0xa6a200f2  sh          $v0, 0xF2($s5)
    ctx->pc = 0x2bf528u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf52c: 0x86a200f0  lh          $v0, 0xF0($s5)
    ctx->pc = 0x2bf52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x2bf530: 0xa6a200f4  sh          $v0, 0xF4($s5)
    ctx->pc = 0x2bf530u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf534: 0x86a200f2  lh          $v0, 0xF2($s5)
    ctx->pc = 0x2bf534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 242)));
    // 0x2bf538: 0xa6a200f6  sh          $v0, 0xF6($s5)
    ctx->pc = 0x2bf538u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 246), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf53c: 0x0  nop
    ctx->pc = 0x2bf53cu;
    // NOP
label_2bf540:
    // 0x2bf540: 0x2b38021  addu        $s0, $s5, $s3
    ctx->pc = 0x2bf540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2bf544: 0x920500ed  lbu         $a1, 0xED($s0)
    ctx->pc = 0x2bf544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 237)));
    // 0x2bf548: 0x92a600eb  lbu         $a2, 0xEB($s5)
    ctx->pc = 0x2bf548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 235)));
    // 0x2bf54c: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf550: 0xc0c7650  jal         func_31D940
    ctx->pc = 0x2BF550u;
    SET_GPR_U32(ctx, 31, 0x2BF558u);
    ctx->pc = 0x2BF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF550u;
    // 0x2bf554: 0x261100ed  addiu       $s1, $s0, 0xED (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 237));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D940u, 0x2BF550u, 0x2BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF558u;
label_2bf558:
    // 0x2bf558: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2bf558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bf55c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BF55Cu;
    {
        const bool branch_taken_0x2bf55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf55c) {
            ctx->pc = 0x2BF5E0u;
            goto label_2bf5e0;
        }
    }
    ctx->pc = 0x2BF564u;
    // 0x2bf564: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x2bf564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf568: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2bf568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf56c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2bf56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bf570: 0xa20200ee  sb          $v0, 0xEE($s0)
    ctx->pc = 0x2bf570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf574: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2bf574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bf578: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x2bf578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2bf57c: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x2bf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2bf580: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF580u;
    {
        const bool branch_taken_0x2bf580 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2bf580) {
            ctx->pc = 0x2BF590u;
            goto label_2bf590;
        }
    }
    ctx->pc = 0x2BF588u;
    // 0x2bf588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bf588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf58c: 0x0  nop
    ctx->pc = 0x2bf58cu;
    // NOP
label_2bf590:
    // 0x2bf590: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf590u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bf594: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf598: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2bf598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bf59c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bf59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf5a0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2bf5a0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf5a4: 0x0  nop
    ctx->pc = 0x2bf5a4u;
    // NOP
    // 0x2bf5a8: 0x0  nop
    ctx->pc = 0x2bf5a8u;
    // NOP
    // 0x2bf5ac: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf5acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf5b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bf5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf5b4: 0xa64200f8  sh          $v0, 0xF8($s2)
    ctx->pc = 0x2bf5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf5b8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf5b8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bf5bc: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf5bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf5c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bf5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf5c4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2bf5c4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf5c8: 0x0  nop
    ctx->pc = 0x2bf5c8u;
    // NOP
    // 0x2bf5cc: 0x0  nop
    ctx->pc = 0x2bf5ccu;
    // NOP
    // 0x2bf5d0: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf5d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf5d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf5d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF5D8u;
    {
        const bool branch_taken_0x2bf5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D8u;
        // 0x2bf5dc: 0xa64200fa  sh          $v0, 0xFA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 250), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d8) {
            ctx->pc = 0x2BF5F8u;
            goto label_2bf5f8;
        }
    }
    ctx->pc = 0x2BF5E0u;
label_2bf5e0:
    // 0x2bf5e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2bf5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bf5e4: 0xa20200ee  sb          $v0, 0xEE($s0)
    ctx->pc = 0x2bf5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf5e8: 0x864200f4  lh          $v0, 0xF4($s2)
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2bf5ec: 0xa64200f8  sh          $v0, 0xF8($s2)
    ctx->pc = 0x2bf5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf5f0: 0x864200f6  lh          $v0, 0xF6($s2)
    ctx->pc = 0x2bf5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 246)));
    // 0x2bf5f4: 0xa64200fa  sh          $v0, 0xFA($s2)
    ctx->pc = 0x2bf5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 250), (uint16_t)GPR_U32(ctx, 2));
label_2bf5f8:
    // 0x2bf5f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bf5fc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2bf5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bf600: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2BF600u;
    {
        const bool branch_taken_0x2bf600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF600u;
        // 0x2bf604: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf600) {
            ctx->pc = 0x2BF540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf540;
        }
    }
    ctx->pc = 0x2BF608u;
    // 0x2bf608: 0x92a500ee  lbu         $a1, 0xEE($s5)
    ctx->pc = 0x2bf608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 238)));
    // 0x2bf60c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2bf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2bf610: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2bf610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2bf614: 0x24635138  addiu       $v1, $v1, 0x5138
    ctx->pc = 0x2bf614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20792));
    // 0x2bf618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf61c: 0xa2a500ea  sb          $a1, 0xEA($s5)
    ctx->pc = 0x2bf61cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 234), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bf620: 0xaea4009c  sw          $a0, 0x9C($s5)
    ctx->pc = 0x2bf620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 4));
    // 0x2bf624: 0x86c400c2  lh          $a0, 0xC2($s6)
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 194)));
    // 0x2bf628: 0xa6a40086  sh          $a0, 0x86($s5)
    ctx->pc = 0x2bf628u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 134), (uint16_t)GPR_U32(ctx, 4));
    // 0x2bf62c: 0x96a40080  lhu         $a0, 0x80($s5)
    ctx->pc = 0x2bf62cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x2bf630: 0xa6a40022  sh          $a0, 0x22($s5)
    ctx->pc = 0x2bf630u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x2bf634: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bf634u;
    { uint32_t bits = FAST_READ32(0x4E5138u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf638: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bf638u;
    { uint32_t bits = FAST_READ32(0x4E513Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf63c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bf63cu;
    { uint32_t bits = FAST_READ32(0x4E5140u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf640: 0xe6a20008  swc1        $f2, 0x8($s5)
    ctx->pc = 0x2bf640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2bf644: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x2bf644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2bf648: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2bf648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2bf64c: 0xa6a00058  sh          $zero, 0x58($s5)
    ctx->pc = 0x2bf64cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf650: 0xa6a00056  sh          $zero, 0x56($s5)
    ctx->pc = 0x2bf650u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf654: 0xa2a00107  sb          $zero, 0x107($s5)
    ctx->pc = 0x2bf654u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 263), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf658: 0xa2a00047  sb          $zero, 0x47($s5)
    ctx->pc = 0x2bf658u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf65c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bf65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bf660: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bf660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bf664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf668: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf66c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf66cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf67c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF67Cu;
        // 0x2bf680: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF684u;
}
