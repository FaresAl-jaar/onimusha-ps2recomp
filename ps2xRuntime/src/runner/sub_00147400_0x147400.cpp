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

// Function: sub_00147400
// Address: 0x147400 - 0x14742c
void sub_00147400_0x147400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147400_0x147400");
#endif

    ctx->pc = 0x147400u;

    // 0x147400: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x147400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x147404: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x147404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147408: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x147408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x14740c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147410: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x147410u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x147414: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x147414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x147418: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x147418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x14741c: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x14741cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x147420: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x147420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x147424: 0x8052260  j           func_148980
    ctx->pc = 0x147424u;
    ctx->pc = 0x147428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147424u;
    // 0x147428: 0xa082000b  sb          $v0, 0xB($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    sub_00148980_0x148980(rdram, ctx, runtime); return;
    ctx->pc = 0x14742Cu;
}
