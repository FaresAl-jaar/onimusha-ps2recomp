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

// Function: sub_00203340
// Address: 0x203340 - 0x203364
void sub_00203340_0x203340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203340_0x203340");
#endif

    ctx->pc = 0x203340u;

    // 0x203340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203344: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20334c: 0x8c4601cc  lw          $a2, 0x1CC($v0)
    ctx->pc = 0x20334cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x203350: 0x8c4401c4  lw          $a0, 0x1C4($v0)
    ctx->pc = 0x203350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x203354: 0x8c4501c8  lw          $a1, 0x1C8($v0)
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x203358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20335c: 0x809422c  j           func_2508B0
    ctx->pc = 0x20335Cu;
    ctx->pc = 0x203360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20335Cu;
    // 0x203360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    sub_002508B0_0x2508b0(rdram, ctx, runtime); return;
    ctx->pc = 0x203364u;
}
