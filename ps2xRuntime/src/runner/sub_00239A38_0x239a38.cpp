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

// Function: sub_00239A38
// Address: 0x239a38 - 0x239a74
void sub_00239A38_0x239a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239A38_0x239a38");
#endif

    switch (ctx->pc) {
        case 0x239a54u: goto label_239a54;
        case 0x239a60u: goto label_239a60;
        default: break;
    }

    ctx->pc = 0x239a38u;

    // 0x239a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239a4c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239A4Cu;
    SET_GPR_U32(ctx, 31, 0x239A54u);
    ctx->pc = 0x239A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A4Cu;
    // 0x239a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239A4Cu, 0x239A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A54u;
label_239a54:
    // 0x239a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a58: 0xc08e69e  jal         func_239A78
    ctx->pc = 0x239A58u;
    SET_GPR_U32(ctx, 31, 0x239A60u);
    ctx->pc = 0x239A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A58u;
    // 0x239a5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239A78u, 0x239A58u, 0x239A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239a6c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x239A6Cu;
    ctx->pc = 0x239A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A6Cu;
    // 0x239a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239A74u;
}
