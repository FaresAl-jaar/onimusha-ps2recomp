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

// Function: sub_00207098
// Address: 0x207098 - 0x2070e8
void sub_00207098_0x207098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207098_0x207098");
#endif

    switch (ctx->pc) {
        case 0x2070acu: goto label_2070ac;
        case 0x2070c4u: goto label_2070c4;
        default: break;
    }

    ctx->pc = 0x207098u;

    // 0x207098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20709c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2070a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2070a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2070a4: 0xc081d84  jal         func_207610
    ctx->pc = 0x2070A4u;
    SET_GPR_U32(ctx, 31, 0x2070ACu);
    ctx->pc = 0x2070A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070A4u;
    // 0x2070a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2070A4u, 0x2070ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070ACu;
label_2070ac:
    // 0x2070ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2070acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2070b0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2070B0u;
    {
        const bool branch_taken_0x2070b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2070B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B0u;
        // 0x2070b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070b0) {
            ctx->pc = 0x2070D8u;
            goto label_2070d8;
        }
    }
    ctx->pc = 0x2070B8u;
    // 0x2070b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2070bc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2070BCu;
    SET_GPR_U32(ctx, 31, 0x2070C4u);
    ctx->pc = 0x2070C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070BCu;
    // 0x2070c0: 0x248475b8  addiu       $a0, $a0, 0x75B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2070BCu, 0x2070C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070C4u;
label_2070c4:
    // 0x2070c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2070c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2070c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2070cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2070ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2070d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2070D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070D0u;
        // 0x2070d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2070D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2070D8u;
label_2070d8:
    // 0x2070d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2070d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2070dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2070dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2070e0: 0x8081d8c  j           func_207630
    ctx->pc = 0x2070E0u;
    ctx->pc = 0x2070E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070E0u;
    // 0x2070e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207630u;
    sub_00207630_0x207630(rdram, ctx, runtime); return;
    ctx->pc = 0x2070E8u;
}
