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

// Function: sub_0020CBE0
// Address: 0x20cbe0 - 0x20cbfc
void sub_0020CBE0_0x20cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CBE0_0x20cbe0");
#endif

    ctx->pc = 0x20cbe0u;

    // 0x20cbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cbe8: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20cbec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cbf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cbf4: 0x808e9ae  j           func_23A6B8
    ctx->pc = 0x20CBF4u;
    ctx->pc = 0x20CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBF4u;
    // 0x20cbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B8u;
    sub_0023A6B8_0x23a6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x20CBFCu;
}
