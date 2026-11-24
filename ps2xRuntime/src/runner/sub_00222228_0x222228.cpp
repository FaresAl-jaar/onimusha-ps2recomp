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

// Function: sub_00222228
// Address: 0x222228 - 0x222244
void sub_00222228_0x222228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222228_0x222228");
#endif

    ctx->pc = 0x222228u;

    // 0x222228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22222c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x22222cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222234: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22223c: 0x8088892  j           func_222248
    ctx->pc = 0x22223Cu;
    ctx->pc = 0x222240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22223Cu;
    // 0x222240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222248u;
    sub_00222248_0x222248(rdram, ctx, runtime); return;
    ctx->pc = 0x222244u;
}
