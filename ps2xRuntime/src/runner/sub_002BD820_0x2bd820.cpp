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

// Function: sub_002BD820
// Address: 0x2bd820 - 0x2bd8b8
void sub_002BD820_0x2bd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD820_0x2bd820");
#endif

    switch (ctx->pc) {
        case 0x2bd894u: goto label_2bd894;
        default: break;
    }

    ctx->pc = 0x2bd820u;

    // 0x2bd820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd82c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bd82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd830: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bd830u;
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
    // 0x2bd834: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bd834u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd838: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2bd838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2bd83c: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2bd83cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd840: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2bd840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bd844: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BD844u;
    {
        const bool branch_taken_0x2bd844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd844) {
            ctx->pc = 0x2BD898u;
            goto label_2bd898;
        }
    }
    ctx->pc = 0x2BD84Cu;
    // 0x2bd84c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bd84cu;
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
    // 0x2bd850: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bd850u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd854: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2bd858: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2bd858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2bd85c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd860: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bd860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd864: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bd864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd868: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2bd868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bd86c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bd86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bd870: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd870u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd874: 0x0  nop
    ctx->pc = 0x2bd874u;
    // NOP
    // 0x2bd878: 0x0  nop
    ctx->pc = 0x2bd878u;
    // NOP
    // 0x2bd87c: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd87cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd880: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd884: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bd888: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2bd888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bd88c: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x2BD88Cu;
    SET_GPR_U32(ctx, 31, 0x2BD894u);
    ctx->pc = 0x2BD890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD88Cu;
    // 0x2bd890: 0x24461a38  addiu       $a2, $v0, 0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x2BD88Cu, 0x2BD894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD894u;
label_2bd894:
    // 0x2bd894: 0x0  nop
    ctx->pc = 0x2bd894u;
    // NOP
label_2bd898:
    // 0x2bd898: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2bd898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bd89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd8a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bd8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd8ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bd8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8B0u;
        // 0x2bd8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8B8u;
}
