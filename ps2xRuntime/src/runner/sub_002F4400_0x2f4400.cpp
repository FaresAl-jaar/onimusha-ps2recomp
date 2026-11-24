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

// Function: sub_002F4400
// Address: 0x2f4400 - 0x2f4440
void sub_002F4400_0x2f4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4400_0x2f4400");
#endif

    switch (ctx->pc) {
        case 0x2f4420u: goto label_2f4420;
        default: break;
    }

    ctx->pc = 0x2f4400u;

    // 0x2f4400: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2f4400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f4404: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4408: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x2f4408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2f440c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2f440cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2f4410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4414: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x2f4414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x2f4418: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x2F4418u;
    SET_GPR_U32(ctx, 31, 0x2F4420u);
    ctx->pc = 0x2F441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4418u;
    // 0x2f441c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x2F4418u, 0x2F4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4420u;
label_2f4420:
    // 0x2f4420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4420u;
    {
        const bool branch_taken_0x2f4420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4420) {
            ctx->pc = 0x2F4430u;
            goto label_2f4430;
        }
    }
    ctx->pc = 0x2F4428u;
    // 0x2f4428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4428u;
    {
        const bool branch_taken_0x2f4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4428u;
        // 0x2f442c: 0x90420001  lbu         $v0, 0x1($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4428) {
            ctx->pc = 0x2F4434u;
            goto label_2f4434;
        }
    }
    ctx->pc = 0x2F4430u;
label_2f4430:
    // 0x2f4430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4434:
    // 0x2f4434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4438: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4438u;
        // 0x2f443c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4440u;
}
