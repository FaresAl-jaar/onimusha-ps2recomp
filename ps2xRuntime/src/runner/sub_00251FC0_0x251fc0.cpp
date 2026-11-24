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

// Function: sub_00251FC0
// Address: 0x251fc0 - 0x252008
void sub_00251FC0_0x251fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251FC0_0x251fc0");
#endif

    switch (ctx->pc) {
        case 0x251fdcu: goto label_251fdc;
        case 0x251fe8u: goto label_251fe8;
        case 0x251ff0u: goto label_251ff0;
        default: break;
    }

    ctx->pc = 0x251fc0u;

    // 0x251fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251fd4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251FD4u;
    SET_GPR_U32(ctx, 31, 0x251FDCu);
    ctx->pc = 0x251FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FD4u;
    // 0x251fd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251FD4u, 0x251FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FDCu;
label_251fdc:
    // 0x251fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fe0: 0xc094802  jal         func_252008
    ctx->pc = 0x251FE0u;
    SET_GPR_U32(ctx, 31, 0x251FE8u);
    ctx->pc = 0x251FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FE0u;
    // 0x251fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252008u, 0x251FE0u, 0x251FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FE8u;
label_251fe8:
    // 0x251fe8: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x251FE8u;
    SET_GPR_U32(ctx, 31, 0x251FF0u);
    ctx->pc = 0x251FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FE8u;
    // 0x251fec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x251FE8u, 0x251FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FF0u;
label_251ff0:
    // 0x251ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x251ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252000: 0x3e00008  jr          $ra
    ctx->pc = 0x252000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252000u;
        // 0x252004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252008u;
}
