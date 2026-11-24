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

// Function: sub_00337210
// Address: 0x337210 - 0x337258
void sub_00337210_0x337210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337210_0x337210");
#endif

    switch (ctx->pc) {
        case 0x33722cu: goto label_33722c;
        case 0x337244u: goto label_337244;
        default: break;
    }

    ctx->pc = 0x337210u;

    // 0x337210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33721c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337224: 0xc0cdc28  jal         func_3370A0
    ctx->pc = 0x337224u;
    SET_GPR_U32(ctx, 31, 0x33722Cu);
    ctx->pc = 0x337228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337224u;
    // 0x337228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370A0u, 0x337224u, 0x33722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33722Cu;
label_33722c:
    // 0x33722c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33722Cu;
    {
        const bool branch_taken_0x33722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33722Cu;
        // 0x337230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33722c) {
            ctx->pc = 0x33723Cu;
            goto label_33723c;
        }
    }
    ctx->pc = 0x337234u;
    // 0x337234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337234u;
    {
        const bool branch_taken_0x337234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337234u;
        // 0x337238: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337234) {
            ctx->pc = 0x337248u;
            goto label_337248;
        }
    }
    ctx->pc = 0x33723Cu;
label_33723c:
    // 0x33723c: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x33723Cu;
    SET_GPR_U32(ctx, 31, 0x337244u);
    ctx->pc = 0x337240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33723Cu;
    // 0x337240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x33723Cu, 0x337244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337244u;
label_337244:
    // 0x337244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_337248:
    // 0x337248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33724c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33724cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337250: 0x3e00008  jr          $ra
    ctx->pc = 0x337250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337250u;
        // 0x337254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337258u;
}
