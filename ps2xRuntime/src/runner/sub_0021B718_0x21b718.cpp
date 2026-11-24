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

// Function: sub_0021B718
// Address: 0x21b718 - 0x21b740
void sub_0021B718_0x21b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B718_0x21b718");
#endif

    ctx->pc = 0x21b718u;

    // 0x21b718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b71c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x21b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21b720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b724: 0x8c851fc0  lw          $a1, 0x1FC0($a0)
    ctx->pc = 0x21b724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x21b728: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x21b728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x21b72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b730: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x21b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    // 0x21b734: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x21b734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x21b738: 0x807eb98  j           func_1FAE60
    ctx->pc = 0x21B738u;
    ctx->pc = 0x21B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B738u;
    // 0x21b73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE60u;
    sub_001FAE60_0x1fae60(rdram, ctx, runtime); return;
    ctx->pc = 0x21B740u;
}
