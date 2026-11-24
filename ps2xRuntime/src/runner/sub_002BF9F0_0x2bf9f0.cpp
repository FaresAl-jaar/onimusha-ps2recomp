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

// Function: sub_002BF9F0
// Address: 0x2bf9f0 - 0x2bfb4c
void sub_002BF9F0_0x2bf9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF9F0_0x2bf9f0");
#endif

    switch (ctx->pc) {
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfb18u: goto label_2bfb18;
        default: break;
    }

    ctx->pc = 0x2bf9f0u;

    // 0x2bf9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf9f4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf9f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bf9fc: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bfa00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bfa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bfa04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bfa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bfa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bfa0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfa0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bfa14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bfa14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa18: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x2bfa18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bfa1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bfa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa20: 0x908600e9  lbu         $a2, 0xE9($a0)
    ctx->pc = 0x2bfa20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 233)));
    // 0x2bfa24: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2bfa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bfa28: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bfa2c: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bfa30: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bfa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bfa34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfa38: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bfa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bfa3c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA44u);
    ctx->pc = 0x2BFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA3Cu;
    // 0x2bfa40: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BFA3Cu, 0x2BFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA44u;
label_2bfa44:
    // 0x2bfa44: 0xa24200e9  sb          $v0, 0xE9($s2)
    ctx->pc = 0x2bfa44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 233), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfa48: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bfa4c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2bfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bfa50: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFA50u;
    {
        const bool branch_taken_0x2bfa50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA50u;
        // 0x2bfa54: 0x92130002  lbu         $s3, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa50) {
            ctx->pc = 0x2BFA80u;
            goto label_2bfa80;
        }
    }
    ctx->pc = 0x2BFA58u;
    // 0x2bfa58: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFA58u;
    {
        const bool branch_taken_0x2bfa58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa58) {
            ctx->pc = 0x2BFA80u;
            goto label_2bfa80;
        }
    }
    ctx->pc = 0x2BFA60u;
    // 0x2bfa60: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bfa60u;
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
    // 0x2bfa64: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bfa64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bfa68: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x2bfa68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bfa6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bfa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bfa70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bfa70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bfa74: 0x0  nop
    ctx->pc = 0x2bfa74u;
    // NOP
    // 0x2bfa78: 0x0  nop
    ctx->pc = 0x2bfa78u;
    // NOP
    // 0x2bfa7c: 0x9810  mfhi        $s3
    ctx->pc = 0x2bfa7cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2bfa80:
    // 0x2bfa80: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFA80u;
    {
        const bool branch_taken_0x2bfa80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa80) {
            ctx->pc = 0x2BFA90u;
            goto label_2bfa90;
        }
    }
    ctx->pc = 0x2BFA88u;
    // 0x2bfa88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2bfa88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa8c: 0x0  nop
    ctx->pc = 0x2bfa8cu;
    // NOP
label_2bfa90:
    // 0x2bfa90: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BFA90u;
    {
        const bool branch_taken_0x2bfa90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA90u;
        // 0x2bfa94: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa90) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFA98u;
    // 0x2bfa98: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2bfa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2bfa9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bfa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bfaa0: 0xc0c75a8  jal         func_31D6A0
    ctx->pc = 0x2BFAA0u;
    SET_GPR_U32(ctx, 31, 0x2BFAA8u);
    ctx->pc = 0x2BFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAA0u;
    // 0x2bfaa4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6A0u, 0x2BFAA0u, 0x2BFAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAA8u;
label_2bfaa8:
    // 0x2bfaa8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BFAA8u;
    {
        const bool branch_taken_0x2bfaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfaa8) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFAB0u;
    // 0x2bfab0: 0x924500e9  lbu         $a1, 0xE9($s2)
    ctx->pc = 0x2bfab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 233)));
    // 0x2bfab4: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bfab8: 0x82470103  lb          $a3, 0x103($s2)
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 259)));
    // 0x2bfabc: 0xc0c7670  jal         func_31D9C0
    ctx->pc = 0x2BFABCu;
    SET_GPR_U32(ctx, 31, 0x2BFAC4u);
    ctx->pc = 0x2BFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFABCu;
    // 0x2bfac0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9C0u, 0x2BFABCu, 0x2BFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAC4u;
label_2bfac4:
    // 0x2bfac4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BFAC4u;
    {
        const bool branch_taken_0x2bfac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfac4) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFACCu;
    // 0x2bfacc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFACCu;
    {
        const bool branch_taken_0x2bfacc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2bfacc) {
            ctx->pc = 0x2BFAD8u;
            goto label_2bfad8;
        }
    }
    ctx->pc = 0x2BFAD4u;
    // 0x2bfad4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bfad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfad8:
    // 0x2bfad8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bfad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfae0: 0xc0afd08  jal         func_2BF420
    ctx->pc = 0x2BFAE0u;
    SET_GPR_U32(ctx, 31, 0x2BFAE8u);
    ctx->pc = 0x2BFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE0u;
    // 0x2bfae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF420u, 0x2BFAE0u, 0x2BFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE8u;
label_2bfae8:
    // 0x2bfae8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BFAE8u;
    {
        const bool branch_taken_0x2bfae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfae8) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFAF0u;
    // 0x2bfaf0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2bfaf4: 0xa2400035  sb          $zero, 0x35($s2)
    ctx->pc = 0x2bfaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfaf8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2bfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2bfafc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bfafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb00: 0xa6400058  sh          $zero, 0x58($s2)
    ctx->pc = 0x2bfb00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bfb04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb08: 0xa6400056  sh          $zero, 0x56($s2)
    ctx->pc = 0x2bfb08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bfb0c: 0x26590008  addiu       $t9, $s2, 0x8
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2bfb10: 0xc040250  jal         func_100940
    ctx->pc = 0x2BFB10u;
    SET_GPR_U32(ctx, 31, 0x2BFB18u);
    ctx->pc = 0x2BFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB10u;
    // 0x2bfb14: 0xa2400107  sb          $zero, 0x107($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BFB10u, 0x2BFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB18u;
label_2bfb18:
    // 0x2bfb18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFB18u;
    {
        const bool branch_taken_0x2bfb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB18u;
        // 0x2bfb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb18) {
            ctx->pc = 0x2BFB30u;
            goto label_2bfb30;
        }
    }
    ctx->pc = 0x2BFB20u;
label_2bfb20:
    // 0x2bfb20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb24: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2bfb28: 0xa38389d4  sb          $v1, -0x762C($gp)
    ctx->pc = 0x2bfb28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfb2c: 0x0  nop
    ctx->pc = 0x2bfb2cu;
    // NOP
label_2bfb30:
    // 0x2bfb30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bfb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfb34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bfb34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfb38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bfb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfb44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB44u;
        // 0x2bfb48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFB4Cu;
}
