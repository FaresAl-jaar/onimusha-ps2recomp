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

// Function: sub_00239478
// Address: 0x239478 - 0x2394c0
void sub_00239478_0x239478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239478_0x239478");
#endif

    switch (ctx->pc) {
        case 0x239494u: goto label_239494;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a8u: goto label_2394a8;
        default: break;
    }

    ctx->pc = 0x239478u;

    // 0x239478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23947c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23948c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23948Cu;
    SET_GPR_U32(ctx, 31, 0x239494u);
    ctx->pc = 0x239490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23948Cu;
    // 0x239490: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23948Cu, 0x239494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239494u;
label_239494:
    // 0x239494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239498: 0xc08e530  jal         func_2394C0
    ctx->pc = 0x239498u;
    SET_GPR_U32(ctx, 31, 0x2394A0u);
    ctx->pc = 0x23949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239498u;
    // 0x23949c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394C0u, 0x239498u, 0x2394A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394A0u;
label_2394a0:
    // 0x2394a0: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x2394A0u;
    SET_GPR_U32(ctx, 31, 0x2394A8u);
    ctx->pc = 0x2394A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394A0u;
    // 0x2394a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x2394A0u, 0x2394A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394A8u;
label_2394a8:
    // 0x2394a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2394a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2394ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2394acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2394b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2394b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2394b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2394b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2394B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B8u;
        // 0x2394bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394C0u;
}
