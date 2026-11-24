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

// Function: sub_0024D240
// Address: 0x24d240 - 0x24d280
void sub_0024D240_0x24d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D240_0x24d240");
#endif

    switch (ctx->pc) {
        case 0x24d250u: goto label_24d250;
        default: break;
    }

    ctx->pc = 0x24d240u;

    // 0x24d240: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24d240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d248: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x24d248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24d24c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x24d24cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_24d250:
    // 0x24d250: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24d250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24d254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24d258: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x24d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24d25c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x24d260: 0x28a30060  slti        $v1, $a1, 0x60
    ctx->pc = 0x24d260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x24d264: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24d264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24d268: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24D268u;
    {
        const bool branch_taken_0x24d268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D268u;
        // 0x24d26c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d268) {
            ctx->pc = 0x24D250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d250;
        }
    }
    ctx->pc = 0x24D270u;
    // 0x24d270: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x24d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24d274: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x24d274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x24d278: 0x3e00008  jr          $ra
    ctx->pc = 0x24D278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D278u;
        // 0x24d27c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D280u;
}
