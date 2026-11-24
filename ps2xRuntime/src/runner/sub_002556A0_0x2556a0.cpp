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

// Function: sub_002556A0
// Address: 0x2556a0 - 0x25570c
void sub_002556A0_0x2556a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002556A0_0x2556a0");
#endif

    switch (ctx->pc) {
        case 0x2556e0u: goto label_2556e0;
        case 0x2556f0u: goto label_2556f0;
        default: break;
    }

    ctx->pc = 0x2556a0u;

    // 0x2556a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2556a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2556a4: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2556a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2556a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2556a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2556ac: 0x2442e5f0  addiu       $v0, $v0, -0x1A10
    ctx->pc = 0x2556acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
    // 0x2556b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2556b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2556b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2556b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2556b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2556b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2556bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2556c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2556c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556c4: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2556c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2556c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2556c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556cc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2556ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2556d0: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2556d4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2556d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2556d8: 0xc049590  jal         func_125640
    ctx->pc = 0x2556D8u;
    SET_GPR_U32(ctx, 31, 0x2556E0u);
    ctx->pc = 0x2556DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556D8u;
    // 0x2556dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2556D8u, 0x2556E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556E0u;
label_2556e0:
    // 0x2556e0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2556e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2556e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2556e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556e8: 0xc049522  jal         func_125488
    ctx->pc = 0x2556E8u;
    SET_GPR_U32(ctx, 31, 0x2556F0u);
    ctx->pc = 0x2556ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556E8u;
    // 0x2556ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2556E8u, 0x2556F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556F0u;
label_2556f0:
    // 0x2556f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2556f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2556f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2556f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2556f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2556fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2556fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255704: 0x3e00008  jr          $ra
    ctx->pc = 0x255704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255704u;
        // 0x255708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25570Cu;
}
