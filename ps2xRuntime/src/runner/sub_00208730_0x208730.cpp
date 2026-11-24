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

// Function: sub_00208730
// Address: 0x208730 - 0x208748
void sub_00208730_0x208730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208730_0x208730");
#endif

    ctx->pc = 0x208730u;

    // 0x208730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208734: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x208734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20873c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20873cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208740: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x208740u;
    ctx->pc = 0x208744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208740u;
    // 0x208744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208748u;
}
