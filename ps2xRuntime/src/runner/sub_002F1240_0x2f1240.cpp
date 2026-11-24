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

// Function: sub_002F1240
// Address: 0x2f1240 - 0x2f1264
void sub_002F1240_0x2f1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1240_0x2f1240");
#endif

    ctx->pc = 0x2f1240u;

    // 0x2f1240: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1244: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1248: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f124c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f124cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1250: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1258: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f125c: 0x80d5b48  j           func_356D20
    ctx->pc = 0x2F125Cu;
    ctx->pc = 0x2F1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F125Cu;
    // 0x2f1260: 0x2409001a  addiu       $t1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356D20u;
    sub_00356D20_0x356d20(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1264u;
}
