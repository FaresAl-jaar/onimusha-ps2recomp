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

// Function: sub_0024B1C8
// Address: 0x24b1c8 - 0x24b228
void sub_0024B1C8_0x24b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B1C8_0x24b1c8");
#endif

    switch (ctx->pc) {
        case 0x24b1ecu: goto label_24b1ec;
        default: break;
    }

    ctx->pc = 0x24b1c8u;

    // 0x24b1c8: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x24b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x24b1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24b1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1d0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x24b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x24b1d4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24b1d4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4D1380u));
    // 0x24b1d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B1D8u;
    {
        const bool branch_taken_0x24b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1D8u;
        // 0x24b1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1d8) {
            ctx->pc = 0x24B1E8u;
            goto label_24b1e8;
        }
    }
    ctx->pc = 0x24B1E0u;
    // 0x24b1e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24B1E0u;
    {
        const bool branch_taken_0x24b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1E0u;
        // 0x24b1e4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1e0) {
            ctx->pc = 0x24B220u;
            goto label_24b220;
        }
    }
    ctx->pc = 0x24B1E8u;
label_24b1e8:
    // 0x24b1e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24b1ec:
    // 0x24b1ec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x24b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x24b1f0: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x24b1f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x24b1f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24B1F4u;
    {
        const bool branch_taken_0x24b1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1F4u;
        // 0x24b1f8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1f4) {
            ctx->pc = 0x24B220u;
            goto label_24b220;
        }
    }
    ctx->pc = 0x24B1FCu;
    // 0x24b1fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24b200: 0x24c41380  addiu       $a0, $a2, 0x1380
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x24b204: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24b204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24b208: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24b20c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24b210: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x24b210u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b214: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x24B214u;
    {
        const bool branch_taken_0x24b214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b214) {
            ctx->pc = 0x24B218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B214u;
            // 0x24b218: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b1ec;
        }
    }
    ctx->pc = 0x24B21Cu;
    // 0x24b21c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24b21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b220:
    // 0x24b220: 0x3e00008  jr          $ra
    ctx->pc = 0x24B220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B220u;
        // 0x24b224: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B228u;
}
