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

// Function: sub_00232650
// Address: 0x232650 - 0x232678
void sub_00232650_0x232650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232650_0x232650");
#endif

    ctx->pc = 0x232650u;

    // 0x232650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232654: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x232654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x232658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23265c: 0x2463ef80  addiu       $v1, $v1, -0x1080
    ctx->pc = 0x23265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x232660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x232664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23266c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23266cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BEF80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BEF80u, _value); } while (0);
    // 0x232670: 0x808ecfe  j           func_23B3F8
    ctx->pc = 0x232670u;
    ctx->pc = 0x232674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232670u;
    // 0x232674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    sub_0023B3F8_0x23b3f8(rdram, ctx, runtime); return;
    ctx->pc = 0x232678u;
}
