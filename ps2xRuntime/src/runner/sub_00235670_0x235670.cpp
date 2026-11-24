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

// Function: sub_00235670
// Address: 0x235670 - 0x235684
void sub_00235670_0x235670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235670_0x235670");
#endif

    ctx->pc = 0x235670u;

    // 0x235670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23567c: 0x8093e0e  j           func_24F838
    ctx->pc = 0x23567Cu;
    ctx->pc = 0x235680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23567Cu;
    // 0x235680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F838u;
    sub_0024F838_0x24f838(rdram, ctx, runtime); return;
    ctx->pc = 0x235684u;
}
