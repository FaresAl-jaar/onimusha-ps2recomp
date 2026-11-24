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

// Function: sub_003314B0
// Address: 0x3314b0 - 0x33152c
void sub_003314B0_0x3314b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003314B0_0x3314b0");
#endif

    switch (ctx->pc) {
        case 0x3314f0u: goto label_3314f0;
        case 0x331510u: goto label_331510;
        default: break;
    }

    ctx->pc = 0x3314b0u;

    // 0x3314b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3314b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3314b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3314b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3314b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3314b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3314bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3314bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3314c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3314c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3314c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3314c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3314c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3314ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3314d0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3314d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314d4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3314d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3314d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3314d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3314dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3314dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3314e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3314E0u;
    {
        const bool branch_taken_0x3314e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314E0u;
        // 0x3314e4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314e0) {
            ctx->pc = 0x331510u;
            goto label_331510;
        }
    }
    ctx->pc = 0x3314E8u;
    // 0x3314e8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3314E8u;
    SET_GPR_U32(ctx, 31, 0x3314F0u);
    ctx->pc = 0x3314ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314E8u;
    // 0x3314ec: 0x94840004  lhu         $a0, 0x4($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3314E8u, 0x3314F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314F0u;
label_3314f0:
    // 0x3314f0: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x3314f0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3314f4: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x3314f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3314f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3314f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314fc: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3314fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x331500: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x331500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331504: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x331504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x331508: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x331508u;
    SET_GPR_U32(ctx, 31, 0x331510u);
    ctx->pc = 0x33150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331508u;
    // 0x33150c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x331508u, 0x331510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331510u;
label_331510:
    // 0x331510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x331510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33151c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33151cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331524: 0x3e00008  jr          $ra
    ctx->pc = 0x331524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331524u;
        // 0x331528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33152Cu;
}
