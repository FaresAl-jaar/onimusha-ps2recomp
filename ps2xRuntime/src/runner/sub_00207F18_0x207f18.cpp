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

// Function: sub_00207F18
// Address: 0x207f18 - 0x207f4c
void sub_00207F18_0x207f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F18_0x207f18");
#endif

    ctx->pc = 0x207f18u;

    // 0x207f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207f1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x207f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207f24: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x207f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x207f28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207F28u;
    {
        const bool branch_taken_0x207f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F28u;
        // 0x207f2c: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f28) {
            ctx->pc = 0x207F40u;
            goto label_207f40;
        }
    }
    ctx->pc = 0x207F30u;
    // 0x207f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f38: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207F38u;
    ctx->pc = 0x207F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F38u;
    // 0x207f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207F40u;
label_207f40:
    // 0x207f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207f44: 0x3e00008  jr          $ra
    ctx->pc = 0x207F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F44u;
        // 0x207f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207F4Cu;
}
