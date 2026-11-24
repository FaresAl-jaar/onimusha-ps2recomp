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

// Function: sub_00206AE0
// Address: 0x206ae0 - 0x206af8
void sub_00206AE0_0x206ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206AE0_0x206ae0");
#endif

    ctx->pc = 0x206ae0u;

    // 0x206ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206ae8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x206ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x206aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206af0: 0x80839c4  j           func_20E710
    ctx->pc = 0x206AF0u;
    ctx->pc = 0x206AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AF0u;
    // 0x206af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E710u;
    sub_0020E710_0x20e710(rdram, ctx, runtime); return;
    ctx->pc = 0x206AF8u;
}
