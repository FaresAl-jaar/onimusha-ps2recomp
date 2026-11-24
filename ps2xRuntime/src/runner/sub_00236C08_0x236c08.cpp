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

// Function: sub_00236C08
// Address: 0x236c08 - 0x236c20
void sub_00236C08_0x236c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C08_0x236c08");
#endif

    ctx->pc = 0x236c08u;

    // 0x236c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c18: 0x808aee8  j           func_22BBA0
    ctx->pc = 0x236C18u;
    ctx->pc = 0x236C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C18u;
    // 0x236c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BBA0u;
    sub_0022BBA0_0x22bba0(rdram, ctx, runtime); return;
    ctx->pc = 0x236C20u;
}
