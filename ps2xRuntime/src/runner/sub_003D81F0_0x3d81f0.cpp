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

// Function: sub_003D81F0
// Address: 0x3d81f0 - 0x3d8240
void sub_003D81F0_0x3d81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D81F0_0x3d81f0");
#endif

    ctx->pc = 0x3d81f0u;

    // 0x3d81f0: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3d81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d81f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3d81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3d81f8: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3d81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3d81fc: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d8200: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3d8200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3d8204: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3d8204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3d8208: 0x8c822bf4  lw          $v0, 0x2BF4($a0)
    ctx->pc = 0x3d8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11252)));
    // 0x3d820c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D820Cu;
    {
        const bool branch_taken_0x3d820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d820c) {
            ctx->pc = 0x3D8220u;
            goto label_3d8220;
        }
    }
    ctx->pc = 0x3D8214u;
    // 0x3d8214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d8218: 0xac822bf4  sw          $v0, 0x2BF4($a0)
    ctx->pc = 0x3d8218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11252), GPR_U32(ctx, 2));
    // 0x3d821c: 0x0  nop
    ctx->pc = 0x3d821cu;
    // NOP
label_3d8220:
    // 0x3d8220: 0x8c822bf8  lw          $v0, 0x2BF8($a0)
    ctx->pc = 0x3d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11256)));
    // 0x3d8224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8224u;
    {
        const bool branch_taken_0x3d8224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8224) {
            ctx->pc = 0x3D8238u;
            goto label_3d8238;
        }
    }
    ctx->pc = 0x3D822Cu;
    // 0x3d822c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d8230: 0xac822bf8  sw          $v0, 0x2BF8($a0)
    ctx->pc = 0x3d8230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11256), GPR_U32(ctx, 2));
    // 0x3d8234: 0x0  nop
    ctx->pc = 0x3d8234u;
    // NOP
label_3d8238:
    // 0x3d8238: 0x80a6188  j           func_298620
    ctx->pc = 0x3D8238u;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x3D8240u;
}
