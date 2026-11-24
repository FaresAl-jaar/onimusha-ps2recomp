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

// Function: sub_0031C3B0
// Address: 0x31c3b0 - 0x31c3e4
void sub_0031C3B0_0x31c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C3B0_0x31c3b0");
#endif

    ctx->pc = 0x31c3b0u;

    // 0x31c3b0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x31c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x31c3b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31c3b8: 0x2442e8d0  addiu       $v0, $v0, -0x1730
    ctx->pc = 0x31c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961360));
    // 0x31c3bc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c3c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c3c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x31c3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3c8: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x31c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x31c3cc: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c3d0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x31c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c3d4: 0xaf868b38  sw          $a2, -0x74C8($gp)
    ctx->pc = 0x31c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 6));
    // 0x31c3d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c3dc: 0x80c99d0  j           func_326740
    ctx->pc = 0x31C3DCu;
    ctx->pc = 0x31C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3DCu;
    // 0x31c3e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    sub_00326740_0x326740(rdram, ctx, runtime); return;
    ctx->pc = 0x31C3E4u;
}
