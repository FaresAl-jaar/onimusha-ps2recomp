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

// Function: sub_00208CC8
// Address: 0x208cc8 - 0x208d14
void sub_00208CC8_0x208cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208CC8_0x208cc8");
#endif

    switch (ctx->pc) {
        case 0x208d00u: goto label_208d00;
        default: break;
    }

    ctx->pc = 0x208cc8u;

    // 0x208cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208cd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x208cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208cd4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208CD4u;
    {
        const bool branch_taken_0x208cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD4u;
        // 0x208cd8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd4) {
            ctx->pc = 0x208CF0u;
            goto label_208cf0;
        }
    }
    ctx->pc = 0x208CDCu;
    // 0x208cdc: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208CDCu;
    {
        const bool branch_taken_0x208cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x208CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CDCu;
        // 0x208ce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cdc) {
            ctx->pc = 0x208D04u;
            goto label_208d04;
        }
    }
    ctx->pc = 0x208CE4u;
    // 0x208ce4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208CE4u;
    {
        const bool branch_taken_0x208ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE4u;
        // 0x208ce8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ce4) {
            ctx->pc = 0x208CF8u;
            goto label_208cf8;
        }
    }
    ctx->pc = 0x208CECu;
    // 0x208cec: 0x0  nop
    ctx->pc = 0x208cecu;
    // NOP
label_208cf0:
    // 0x208cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208CF0u;
    {
        const bool branch_taken_0x208cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CF0u;
        // 0x208cf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cf0) {
            ctx->pc = 0x208D00u;
            goto label_208d00;
        }
    }
    ctx->pc = 0x208CF8u;
label_208cf8:
    // 0x208cf8: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208CF8u;
    SET_GPR_U32(ctx, 31, 0x208D00u);
    ctx->pc = 0x208CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CF8u;
    // 0x208cfc: 0x24847c78  addiu       $a0, $a0, 0x7C78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208CF8u, 0x208D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D00u;
label_208d00:
    // 0x208d00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208d04:
    // 0x208d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x208D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D0Cu;
        // 0x208d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208D14u;
}
