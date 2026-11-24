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

// Function: sub_002AAA00
// Address: 0x2aaa00 - 0x2aaa18
void sub_002AAA00_0x2aaa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAA00_0x2aaa00");
#endif

    ctx->pc = 0x2aaa00u;

    // 0x2aaa00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2aaa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa04: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2aaa04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2aaa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aaa0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa10: 0x80cf27c  j           func_33C9F0
    ctx->pc = 0x2AAA10u;
    ctx->pc = 0x2AAA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAA10u;
    // 0x2aaa14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C9F0u;
    sub_0033C9F0_0x33c9f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2AAA18u;
}
