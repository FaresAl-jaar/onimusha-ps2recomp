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

// Function: sub_0010BB38
// Address: 0x10bb38 - 0x10bb6c
void sub_0010BB38_0x10bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB38_0x10bb38");
#endif

    switch (ctx->pc) {
        case 0x10bb5cu: goto label_10bb5c;
        default: break;
    }

    ctx->pc = 0x10bb38u;

    // 0x10bb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bb3c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x10bb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10bb40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BB44u;
    {
        const bool branch_taken_0x10bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB44u;
        // 0x10bb48: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb44) {
            ctx->pc = 0x10BB54u;
            goto label_10bb54;
        }
    }
    ctx->pc = 0x10BB4Cu;
    // 0x10bb4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10BB4Cu;
    {
        const bool branch_taken_0x10bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB4Cu;
        // 0x10bb50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb4c) {
            ctx->pc = 0x10BB60u;
            goto label_10bb60;
        }
    }
    ctx->pc = 0x10BB54u;
label_10bb54:
    // 0x10bb54: 0xc042b06  jal         func_10AC18
    ctx->pc = 0x10BB54u;
    SET_GPR_U32(ctx, 31, 0x10BB5Cu);
    ctx->pc = 0x10BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB54u;
    // 0x10bb58: 0xac85087c  sw          $a1, 0x87C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 2172), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC18u, 0x10BB54u, 0x10BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB5Cu;
label_10bb5c:
    // 0x10bb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bb60:
    // 0x10bb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB64u;
        // 0x10bb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB6Cu;
}
