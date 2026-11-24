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

// Function: sub_00252F18
// Address: 0x252f18 - 0x252f30
void sub_00252F18_0x252f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F18_0x252f18");
#endif

    ctx->pc = 0x252f18u;

    // 0x252f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252f1c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f28: 0x8094b6c  j           func_252DB0
    ctx->pc = 0x252F28u;
    ctx->pc = 0x252F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F28u;
    // 0x252f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252DB0u;
    sub_00252DB0_0x252db0(rdram, ctx, runtime); return;
    ctx->pc = 0x252F30u;
}
