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

// Function: sub_0023A520
// Address: 0x23a520 - 0x23a558
void sub_0023A520_0x23a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A520_0x23a520");
#endif

    switch (ctx->pc) {
        case 0x23a534u: goto label_23a534;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a544u: goto label_23a544;
        default: break;
    }

    ctx->pc = 0x23a520u;

    // 0x23a520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a52c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A52Cu;
    SET_GPR_U32(ctx, 31, 0x23A534u);
    ctx->pc = 0x23A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A52Cu;
    // 0x23a530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A52Cu, 0x23A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A534u;
label_23a534:
    // 0x23a534: 0xc08e956  jal         func_23A558
    ctx->pc = 0x23A534u;
    SET_GPR_U32(ctx, 31, 0x23A53Cu);
    ctx->pc = 0x23A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A534u;
    // 0x23a538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A558u, 0x23A534u, 0x23A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A53Cu;
label_23a53c:
    // 0x23a53c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A53Cu;
    SET_GPR_U32(ctx, 31, 0x23A544u);
    ctx->pc = 0x23A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A53Cu;
    // 0x23a540: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A53Cu, 0x23A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A544u;
label_23a544:
    // 0x23a544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a550: 0x3e00008  jr          $ra
    ctx->pc = 0x23A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A550u;
        // 0x23a554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A558u;
}
