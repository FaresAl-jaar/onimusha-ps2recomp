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

// Function: sub_00145710
// Address: 0x145710 - 0x14575c
void sub_00145710_0x145710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145710_0x145710");
#endif

    switch (ctx->pc) {
        case 0x145730u: goto label_145730;
        default: break;
    }

    ctx->pc = 0x145710u;

    // 0x145710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145714: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x145714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145718u;
    {
        const bool branch_taken_0x145718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145718u;
        // 0x14571c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145718) {
            ctx->pc = 0x145728u;
            goto label_145728;
        }
    }
    ctx->pc = 0x145720u;
    // 0x145720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145720u;
    {
        const bool branch_taken_0x145720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145720) {
            ctx->pc = 0x145740u;
            goto label_145740;
        }
    }
    ctx->pc = 0x145728u;
label_145728:
    // 0x145728: 0xc0515d8  jal         func_145760
    ctx->pc = 0x145728u;
    SET_GPR_U32(ctx, 31, 0x145730u);
    ctx->pc = 0x14572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145728u;
    // 0x14572c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145760u, 0x145728u, 0x145730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145730u;
label_145730:
    // 0x145730: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145730u;
    {
        const bool branch_taken_0x145730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145730) {
            ctx->pc = 0x145750u;
            goto label_145750;
        }
    }
    ctx->pc = 0x145738u;
    // 0x145738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145738u;
    {
        const bool branch_taken_0x145738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145738u;
        // 0x14573c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145738) {
            ctx->pc = 0x145750u;
            goto label_145750;
        }
    }
    ctx->pc = 0x145740u;
label_145740:
    // 0x145740: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x145740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x145744: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x145744u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x145748: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x145748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14574c: 0x0  nop
    ctx->pc = 0x14574cu;
    // NOP
label_145750:
    // 0x145750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145754: 0x3e00008  jr          $ra
    ctx->pc = 0x145754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145754u;
        // 0x145758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14575Cu;
}
