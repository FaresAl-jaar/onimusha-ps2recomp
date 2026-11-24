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

// Function: sub_00225640
// Address: 0x225640 - 0x225660
void sub_00225640_0x225640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225640_0x225640");
#endif

    ctx->pc = 0x225640u;

    // 0x225640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225648: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x225648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22564c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x225650: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x225654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225658: 0x8089414  j           func_225050
    ctx->pc = 0x225658u;
    ctx->pc = 0x22565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225658u;
    // 0x22565c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225050u;
    sub_00225050_0x225050(rdram, ctx, runtime); return;
    ctx->pc = 0x225660u;
}
