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

// Function: sub_0012B280
// Address: 0x12b280 - 0x12b2b0
void sub_0012B280_0x12b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B280_0x12b280");
#endif

    ctx->pc = 0x12b280u;

    // 0x12b280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b284: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12b284u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b28c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x12b28cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x12b290: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12b290u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b294: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x12b298: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12b298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b2a0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12b2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2a4: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12b2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2a8: 0x804acb2  j           func_12B2C8
    ctx->pc = 0x12B2A8u;
    ctx->pc = 0x12B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2A8u;
    // 0x12b2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B2C8u;
    sub_0012B2C8_0x12b2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x12B2B0u;
}
