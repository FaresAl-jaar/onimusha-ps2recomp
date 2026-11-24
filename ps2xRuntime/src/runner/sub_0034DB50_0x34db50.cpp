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

// Function: sub_0034DB50
// Address: 0x34db50 - 0x34db90
void sub_0034DB50_0x34db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DB50_0x34db50");
#endif

    switch (ctx->pc) {
        case 0x34db78u: goto label_34db78;
        default: break;
    }

    ctx->pc = 0x34db50u;

    // 0x34db50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34db54: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34db54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34db58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34db5c: 0x8c22a09c  lw          $v0, -0x5F64($at)
    ctx->pc = 0x34db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91A09Cu));
    // 0x34db60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34db60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34db64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DB64u;
    {
        const bool branch_taken_0x34db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB64u;
        // 0x34db68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db64) {
            ctx->pc = 0x34DB80u;
            goto label_34db80;
        }
    }
    ctx->pc = 0x34DB6Cu;
    // 0x34db6c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34db70: 0xc0d3c84  jal         func_34F210
    ctx->pc = 0x34DB70u;
    SET_GPR_U32(ctx, 31, 0x34DB78u);
    ctx->pc = 0x34DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DB70u;
    // 0x34db74: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F210u, 0x34DB70u, 0x34DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB78u;
label_34db78:
    // 0x34db78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34DB78u;
    {
        const bool branch_taken_0x34db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB78u;
        // 0x34db7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db78) {
            ctx->pc = 0x34DB88u;
            goto label_34db88;
        }
    }
    ctx->pc = 0x34DB80u;
label_34db80:
    // 0x34db80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34db80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34db84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34db88:
    // 0x34db88: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB88u;
        // 0x34db8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB90u;
}
