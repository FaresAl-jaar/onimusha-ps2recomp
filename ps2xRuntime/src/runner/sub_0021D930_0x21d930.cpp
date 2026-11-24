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

// Function: sub_0021D930
// Address: 0x21d930 - 0x21d954
void sub_0021D930_0x21d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D930_0x21d930");
#endif

    ctx->pc = 0x21d930u;

    // 0x21d930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d934: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21d934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d93c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x21d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d940: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x21d940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x21d944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d948: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x21d948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x21d94c: 0x80888b0  j           func_2222C0
    ctx->pc = 0x21D94Cu;
    ctx->pc = 0x21D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D94Cu;
    // 0x21d950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2222C0u;
    sub_002222C0_0x2222c0(rdram, ctx, runtime); return;
    ctx->pc = 0x21D954u;
}
