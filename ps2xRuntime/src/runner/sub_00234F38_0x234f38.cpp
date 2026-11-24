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

// Function: sub_00234F38
// Address: 0x234f38 - 0x234f50
void sub_00234F38_0x234f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F38_0x234f38");
#endif

    ctx->pc = 0x234f38u;

    // 0x234f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234f3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x234f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x234f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f48: 0x8094dc0  j           func_253700
    ctx->pc = 0x234F48u;
    ctx->pc = 0x234F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F48u;
    // 0x234f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253700u;
    sub_00253700_0x253700(rdram, ctx, runtime); return;
    ctx->pc = 0x234F50u;
}
