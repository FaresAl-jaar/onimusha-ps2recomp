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

// Function: sub_00149A20
// Address: 0x149a20 - 0x149a6c
void sub_00149A20_0x149a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A20_0x149a20");
#endif

    ctx->pc = 0x149a20u;

    // 0x149a20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x149a24: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x149a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149a28: 0x8c2aceb8  lw          $t2, -0x3148($at)
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x149a2c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x149a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x149a30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x149a34: 0x93888558  lbu         $t0, -0x7AA8($gp)
    ctx->pc = 0x149a34u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935896)));
    // 0x149a38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x149a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x149a3c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x149a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x149a40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x149a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x149a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a48: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x149a4c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x149a50: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x149a50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x149a54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x149a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x149a58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149a5c: 0xac29ceb8  sw          $t1, -0x3148($at)
    ctx->pc = 0x149a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 9));
    // 0x149a60: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x149a64: 0x8063d30  j           func_18F4C0
    ctx->pc = 0x149A64u;
    ctx->pc = 0x149A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A64u;
    // 0x149a68: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    sub_0018F4C0_0x18f4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x149A6Cu;
}
