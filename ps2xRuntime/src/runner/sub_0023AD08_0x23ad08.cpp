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

// Function: sub_0023AD08
// Address: 0x23ad08 - 0x23ad34
void sub_0023AD08_0x23ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD08_0x23ad08");
#endif

    switch (ctx->pc) {
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad24u: goto label_23ad24;
        default: break;
    }

    ctx->pc = 0x23ad08u;

    // 0x23ad08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ad0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ad10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23ad14: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AD14u;
    SET_GPR_U32(ctx, 31, 0x23AD1Cu);
    ctx->pc = 0x23AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD14u;
    // 0x23ad18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AD14u, 0x23AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD1Cu;
label_23ad1c:
    // 0x23ad1c: 0xc08eb4e  jal         func_23AD38
    ctx->pc = 0x23AD1Cu;
    SET_GPR_U32(ctx, 31, 0x23AD24u);
    ctx->pc = 0x23AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD1Cu;
    // 0x23ad20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD38u, 0x23AD1Cu, 0x23AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD24u;
label_23ad24:
    // 0x23ad24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ad24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ad28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ad28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ad2c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AD2Cu;
    ctx->pc = 0x23AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD2Cu;
    // 0x23ad30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AD34u;
}
