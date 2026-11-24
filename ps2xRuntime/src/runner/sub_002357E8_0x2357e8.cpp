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

// Function: sub_002357E8
// Address: 0x2357e8 - 0x2357fc
void sub_002357E8_0x2357e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357E8_0x2357e8");
#endif

    ctx->pc = 0x2357e8u;

    // 0x2357e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2357ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2357ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2357f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2357f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2357f4: 0x808acf6  j           func_22B3D8
    ctx->pc = 0x2357F4u;
    ctx->pc = 0x2357F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357F4u;
    // 0x2357f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3D8u;
    sub_0022B3D8_0x22b3d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2357FCu;
}
