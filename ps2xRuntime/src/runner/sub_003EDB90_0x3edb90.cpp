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

// Function: sub_003EDB90
// Address: 0x3edb90 - 0x3edbd4
void sub_003EDB90_0x3edb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDB90_0x3edb90");
#endif

    switch (ctx->pc) {
        case 0x3edba4u: goto label_3edba4;
        default: break;
    }

    ctx->pc = 0x3edb90u;

    // 0x3edb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3edb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3edb94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3edb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3edb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3edb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3edb9c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3EDB9Cu;
    SET_GPR_U32(ctx, 31, 0x3EDBA4u);
    ctx->pc = 0x3EDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB9Cu;
    // 0x3edba0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3EDB9Cu, 0x3EDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDBA4u;
label_3edba4:
    // 0x3edba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDBA4u;
    {
        const bool branch_taken_0x3edba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBA4u;
        // 0x3edba8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edba4) {
            ctx->pc = 0x3EDBB4u;
            goto label_3edbb4;
        }
    }
    ctx->pc = 0x3EDBACu;
    // 0x3edbac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EDBACu;
    {
        const bool branch_taken_0x3edbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBACu;
        // 0x3edbb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbac) {
            ctx->pc = 0x3EDBCCu;
            goto label_3edbcc;
        }
    }
    ctx->pc = 0x3EDBB4u;
label_3edbb4:
    // 0x3edbb4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3edbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3edbb8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3edbb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3edbbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3edbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3edbc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3edbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3edbc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3edbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3edbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3edbcc:
    // 0x3edbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBCCu;
        // 0x3edbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDBD4u;
}
