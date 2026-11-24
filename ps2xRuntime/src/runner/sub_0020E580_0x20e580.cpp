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

// Function: sub_0020E580
// Address: 0x20e580 - 0x20e59c
void sub_0020E580_0x20e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E580_0x20e580");
#endif

    ctx->pc = 0x20e580u;

    // 0x20e580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e584: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20e588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e58c: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x20e58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x20e590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e594: 0x80848e0  j           func_212380
    ctx->pc = 0x20E594u;
    ctx->pc = 0x20E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E594u;
    // 0x20e598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20E59Cu;
}
