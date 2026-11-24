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

// Function: sub_002071C8
// Address: 0x2071c8 - 0x2071e0
void sub_002071C8_0x2071c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002071C8_0x2071c8");
#endif

    ctx->pc = 0x2071c8u;

    // 0x2071c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2071c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2071cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2071ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2071d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2071d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2071d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2071d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2071d8: 0x8081c7e  j           func_2071F8
    ctx->pc = 0x2071D8u;
    ctx->pc = 0x2071DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071D8u;
    // 0x2071dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2071F8u;
    sub_002071F8_0x2071f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2071E0u;
}
