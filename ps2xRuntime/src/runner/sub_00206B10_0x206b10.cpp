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

// Function: sub_00206B10
// Address: 0x206b10 - 0x206b24
void sub_00206B10_0x206b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206B10_0x206b10");
#endif

    ctx->pc = 0x206b10u;

    // 0x206b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206b1c: 0x8081b32  j           func_206CC8
    ctx->pc = 0x206B1Cu;
    ctx->pc = 0x206B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B1Cu;
    // 0x206b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206CC8u;
    sub_00206CC8_0x206cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x206B24u;
}
