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

// Function: sub_00323870
// Address: 0x323870 - 0x3238c0
void sub_00323870_0x323870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323870_0x323870");
#endif

    ctx->pc = 0x323870u;

    // 0x323870: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x323870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x323874: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x323874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x323878: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x323878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x32387c: 0xac8306c0  sw          $v1, 0x6C0($a0)
    ctx->pc = 0x32387cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1728), GPR_U32(ctx, 3));
    // 0x323880: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x323880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x323884: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x323884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x323888: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x323888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x32388c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x323890: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x323890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x323894: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x323894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x323898: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x323898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x32389c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3238a0: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3238a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3238a4: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3238a8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3238a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3238ac: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3238acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3238b0: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3238b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3238b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3238b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3238b8: 0x80a4d3c  j           func_2934F0
    ctx->pc = 0x3238B8u;
    ctx->pc = 0x3238BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238B8u;
    // 0x3238bc: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    sub_002934F0_0x2934f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3238C0u;
}
