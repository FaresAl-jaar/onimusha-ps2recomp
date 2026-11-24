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

// Function: sub_0020F188
// Address: 0x20f188 - 0x20f1d4
void sub_0020F188_0x20f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F188_0x20f188");
#endif

    switch (ctx->pc) {
        case 0x20f1c0u: goto label_20f1c0;
        default: break;
    }

    ctx->pc = 0x20f188u;

    // 0x20f188: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20f18c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f190: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f19c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f1a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f1a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f1ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20f1b0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x20f1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1b8: 0xc083c76  jal         func_20F1D8
    ctx->pc = 0x20F1B8u;
    SET_GPR_U32(ctx, 31, 0x20F1C0u);
    ctx->pc = 0x20F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1B8u;
    // 0x20f1bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1D8u, 0x20F1B8u, 0x20F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1C0u;
label_20f1c0:
    // 0x20f1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f1cc: 0x8083c7e  j           func_20F1F8
    ctx->pc = 0x20F1CCu;
    ctx->pc = 0x20F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1CCu;
    // 0x20f1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1F8u;
    sub_0020F1F8_0x20f1f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20F1D4u;
}
