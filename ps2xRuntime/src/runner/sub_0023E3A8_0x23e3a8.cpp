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

// Function: sub_0023E3A8
// Address: 0x23e3a8 - 0x23e3cc
void sub_0023E3A8_0x23e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E3A8_0x23e3a8");
#endif

    ctx->pc = 0x23e3a8u;

    // 0x23e3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e3ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23e3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e3b4: 0x24470032  addiu       $a3, $v0, 0x32
    ctx->pc = 0x23e3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x23e3b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3bc: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x23e3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e3c4: 0x808b538  j           func_22D4E0
    ctx->pc = 0x23E3C4u;
    ctx->pc = 0x23E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3C4u;
    // 0x23e3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    sub_0022D4E0_0x22d4e0(rdram, ctx, runtime); return;
    ctx->pc = 0x23E3CCu;
}
