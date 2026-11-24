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

// Function: sub_0023AC80
// Address: 0x23ac80 - 0x23acbc
void sub_0023AC80_0x23ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC80_0x23ac80");
#endif

    switch (ctx->pc) {
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca8u: goto label_23aca8;
        default: break;
    }

    ctx->pc = 0x23ac80u;

    // 0x23ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ac84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ac88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ac88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ac90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ac94: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AC94u;
    SET_GPR_U32(ctx, 31, 0x23AC9Cu);
    ctx->pc = 0x23AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC94u;
    // 0x23ac98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AC94u, 0x23AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC9Cu;
label_23ac9c:
    // 0x23ac9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aca0: 0xc08eb3e  jal         func_23ACF8
    ctx->pc = 0x23ACA0u;
    SET_GPR_U32(ctx, 31, 0x23ACA8u);
    ctx->pc = 0x23ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACA0u;
    // 0x23aca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACF8u, 0x23ACA0u, 0x23ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23acac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23acb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23acb4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23ACB4u;
    ctx->pc = 0x23ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACB4u;
    // 0x23acb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23ACBCu;
}
