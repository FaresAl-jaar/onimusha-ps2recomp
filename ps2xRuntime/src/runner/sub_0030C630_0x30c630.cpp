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

// Function: sub_0030C630
// Address: 0x30c630 - 0x30c698
void sub_0030C630_0x30c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C630_0x30c630");
#endif

    switch (ctx->pc) {
        case 0x30c668u: goto label_30c668;
        case 0x30c67cu: goto label_30c67c;
        default: break;
    }

    ctx->pc = 0x30c630u;

    // 0x30c630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c634: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30c634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30c638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30c63c: 0x2484b380  addiu       $a0, $a0, -0x4C80
    ctx->pc = 0x30c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947712));
    // 0x30c640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c644: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x30c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x30c648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c64c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c650: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x30c650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30c654: 0xa7828b08  sh          $v0, -0x74F8($gp)
    ctx->pc = 0x30c654u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937352), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c65c: 0x87828b08  lh          $v0, -0x74F8($gp)
    ctx->pc = 0x30c65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937352)));
    // 0x30c660: 0xc049590  jal         func_125640
    ctx->pc = 0x30C660u;
    SET_GPR_U32(ctx, 31, 0x30C668u);
    ctx->pc = 0x30C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C660u;
    // 0x30c664: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x30C660u, 0x30C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C668u;
label_30c668:
    // 0x30c668: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30c668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30c66c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x30c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x30c670: 0x2484b380  addiu       $a0, $a0, -0x4C80
    ctx->pc = 0x30c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947712));
    // 0x30c674: 0xc049522  jal         func_125488
    ctx->pc = 0x30C674u;
    SET_GPR_U32(ctx, 31, 0x30C67Cu);
    ctx->pc = 0x30C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C674u;
    // 0x30c678: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x30C674u, 0x30C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C67Cu;
label_30c67c:
    // 0x30c67c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x30c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30c680: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c688: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30c68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c690: 0x3e00008  jr          $ra
    ctx->pc = 0x30C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C690u;
        // 0x30c694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C698u;
}
