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

// Function: sub_0023AAF0
// Address: 0x23aaf0 - 0x23ab28
void sub_0023AAF0_0x23aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAF0_0x23aaf0");
#endif

    switch (ctx->pc) {
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab14u: goto label_23ab14;
        default: break;
    }

    ctx->pc = 0x23aaf0u;

    // 0x23aaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23aaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23aaf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23aafc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AAFCu;
    SET_GPR_U32(ctx, 31, 0x23AB04u);
    ctx->pc = 0x23AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAFCu;
    // 0x23ab00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AAFCu, 0x23AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB04u;
label_23ab04:
    // 0x23ab04: 0xc08eaca  jal         func_23AB28
    ctx->pc = 0x23AB04u;
    SET_GPR_U32(ctx, 31, 0x23AB0Cu);
    ctx->pc = 0x23AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB04u;
    // 0x23ab08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB28u, 0x23AB04u, 0x23AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB0Cu;
label_23ab0c:
    // 0x23ab0c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23AB0Cu;
    SET_GPR_U32(ctx, 31, 0x23AB14u);
    ctx->pc = 0x23AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB0Cu;
    // 0x23ab10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23AB0Cu, 0x23AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB14u;
label_23ab14:
    // 0x23ab14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ab18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ab18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab20: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB20u;
        // 0x23ab24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB28u;
}
