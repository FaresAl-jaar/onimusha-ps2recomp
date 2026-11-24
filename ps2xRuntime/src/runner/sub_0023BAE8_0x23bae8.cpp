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

// Function: sub_0023BAE8
// Address: 0x23bae8 - 0x23bb18
void sub_0023BAE8_0x23bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BAE8_0x23bae8");
#endif

    switch (ctx->pc) {
        case 0x23bb00u: goto label_23bb00;
        default: break;
    }

    ctx->pc = 0x23bae8u;

    // 0x23bae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23baec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BAECu;
    {
        const bool branch_taken_0x23baec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAECu;
        // 0x23baf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baec) {
            ctx->pc = 0x23BB08u;
            goto label_23bb08;
        }
    }
    ctx->pc = 0x23BAF4u;
    // 0x23baf4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23baf8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23BAF8u;
    SET_GPR_U32(ctx, 31, 0x23BB00u);
    ctx->pc = 0x23BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAF8u;
    // 0x23bafc: 0x2484b678  addiu       $a0, $a0, -0x4988 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23BAF8u, 0x23BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB00u;
label_23bb00:
    // 0x23bb00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23BB00u;
    {
        const bool branch_taken_0x23bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB00u;
        // 0x23bb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb00) {
            ctx->pc = 0x23BB0Cu;
            goto label_23bb0c;
        }
    }
    ctx->pc = 0x23BB08u;
label_23bb08:
    // 0x23bb08: 0x80820072  lb          $v0, 0x72($a0)
    ctx->pc = 0x23bb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_23bb0c:
    // 0x23bb0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb10: 0x3e00008  jr          $ra
    ctx->pc = 0x23BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB10u;
        // 0x23bb14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BB18u;
}
