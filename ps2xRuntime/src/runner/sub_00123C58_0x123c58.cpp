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

// Function: sub_00123C58
// Address: 0x123c58 - 0x123cd8
void sub_00123C58_0x123c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123C58_0x123c58");
#endif

    switch (ctx->pc) {
        case 0x123ca4u: goto label_123ca4;
        case 0x123cb8u: goto label_123cb8;
        default: break;
    }

    ctx->pc = 0x123c58u;

    // 0x123c58: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x123c5c: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x123c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x123c60: 0x25ef3c18  addiu       $t7, $t7, 0x3C18
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15384));
    // 0x123c64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123c68: 0xac8f003c  sw          $t7, 0x3C($a0)
    ctx->pc = 0x123c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 15));
    // 0x123c6c: 0x248e01e4  addiu       $t6, $a0, 0x1E4
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 484));
    // 0x123c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123c74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x123c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c78: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123c7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x123c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x123c80: 0xac8f0038  sw          $t7, 0x38($a0)
    ctx->pc = 0x123c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 15));
    // 0x123c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c88: 0xac8e01e0  sw          $t6, 0x1E0($a0)
    ctx->pc = 0x123c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 14));
    // 0x123c8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x123c90: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x123c90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c98: 0xac8f01dc  sw          $t7, 0x1DC($a0)
    ctx->pc = 0x123c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 15));
    // 0x123c9c: 0xc048e9c  jal         func_123A70
    ctx->pc = 0x123C9Cu;
    SET_GPR_U32(ctx, 31, 0x123CA4u);
    ctx->pc = 0x123CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C9Cu;
    // 0x123ca0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A70u, 0x123C9Cu, 0x123CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CA4u;
label_123ca4:
    // 0x123ca4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x123ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123ca8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x123ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x123cb0: 0xc048e9c  jal         func_123A70
    ctx->pc = 0x123CB0u;
    SET_GPR_U32(ctx, 31, 0x123CB8u);
    ctx->pc = 0x123CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CB0u;
    // 0x123cb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A70u, 0x123CB0u, 0x123CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB8u;
label_123cb8:
    // 0x123cb8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x123cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x123cbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x123cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x123cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123cc4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x123cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123ccc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x123cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123cd0: 0x8048e9c  j           func_123A70
    ctx->pc = 0x123CD0u;
    ctx->pc = 0x123CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CD0u;
    // 0x123cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A70u;
    sub_00123A70_0x123a70(rdram, ctx, runtime); return;
    ctx->pc = 0x123CD8u;
}
