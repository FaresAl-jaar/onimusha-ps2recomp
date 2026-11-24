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

// Function: sub_00228E18
// Address: 0x228e18 - 0x228e60
void sub_00228E18_0x228e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228E18_0x228e18");
#endif

    ctx->pc = 0x228e18u;

    // 0x228e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228e1c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228E1Cu;
    {
        const bool branch_taken_0x228e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E1Cu;
        // 0x228e20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e1c) {
            ctx->pc = 0x228E38u;
            goto label_228e38;
        }
    }
    ctx->pc = 0x228E24u;
    // 0x228e24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e2c: 0x24849880  addiu       $a0, $a0, -0x6780
    ctx->pc = 0x228e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
    // 0x228e30: 0x808a0d4  j           func_228350
    ctx->pc = 0x228E30u;
    ctx->pc = 0x228E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E30u;
    // 0x228e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228E38u;
label_228e38:
    // 0x228e38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x228E38u;
    {
        const bool branch_taken_0x228e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e38) {
            ctx->pc = 0x228E48u;
            goto label_228e48;
        }
    }
    ctx->pc = 0x228E40u;
    // 0x228e40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x228e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x228e44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x228e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_228e48:
    // 0x228e48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x228E48u;
    {
        const bool branch_taken_0x228e48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E48u;
        // 0x228e4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e48) {
            ctx->pc = 0x228E58u;
            goto label_228e58;
        }
    }
    ctx->pc = 0x228E50u;
    // 0x228e50: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x228e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x228e54: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x228e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_228e58:
    // 0x228e58: 0x3e00008  jr          $ra
    ctx->pc = 0x228E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E58u;
        // 0x228e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E60u;
}
