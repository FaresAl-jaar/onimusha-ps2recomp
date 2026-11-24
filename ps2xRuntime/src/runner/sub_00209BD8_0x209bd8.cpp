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

// Function: sub_00209BD8
// Address: 0x209bd8 - 0x209bf0
void sub_00209BD8_0x209bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209BD8_0x209bd8");
#endif

    ctx->pc = 0x209bd8u;

    // 0x209bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209be0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x209be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209be8: 0x8089978  j           func_2265E0
    ctx->pc = 0x209BE8u;
    ctx->pc = 0x209BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BE8u;
    // 0x209bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265E0u;
    sub_002265E0_0x2265e0(rdram, ctx, runtime); return;
    ctx->pc = 0x209BF0u;
}
