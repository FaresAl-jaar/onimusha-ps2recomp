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

// Function: sub_002BEE90
// Address: 0x2bee90 - 0x2bf240
void sub_002BEE90_0x2bee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEE90_0x2bee90");
#endif

    switch (ctx->pc) {
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bf208u: goto label_2bf208;
        case 0x2bf21cu: goto label_2bf21c;
        default: break;
    }

    ctx->pc = 0x2bee90u;

    // 0x2bee90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bee94: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2bee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bee98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bee9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2beea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2beea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2beea4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2beea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2beea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2beeac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2beeacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beeb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2beeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2beeb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2beeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beeb8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2beeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2beebc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEEBCu;
    {
        const bool branch_taken_0x2beebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEBCu;
        // 0x2beec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beebc) {
            ctx->pc = 0x2BEEF8u;
            goto label_2beef8;
        }
    }
    ctx->pc = 0x2BEEC4u;
    // 0x2beec4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2beec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2beec8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEEC8u;
    {
        const bool branch_taken_0x2beec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2beec8) {
            ctx->pc = 0x2BEED8u;
            goto label_2beed8;
        }
    }
    ctx->pc = 0x2BEED0u;
    // 0x2beed0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BEED0u;
    {
        const bool branch_taken_0x2beed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beed0) {
            ctx->pc = 0x2BEF10u;
            goto label_2bef10;
        }
    }
    ctx->pc = 0x2BEED8u;
label_2beed8:
    // 0x2beed8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2beed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2beedc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2beedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2beee0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2beee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2beee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2beee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2beee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2beeec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEEECu;
    {
        const bool branch_taken_0x2beeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEECu;
        // 0x2beef0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beeec) {
            ctx->pc = 0x2BEF10u;
            goto label_2bef10;
        }
    }
    ctx->pc = 0x2BEEF4u;
    // 0x2beef4: 0x0  nop
    ctx->pc = 0x2beef4u;
    // NOP
label_2beef8:
    // 0x2beef8: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2beef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2beefc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2beefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2bef00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BEF00u;
    SET_GPR_U32(ctx, 31, 0x2BEF08u);
    ctx->pc = 0x2BEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF00u;
    // 0x2bef04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BEF00u, 0x2BEF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF08u;
label_2bef08:
    // 0x2bef08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bef08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef0c: 0x0  nop
    ctx->pc = 0x2bef0cu;
    // NOP
label_2bef10:
    // 0x2bef10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef14: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2BEF14u;
    SET_GPR_U32(ctx, 31, 0x2BEF1Cu);
    ctx->pc = 0x2BEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF14u;
    // 0x2bef18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2BEF14u, 0x2BEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF1Cu;
label_2bef1c:
    // 0x2bef1c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2BEF1Cu;
    {
        const bool branch_taken_0x2bef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef1c) {
            ctx->pc = 0x2BF210u;
            goto label_2bf210;
        }
    }
    ctx->pc = 0x2BEF24u;
    // 0x2bef24: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x2bef24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2bef28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2bef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2bef2c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2BEF2Cu;
    {
        const bool branch_taken_0x2bef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF2Cu;
        // 0x2bef30: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef2c) {
            ctx->pc = 0x2BF028u;
            goto label_2bf028;
        }
    }
    ctx->pc = 0x2BEF34u;
    // 0x2bef34: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2BEF34u;
    {
        const bool branch_taken_0x2bef34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bef34) {
            ctx->pc = 0x2BEFE8u;
            goto label_2befe8;
        }
    }
    ctx->pc = 0x2BEF3Cu;
    // 0x2bef3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bef40: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BEF40u;
    {
        const bool branch_taken_0x2bef40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF40u;
        // 0x2bef44: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef40) {
            ctx->pc = 0x2BEFB8u;
            goto label_2befb8;
        }
    }
    ctx->pc = 0x2BEF48u;
    // 0x2bef48: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BEF48u;
    {
        const bool branch_taken_0x2bef48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bef48) {
            ctx->pc = 0x2BEF90u;
            goto label_2bef90;
        }
    }
    ctx->pc = 0x2BEF50u;
    // 0x2bef50: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bef54: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEF54u;
    {
        const bool branch_taken_0x2bef54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bef54) {
            ctx->pc = 0x2BEF68u;
            goto label_2bef68;
        }
    }
    ctx->pc = 0x2BEF5Cu;
    // 0x2bef5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2BEF5Cu;
    {
        const bool branch_taken_0x2bef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef5c) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BEF64u;
    // 0x2bef64: 0x0  nop
    ctx->pc = 0x2bef64u;
    // NOP
