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

// Function: sub_003CD7D0
// Address: 0x3cd7d0 - 0x3cd828
void sub_003CD7D0_0x3cd7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD7D0_0x3cd7d0");
#endif

    switch (ctx->pc) {
        case 0x3cd7f0u: goto label_3cd7f0;
        default: break;
    }

    ctx->pc = 0x3cd7d0u;

    // 0x3cd7d0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3cd7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3cd7d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3cd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3cd7d8: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x3cd7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3cd7dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cd7e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cd7e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cd7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd7e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3cd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3cd7ec: 0x246401c4  addiu       $a0, $v1, 0x1C4
    ctx->pc = 0x3cd7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 452));
label_3cd7f0:
    // 0x3cd7f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3cd7f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3cd7f4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD7F4u;
    {
        const bool branch_taken_0x3cd7f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cd7f4) {
            ctx->pc = 0x3CD808u;
            goto label_3cd808;
        }
    }
    ctx->pc = 0x3CD7FCu;
    // 0x3cd7fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CD7FCu;
    {
        const bool branch_taken_0x3cd7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd7fc) {
            ctx->pc = 0x3CD820u;
            goto label_3cd820;
        }
    }
    ctx->pc = 0x3CD804u;
    // 0x3cd804: 0x0  nop
    ctx->pc = 0x3cd804u;
    // NOP
label_3cd808:
    // 0x3cd808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cd80c: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x3cd80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd810: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CD810u;
    {
        const bool branch_taken_0x3cd810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD810u;
        // 0x3cd814: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd810) {
            ctx->pc = 0x3CD7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd7f0;
        }
    }
    ctx->pc = 0x3CD818u;
    // 0x3cd818: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cd81c: 0x0  nop
    ctx->pc = 0x3cd81cu;
    // NOP
label_3cd820:
    // 0x3cd820: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD828u;
}
