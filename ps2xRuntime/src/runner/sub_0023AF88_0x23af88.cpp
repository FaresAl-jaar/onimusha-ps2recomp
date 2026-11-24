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

// Function: sub_0023AF88
// Address: 0x23af88 - 0x23afc4
void sub_0023AF88_0x23af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF88_0x23af88");
#endif

    switch (ctx->pc) {
        case 0x23afa4u: goto label_23afa4;
        case 0x23afb0u: goto label_23afb0;
        default: break;
    }

    ctx->pc = 0x23af88u;

    // 0x23af88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23af8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23af90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23af90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23af98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23af9c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AF9Cu;
    SET_GPR_U32(ctx, 31, 0x23AFA4u);
    ctx->pc = 0x23AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF9Cu;
    // 0x23afa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AF9Cu, 0x23AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFA4u;
label_23afa4:
    // 0x23afa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa8: 0xc08ebf2  jal         func_23AFC8
    ctx->pc = 0x23AFA8u;
    SET_GPR_U32(ctx, 31, 0x23AFB0u);
    ctx->pc = 0x23AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA8u;
    // 0x23afac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFC8u, 0x23AFA8u, 0x23AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFB0u;
label_23afb0:
    // 0x23afb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23afb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23afb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23afbc: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AFBCu;
    ctx->pc = 0x23AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFBCu;
    // 0x23afc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AFC4u;
}
