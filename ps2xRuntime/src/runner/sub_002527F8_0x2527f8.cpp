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

// Function: sub_002527F8
// Address: 0x2527f8 - 0x252848
void sub_002527F8_0x2527f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002527F8_0x2527f8");
#endif

    switch (ctx->pc) {
        case 0x25282cu: goto label_25282c;
        default: break;
    }

    ctx->pc = 0x2527f8u;

    // 0x2527f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2527f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2527fc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x252800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252804: 0x2450fb94  addiu       $s0, $v0, -0x46C
    ctx->pc = 0x252804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966164));
    // 0x252808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x252808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25280c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x252810: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4DFB94u));
    // 0x252814: 0x2463fb90  addiu       $v1, $v1, -0x470
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966160));
    // 0x252818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DFB90u));
    // 0x25281c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25281Cu;
    {
        const bool branch_taken_0x25281c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25281Cu;
        // 0x252820: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25281c) {
            ctx->pc = 0x252834u;
            goto label_252834;
        }
    }
    ctx->pc = 0x252824u;
    // 0x252824: 0xc091e8c  jal         func_247A30
    ctx->pc = 0x252824u;
    SET_GPR_U32(ctx, 31, 0x25282Cu);
    ctx->pc = 0x247A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A30u, 0x252824u, 0x25282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25282Cu;
label_25282c:
    // 0x25282c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252830: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x252830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_252834:
    // 0x252834: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x252834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252838: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x252838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25283c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25283cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252840: 0x3e00008  jr          $ra
    ctx->pc = 0x252840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252840u;
        // 0x252844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252848u;
}
