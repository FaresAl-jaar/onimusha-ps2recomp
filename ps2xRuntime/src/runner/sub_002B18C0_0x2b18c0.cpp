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

// Function: sub_002B18C0
// Address: 0x2b18c0 - 0x2b18e8
void sub_002B18C0_0x2b18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B18C0_0x2b18c0");
#endif

    ctx->pc = 0x2b18c0u;

    // 0x2b18c0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2b18c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b18c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b18c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b18cc: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2b18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x2b18d0: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x2b18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x2b18d4: 0xac680020  sw          $t0, 0x20($v1)
    ctx->pc = 0x2b18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
    // 0x2b18d8: 0xa4690028  sh          $t1, 0x28($v1)
    ctx->pc = 0x2b18d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b18dc: 0xa46a002a  sh          $t2, 0x2A($v1)
    ctx->pc = 0x2b18dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 10));
    // 0x2b18e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B18E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18E0u;
        // 0x2b18e4: 0xac6b0030  sw          $t3, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B18E8u;
}
