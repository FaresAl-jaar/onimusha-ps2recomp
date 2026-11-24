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

// Function: sub_002A9640
// Address: 0x2a9640 - 0x2a9660
void sub_002A9640_0x2a9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9640_0x2a9640");
#endif

    ctx->pc = 0x2a9640u;

    // 0x2a9640: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2a9640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9644: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a9644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9648: 0x8f888128  lw          $t0, -0x7ED8($gp)
    ctx->pc = 0x2a9648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x2a964c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2a964cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9650: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a9650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9658: 0x809dd58  j           func_277560
    ctx->pc = 0x2A9658u;
    ctx->pc = 0x2A965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9658u;
    // 0x2a965c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277560u;
    sub_00277560_0x277560(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9660u;
}
