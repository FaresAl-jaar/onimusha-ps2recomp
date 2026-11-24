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

// Function: sub_002BD780
// Address: 0x2bd780 - 0x2bd7f0
void sub_002BD780_0x2bd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD780_0x2bd780");
#endif

    ctx->pc = 0x2bd780u;

    // 0x2bd780: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2bd780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd784: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2bd784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bd788: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD788u;
    {
        const bool branch_taken_0x2bd788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD788u;
        // 0x2bd78c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd788) {
            ctx->pc = 0x2BD7A0u;
            goto label_2bd7a0;
        }
    }
    ctx->pc = 0x2BD790u;
    // 0x2bd790: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bd794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BD794u;
    {
        const bool branch_taken_0x2bd794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD794u;
        // 0x2bd798: 0x8442003e  lh          $v0, 0x3E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd794) {
            ctx->pc = 0x2BD7C0u;
            goto label_2bd7c0;
        }
    }
    ctx->pc = 0x2BD79Cu;
    // 0x2bd79c: 0x0  nop
    ctx->pc = 0x2bd79cu;
    // NOP
label_2bd7a0:
    // 0x2bd7a0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bd7a0u;
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
    // 0x2bd7a4: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2bd7a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd7a8: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2bd7ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2bd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bd7b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd7b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd7b4: 0x0  nop
    ctx->pc = 0x2bd7b4u;
    // NOP
    // 0x2bd7b8: 0x0  nop
    ctx->pc = 0x2bd7b8u;
    // NOP
    // 0x2bd7bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd7bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2bd7c0:
    // 0x2bd7c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd7c4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd7c8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd7cc: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x2bd7ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bd7d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bd7d8: 0xa443003e  sh          $v1, 0x3E($v0)
    ctx->pc = 0x2bd7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bd7dc: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2bd7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2bd7e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd7e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bd7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7E8u;
        // 0x2bd7ec: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD7F0u;
}