label_2bef68:
    // 0x2bef68: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bef68u;
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
    // 0x2bef6c: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2bef6cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bef70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2bef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bef74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bef78: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2bef7c: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x2bef7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2bef80: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2bef80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2bef84: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2BEF84u;
    {
        const bool branch_taken_0x2bef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF84u;
        // 0x2bef88: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef84) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BEF8Cu;
    // 0x2bef8c: 0x0  nop
    ctx->pc = 0x2bef8cu;
    // NOP
label_2bef90:
    // 0x2bef90: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bef90u;
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
    // 0x2bef94: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2bef94u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bef98: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bef9c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2bef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2befa0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2befa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2befa4: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x2befa4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2befa8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2befa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2befac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2BEFACu;
    {
        const bool branch_taken_0x2befac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFACu;
        // 0x2befb0: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befac) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BEFB4u;
    // 0x2befb4: 0x0  nop
    ctx->pc = 0x2befb4u;
    // NOP
label_2befb8:
    // 0x2befb8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2befb8u;
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
    // 0x2befbc: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2befbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2befc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2befc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2befc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2befc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2befc8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2befc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2befcc: 0x0  nop
    ctx->pc = 0x2befccu;
    // NOP
    // 0x2befd0: 0x0  nop
    ctx->pc = 0x2befd0u;
    // NOP
    // 0x2befd4: 0x1010  mfhi        $v0
    ctx->pc = 0x2befd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2befd8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2befdc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2befdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2befe0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2BEFE0u;
    {
        const bool branch_taken_0x2befe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFE0u;
        // 0x2befe4: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befe0) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BEFE8u;
label_2befe8:
    // 0x2befe8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2befe8u;
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
    // 0x2befec: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2befecu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2beff0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2beff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2beff4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2beff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2beff8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2beff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2beffc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2beffcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2bf000: 0x0  nop
    ctx->pc = 0x2bf000u;
    // NOP
    // 0x2bf004: 0x0  nop
    ctx->pc = 0x2bf004u;
    // NOP
    // 0x2bf008: 0x1810  mfhi        $v1
    ctx->pc = 0x2bf008u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bf00c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2bf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2bf010: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2bf010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2bf014: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2bf014u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2bf018: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF018u;
    {
        const bool branch_taken_0x2bf018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf018) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BF020u;
    // 0x2bf020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF020u;
    {
        const bool branch_taken_0x2bf020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF020u;
        // 0x2bf024: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf020) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BF028u;
label_2bf028:
    // 0x2bf028: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf028u;
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
    // 0x2bf02c: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf02cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf030: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bf030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bf034: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2bf034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2bf038: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2bf038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2bf03c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2bf03cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2bf040:
    // 0x2bf040: 0xa263005e  sb          $v1, 0x5E($s3)
    ctx->pc = 0x2bf040u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bf048: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x2bf048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x2bf04c: 0xae4207c0  sw          $v0, 0x7C0($s2)
    ctx->pc = 0x2bf04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
    // 0x2bf050: 0x9262005f  lbu         $v0, 0x5F($s3)
    ctx->pc = 0x2bf050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x2bf054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2bf054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2bf058: 0xa262005f  sb          $v0, 0x5F($s3)
    ctx->pc = 0x2bf058u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf05c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bf05cu;
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
    // 0x2bf060: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bf060u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf064: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x2bf064u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2bf068: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf06c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2bf06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bf070: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2bf070u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2bf074: 0x0  nop
    ctx->pc = 0x2bf074u;
    // NOP
    // 0x2bf078: 0x0  nop
    ctx->pc = 0x2bf078u;
    // NOP
    // 0x2bf07c: 0x1810  mfhi        $v1
    ctx->pc = 0x2bf07cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bf080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf084: 0xa6620022  sh          $v0, 0x22($s3)
    ctx->pc = 0x2bf084u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf088: 0x96640022  lhu         $a0, 0x22($s3)
    ctx->pc = 0x2bf088u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x2bf08c: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BF08Cu;
    {
        const bool branch_taken_0x2bf08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF08Cu;
        // 0x2bf090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf08c) {
            ctx->pc = 0x2BF130u;
            goto label_2bf130;
        }
    }
    ctx->pc = 0x2BF094u;
    // 0x2bf094: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2bf094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2bf098: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF098u;
    {
        const bool branch_taken_0x2bf098 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF098u;
        // 0x2bf09c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf098) {
            ctx->pc = 0x2BF0ACu;
            goto label_2bf0ac;
        }
    }
    ctx->pc = 0x2BF0A0u;
    // 0x2bf0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF0A4u;
    {
        const bool branch_taken_0x2bf0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0A4u;
        // 0x2bf0a8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0a4) {
            ctx->pc = 0x2BF0C4u;
            goto label_2bf0c4;
        }
    }
    ctx->pc = 0x2BF0ACu;
label_2bf0ac:
    // 0x2bf0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf0b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bf0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0b8: 0x0  nop
    ctx->pc = 0x2bf0b8u;
    // NOP
    // 0x2bf0bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bf0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bf0c0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bf0c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bf0c4:
    // 0x2bf0c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bf0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf0c8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bf0cc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bf0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bf0d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bf0d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf0d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bf0dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bf0e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bf0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bf0e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bf0e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf0e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF0E8u;
    {
        const bool branch_taken_0x2bf0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf0e8) {
            ctx->pc = 0x2BF100u;
            goto label_2bf100;
        }
    }
    ctx->pc = 0x2BF0F0u;
    // 0x2bf0f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf0f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bf0f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bf0f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf0f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF0F8u;
    {
        const bool branch_taken_0x2bf0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0F8u;
        // 0x2bf0fc: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0f8) {
            ctx->pc = 0x2BF11Cu;
            goto label_2bf11c;
        }
    }
    ctx->pc = 0x2BF100u;
