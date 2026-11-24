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

// Function: sub_0020B890
// Address: 0x20b890 - 0x20b8a4
void sub_0020B890_0x20b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B890_0x20b890");
#endif

    ctx->pc = 0x20b890u;

    // 0x20b890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b89c: 0x8094bde  j           func_252F78
    ctx->pc = 0x20B89Cu;
    ctx->pc = 0x20B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B89Cu;
    // 0x20b8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F78u;
    sub_00252F78_0x252f78(rdram, ctx, runtime); return;
    ctx->pc = 0x20B8A4u;
}
