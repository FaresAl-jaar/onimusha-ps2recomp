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

// Function: sub_002294D0
// Address: 0x2294d0 - 0x229520
void sub_002294D0_0x2294d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002294D0_0x2294d0");
#endif

    switch (ctx->pc) {
        case 0x2294ecu: goto label_2294ec;
        case 0x2294fcu: goto label_2294fc;
        default: break;
    }

    ctx->pc = 0x2294d0u;

    // 0x2294d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2294d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2294d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2294d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2294d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2294DCu;
    {
        const bool branch_taken_0x2294dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294DCu;
        // 0x2294e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294dc) {
            ctx->pc = 0x229510u;
            goto label_229510;
        }
    }
    ctx->pc = 0x2294E4u;
    // 0x2294e4: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x2294E4u;
    SET_GPR_U32(ctx, 31, 0x2294ECu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x2294E4u, 0x2294ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294ECu;
label_2294ec:
    // 0x2294ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2294ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2294f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294f4: 0xc049590  jal         func_125640
    ctx->pc = 0x2294F4u;
    SET_GPR_U32(ctx, 31, 0x2294FCu);
    ctx->pc = 0x2294F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294F4u;
    // 0x2294f8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2294F4u, 0x2294FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294FCu;
label_2294fc:
    // 0x2294fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2294fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x229500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x229504: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x229504u;
    ctx->pc = 0x229508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229504u;
    // 0x229508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x22950Cu;
    // 0x22950c: 0x0  nop
    ctx->pc = 0x22950cu;
    // NOP
label_229510:
    // 0x229510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x229514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x229518: 0x3e00008  jr          $ra
    ctx->pc = 0x229518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229518u;
        // 0x22951c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229520u;
}
