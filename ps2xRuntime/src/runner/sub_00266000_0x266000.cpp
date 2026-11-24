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

// Function: sub_00266000
// Address: 0x266000 - 0x266038
void sub_00266000_0x266000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266000_0x266000");
#endif

    ctx->pc = 0x266000u;

    // 0x266000: 0x8f838870  lw          $v1, -0x7790($gp)
    ctx->pc = 0x266000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x266004: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x266004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x266008: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x266008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26600c: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x26600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x266010: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x266010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x266014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26601c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26601cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x266020: 0x8f828870  lw          $v0, -0x7790($gp)
    ctx->pc = 0x266020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936688)));
    // 0x266024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x266028: 0xaf828870  sw          $v0, -0x7790($gp)
    ctx->pc = 0x266028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 2));
    // 0x26602c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x266030: 0x807cc14  j           func_1F3050
    ctx->pc = 0x266030u;
    ctx->pc = 0x266034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266030u;
    // 0x266034: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3050u;
    sub_001F3050_0x1f3050(rdram, ctx, runtime); return;
    ctx->pc = 0x266038u;
}
