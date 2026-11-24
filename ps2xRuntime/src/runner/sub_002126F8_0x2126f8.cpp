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

// Function: sub_002126F8
// Address: 0x2126f8 - 0x21271c
void sub_002126F8_0x2126f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002126F8_0x2126f8");
#endif

    ctx->pc = 0x2126f8u;

    // 0x2126f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2126f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2126fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2126fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212704: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x212704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212708: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x212708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21270c: 0x8c851f44  lw          $a1, 0x1F44($a0)
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8004)));
    // 0x212710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212714: 0x8083d72  j           func_20F5C8
    ctx->pc = 0x212714u;
    ctx->pc = 0x212718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212714u;
    // 0x212718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F5C8u;
    sub_0020F5C8_0x20f5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x21271Cu;
}
