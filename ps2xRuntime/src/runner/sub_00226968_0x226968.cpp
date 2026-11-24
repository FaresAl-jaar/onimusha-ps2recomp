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

// Function: sub_00226968
// Address: 0x226968 - 0x226990
void sub_00226968_0x226968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226968_0x226968");
#endif

    ctx->pc = 0x226968u;

    // 0x226968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22696c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x226970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226978: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x226978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x22697c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226980: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x226984: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x226984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x226988: 0x8089a64  j           func_226990
    ctx->pc = 0x226988u;
    ctx->pc = 0x22698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226988u;
    // 0x22698c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226990u;
    sub_00226990_0x226990(rdram, ctx, runtime); return;
    ctx->pc = 0x226990u;
}
