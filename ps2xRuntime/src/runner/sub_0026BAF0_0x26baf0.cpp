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

// Function: sub_0026BAF0
// Address: 0x26baf0 - 0x26bb34
void sub_0026BAF0_0x26baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BAF0_0x26baf0");
#endif

    ctx->pc = 0x26baf0u;

    // 0x26baf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26baf4: 0x3c03e000  lui         $v1, 0xE000
    ctx->pc = 0x26baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57344 << 16));
    // 0x26baf8: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x26baf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x26bafc: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x26bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x26bb00: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x26bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26bb04: 0x210fe  dsrl32      $v0, $v0, 3
    ctx->pc = 0x26bb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 3));
    // 0x26bb08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bb0c: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x26bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x26bb10: 0x80a20004  lb          $v0, 0x4($a1)
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26bb14: 0xa0820094  sb          $v0, 0x94($a0)
    ctx->pc = 0x26bb14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bb18: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x26bb1c: 0xa0820095  sb          $v0, 0x95($a0)
    ctx->pc = 0x26bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 149), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bb20: 0x80a20006  lb          $v0, 0x6($a1)
    ctx->pc = 0x26bb20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x26bb24: 0xa0820096  sb          $v0, 0x96($a0)
    ctx->pc = 0x26bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 150), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bb28: 0x80a20007  lb          $v0, 0x7($a1)
    ctx->pc = 0x26bb28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x26bb2c: 0x809bb5c  j           func_26ED70
    ctx->pc = 0x26BB2Cu;
    ctx->pc = 0x26BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB2Cu;
    // 0x26bb30: 0xa0820097  sb          $v0, 0x97($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ED70u;
    sub_0026ED70_0x26ed70(rdram, ctx, runtime); return;
    ctx->pc = 0x26BB34u;
}
