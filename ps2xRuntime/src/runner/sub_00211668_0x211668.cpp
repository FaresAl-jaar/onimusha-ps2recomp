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

// Function: sub_00211668
// Address: 0x211668 - 0x21167c
void sub_00211668_0x211668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211668_0x211668");
#endif

    ctx->pc = 0x211668u;

    // 0x211668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21166c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211674: 0x8088de2  j           func_223788
    ctx->pc = 0x211674u;
    ctx->pc = 0x211678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211674u;
    // 0x211678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223788u;
    sub_00223788_0x223788(rdram, ctx, runtime); return;
    ctx->pc = 0x21167Cu;
}
