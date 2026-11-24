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

// Function: sub_0039A230
// Address: 0x39a230 - 0x39a278
void sub_0039A230_0x39a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A230_0x39a230");
#endif

    switch (ctx->pc) {
        case 0x39a248u: goto label_39a248;
        default: break;
    }

    ctx->pc = 0x39a230u;

    // 0x39a230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a238: 0x8c852b5c  lw          $a1, 0x2B5C($a0)
    ctx->pc = 0x39a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11100)));
    // 0x39a23c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39a240: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39A240u;
    SET_GPR_U32(ctx, 31, 0x39A248u);
    ctx->pc = 0x39A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A240u;
    // 0x39a244: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39A240u, 0x39A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A248u;
label_39a248:
    // 0x39a248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A248u;
    {
        const bool branch_taken_0x39a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A248u;
        // 0x39a24c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a248) {
            ctx->pc = 0x39A258u;
            goto label_39a258;
        }
    }
    ctx->pc = 0x39A250u;
    // 0x39a250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39A250u;
    {
        const bool branch_taken_0x39a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A250u;
        // 0x39a254: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a250) {
            ctx->pc = 0x39A270u;
            goto label_39a270;
        }
    }
    ctx->pc = 0x39A258u;
label_39a258:
    // 0x39a258: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x39a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39a25c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x39a25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x39a260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39a260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39a264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39a268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39a26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a270:
    // 0x39a270: 0x3e00008  jr          $ra
    ctx->pc = 0x39A270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A270u;
        // 0x39a274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A278u;
}
