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

// Function: sub_0023BB48
// Address: 0x23bb48 - 0x23bb5c
void sub_0023BB48_0x23bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BB48_0x23bb48");
#endif

    ctx->pc = 0x23bb48u;

    // 0x23bb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb54: 0x808d5d6  j           func_235758
    ctx->pc = 0x23BB54u;
    ctx->pc = 0x23BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB54u;
    // 0x23bb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235758u;
    sub_00235758_0x235758(rdram, ctx, runtime); return;
    ctx->pc = 0x23BB5Cu;
}
