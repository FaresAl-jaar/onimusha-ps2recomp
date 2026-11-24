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

// Function: sub_00380A80
// Address: 0x380a80 - 0x380a9c
void sub_00380A80_0x380a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380A80_0x380a80");
#endif

    ctx->pc = 0x380a80u;

    // 0x380a80: 0x90822b78  lbu         $v0, 0x2B78($a0)
    ctx->pc = 0x380a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11128)));
    // 0x380a84: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x380a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x380a88: 0xa0822b78  sb          $v0, 0x2B78($a0)
    ctx->pc = 0x380a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x380a8c: 0x90822b78  lbu         $v0, 0x2B78($a0)
    ctx->pc = 0x380a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11128)));
    // 0x380a90: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x380a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x380a94: 0x80e0188  j           func_380620
    ctx->pc = 0x380A94u;
    ctx->pc = 0x380A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A94u;
    // 0x380a98: 0xa0822b78  sb          $v0, 0x2B78($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380620u;
    sub_00380620_0x380620(rdram, ctx, runtime); return;
    ctx->pc = 0x380A9Cu;
}
