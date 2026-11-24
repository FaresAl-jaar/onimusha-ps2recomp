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

// Function: sub_0024DAA8
// Address: 0x24daa8 - 0x24dac8
void sub_0024DAA8_0x24daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DAA8_0x24daa8");
#endif

    ctx->pc = 0x24daa8u;

    // 0x24daa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24daac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x24daacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x24dab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24dab4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x24dab4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x24dab8: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x24dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x24dabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24dabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dac0: 0x80934a0  j           func_24D280
    ctx->pc = 0x24DAC0u;
    ctx->pc = 0x24DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAC0u;
    // 0x24dac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D280u;
    sub_0024D280_0x24d280(rdram, ctx, runtime); return;
    ctx->pc = 0x24DAC8u;
}
