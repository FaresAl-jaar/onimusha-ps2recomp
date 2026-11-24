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

// Function: sub_00209E38
// Address: 0x209e38 - 0x209e60
void sub_00209E38_0x209e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E38_0x209e38");
#endif

    ctx->pc = 0x209e38u;

    // 0x209e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209e3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x209e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209e44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e4c: 0x8c4b0010  lw          $t3, 0x10($v0)
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x209e50: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x209e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e58: 0x8082798  j           func_209E60
    ctx->pc = 0x209E58u;
    ctx->pc = 0x209E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E58u;
    // 0x209e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E60u;
    sub_00209E60_0x209e60(rdram, ctx, runtime); return;
    ctx->pc = 0x209E60u;
}
