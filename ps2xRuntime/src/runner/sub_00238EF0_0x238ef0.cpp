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

// Function: sub_00238EF0
// Address: 0x238ef0 - 0x238f04
void sub_00238EF0_0x238ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238EF0_0x238ef0");
#endif

    ctx->pc = 0x238ef0u;

    // 0x238ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238efc: 0x809174e  j           func_245D38
    ctx->pc = 0x238EFCu;
    ctx->pc = 0x238F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EFCu;
    // 0x238f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D38u;
    sub_00245D38_0x245d38(rdram, ctx, runtime); return;
    ctx->pc = 0x238F04u;
}
