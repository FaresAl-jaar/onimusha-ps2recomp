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

// Function: sub_00232D70
// Address: 0x232d70 - 0x232d90
void sub_00232D70_0x232d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D70_0x232d70");
#endif

    ctx->pc = 0x232d70u;

    // 0x232d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232d74: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x232d74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x232d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d80: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x232d80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x232d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d88: 0x808cb7c  j           func_232DF0
    ctx->pc = 0x232D88u;
    ctx->pc = 0x232D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D88u;
    // 0x232d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DF0u;
    sub_00232DF0_0x232df0(rdram, ctx, runtime); return;
    ctx->pc = 0x232D90u;
}
