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

// Function: sub_003DB5C0
// Address: 0x3db5c0 - 0x3db600
void sub_003DB5C0_0x3db5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB5C0_0x3db5c0");
#endif

    switch (ctx->pc) {
        case 0x3db5d4u: goto label_3db5d4;
        case 0x3db5e4u: goto label_3db5e4;
        default: break;
    }

    ctx->pc = 0x3db5c0u;

    // 0x3db5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3db5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3db5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3db5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3db5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3db5cc: 0xc0f6d38  jal         func_3DB4E0
    ctx->pc = 0x3DB5CCu;
    SET_GPR_U32(ctx, 31, 0x3DB5D4u);
    ctx->pc = 0x3DB5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB5CCu;
    // 0x3db5d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB4E0u, 0x3DB5CCu, 0x3DB5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB5D4u;
label_3db5d4:
    // 0x3db5d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB5D4u;
    {
        const bool branch_taken_0x3db5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5D4u;
        // 0x3db5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db5d4) {
            ctx->pc = 0x3DB5ECu;
            goto label_3db5ec;
        }
    }
    ctx->pc = 0x3DB5DCu;
    // 0x3db5dc: 0xc0f6d80  jal         func_3DB600
    ctx->pc = 0x3DB5DCu;
    SET_GPR_U32(ctx, 31, 0x3DB5E4u);
    ctx->pc = 0x3DB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB600u, 0x3DB5DCu, 0x3DB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB5E4u;
label_3db5e4:
    // 0x3db5e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB5E4u;
    {
        const bool branch_taken_0x3db5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5E4u;
        // 0x3db5e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db5e4) {
            ctx->pc = 0x3DB5F4u;
            goto label_3db5f4;
        }
    }
    ctx->pc = 0x3DB5ECu;
label_3db5ec:
    // 0x3db5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3db5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3db5f4:
    // 0x3db5f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5F8u;
        // 0x3db5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB600u;
}
