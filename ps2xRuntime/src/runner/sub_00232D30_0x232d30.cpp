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

// Function: sub_00232D30
// Address: 0x232d30 - 0x232d6c
void sub_00232D30_0x232d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D30_0x232d30");
#endif

    switch (ctx->pc) {
        case 0x232d4cu: goto label_232d4c;
        case 0x232d58u: goto label_232d58;
        default: break;
    }

    ctx->pc = 0x232d30u;

    // 0x232d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232d44: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232D44u;
    SET_GPR_U32(ctx, 31, 0x232D4Cu);
    ctx->pc = 0x232D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D44u;
    // 0x232d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232D44u, 0x232D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D4Cu;
label_232d4c:
    // 0x232d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d50: 0xc08cb5c  jal         func_232D70
    ctx->pc = 0x232D50u;
    SET_GPR_U32(ctx, 31, 0x232D58u);
    ctx->pc = 0x232D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D50u;
    // 0x232d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D70u, 0x232D50u, 0x232D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D58u;
label_232d58:
    // 0x232d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d64: 0x808b536  j           func_22D4D8
    ctx->pc = 0x232D64u;
    ctx->pc = 0x232D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D64u;
    // 0x232d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232D6Cu;
}
