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

// Function: sub_00253448
// Address: 0x253448 - 0x253484
void sub_00253448_0x253448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253448_0x253448");
#endif

    switch (ctx->pc) {
        case 0x253464u: goto label_253464;
        case 0x253470u: goto label_253470;
        default: break;
    }

    ctx->pc = 0x253448u;

    // 0x253448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25344c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25345c: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x25345Cu;
    SET_GPR_U32(ctx, 31, 0x253464u);
    ctx->pc = 0x253460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25345Cu;
    // 0x253460: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x25345Cu, 0x253464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253464u;
label_253464:
    // 0x253464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253468: 0xc094d22  jal         func_253488
    ctx->pc = 0x253468u;
    SET_GPR_U32(ctx, 31, 0x253470u);
    ctx->pc = 0x25346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253468u;
    // 0x25346c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253488u, 0x253468u, 0x253470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253470u;
label_253470:
    // 0x253470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25347c: 0x8094bae  j           func_252EB8
    ctx->pc = 0x25347Cu;
    ctx->pc = 0x253480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25347Cu;
    // 0x253480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x253484u;
}