label_2bf100:
    // 0x2bf100: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bf100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf104: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bf104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf108: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bf10c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bf10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf110: 0x0  nop
    ctx->pc = 0x2bf110u;
    // NOP
    // 0x2bf114: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bf118: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bf118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bf11c:
    // 0x2bf11c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bf11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bf120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF120u;
    {
        const bool branch_taken_0x2bf120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf120) {
            ctx->pc = 0x2BF130u;
            goto label_2bf130;
        }
    }
    ctx->pc = 0x2BF128u;
    // 0x2bf128: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2bf128u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2bf12c: 0x0  nop
    ctx->pc = 0x2bf12cu;
    // NOP
label_2bf130:
    // 0x2bf130: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF130u;
    {
        const bool branch_taken_0x2bf130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF130u;
        // 0x2bf134: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf130) {
            ctx->pc = 0x2BF140u;
            goto label_2bf140;
        }
    }
    ctx->pc = 0x2BF138u;
    // 0x2bf138: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BF138u;
    {
        const bool branch_taken_0x2bf138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF138u;
        // 0x2bf13c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf138) {
            ctx->pc = 0x2BF1C0u;
            goto label_2bf1c0;
        }
    }
    ctx->pc = 0x2BF140u;
label_2bf140:
    // 0x2bf140: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF140u;
    {
        const bool branch_taken_0x2bf140 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF140u;
        // 0x2bf144: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf140) {
            ctx->pc = 0x2BF154u;
            goto label_2bf154;
        }
    }
    ctx->pc = 0x2BF148u;
    // 0x2bf148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf14c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF14Cu;
    {
        const bool branch_taken_0x2bf14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF14Cu;
        // 0x2bf150: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf14c) {
            ctx->pc = 0x2BF16Cu;
            goto label_2bf16c;
        }
    }
    ctx->pc = 0x2BF154u;
