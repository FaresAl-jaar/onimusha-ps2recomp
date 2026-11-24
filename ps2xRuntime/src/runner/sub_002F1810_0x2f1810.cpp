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

// Function: sub_002F1810
// Address: 0x2f1810 - 0x2f1834
void sub_002F1810_0x2f1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1810_0x2f1810");
#endif

    ctx->pc = 0x2f1810u;

    // 0x2f1810: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1814: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1818: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f181c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f181cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1824: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f1824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1828: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f1828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f182c: 0x80c8c58  j           func_323160
    ctx->pc = 0x2F182Cu;
    ctx->pc = 0x2F1830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F182Cu;
    // 0x2f1830: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323160u;
    sub_00323160_0x323160(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1834u;
}
