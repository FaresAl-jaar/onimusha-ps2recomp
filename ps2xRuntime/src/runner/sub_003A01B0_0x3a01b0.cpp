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

// Function: sub_003A01B0
// Address: 0x3a01b0 - 0x3a01c8
void sub_003A01B0_0x3a01b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A01B0_0x3a01b0");
#endif

    ctx->pc = 0x3a01b0u;

    // 0x3a01b0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3a01b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a01b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a01b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a01b8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x3a01b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a01bc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a01c0: 0x80f0154  j           func_3C0550
    ctx->pc = 0x3A01C0u;
    ctx->pc = 0x3A01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01C0u;
    // 0x3a01c4: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    sub_003C0550_0x3c0550(rdram, ctx, runtime); return;
    ctx->pc = 0x3A01C8u;
}
