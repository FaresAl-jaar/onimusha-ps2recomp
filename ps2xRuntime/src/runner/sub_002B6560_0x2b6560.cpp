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

// Function: sub_002B6560
// Address: 0x2b6560 - 0x2b657c
void sub_002B6560_0x2b6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6560_0x2b6560");
#endif

    ctx->pc = 0x2b6560u;

    // 0x2b6560: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b6564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6568: 0xa48307f0  sh          $v1, 0x7F0($a0)
    ctx->pc = 0x2b6568u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b656c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6570: 0xa08204f4  sb          $v0, 0x4F4($a0)
    ctx->pc = 0x2b6570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1268), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6574: 0x80b2bb4  j           func_2CAED0
    ctx->pc = 0x2B6574u;
    ctx->pc = 0x2B6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6574u;
    // 0x2b6578: 0x24a40530  addiu       $a0, $a1, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAED0u;
    sub_002CAED0_0x2caed0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B657Cu;
}
