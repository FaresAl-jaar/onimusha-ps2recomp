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

// Function: sub_00249D30
// Address: 0x249d30 - 0x249d4c
void sub_00249D30_0x249d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D30_0x249d30");
#endif

    ctx->pc = 0x249d30u;

    // 0x249d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249d3c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x249d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249d44: 0x8049590  j           func_125640
    ctx->pc = 0x249D44u;
    ctx->pc = 0x249D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D44u;
    // 0x249d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x249D4Cu;
}
