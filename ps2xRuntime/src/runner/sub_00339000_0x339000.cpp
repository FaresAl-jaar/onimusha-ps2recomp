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

// Function: sub_00339000
// Address: 0x339000 - 0x339074
void sub_00339000_0x339000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339000_0x339000");
#endif

    switch (ctx->pc) {
        case 0x339030u: goto label_339030;
        case 0x339048u: goto label_339048;
        default: break;
    }

    ctx->pc = 0x339000u;

    // 0x339000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x339000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x339004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x339004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x339008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x339008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33900c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x339010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x339010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x339018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33901c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339020: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339024: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x339024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339028: 0xc0ce3ec  jal         func_338FB0
    ctx->pc = 0x339028u;
    SET_GPR_U32(ctx, 31, 0x339030u);
    ctx->pc = 0x33902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339028u;
    // 0x33902c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FB0u, 0x339028u, 0x339030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339030u;
label_339030:
    // 0x339030: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x339030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339034: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x339034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x339038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33903c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339040: 0xc0ce388  jal         func_338E20
    ctx->pc = 0x339040u;
    SET_GPR_U32(ctx, 31, 0x339048u);
    ctx->pc = 0x339044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339040u;
    // 0x339044: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E20u, 0x339040u, 0x339048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339048u;
label_339048:
    // 0x339048: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x339048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x33904c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339050: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x339050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x339054: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x339054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x339058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x339058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33905c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33905cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33906c: 0x3e00008  jr          $ra
    ctx->pc = 0x33906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33906Cu;
        // 0x339070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339074u;
}
