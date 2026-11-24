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

// Function: sub_0024DAE0
// Address: 0x24dae0 - 0x24daf8
void sub_0024DAE0_0x24dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DAE0_0x24dae0");
#endif

    ctx->pc = 0x24dae0u;

    // 0x24dae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24dae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24dae8: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x24dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x24daec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24daecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24daf0: 0x80935d4  j           func_24D750
    ctx->pc = 0x24DAF0u;
    ctx->pc = 0x24DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAF0u;
    // 0x24daf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D750u;
    sub_0024D750_0x24d750(rdram, ctx, runtime); return;
    ctx->pc = 0x24DAF8u;
}
