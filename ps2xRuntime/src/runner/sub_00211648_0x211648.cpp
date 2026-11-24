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

// Function: sub_00211648
// Address: 0x211648 - 0x211668
void sub_00211648_0x211648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211648_0x211648");
#endif

    ctx->pc = 0x211648u;

    // 0x211648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21164c: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x211650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211654: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x211658: 0x24a50c10  addiu       $a1, $a1, 0xC10
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3088));
    // 0x21165c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21165cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211660: 0x8088dbe  j           func_2236F8
    ctx->pc = 0x211660u;
    ctx->pc = 0x211664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211660u;
    // 0x211664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236F8u;
    sub_002236F8_0x2236f8(rdram, ctx, runtime); return;
    ctx->pc = 0x211668u;
}
