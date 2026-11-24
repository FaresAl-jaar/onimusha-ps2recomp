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

// Function: sub_0023B868
// Address: 0x23b868 - 0x23b8a4
void sub_0023B868_0x23b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B868_0x23b868");
#endif

    switch (ctx->pc) {
        case 0x23b884u: goto label_23b884;
        case 0x23b890u: goto label_23b890;
        default: break;
    }

    ctx->pc = 0x23b868u;

    // 0x23b868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b86c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b87c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B87Cu;
    SET_GPR_U32(ctx, 31, 0x23B884u);
    ctx->pc = 0x23B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B87Cu;
    // 0x23b880: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B87Cu, 0x23B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B884u;
label_23b884:
    // 0x23b884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b888: 0xc08ee2a  jal         func_23B8A8
    ctx->pc = 0x23B888u;
    SET_GPR_U32(ctx, 31, 0x23B890u);
    ctx->pc = 0x23B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B888u;
    // 0x23b88c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8A8u, 0x23B888u, 0x23B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B890u;
label_23b890:
    // 0x23b890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b89c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23B89Cu;
    ctx->pc = 0x23B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B89Cu;
    // 0x23b8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B8A4u;
}
