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

// Function: sub_00229A70
// Address: 0x229a70 - 0x229aa0
void sub_00229A70_0x229a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229A70_0x229a70");
#endif

    switch (ctx->pc) {
        case 0x229a70u: goto label_229a70;
        case 0x229a74u: goto label_229a74;
        case 0x229a78u: goto label_229a78;
        case 0x229a7cu: goto label_229a7c;
        case 0x229a80u: goto label_229a80;
        case 0x229a84u: goto label_229a84;
        case 0x229a88u: goto label_229a88;
        case 0x229a8cu: goto label_229a8c;
        case 0x229a90u: goto label_229a90;
        case 0x229a94u: goto label_229a94;
        case 0x229a98u: goto label_229a98;
        case 0x229a9cu: goto label_229a9c;
        default: break;
    }

    ctx->pc = 0x229a70u;

label_229a70:
    // 0x229a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_229a74:
    // 0x229a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_229a78:
    // 0x229a78: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x229a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_229a7c:
    // 0x229a7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_229a80:
    if (ctx->pc == 0x229A80u) {
        ctx->pc = 0x229A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A7Cu;
        // 0x229a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A84u;
        goto label_229a84;
    }
    ctx->pc = 0x229A7Cu;
    {
        const bool branch_taken_0x229a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A7Cu;
        // 0x229a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a7c) {
            ctx->pc = 0x229A94u;
            goto label_229a94;
        }
    }
    ctx->pc = 0x229A84u;
label_229a84:
    // 0x229a84: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x229a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_229a88:
    // 0x229a88: 0x8c43b0c4  lw          $v1, -0x4F3C($v0)
    ctx->pc = 0x229a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947012)));
label_229a8c:
    // 0x229a8c: 0x60f809  jalr        $v1
label_229a90:
    if (ctx->pc == 0x229A90u) {
        ctx->pc = 0x229A94u;
        goto label_229a94;
    }
    ctx->pc = 0x229A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229A94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A8Cu, 0x229A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229A94u;
label_229a94:
    // 0x229a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229a98:
    // 0x229a98: 0x3e00008  jr          $ra
label_229a9c:
    if (ctx->pc == 0x229A9Cu) {
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AA0u;
        goto label_fallthrough_0x229a98;
    }
    ctx->pc = 0x229A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A98u;
        // 0x229a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229a98:
    ctx->pc = 0x229AA0u;
}
