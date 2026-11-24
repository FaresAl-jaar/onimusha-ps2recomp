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

// Function: sub_0020B5B8
// Address: 0x20b5b8 - 0x20b5cc
void sub_0020B5B8_0x20b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B5B8_0x20b5b8");
#endif

    ctx->pc = 0x20b5b8u;

    // 0x20b5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b5c4: 0x8094eb8  j           func_253AE0
    ctx->pc = 0x20B5C4u;
    ctx->pc = 0x20B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B5C4u;
    // 0x20b5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253AE0u;
    sub_00253AE0_0x253ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x20B5CCu;
}
