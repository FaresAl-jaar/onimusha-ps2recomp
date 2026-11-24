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

// Function: sub_002074A0
// Address: 0x2074a0 - 0x2074d8
void sub_002074A0_0x2074a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074A0_0x2074a0");
#endif

    ctx->pc = 0x2074a0u;

    // 0x2074a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2074a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2074a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2074a8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2074a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2074ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2074ACu;
    {
        const bool branch_taken_0x2074ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074ACu;
        // 0x2074b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074ac) {
            ctx->pc = 0x2074C8u;
            goto label_2074c8;
        }
    }
    ctx->pc = 0x2074B4u;
    // 0x2074b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2074b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2074b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074bc: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x2074bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2074c0: 0x8049590  j           func_125640
    ctx->pc = 0x2074C0u;
    ctx->pc = 0x2074C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074C0u;
    // 0x2074c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x2074C8u;
label_2074c8:
    // 0x2074c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2074cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2074ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074d0: 0x8087f0a  j           func_21FC28
    ctx->pc = 0x2074D0u;
    ctx->pc = 0x2074D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074D0u;
    // 0x2074d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FC28u;
    sub_0021FC28_0x21fc28(rdram, ctx, runtime); return;
    ctx->pc = 0x2074D8u;
}
