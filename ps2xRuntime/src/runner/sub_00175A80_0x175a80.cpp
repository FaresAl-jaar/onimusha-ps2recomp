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

// Function: sub_00175A80
// Address: 0x175a80 - 0x175ad8
void sub_00175A80_0x175a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A80_0x175a80");
#endif

    ctx->pc = 0x175a80u;

    // 0x175a80: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x175a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175a84: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x175a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x175a88: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x175A88u;
    {
        const bool branch_taken_0x175a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a88) {
            ctx->pc = 0x175AD0u;
            goto label_175ad0;
        }
    }
    ctx->pc = 0x175A90u;
    // 0x175a90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175a94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175a98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175a9c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x175A9Cu;
    {
        const bool branch_taken_0x175a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a9c) {
            ctx->pc = 0x175AD0u;
            goto label_175ad0;
        }
    }
    ctx->pc = 0x175AA4u;
    // 0x175aa4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x175AA4u;
    {
        const bool branch_taken_0x175aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x175aa4) {
            ctx->pc = 0x175AC0u;
            goto label_175ac0;
        }
    }
    ctx->pc = 0x175AACu;
    // 0x175aac: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x175aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x175ab0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x175ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x175ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175AB4u;
    {
        const bool branch_taken_0x175ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AB4u;
        // 0x175ab8: 0xa083004f  sb          $v1, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ab4) {
            ctx->pc = 0x175AD0u;
            goto label_175ad0;
        }
    }
    ctx->pc = 0x175ABCu;
    // 0x175abc: 0x0  nop
    ctx->pc = 0x175abcu;
    // NOP
label_175ac0:
    // 0x175ac0: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x175ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x175ac4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x175ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x175ac8: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x175ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x175acc: 0x0  nop
    ctx->pc = 0x175accu;
    // NOP
label_175ad0:
    // 0x175ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x175AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175AD8u;
}
