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

// Function: sub_00231AA8
// Address: 0x231aa8 - 0x231ae4
void sub_00231AA8_0x231aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231AA8_0x231aa8");
#endif

    switch (ctx->pc) {
        case 0x231ac4u: goto label_231ac4;
        case 0x231ad0u: goto label_231ad0;
        default: break;
    }

    ctx->pc = 0x231aa8u;

    // 0x231aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231abc: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231ABCu;
    SET_GPR_U32(ctx, 31, 0x231AC4u);
    ctx->pc = 0x231AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231ABCu;
    // 0x231ac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231ABCu, 0x231AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AC4u;
label_231ac4:
    // 0x231ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ac8: 0xc08c6ba  jal         func_231AE8
    ctx->pc = 0x231AC8u;
    SET_GPR_U32(ctx, 31, 0x231AD0u);
    ctx->pc = 0x231ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AC8u;
    // 0x231acc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AE8u, 0x231AC8u, 0x231AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AD0u;
label_231ad0:
    // 0x231ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231adc: 0x808c738  j           func_231CE0
    ctx->pc = 0x231ADCu;
    ctx->pc = 0x231AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231ADCu;
    // 0x231ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    sub_00231CE0_0x231ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x231AE4u;
}
