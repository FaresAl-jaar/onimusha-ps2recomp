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

// Function: sub_0024FE98
// Address: 0x24fe98 - 0x24fee0
void sub_0024FE98_0x24fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE98_0x24fe98");
#endif

    switch (ctx->pc) {
        case 0x24feb4u: goto label_24feb4;
        case 0x24fec0u: goto label_24fec0;
        case 0x24fec8u: goto label_24fec8;
        default: break;
    }

    ctx->pc = 0x24fe98u;

    // 0x24fe98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24fe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24fea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24feac: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x24FEACu;
    SET_GPR_U32(ctx, 31, 0x24FEB4u);
    ctx->pc = 0x24FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEACu;
    // 0x24feb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x24FEACu, 0x24FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEB4u;
label_24feb4:
    // 0x24feb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24feb8: 0xc093fb8  jal         func_24FEE0
    ctx->pc = 0x24FEB8u;
    SET_GPR_U32(ctx, 31, 0x24FEC0u);
    ctx->pc = 0x24FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEB8u;
    // 0x24febc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FEE0u, 0x24FEB8u, 0x24FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEC0u;
label_24fec0:
    // 0x24fec0: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x24FEC0u;
    SET_GPR_U32(ctx, 31, 0x24FEC8u);
    ctx->pc = 0x24FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEC0u;
    // 0x24fec4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x24FEC0u, 0x24FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEC8u;
label_24fec8:
    // 0x24fec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24fec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24fecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24fed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fed8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FED8u;
        // 0x24fedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FEE0u;
}
