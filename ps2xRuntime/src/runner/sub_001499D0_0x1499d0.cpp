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

// Function: sub_001499D0
// Address: 0x1499d0 - 0x149a1c
void sub_001499D0_0x1499d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001499D0_0x1499d0");
#endif

    ctx->pc = 0x1499d0u;

    // 0x1499d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1499d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1499d8: 0x8c2aceb8  lw          $t2, -0x3148($at)
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1499dc: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x1499dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x1499e0: 0x93888558  lbu         $t0, -0x7AA8($gp)
    ctx->pc = 0x1499e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935896)));
    // 0x1499e4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1499e8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1499ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1499ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1499f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1499f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1499f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1499fc: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x1499fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x149a00: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x149a04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x149a08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x149a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149a0c: 0xac29ceb8  sw          $t1, -0x3148($at)
    ctx->pc = 0x149a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 9));
    // 0x149a10: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x149a14: 0x8063d30  j           func_18F4C0
    ctx->pc = 0x149A14u;
    ctx->pc = 0x149A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A14u;
    // 0x149a18: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    sub_0018F4C0_0x18f4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x149A1Cu;
}
