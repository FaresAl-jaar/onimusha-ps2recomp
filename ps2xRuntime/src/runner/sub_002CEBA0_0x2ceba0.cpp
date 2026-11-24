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

// Function: sub_002CEBA0
// Address: 0x2ceba0 - 0x2cebd0
void sub_002CEBA0_0x2ceba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBA0_0x2ceba0");
#endif

    switch (ctx->pc) {
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc4u: goto label_2cebc4;
        default: break;
    }

    ctx->pc = 0x2ceba0u;

    // 0x2ceba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ceba4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2ceba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2ceba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ceba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cebac: 0xc0966d4  jal         func_259B50
    ctx->pc = 0x2CEBACu;
    SET_GPR_U32(ctx, 31, 0x2CEBB4u);
    ctx->pc = 0x2CEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBACu;
    // 0x2cebb0: 0x2484f5f0  addiu       $a0, $a0, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B50u, 0x2CEBACu, 0x2CEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBB4u;
label_2cebb4:
    // 0x2cebb4: 0xc09d9f0  jal         func_2767C0
    ctx->pc = 0x2CEBB4u;
    SET_GPR_U32(ctx, 31, 0x2CEBBCu);
    ctx->pc = 0x2767C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2767C0u, 0x2CEBB4u, 0x2CEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBBCu;
label_2cebbc:
    // 0x2cebbc: 0xc09da78  jal         func_2769E0
    ctx->pc = 0x2CEBBCu;
    SET_GPR_U32(ctx, 31, 0x2CEBC4u);
    ctx->pc = 0x2769E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2769E0u, 0x2CEBBCu, 0x2CEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBC4u;
label_2cebc4:
    // 0x2cebc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBC8u;
        // 0x2cebcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEBD0u;
}
