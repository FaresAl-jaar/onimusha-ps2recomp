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

// Function: sub_001282C0
// Address: 0x1282c0 - 0x128314
void sub_001282C0_0x1282c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001282C0_0x1282c0");
#endif

    switch (ctx->pc) {
        case 0x1282dcu: goto label_1282dc;
        default: break;
    }

    ctx->pc = 0x1282c0u;

    // 0x1282c0: 0x808f0000  lb          $t7, 0x0($a0)
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1282c4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1282C4u;
    {
        const bool branch_taken_0x1282c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282C4u;
        // 0x1282c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c4) {
            ctx->pc = 0x1282D8u;
            goto label_1282d8;
        }
    }
    ctx->pc = 0x1282CCu;
    // 0x1282cc: 0x80af0000  lb          $t7, 0x0($a1)
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1282d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1282D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D0u;
        // 0x1282d4: 0xf100b  movn        $v0, $zero, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1282D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1282D8u;
label_1282d8:
    // 0x1282d8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1282d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1282dc:
    // 0x1282dc: 0xac7821  addu        $t7, $a1, $t4
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1282e0: 0x81ed0000  lb          $t5, 0x0($t7)
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1282e4: 0x11a00009  beqz        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1282E4u;
    {
        const bool branch_taken_0x1282e4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282E4u;
        // 0x1282e8: 0x4c7021  addu        $t6, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282e4) {
            ctx->pc = 0x12830Cu;
            goto label_12830c;
        }
    }
    ctx->pc = 0x1282ECu;
    // 0x1282ec: 0x81cf0000  lb          $t7, 0x0($t6)
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1282f0: 0x11affffa  beq         $t5, $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1282F0u;
    {
        const bool branch_taken_0x1282f0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x1282F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F0u;
        // 0x1282f4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282f0) {
            ctx->pc = 0x1282DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1282dc;
        }
    }
    ctx->pc = 0x1282F8u;
    // 0x1282f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1282f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1282fc: 0x804f0000  lb          $t7, 0x0($v0)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128300: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x128300u;
    {
        const bool branch_taken_0x128300 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x128300) {
            ctx->pc = 0x128304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128300u;
            // 0x128304: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1282DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1282dc;
        }
    }
    ctx->pc = 0x128308u;
    // 0x128308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12830c:
    // 0x12830c: 0x3e00008  jr          $ra
    ctx->pc = 0x12830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128314u;
}
