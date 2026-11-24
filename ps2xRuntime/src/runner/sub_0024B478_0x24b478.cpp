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

// Function: sub_0024B478
// Address: 0x24b478 - 0x24b49c
void sub_0024B478_0x24b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B478_0x24b478");
#endif

    ctx->pc = 0x24b478u;

    // 0x24b478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b47c: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x24b47cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x24b480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24b488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b48c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x24b490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b494: 0x8092d46  j           func_24B518
    ctx->pc = 0x24B494u;
    ctx->pc = 0x24B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B494u;
    // 0x24b498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B518u;
    sub_0024B518_0x24b518(rdram, ctx, runtime); return;
    ctx->pc = 0x24B49Cu;
}
