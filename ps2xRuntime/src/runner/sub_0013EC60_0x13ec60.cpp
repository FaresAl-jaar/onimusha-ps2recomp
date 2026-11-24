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

// Function: sub_0013EC60
// Address: 0x13ec60 - 0x13ecac
void sub_0013EC60_0x13ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EC60_0x13ec60");
#endif

    switch (ctx->pc) {
        case 0x13ec88u: goto label_13ec88;
        default: break;
    }

    ctx->pc = 0x13ec60u;

    // 0x13ec60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13ec64: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x13ec64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x13ec68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ec6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ec70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ec74: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x13ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x13ec78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13ec7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ec80: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13ec84: 0x0  nop
    ctx->pc = 0x13ec84u;
    // NOP
label_13ec88:
    // 0x13ec88: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ec8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13ec90: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ec94: 0x0  nop
    ctx->pc = 0x13ec94u;
    // NOP
    // 0x13ec98: 0x0  nop
    ctx->pc = 0x13ec98u;
    // NOP
    // 0x13ec9c: 0x14a4fffa  bne         $a1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13EC9Cu;
    {
        const bool branch_taken_0x13ec9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x13ec9c) {
            ctx->pc = 0x13EC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ec88;
        }
    }
    ctx->pc = 0x13ECA4u;
    // 0x13eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x13ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECA4u;
        // 0x13eca8: 0xaca0fffc  sw          $zero, -0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ECACu;
}
