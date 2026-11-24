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

// Function: sub_0022C140
// Address: 0x22c140 - 0x22c194
void sub_0022C140_0x22c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C140_0x22c140");
#endif

    switch (ctx->pc) {
        case 0x22c180u: goto label_22c180;
        default: break;
    }

    ctx->pc = 0x22c140u;

    // 0x22c140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c144: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x22c148: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22c14c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22c14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c154: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x22c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22c158: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x22c158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22c15c: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x22c15cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x22c160: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22c160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22c164: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22c168: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22c16c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c170: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x22c174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c178: 0xc08f93e  jal         func_23E4F8
    ctx->pc = 0x22C178u;
    SET_GPR_U32(ctx, 31, 0x22C180u);
    ctx->pc = 0x22C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C178u;
    // 0x22c17c: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E4F8u, 0x22C178u, 0x22C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C180u;
label_22c180:
    // 0x22c180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c18c: 0x808f94a  j           func_23E528
    ctx->pc = 0x22C18Cu;
    ctx->pc = 0x22C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C18Cu;
    // 0x22c190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E528u;
    sub_0023E528_0x23e528(rdram, ctx, runtime); return;
    ctx->pc = 0x22C194u;
}
