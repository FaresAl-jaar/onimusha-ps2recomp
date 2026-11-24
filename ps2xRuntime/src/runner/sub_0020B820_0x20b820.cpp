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

// Function: sub_0020B820
// Address: 0x20b820 - 0x20b834
void sub_0020B820_0x20b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B820_0x20b820");
#endif

    ctx->pc = 0x20b820u;

    // 0x20b820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b82c: 0x8094bd2  j           func_252F48
    ctx->pc = 0x20B82Cu;
    ctx->pc = 0x20B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B82Cu;
    // 0x20b830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F48u;
    sub_00252F48_0x252f48(rdram, ctx, runtime); return;
    ctx->pc = 0x20B834u;
}
