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

// Function: sub_00239B00
// Address: 0x239b00 - 0x239b2c
void sub_00239B00_0x239b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239B00_0x239b00");
#endif

    switch (ctx->pc) {
        case 0x239b14u: goto label_239b14;
        case 0x239b1cu: goto label_239b1c;
        default: break;
    }

    ctx->pc = 0x239b00u;

    // 0x239b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239b08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x239b0c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239B0Cu;
    SET_GPR_U32(ctx, 31, 0x239B14u);
    ctx->pc = 0x239B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B0Cu;
    // 0x239b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239B0Cu, 0x239B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B14u;
label_239b14:
    // 0x239b14: 0xc08e6cc  jal         func_239B30
    ctx->pc = 0x239B14u;
    SET_GPR_U32(ctx, 31, 0x239B1Cu);
    ctx->pc = 0x239B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B14u;
    // 0x239b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B30u, 0x239B14u, 0x239B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B1Cu;
label_239b1c:
    // 0x239b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239b20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x239b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239b24: 0x808b536  j           func_22D4D8
    ctx->pc = 0x239B24u;
    ctx->pc = 0x239B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B24u;
    // 0x239b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239B2Cu;
}
