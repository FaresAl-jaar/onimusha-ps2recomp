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

// Function: sub_00225188
// Address: 0x225188 - 0x2251b4
void sub_00225188_0x225188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225188_0x225188");
#endif

    ctx->pc = 0x225188u;

    // 0x225188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22518c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225198: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x225198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22519c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2251a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251a4: 0xac480044  sw          $t0, 0x44($v0)
    ctx->pc = 0x2251a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 8));
    // 0x2251a8: 0xac490048  sw          $t1, 0x48($v0)
    ctx->pc = 0x2251a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 9));
    // 0x2251ac: 0x80899ae  j           func_2266B8
    ctx->pc = 0x2251ACu;
    ctx->pc = 0x2251B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251ACu;
    // 0x2251b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    sub_002266B8_0x2266b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2251B4u;
}
