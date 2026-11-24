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

// Function: sub_001F3728
// Address: 0x1f3728 - 0x1f3750
void sub_001F3728_0x1f3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3728_0x1f3728");
#endif

    ctx->pc = 0x1f3728u;

    // 0x1f3728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f372c: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x1f3730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3734: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1f3738: 0x24633ed0  addiu       $v1, $v1, 0x3ED0
    ctx->pc = 0x1f3738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16080));
    // 0x1f373c: 0x244260b8  addiu       $v0, $v0, 0x60B8
    ctx->pc = 0x1f373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24760));
    // 0x1f3740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f3744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x873ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873ED0u, _value); } while (0);
    // 0x1f3748: 0x807cde6  j           func_1F3798
    ctx->pc = 0x1F3748u;
    ctx->pc = 0x1F374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3748u;
    // 0x1f374c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3798u;
    sub_001F3798_0x1f3798(rdram, ctx, runtime); return;
    ctx->pc = 0x1F3750u;
}
