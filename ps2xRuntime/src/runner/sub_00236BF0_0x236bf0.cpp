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

// Function: sub_00236BF0
// Address: 0x236bf0 - 0x236c08
void sub_00236BF0_0x236bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BF0_0x236bf0");
#endif

    ctx->pc = 0x236bf0u;

    // 0x236bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236bf8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c00: 0x808aee6  j           func_22BB98
    ctx->pc = 0x236C00u;
    ctx->pc = 0x236C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C00u;
    // 0x236c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    sub_0022BB98_0x22bb98(rdram, ctx, runtime); return;
    ctx->pc = 0x236C08u;
}
