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

// Function: sub_002075A8
// Address: 0x2075a8 - 0x2075c0
void sub_002075A8_0x2075a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002075A8_0x2075a8");
#endif

    ctx->pc = 0x2075a8u;

    // 0x2075a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2075ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2075acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2075b0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2075b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2075b8: 0x808325a  j           func_20C968
    ctx->pc = 0x2075B8u;
    ctx->pc = 0x2075BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075B8u;
    // 0x2075bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C968u;
    sub_0020C968_0x20c968(rdram, ctx, runtime); return;
    ctx->pc = 0x2075C0u;
}
