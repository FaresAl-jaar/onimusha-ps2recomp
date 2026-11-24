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

// Function: sub_00298470
// Address: 0x298470 - 0x2984bc
void sub_00298470_0x298470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298470_0x298470");
#endif

    switch (ctx->pc) {
        case 0x298488u: goto label_298488;
        case 0x2984b0u: goto label_2984b0;
        default: break;
    }

    ctx->pc = 0x298470u;

    // 0x298470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298474: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x298474u;
    {
        const bool branch_taken_0x298474 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x298478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298474u;
        // 0x298478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298474) {
            ctx->pc = 0x298490u;
            goto label_298490;
        }
    }
    ctx->pc = 0x29847Cu;
    // 0x29847c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298480: 0xc09d700  jal         func_275C00
    ctx->pc = 0x298480u;
    SET_GPR_U32(ctx, 31, 0x298488u);
    ctx->pc = 0x298484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298480u;
    // 0x298484: 0x24842930  addiu       $a0, $a0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C00u, 0x298480u, 0x298488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298488u;
label_298488:
    // 0x298488: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298488u;
    {
        const bool branch_taken_0x298488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298488) {
            ctx->pc = 0x2984B0u;
            goto label_2984b0;
        }
    }
    ctx->pc = 0x298490u;
label_298490:
    // 0x298490: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x298490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x298494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x298498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29849c: 0x8c640858  lw          $a0, 0x858($v1)
    ctx->pc = 0x29849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x2984a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2984A0u;
    {
        const bool branch_taken_0x2984a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2984a0) {
            ctx->pc = 0x2984B0u;
            goto label_2984b0;
        }
    }
    ctx->pc = 0x2984A8u;
    // 0x2984a8: 0xc0a71ac  jal         func_29C6B0
    ctx->pc = 0x2984A8u;
    SET_GPR_U32(ctx, 31, 0x2984B0u);
    ctx->pc = 0x2984ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984A8u;
    // 0x2984ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6B0u, 0x2984A8u, 0x2984B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984B0u;
label_2984b0:
    // 0x2984b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2984b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2984b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2984B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2984B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984B4u;
        // 0x2984b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2984B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2984BCu;
}
