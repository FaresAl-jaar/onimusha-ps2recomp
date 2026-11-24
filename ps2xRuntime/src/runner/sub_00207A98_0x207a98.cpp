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

// Function: sub_00207A98
// Address: 0x207a98 - 0x207aec
void sub_00207A98_0x207a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A98_0x207a98");
#endif

    switch (ctx->pc) {
        case 0x207aacu: goto label_207aac;
        case 0x207ac8u: goto label_207ac8;
        case 0x207ad8u: goto label_207ad8;
        default: break;
    }

    ctx->pc = 0x207a98u;

    // 0x207a98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207a9c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x207a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x207aa0: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x207aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x207aa4: 0xc081d84  jal         func_207610
    ctx->pc = 0x207AA4u;
    SET_GPR_U32(ctx, 31, 0x207AACu);
    ctx->pc = 0x207AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AA4u;
    // 0x207aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207AA4u, 0x207AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AACu;
label_207aac:
    // 0x207aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ab4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207AB4u;
    {
        const bool branch_taken_0x207ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AB4u;
        // 0x207ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ab4) {
            ctx->pc = 0x207AD0u;
            goto label_207ad0;
        }
    }
    ctx->pc = 0x207ABCu;
    // 0x207abc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207ac0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207AC0u;
    SET_GPR_U32(ctx, 31, 0x207AC8u);
    ctx->pc = 0x207AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AC0u;
    // 0x207ac4: 0x248478e8  addiu       $a0, $a0, 0x78E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207AC0u, 0x207AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AC8u;
label_207ac8:
    // 0x207ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207AC8u;
    {
        const bool branch_taken_0x207ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC8u;
        // 0x207acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac8) {
            ctx->pc = 0x207ADCu;
            goto label_207adc;
        }
    }
    ctx->pc = 0x207AD0u;
label_207ad0:
    // 0x207ad0: 0xc081d28  jal         func_2074A0
    ctx->pc = 0x207AD0u;
    SET_GPR_U32(ctx, 31, 0x207AD8u);
    ctx->pc = 0x2074A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074A0u, 0x207AD0u, 0x207AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AD8u;
label_207ad8:
    // 0x207ad8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x207ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_207adc:
    // 0x207adc: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x207adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207ae0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x207ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x207ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x207AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AE4u;
        // 0x207ae8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207AECu;
}
