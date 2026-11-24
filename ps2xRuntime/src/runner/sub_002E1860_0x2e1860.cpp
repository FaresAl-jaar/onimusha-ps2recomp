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

// Function: sub_002E1860
// Address: 0x2e1860 - 0x2e189c
void sub_002E1860_0x2e1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1860_0x2e1860");
#endif

    switch (ctx->pc) {
        case 0x2e1870u: goto label_2e1870;
        default: break;
    }

    ctx->pc = 0x2e1860u;

    // 0x2e1860: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2e1860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2e1864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1868: 0x24637190  addiu       $v1, $v1, 0x7190
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29072));
    // 0x2e186c: 0x0  nop
    ctx->pc = 0x2e186cu;
    // NOP
label_2e1870:
    // 0x2e1870: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e1874: 0xa0600031  sb          $zero, 0x31($v1)
    ctx->pc = 0x2e1874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1878: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2e1878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e187c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x2e1880: 0x0  nop
    ctx->pc = 0x2e1880u;
    // NOP
    // 0x2e1884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E1884u;
    {
        const bool branch_taken_0x2e1884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1884) {
            ctx->pc = 0x2E1870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1870;
        }
    }
    ctx->pc = 0x2E188Cu;
    // 0x2e188c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e188cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e1890: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e1890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e1894: 0x807cba4  j           func_1F2E90
    ctx->pc = 0x2E1894u;
    ctx->pc = 0x2E1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1894u;
    // 0x2e1898: 0x2484a790  addiu       $a0, $a0, -0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E90u;
    sub_001F2E90_0x1f2e90(rdram, ctx, runtime); return;
    ctx->pc = 0x2E189Cu;
}
