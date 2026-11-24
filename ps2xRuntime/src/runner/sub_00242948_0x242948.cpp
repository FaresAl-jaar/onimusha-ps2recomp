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

// Function: sub_00242948
// Address: 0x242948 - 0x242988
void sub_00242948_0x242948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242948_0x242948");
#endif

    switch (ctx->pc) {
        case 0x24296cu: goto label_24296c;
        default: break;
    }

    ctx->pc = 0x242948u;

    // 0x242948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24294c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x242950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242954: 0x2450d6f8  addiu       $s0, $v0, -0x2908
    ctx->pc = 0x242954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956792));
    // 0x242958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x242958u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CD6F8u));
    // 0x24295c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24295Cu;
    {
        const bool branch_taken_0x24295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24295Cu;
        // 0x242960: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24295c) {
            ctx->pc = 0x242970u;
            goto label_242970;
        }
    }
    ctx->pc = 0x242964u;
    // 0x242964: 0xc090a62  jal         func_242988
    ctx->pc = 0x242964u;
    SET_GPR_U32(ctx, 31, 0x24296Cu);
    ctx->pc = 0x242988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242988u, 0x242964u, 0x24296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24296Cu;
label_24296c:
    // 0x24296c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242970:
    // 0x242970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24297c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24297cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242980: 0x3e00008  jr          $ra
    ctx->pc = 0x242980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242980u;
        // 0x242984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242988u;
}
