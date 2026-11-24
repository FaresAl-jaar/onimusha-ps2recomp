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

// Function: sub_00235470
// Address: 0x235470 - 0x23548c
void sub_00235470_0x235470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235470_0x235470");
#endif

    ctx->pc = 0x235470u;

    // 0x235470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235474: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x235474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x235478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23547c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x23547cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x235480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235484: 0x8093aca  j           func_24EB28
    ctx->pc = 0x235484u;
    ctx->pc = 0x235488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235484u;
    // 0x235488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EB28u;
    sub_0024EB28_0x24eb28(rdram, ctx, runtime); return;
    ctx->pc = 0x23548Cu;
}
