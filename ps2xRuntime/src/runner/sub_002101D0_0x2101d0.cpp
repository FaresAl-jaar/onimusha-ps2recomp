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

// Function: sub_002101D0
// Address: 0x2101d0 - 0x210204
void sub_002101D0_0x2101d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002101D0_0x2101d0");
#endif

    ctx->pc = 0x2101d0u;

    // 0x2101d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2101d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2101d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2101d8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2101d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2101dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2101dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101e0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2101e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101e4: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2101E4u;
    {
        const bool branch_taken_0x2101e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2101E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E4u;
        // 0x2101e8: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101e4) {
            ctx->pc = 0x2101FCu;
            goto label_2101fc;
        }
    }
    ctx->pc = 0x2101ECu;
    // 0x2101ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2101ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2101f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2101f8: 0x8c621318  lw          $v0, 0x1318($v1)
    ctx->pc = 0x2101f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4888)));
label_2101fc:
    // 0x2101fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2101FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2101FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210204u;
}
