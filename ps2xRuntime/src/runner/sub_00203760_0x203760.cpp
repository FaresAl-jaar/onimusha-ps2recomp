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

// Function: sub_00203760
// Address: 0x203760 - 0x2037b4
void sub_00203760_0x203760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203760_0x203760");
#endif

    switch (ctx->pc) {
        case 0x203790u: goto label_203790;
        default: break;
    }

    ctx->pc = 0x203760u;

    // 0x203760: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x203760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x203764: 0x248201ec  addiu       $v0, $a0, 0x1EC
    ctx->pc = 0x203764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x203768: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x20376c: 0x24870280  addiu       $a3, $a0, 0x280
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x203770: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203774: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203778: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x203778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x20377c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x203780: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x203780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x203784: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x203784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x203788: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x203788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x20378c: 0x0  nop
    ctx->pc = 0x20378cu;
    // NOP
label_203790:
    // 0x203790: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x203794: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x203794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x203798: 0x0  nop
    ctx->pc = 0x203798u;
    // NOP
    // 0x20379c: 0x0  nop
    ctx->pc = 0x20379cu;
    // NOP
    // 0x2037a0: 0x0  nop
    ctx->pc = 0x2037a0u;
    // NOP
    // 0x2037a4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2037A4u;
    {
        const bool branch_taken_0x2037a4 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x2037A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037A4u;
        // 0x2037a8: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037a4) {
            ctx->pc = 0x203790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203790;
        }
    }
    ctx->pc = 0x2037ACu;
    // 0x2037ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2037ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2037B4u;
}
