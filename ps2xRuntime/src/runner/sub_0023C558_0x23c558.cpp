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

// Function: sub_0023C558
// Address: 0x23c558 - 0x23c56c
void sub_0023C558_0x23c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C558_0x23c558");
#endif

    ctx->pc = 0x23c558u;

    // 0x23c558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c564: 0x808dab2  j           func_236AC8
    ctx->pc = 0x23C564u;
    ctx->pc = 0x23C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C564u;
    // 0x23c568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AC8u;
    sub_00236AC8_0x236ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C56Cu;
}
