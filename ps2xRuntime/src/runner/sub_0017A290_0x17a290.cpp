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

// Function: sub_0017A290
// Address: 0x17a290 - 0x17a2f8
void sub_0017A290_0x17a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A290_0x17a290");
#endif

    ctx->pc = 0x17a290u;

    // 0x17a290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a294: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17A294u;
    {
        const bool branch_taken_0x17a294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A294u;
        // 0x17a298: 0xa0852c73  sb          $a1, 0x2C73($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11379), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a294) {
            ctx->pc = 0x17A2D8u;
            goto label_17a2d8;
        }
    }
    ctx->pc = 0x17A29Cu;
    // 0x17a29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2a0: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17A2A0u;
    {
        const bool branch_taken_0x17a2a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a2a0) {
            ctx->pc = 0x17A2C8u;
            goto label_17a2c8;
        }
    }
    ctx->pc = 0x17A2A8u;
    // 0x17a2a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A2A8u;
    {
        const bool branch_taken_0x17a2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a2a8) {
            ctx->pc = 0x17A2B8u;
            goto label_17a2b8;
        }
    }
    ctx->pc = 0x17A2B0u;
    // 0x17a2b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17A2B0u;
    {
        const bool branch_taken_0x17a2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a2b0) {
            ctx->pc = 0x17A2E8u;
            goto label_17a2e8;
        }
    }
    ctx->pc = 0x17A2B8u;
label_17a2b8:
    // 0x17a2b8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a2bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A2BCu;
    {
        const bool branch_taken_0x17a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2BCu;
        // 0x17a2c0: 0xac206c48  sw          $zero, 0x6C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2bc) {
            ctx->pc = 0x17A2E8u;
            goto label_17a2e8;
        }
    }
    ctx->pc = 0x17A2C4u;
    // 0x17a2c4: 0x0  nop
    ctx->pc = 0x17a2c4u;
    // NOP
label_17a2c8:
    // 0x17a2c8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a2cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17A2CCu;
    {
        const bool branch_taken_0x17a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2CCu;
        // 0x17a2d0: 0xac226c48  sw          $v0, 0x6C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2cc) {
            ctx->pc = 0x17A2E8u;
            goto label_17a2e8;
        }
    }
    ctx->pc = 0x17A2D4u;
    // 0x17a2d4: 0x0  nop
    ctx->pc = 0x17a2d4u;
    // NOP
label_17a2d8:
    // 0x17a2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2dc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a2e0: 0xac226c48  sw          $v0, 0x6C48($at)
    ctx->pc = 0x17a2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x17a2e4: 0x0  nop
    ctx->pc = 0x17a2e4u;
    // NOP
label_17a2e8:
    // 0x17a2e8: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a2ec: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x17a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x17a2f0: 0x8054738  j           func_151CE0
    ctx->pc = 0x17A2F0u;
    ctx->pc = 0x17A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2F0u;
    // 0x17a2f4: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    sub_00151CE0_0x151ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x17A2F8u;
}
