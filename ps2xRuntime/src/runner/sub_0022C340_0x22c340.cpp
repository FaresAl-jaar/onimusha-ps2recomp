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

// Function: sub_0022C340
// Address: 0x22c340 - 0x22c360
void sub_0022C340_0x22c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C340_0x22c340");
#endif

    ctx->pc = 0x22c340u;

    // 0x22c340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c344: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22c348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c34c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22c34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c350: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22c350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22c354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c358: 0x808b0a8  j           func_22C2A0
    ctx->pc = 0x22C358u;
    ctx->pc = 0x22C35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C358u;
    // 0x22c35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2A0u;
    sub_0022C2A0_0x22c2a0(rdram, ctx, runtime); return;
    ctx->pc = 0x22C360u;
}
