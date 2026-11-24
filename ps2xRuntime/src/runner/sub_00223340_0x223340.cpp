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

// Function: sub_00223340
// Address: 0x223340 - 0x223364
void sub_00223340_0x223340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223340_0x223340");
#endif

    ctx->pc = 0x223340u;

    // 0x223340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22334c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22334cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22335c: 0x8088cda  j           func_223368
    ctx->pc = 0x22335Cu;
    ctx->pc = 0x223360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22335Cu;
    // 0x223360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223368u;
    sub_00223368_0x223368(rdram, ctx, runtime); return;
    ctx->pc = 0x223364u;
}
