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

// Function: sub_003BD470
// Address: 0x3bd470 - 0x3bd4f0
void sub_003BD470_0x3bd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD470_0x3bd470");
#endif

    ctx->pc = 0x3bd470u;

    // 0x3bd470: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd474: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3bd474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3bd478: 0x8c281400  lw          $t0, 0x1400($at)
    ctx->pc = 0x3bd478u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd47c: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3bd47cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3bd480: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3bd480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x3bd484: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x3bd484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x3bd488: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x3bd488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bd48c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x3bd48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x3bd490: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x3bd490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x3bd494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bd494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3bd498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bd49c: 0x24a52101  addiu       $a1, $a1, 0x2101
    ctx->pc = 0x3bd49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8449));
    // 0x3bd4a0: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x3bd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x3bd4a4: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x3bd4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x3bd4a8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4ac: 0xac271400  sw          $a3, 0x1400($at)
    ctx->pc = 0x3bd4acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x811400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x811400u, _value); } while (0);
    // 0x3bd4b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4b4: 0x8c271400  lw          $a3, 0x1400($at)
    ctx->pc = 0x3bd4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd4b8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3bd4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3bd4bc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4c0: 0xac261400  sw          $a2, 0x1400($at)
    ctx->pc = 0x3bd4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x811400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x811400u, _value); } while (0);
    // 0x3bd4c4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4c8: 0x8c261400  lw          $a2, 0x1400($at)
    ctx->pc = 0x3bd4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd4cc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3bd4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3bd4d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4d4: 0xac231400  sw          $v1, 0x1400($at)
    ctx->pc = 0x3bd4d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x811400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x811400u, _value); } while (0);
    // 0x3bd4d8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4dc: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd4e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd4e4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd4e8: 0x8056e04  j           func_15B810
    ctx->pc = 0x3BD4E8u;
    ctx->pc = 0x3BD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD4E8u;
    // 0x3bd4ec: 0xac221400  sw          $v0, 0x1400($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    sub_0015B810_0x15b810(rdram, ctx, runtime); return;
    ctx->pc = 0x3BD4F0u;
}