label_2bf154:
    // 0x2bf154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bf15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf160: 0x0  nop
    ctx->pc = 0x2bf160u;
    // NOP
    // 0x2bf164: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bf164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bf168: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bf168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bf16c:
    // 0x2bf16c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bf16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf170: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bf170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bf174: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bf174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bf178: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bf178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bf17c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf184: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bf184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bf188: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bf188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bf18c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bf18cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF190u;
    {
        const bool branch_taken_0x2bf190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf190) {
            ctx->pc = 0x2BF1A8u;
            goto label_2bf1a8;
        }
    }
    ctx->pc = 0x2BF198u;
    // 0x2bf198: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bf19c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bf19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf1a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF1A0u;
    {
        const bool branch_taken_0x2bf1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf1a0) {
            ctx->pc = 0x2BF1C0u;
            goto label_2bf1c0;
        }
    }
    ctx->pc = 0x2BF1A8u;
label_2bf1a8:
    // 0x2bf1a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bf1a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bf1ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bf1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bf1b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bf1b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bf1b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bf1b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf1b8: 0x0  nop
    ctx->pc = 0x2bf1b8u;
    // NOP
    // 0x2bf1bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bf1c0:
    // 0x2bf1c0: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x2bf1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf1c4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2bf1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2bf1c8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2bf1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2bf1cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1d0: 0x246350f8  addiu       $v1, $v1, 0x50F8
    ctx->pc = 0x2bf1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20728));
    // 0x2bf1d4: 0x26790008  addiu       $t9, $s3, 0x8
    ctx->pc = 0x2bf1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2bf1d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bf1d8u;
    { uint32_t bits = FAST_READ32(0x4E50F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bf1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bf1e0u;
    { uint32_t bits = FAST_READ32(0x4E50FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf1e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bf1e4u;
    { uint32_t bits = FAST_READ32(0x4E5100u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf1e8: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2bf1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2bf1ec: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2bf1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2bf1f0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2bf1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2bf1f4: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x2bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2bf1f8: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x2bf1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf1fc: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2bf1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf200: 0xc040250  jal         func_100940
    ctx->pc = 0x2BF200u;
    SET_GPR_U32(ctx, 31, 0x2BF208u);
    ctx->pc = 0x2BF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF200u;
    // 0x2bf204: 0xa2600107  sb          $zero, 0x107($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BF200u, 0x2BF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF208u;
label_2bf208:
    // 0x2bf208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF208u;
    {
        const bool branch_taken_0x2bf208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf208) {
            ctx->pc = 0x2BF220u;
            goto label_2bf220;
        }
    }
    ctx->pc = 0x2BF210u;
label_2bf210:
    // 0x2bf210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bf210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf214: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BF214u;
    SET_GPR_U32(ctx, 31, 0x2BF21Cu);
    ctx->pc = 0x2BF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF214u;
    // 0x2bf218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BF214u, 0x2BF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF21Cu;
label_2bf21c:
    // 0x2bf21c: 0x0  nop
    ctx->pc = 0x2bf21cu;
    // NOP
label_2bf220:
    // 0x2bf220: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf224: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf22c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf238: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF238u;
        // 0x2bf23c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF240u;
}
