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

// Function: sub_00208780
// Address: 0x208780 - 0x208794
void sub_00208780_0x208780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208780_0x208780");
#endif

    ctx->pc = 0x208780u;

    // 0x208780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20878c: 0x808989e  j           func_226278
    ctx->pc = 0x20878Cu;
    ctx->pc = 0x208790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20878Cu;
    // 0x208790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226278u;
    sub_00226278_0x226278(rdram, ctx, runtime); return;
    ctx->pc = 0x208794u;
}
