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

// Function: entry_137210
// Address: 0x137210 - 0x137258
void entry_137210_0x137258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_137210_0x137258");
#endif

    switch (ctx->pc) {
        case 0x137248u: goto label_137248;
        default: break;
    }

    ctx->pc = 0x137210u;

    // 0x137210: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137214: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137218: 0x8c62aa00  lw          $v0, -0x5600($v1)
    ctx->pc = 0x137218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40AA00u));
    // 0x13721c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13721Cu;
    {
        const bool branch_taken_0x13721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13721Cu;
        // 0x137220: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13721c) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137224u;
    // 0x137224: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137224u;
    {
        const bool branch_taken_0x137224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137224u;
        // 0x137228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137224) {
            ctx->pc = 0x13724Cu;
            goto label_13724c;
        }
    }
    ctx->pc = 0x13722Cu;
label_13722c:
    // 0x13722c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137230: 0xac60aa00  sw          $zero, -0x5600($v1)
    ctx->pc = 0x137230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945280), GPR_U32(ctx, 0));
    // 0x137234: 0x8c446700  lw          $a0, 0x6700($v0)
    ctx->pc = 0x137234u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B6700u));
    // 0x137238: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137238u;
    {
        const bool branch_taken_0x137238 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x13723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137238u;
        // 0x13723c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137238) {
            ctx->pc = 0x13724Cu;
            goto label_13724c;
        }
    }
    ctx->pc = 0x137240u;
    // 0x137240: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x137240u;
    SET_GPR_U32(ctx, 31, 0x137248u);
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x137240u, 0x137248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137248u;
label_137248:
    // 0x137248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13724c:
    // 0x13724c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137250: 0x3e00008  jr          $ra
    ctx->pc = 0x137250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137250u;
        // 0x137254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137258u;
}
