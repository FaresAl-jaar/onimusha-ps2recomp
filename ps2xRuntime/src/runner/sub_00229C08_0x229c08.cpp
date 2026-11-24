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

// Function: sub_00229C08
// Address: 0x229c08 - 0x229c38
void sub_00229C08_0x229c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C08_0x229c08");
#endif

    switch (ctx->pc) {
        case 0x229c08u: goto label_229c08;
        case 0x229c0cu: goto label_229c0c;
        case 0x229c10u: goto label_229c10;
        case 0x229c14u: goto label_229c14;
        case 0x229c18u: goto label_229c18;
        case 0x229c1cu: goto label_229c1c;
        case 0x229c20u: goto label_229c20;
        case 0x229c24u: goto label_229c24;
        case 0x229c28u: goto label_229c28;
        case 0x229c2cu: goto label_229c2c;
        case 0x229c30u: goto label_229c30;
        case 0x229c34u: goto label_229c34;
        default: break;
    }

    ctx->pc = 0x229c08u;

label_229c08:
    // 0x229c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_229c0c:
    // 0x229c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_229c10:
    // 0x229c10: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x229c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_229c14:
    // 0x229c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_229c18:
    if (ctx->pc == 0x229C18u) {
        ctx->pc = 0x229C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C14u;
        // 0x229c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C1Cu;
        goto label_229c1c;
    }
    ctx->pc = 0x229C14u;
    {
        const bool branch_taken_0x229c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C14u;
        // 0x229c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c14) {
            ctx->pc = 0x229C2Cu;
            goto label_229c2c;
        }
    }
    ctx->pc = 0x229C1Cu;
label_229c1c:
    // 0x229c1c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x229c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_229c20:
    // 0x229c20: 0x8c43b0d0  lw          $v1, -0x4F30($v0)
    ctx->pc = 0x229c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947024)));
label_229c24:
    // 0x229c24: 0x60f809  jalr        $v1
label_229c28:
    if (ctx->pc == 0x229C28u) {
        ctx->pc = 0x229C2Cu;
        goto label_229c2c;
    }
    ctx->pc = 0x229C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229C2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C24u, 0x229C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229C2Cu;
label_229c2c:
    // 0x229c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229c30:
    // 0x229c30: 0x3e00008  jr          $ra
label_229c34:
    if (ctx->pc == 0x229C34u) {
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C30u;
        // 0x229c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C38u;
        goto label_fallthrough_0x229c30;
    }
    ctx->pc = 0x229C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C30u;
        // 0x229c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229c30:
    ctx->pc = 0x229C38u;
}
