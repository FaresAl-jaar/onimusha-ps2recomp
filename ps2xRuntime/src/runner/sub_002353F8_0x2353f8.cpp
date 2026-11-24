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

// Function: sub_002353F8
// Address: 0x2353f8 - 0x235410
void sub_002353F8_0x2353f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002353F8_0x2353f8");
#endif

    ctx->pc = 0x2353f8u;

    // 0x2353f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2353fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2353fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235400: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x235404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235408: 0x8093a28  j           func_24E8A0
    ctx->pc = 0x235408u;
    ctx->pc = 0x23540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235408u;
    // 0x23540c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E8A0u;
    sub_0024E8A0_0x24e8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x235410u;
}
