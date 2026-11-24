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

// Function: sub_002A0F20
// Address: 0x2a0f20 - 0x2a0f6c
void sub_002A0F20_0x2a0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0F20_0x2a0f20");
#endif

    ctx->pc = 0x2a0f20u;

    // 0x2a0f20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a0f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a0f24: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x2a0f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a0f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0f2c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2a0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a0f30: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2a0f34: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x2a0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x2a0f38: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2a0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2a0f3c: 0xac820138  sw          $v0, 0x138($a0)
    ctx->pc = 0x2a0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 2));
    // 0x2a0f40: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x2a0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x2a0f44: 0xac820128  sw          $v0, 0x128($a0)
    ctx->pc = 0x2a0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 2));
    // 0x2a0f48: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2a0f4c: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x2a0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x2a0f50: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2a0f54: 0xac820140  sw          $v0, 0x140($a0)
    ctx->pc = 0x2a0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 2));
    // 0x2a0f58: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x2a0f5c: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x2a0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x2a0f60: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x2a0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x2a0f64: 0x80a8f18  j           func_2A3C60
    ctx->pc = 0x2A0F64u;
    ctx->pc = 0x2A0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F64u;
    // 0x2a0f68: 0xac820130  sw          $v0, 0x130($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3C60u;
    sub_002A3C60_0x2a3c60(rdram, ctx, runtime); return;
    ctx->pc = 0x2A0F6Cu;
}
