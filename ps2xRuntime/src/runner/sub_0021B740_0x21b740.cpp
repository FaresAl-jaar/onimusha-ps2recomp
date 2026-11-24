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

// Function: sub_0021B740
// Address: 0x21b740 - 0x21b768
void sub_0021B740_0x21b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B740_0x21b740");
#endif

    ctx->pc = 0x21b740u;

    // 0x21b740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b744: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x21b744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x21b748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b74c: 0x24a559f0  addiu       $a1, $a1, 0x59F0
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23024));
    // 0x21b750: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x21b750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21b754: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x21b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x21b758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b75c: 0x24841150  addiu       $a0, $a0, 0x1150
    ctx->pc = 0x21b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    // 0x21b760: 0x807eb98  j           func_1FAE60
    ctx->pc = 0x21B760u;
    ctx->pc = 0x21B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B760u;
    // 0x21b764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE60u;
    sub_001FAE60_0x1fae60(rdram, ctx, runtime); return;
    ctx->pc = 0x21B768u;
}
