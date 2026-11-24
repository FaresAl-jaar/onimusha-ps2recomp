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

// Function: sub_0036A680
// Address: 0x36a680 - 0x36a730
void sub_0036A680_0x36a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A680_0x36a680");
#endif

    ctx->pc = 0x36a680u;

    // 0x36a680: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x36a680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36a684: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36a688: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A688u;
    {
        const bool branch_taken_0x36a688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x36a688) {
            ctx->pc = 0x36A698u;
            goto label_36a698;
        }
    }
    ctx->pc = 0x36A690u;
    // 0x36a690: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x36A690u;
    {
        const bool branch_taken_0x36a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a690) {
            ctx->pc = 0x36A728u;
            goto label_36a728;
        }
    }
    ctx->pc = 0x36A698u;
label_36a698:
    // 0x36a698: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x36a698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x36a69c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A69Cu;
    {
        const bool branch_taken_0x36a69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36a69c) {
            ctx->pc = 0x36A6B0u;
            goto label_36a6b0;
        }
    }
    ctx->pc = 0x36A6A4u;
    // 0x36a6a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x36A6A4u;
    {
        const bool branch_taken_0x36a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a6a4) {
            ctx->pc = 0x36A728u;
            goto label_36a728;
        }
    }
    ctx->pc = 0x36A6ACu;
    // 0x36a6ac: 0x0  nop
    ctx->pc = 0x36a6acu;
    // NOP
label_36a6b0:
    // 0x36a6b0: 0x28820950  slti        $v0, $a0, 0x950
    ctx->pc = 0x36a6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2384) ? 1 : 0);
    // 0x36a6b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A6B4u;
    {
        const bool branch_taken_0x36a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6B4u;
        // 0x36a6b8: 0x28810982  slti        $at, $a0, 0x982 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2434) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6b4) {
            ctx->pc = 0x36A6C8u;
            goto label_36a6c8;
        }
    }
    ctx->pc = 0x36A6BCu;
    // 0x36a6bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A6BCu;
    {
        const bool branch_taken_0x36a6bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a6bc) {
            ctx->pc = 0x36A6D0u;
            goto label_36a6d0;
        }
    }
    ctx->pc = 0x36A6C4u;
    // 0x36a6c4: 0x0  nop
    ctx->pc = 0x36a6c4u;
    // NOP
label_36a6c8:
    // 0x36a6c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36A6C8u;
    {
        const bool branch_taken_0x36a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6C8u;
        // 0x36a6cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6c8) {
            ctx->pc = 0x36A728u;
            goto label_36a728;
        }
    }
    ctx->pc = 0x36A6D0u;
label_36a6d0:
    // 0x36a6d0: 0x28620950  slti        $v0, $v1, 0x950
    ctx->pc = 0x36a6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2384) ? 1 : 0);
    // 0x36a6d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A6D4u;
    {
        const bool branch_taken_0x36a6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6D4u;
        // 0x36a6d8: 0x28610982  slti        $at, $v1, 0x982 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2434) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6d4) {
            ctx->pc = 0x36A6E8u;
            goto label_36a6e8;
        }
    }
    ctx->pc = 0x36A6DCu;
    // 0x36a6dc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A6DCu;
    {
        const bool branch_taken_0x36a6dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a6dc) {
            ctx->pc = 0x36A6F0u;
            goto label_36a6f0;
        }
    }
    ctx->pc = 0x36A6E4u;
    // 0x36a6e4: 0x0  nop
    ctx->pc = 0x36a6e4u;
    // NOP
label_36a6e8:
    // 0x36a6e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36A6E8u;
    {
        const bool branch_taken_0x36a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6E8u;
        // 0x36a6ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6e8) {
            ctx->pc = 0x36A728u;
            goto label_36a728;
        }
    }
    ctx->pc = 0x36A6F0u;
label_36a6f0:
    // 0x36a6f0: 0x2482f6b0  addiu       $v0, $a0, -0x950
    ctx->pc = 0x36a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964912));
    // 0x36a6f4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x36a6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36a6f8: 0x2462f6b0  addiu       $v0, $v1, -0x950
    ctx->pc = 0x36a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964912));
    // 0x36a6fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36a704: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x36a704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a708: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36a708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36a70c: 0x8f838bf0  lw          $v1, -0x7410($gp)
    ctx->pc = 0x36a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x36a710: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x36a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a714: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x36a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x36a718: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36a718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a71c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a720: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36a724: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x36a724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_36a728:
    // 0x36a728: 0x3e00008  jr          $ra
    ctx->pc = 0x36A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A730u;
}
