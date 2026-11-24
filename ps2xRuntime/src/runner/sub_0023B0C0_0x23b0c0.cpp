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

// Function: sub_0023B0C0
// Address: 0x23b0c0 - 0x23b108
void sub_0023B0C0_0x23b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B0C0_0x23b0c0");
#endif

    switch (ctx->pc) {
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0f0u: goto label_23b0f0;
        default: break;
    }

    ctx->pc = 0x23b0c0u;

    // 0x23b0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b0d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b0d4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B0D4u;
    SET_GPR_U32(ctx, 31, 0x23B0DCu);
    ctx->pc = 0x23B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0D4u;
    // 0x23b0d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B0D4u, 0x23B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0DCu;
label_23b0dc:
    // 0x23b0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0e0: 0xc08ec42  jal         func_23B108
    ctx->pc = 0x23B0E0u;
    SET_GPR_U32(ctx, 31, 0x23B0E8u);
    ctx->pc = 0x23B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0E0u;
    // 0x23b0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B108u, 0x23B0E0u, 0x23B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0E8u;
label_23b0e8:
    // 0x23b0e8: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B0E8u;
    SET_GPR_U32(ctx, 31, 0x23B0F0u);
    ctx->pc = 0x23B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0E8u;
    // 0x23b0ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B0E8u, 0x23B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0F0u;
label_23b0f0:
    // 0x23b0f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b0f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b100: 0x3e00008  jr          $ra
    ctx->pc = 0x23B100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B100u;
        // 0x23b104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B108u;
}
