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

// Function: sub_002354C8
// Address: 0x2354c8 - 0x2354dc
void sub_002354C8_0x2354c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002354C8_0x2354c8");
#endif

    ctx->pc = 0x2354c8u;

    // 0x2354c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2354cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2354ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2354d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2354d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2354d4: 0x8093b00  j           func_24EC00
    ctx->pc = 0x2354D4u;
    ctx->pc = 0x2354D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354D4u;
    // 0x2354d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC00u;
    sub_0024EC00_0x24ec00(rdram, ctx, runtime); return;
    ctx->pc = 0x2354DCu;
}
