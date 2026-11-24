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

// Function: sub_002F1A40
// Address: 0x2f1a40 - 0x2f1a68
void sub_002F1A40_0x2f1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1A40_0x2f1a40");
#endif

    ctx->pc = 0x2f1a40u;

    // 0x2f1a40: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a44: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a4c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2f1a4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a50: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f1a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a60: 0x80e8970  j           func_3A25C0
    ctx->pc = 0x2F1A60u;
    ctx->pc = 0x2F1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A60u;
    // 0x2f1a64: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25C0u;
    sub_003A25C0_0x3a25c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1A68u;
}
