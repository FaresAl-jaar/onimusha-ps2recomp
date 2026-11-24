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

// Function: sub_0023E288
// Address: 0x23e288 - 0x23e2ac
void sub_0023E288_0x23e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E288_0x23e288");
#endif

    ctx->pc = 0x23e288u;

    // 0x23e288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e28c: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x23e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x23e290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e298: 0x24848ff0  addiu       $a0, $a0, -0x7010
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938608));
    // 0x23e29c: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x23e2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e2a4: 0x8049590  j           func_125640
    ctx->pc = 0x23E2A4u;
    ctx->pc = 0x23E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2A4u;
    // 0x23e2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x23E2ACu;
}
