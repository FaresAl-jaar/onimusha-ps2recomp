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

// Function: sub_0023B940
// Address: 0x23b940 - 0x23b97c
void sub_0023B940_0x23b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B940_0x23b940");
#endif

    switch (ctx->pc) {
        case 0x23b95cu: goto label_23b95c;
        case 0x23b968u: goto label_23b968;
        default: break;
    }

    ctx->pc = 0x23b940u;

    // 0x23b940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b954: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B954u;
    SET_GPR_U32(ctx, 31, 0x23B95Cu);
    ctx->pc = 0x23B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B954u;
    // 0x23b958: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B954u, 0x23B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B95Cu;
label_23b95c:
    // 0x23b95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b960: 0xc08ee60  jal         func_23B980
    ctx->pc = 0x23B960u;
    SET_GPR_U32(ctx, 31, 0x23B968u);
    ctx->pc = 0x23B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B960u;
    // 0x23b964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B980u, 0x23B960u, 0x23B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B968u;
label_23b968:
    // 0x23b968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b974: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23B974u;
    ctx->pc = 0x23B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B974u;
    // 0x23b978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B97Cu;
}
