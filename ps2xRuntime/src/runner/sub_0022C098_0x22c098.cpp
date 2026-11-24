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

// Function: sub_0022C098
// Address: 0x22c098 - 0x22c0e4
void sub_0022C098_0x22c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C098_0x22c098");
#endif

    switch (ctx->pc) {
        case 0x22c0d0u: goto label_22c0d0;
        default: break;
    }

    ctx->pc = 0x22c098u;

    // 0x22c098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c09c: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x22c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x22c0a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22c0a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22c0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c0ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0b0: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22c0b4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22c0b8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22c0bc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x22c0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x22c0c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0c8: 0xc08f926  jal         func_23E498
    ctx->pc = 0x22C0C8u;
    SET_GPR_U32(ctx, 31, 0x22C0D0u);
    ctx->pc = 0x22C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0C8u;
    // 0x22c0cc: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E498u, 0x22C0C8u, 0x22C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C0D0u;
label_22c0d0:
    // 0x22c0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c0dc: 0x808f94a  j           func_23E528
    ctx->pc = 0x22C0DCu;
    ctx->pc = 0x22C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C0DCu;
    // 0x22c0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E528u;
    sub_0023E528_0x23e528(rdram, ctx, runtime); return;
    ctx->pc = 0x22C0E4u;
}
