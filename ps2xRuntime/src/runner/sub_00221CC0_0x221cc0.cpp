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

// Function: sub_00221CC0
// Address: 0x221cc0 - 0x221cd8
void sub_00221CC0_0x221cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221CC0_0x221cc0");
#endif

    ctx->pc = 0x221cc0u;

    // 0x221cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221cd0: 0x8088736  j           func_221CD8
    ctx->pc = 0x221CD0u;
    ctx->pc = 0x221CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CD0u;
    // 0x221cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    sub_00221CD8_0x221cd8(rdram, ctx, runtime); return;
    ctx->pc = 0x221CD8u;
}
