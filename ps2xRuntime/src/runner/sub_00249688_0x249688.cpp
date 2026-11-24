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

// Function: sub_00249688
// Address: 0x249688 - 0x24969c
void sub_00249688_0x249688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249688_0x249688");
#endif

    ctx->pc = 0x249688u;

    // 0x249688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24968c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249694: 0x8091a50  j           func_246940
    ctx->pc = 0x249694u;
    ctx->pc = 0x249698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249694u;
    // 0x249698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246940u;
    sub_00246940_0x246940(rdram, ctx, runtime); return;
    ctx->pc = 0x24969Cu;
}
