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

// Function: sub_00235310
// Address: 0x235310 - 0x235344
void sub_00235310_0x235310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235310_0x235310");
#endif

    switch (ctx->pc) {
        case 0x235334u: goto label_235334;
        default: break;
    }

    ctx->pc = 0x235310u;

    // 0x235310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235318: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x235318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23531c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x235320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235324: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x235328: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x235328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23532c: 0xc0949d0  jal         func_252740
    ctx->pc = 0x23532Cu;
    SET_GPR_U32(ctx, 31, 0x235334u);
    ctx->pc = 0x235330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23532Cu;
    // 0x235330: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252740u, 0x23532Cu, 0x235334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235334u;
label_235334:
    // 0x235334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235338: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x235338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23533c: 0x3e00008  jr          $ra
    ctx->pc = 0x23533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23533Cu;
        // 0x235340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235344u;
}
