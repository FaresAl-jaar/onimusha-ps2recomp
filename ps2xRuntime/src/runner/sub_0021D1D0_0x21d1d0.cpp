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

// Function: sub_0021D1D0
// Address: 0x21d1d0 - 0x21d20c
void sub_0021D1D0_0x21d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D1D0_0x21d1d0");
#endif

    switch (ctx->pc) {
        case 0x21d1e4u: goto label_21d1e4;
        case 0x21d1f8u: goto label_21d1f8;
        default: break;
    }

    ctx->pc = 0x21d1d0u;

    // 0x21d1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d1d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d1dc: 0xc0876bc  jal         func_21DAF0
    ctx->pc = 0x21D1DCu;
    SET_GPR_U32(ctx, 31, 0x21D1E4u);
    ctx->pc = 0x21D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1DCu;
    // 0x21d1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAF0u, 0x21D1DCu, 0x21D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1E4u;
label_21d1e4:
    // 0x21d1e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D1E4u;
    {
        const bool branch_taken_0x21d1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E4u;
        // 0x21d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1e4) {
            ctx->pc = 0x21D1FCu;
            goto label_21d1fc;
        }
    }
    ctx->pc = 0x21D1ECu;
    // 0x21d1ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d1f0: 0xc087854  jal         func_21E150
    ctx->pc = 0x21D1F0u;
    SET_GPR_U32(ctx, 31, 0x21D1F8u);
    ctx->pc = 0x21D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1F0u;
    // 0x21d1f4: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E150u, 0x21D1F0u, 0x21D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1F8u;
label_21d1f8:
    // 0x21d1f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1fc:
    // 0x21d1fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d204: 0x3e00008  jr          $ra
    ctx->pc = 0x21D204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D204u;
        // 0x21d208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D20Cu;
}
