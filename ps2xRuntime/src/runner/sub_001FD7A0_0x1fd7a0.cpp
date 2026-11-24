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

// Function: sub_001FD7A0
// Address: 0x1fd7a0 - 0x1fd7f8
void sub_001FD7A0_0x1fd7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7A0_0x1fd7a0");
#endif

    switch (ctx->pc) {
        case 0x1fd7c8u: goto label_1fd7c8;
        default: break;
    }

    ctx->pc = 0x1fd7a0u;

    // 0x1fd7a0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1fd7a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7a8: 0x8c628138  lw          $v0, -0x7EC8($v1)
    ctx->pc = 0x1fd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B8138u));
    // 0x1fd7ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1fd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fd7b0: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FD7B0u;
    {
        const bool branch_taken_0x1fd7b0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x1FD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7B0u;
        // 0x1fd7b4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7b0) {
            ctx->pc = 0x1FD7ECu;
            goto label_1fd7ec;
        }
    }
    ctx->pc = 0x1FD7B8u;
    // 0x1fd7b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fd7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd7c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd7c4: 0x0  nop
    ctx->pc = 0x1fd7c4u;
    // NOP
label_1fd7c8:
    // 0x1fd7c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7cc: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD7CCu;
    {
        const bool branch_taken_0x1fd7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1FD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7CCu;
        // 0x1fd7d0: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7cc) {
            ctx->pc = 0x1FD7F0u;
            goto label_1fd7f0;
        }
    }
    ctx->pc = 0x1FD7D4u;
    // 0x1fd7d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fd7d8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1fd7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fd7dc: 0x0  nop
    ctx->pc = 0x1fd7dcu;
    // NOP
    // 0x1fd7e0: 0x0  nop
    ctx->pc = 0x1fd7e0u;
    // NOP
    // 0x1fd7e4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FD7E4u;
    {
        const bool branch_taken_0x1fd7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7e4) {
            ctx->pc = 0x1FD7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7E4u;
            // 0x1fd7e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd7c8;
        }
    }
    ctx->pc = 0x1FD7ECu;
label_1fd7ec:
    // 0x1fd7ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7f0:
    // 0x1fd7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD7F8u;
}
