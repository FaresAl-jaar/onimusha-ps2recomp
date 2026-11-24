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

// Function: sub_002F43A0
// Address: 0x2f43a0 - 0x2f43f4
void sub_002F43A0_0x2f43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F43A0_0x2f43a0");
#endif

    switch (ctx->pc) {
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43d0u: goto label_2f43d0;
        default: break;
    }

    ctx->pc = 0x2f43a0u;

    // 0x2f43a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f43a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f43a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f43a8: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x2F43A8u;
    SET_GPR_U32(ctx, 31, 0x2F43B0u);
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x2F43A8u, 0x2F43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43B0u;
label_2f43b0:
    // 0x2f43b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F43B0u;
    {
        const bool branch_taken_0x2f43b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f43b0) {
            ctx->pc = 0x2F43C0u;
            goto label_2f43c0;
        }
    }
    ctx->pc = 0x2F43B8u;
    // 0x2f43b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F43B8u;
    {
        const bool branch_taken_0x2f43b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B8u;
        // 0x2f43bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43b8) {
            ctx->pc = 0x2F43E8u;
            goto label_2f43e8;
        }
    }
    ctx->pc = 0x2F43C0u;
label_2f43c0:
    // 0x2f43c0: 0x94450044  lhu         $a1, 0x44($v0)
    ctx->pc = 0x2f43c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2f43c4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2f43c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2f43c8: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x2F43C8u;
    SET_GPR_U32(ctx, 31, 0x2F43D0u);
    ctx->pc = 0x2F43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43C8u;
    // 0x2f43cc: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x2F43C8u, 0x2F43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F43D0u;
    {
        const bool branch_taken_0x2f43d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f43d0) {
            ctx->pc = 0x2F43E0u;
            goto label_2f43e0;
        }
    }
    ctx->pc = 0x2F43D8u;
    // 0x2f43d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F43D8u;
    {
        const bool branch_taken_0x2f43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D8u;
        // 0x2f43dc: 0x90420001  lbu         $v0, 0x1($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43d8) {
            ctx->pc = 0x2F43E4u;
            goto label_2f43e4;
        }
    }
    ctx->pc = 0x2F43E0u;
label_2f43e0:
    // 0x2f43e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f43e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f43e4:
    // 0x2f43e4: 0x0  nop
    ctx->pc = 0x2f43e4u;
    // NOP
label_2f43e8:
    // 0x2f43e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f43e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f43ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F43ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43ECu;
        // 0x2f43f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F43ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F43F4u;
}
