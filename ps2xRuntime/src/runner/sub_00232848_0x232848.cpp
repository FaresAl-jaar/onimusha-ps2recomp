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

// Function: sub_00232848
// Address: 0x232848 - 0x232864
void sub_00232848_0x232848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232848_0x232848");
#endif

    ctx->pc = 0x232848u;

    // 0x232848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23284c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x232850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232854: 0xac40ef68  sw          $zero, -0x1098($v0)
    ctx->pc = 0x232854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BEF68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BEF68u, _value); } while (0);
    // 0x232858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23285c: 0x808c9b6  j           func_2326D8
    ctx->pc = 0x23285Cu;
    ctx->pc = 0x232860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23285Cu;
    // 0x232860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2326D8u;
    sub_002326D8_0x2326d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232864u;
}
