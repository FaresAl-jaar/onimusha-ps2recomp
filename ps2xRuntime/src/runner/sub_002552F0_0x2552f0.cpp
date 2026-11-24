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

// Function: sub_002552F0
// Address: 0x2552f0 - 0x255350
void sub_002552F0_0x2552f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002552F0_0x2552f0");
#endif

    ctx->pc = 0x2552f0u;

    // 0x2552f0: 0x8c831104  lw          $v1, 0x1104($a0)
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x2552f4: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x2552f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x2552f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2552F8u;
    {
        const bool branch_taken_0x2552f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2552FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F8u;
        // 0x2552fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552f8) {
            ctx->pc = 0x255308u;
            goto label_255308;
        }
    }
    ctx->pc = 0x255300u;
    // 0x255300: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x255300u;
    {
        const bool branch_taken_0x255300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255300) {
            ctx->pc = 0x255348u;
            goto label_255348;
        }
    }
    ctx->pc = 0x255308u;
label_255308:
    // 0x255308: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x255308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25530c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x25530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255310: 0xa0650104  sb          $a1, 0x104($v1)
    ctx->pc = 0x255310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 260), (uint8_t)GPR_U32(ctx, 5));
    // 0x255314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255318: 0x8c831104  lw          $v1, 0x1104($a0)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x25531c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25531cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255324: 0xac660108  sw          $a2, 0x108($v1)
    ctx->pc = 0x255324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 6));
    // 0x255328: 0x8c831104  lw          $v1, 0x1104($a0)
    ctx->pc = 0x255328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x25532c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25532cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255330: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255334: 0xa0670105  sb          $a3, 0x105($v1)
    ctx->pc = 0x255334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 261), (uint8_t)GPR_U32(ctx, 7));
    // 0x255338: 0x8c831104  lw          $v1, 0x1104($a0)
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4356)));
    // 0x25533c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x255340: 0xac831104  sw          $v1, 0x1104($a0)
    ctx->pc = 0x255340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4356), GPR_U32(ctx, 3));
    // 0x255344: 0x0  nop
    ctx->pc = 0x255344u;
    // NOP
label_255348:
    // 0x255348: 0x3e00008  jr          $ra
    ctx->pc = 0x255348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255350u;
}
