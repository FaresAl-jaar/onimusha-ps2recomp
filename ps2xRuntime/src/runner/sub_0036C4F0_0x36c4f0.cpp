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

// Function: sub_0036C4F0
// Address: 0x36c4f0 - 0x36c53c
void sub_0036C4F0_0x36c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C4F0_0x36c4f0");
#endif

    switch (ctx->pc) {
        case 0x36c504u: goto label_36c504;
        default: break;
    }

    ctx->pc = 0x36c4f0u;

    // 0x36c4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c4fc: 0xc0db11c  jal         func_36C470
    ctx->pc = 0x36C4FCu;
    SET_GPR_U32(ctx, 31, 0x36C504u);
    ctx->pc = 0x36C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4FCu;
    // 0x36c500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C470u, 0x36C4FCu, 0x36C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C504u;
label_36c504:
    // 0x36c504: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c508: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c50c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x36c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c510: 0xa0651c10  sb          $a1, 0x1C10($v1)
    ctx->pc = 0x36c510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7184), (uint8_t)GPR_U32(ctx, 5));
    // 0x36c514: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c518: 0xa0701c11  sb          $s0, 0x1C11($v1)
    ctx->pc = 0x36c518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7185), (uint8_t)GPR_U32(ctx, 16));
    // 0x36c51c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c520: 0xa4641c12  sh          $a0, 0x1C12($v1)
    ctx->pc = 0x36c520u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7186), (uint16_t)GPR_U32(ctx, 4));
    // 0x36c524: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c528: 0xa4651c14  sh          $a1, 0x1C14($v1)
    ctx->pc = 0x36c528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7188), (uint16_t)GPR_U32(ctx, 5));
    // 0x36c52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c534: 0x3e00008  jr          $ra
    ctx->pc = 0x36C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C534u;
        // 0x36c538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C53Cu;
}
