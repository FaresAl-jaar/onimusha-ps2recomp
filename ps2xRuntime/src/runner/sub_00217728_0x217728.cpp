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

// Function: sub_00217728
// Address: 0x217728 - 0x217778
void sub_00217728_0x217728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217728_0x217728");
#endif

    ctx->pc = 0x217728u;

    // 0x217728: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x217728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21772c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21772cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x217730: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x217730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x217734: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x217734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x217738: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x217738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21773c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x21773cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x217740: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x217740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x217744: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x217744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x217748: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x217748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21774c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x21774cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x217750: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x217750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x217754: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x217754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x217758: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x217758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21775c: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x21775cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x217760: 0x90820054  lbu         $v0, 0x54($a0)
    ctx->pc = 0x217760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x217764: 0xa4a0001e  sh          $zero, 0x1E($a1)
    ctx->pc = 0x217764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x217768: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x217768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x21776c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x21776cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x217770: 0x3e00008  jr          $ra
    ctx->pc = 0x217770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217770u;
        // 0x217774: 0xa4a2001c  sh          $v0, 0x1C($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217778u;
}
