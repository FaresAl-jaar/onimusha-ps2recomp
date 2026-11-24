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

// Function: sub_0023CCB0
// Address: 0x23ccb0 - 0x23ccec
void sub_0023CCB0_0x23ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CCB0_0x23ccb0");
#endif

    switch (ctx->pc) {
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd8u: goto label_23ccd8;
        default: break;
    }

    ctx->pc = 0x23ccb0u;

    // 0x23ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ccb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ccb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ccc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ccc4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23CCC4u;
    SET_GPR_U32(ctx, 31, 0x23CCCCu);
    ctx->pc = 0x23CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCC4u;
    // 0x23ccc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23CCC4u, 0x23CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCCCu;
label_23cccc:
    // 0x23cccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccd0: 0xc08f33c  jal         func_23CCF0
    ctx->pc = 0x23CCD0u;
    SET_GPR_U32(ctx, 31, 0x23CCD8u);
    ctx->pc = 0x23CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCD0u;
    // 0x23ccd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CCF0u, 0x23CCD0u, 0x23CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCD8u;
label_23ccd8:
    // 0x23ccd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ccd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ccdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ccdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cce4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23CCE4u;
    ctx->pc = 0x23CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCE4u;
    // 0x23cce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23CCECu;
}
