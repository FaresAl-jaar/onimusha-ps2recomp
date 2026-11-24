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

// Function: sub_00234BB0
// Address: 0x234bb0 - 0x234c14
void sub_00234BB0_0x234bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234BB0_0x234bb0");
#endif

    switch (ctx->pc) {
        case 0x234bc4u: goto label_234bc4;
        case 0x234be4u: goto label_234be4;
        case 0x234becu: goto label_234bec;
        case 0x234bf4u: goto label_234bf4;
        default: break;
    }

    ctx->pc = 0x234bb0u;

    // 0x234bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234bb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x234bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x234bbc: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x234BBCu;
    SET_GPR_U32(ctx, 31, 0x234BC4u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x234BBCu, 0x234BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BC4u;
label_234bc4:
    // 0x234bc4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234bc8: 0x2450fd28  addiu       $s0, $v0, -0x2D8
    ctx->pc = 0x234bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966568));
    // 0x234bcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x234bccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BFD28u));
    // 0x234bd0: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x234BD0u;
    {
        const bool branch_taken_0x234bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234bd0) {
            ctx->pc = 0x234BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234BD0u;
            // 0x234bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234C08u;
            goto label_234c08;
        }
    }
    ctx->pc = 0x234BD8u;
    // 0x234bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234bdc: 0xc08d1fc  jal         func_2347F0
    ctx->pc = 0x234BDCu;
    SET_GPR_U32(ctx, 31, 0x234BE4u);
    ctx->pc = 0x234BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BDCu;
    // 0x234be0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347F0u, 0x234BDCu, 0x234BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE4u;
label_234be4:
    // 0x234be4: 0xc08ecfe  jal         func_23B3F8
    ctx->pc = 0x234BE4u;
    SET_GPR_U32(ctx, 31, 0x234BECu);
    ctx->pc = 0x23B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3F8u, 0x234BE4u, 0x234BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BECu;
label_234bec:
    // 0x234bec: 0xc08c73e  jal         func_231CF8
    ctx->pc = 0x234BECu;
    SET_GPR_U32(ctx, 31, 0x234BF4u);
    ctx->pc = 0x231CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CF8u, 0x234BECu, 0x234BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BF4u;
label_234bf4:
    // 0x234bf4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x234bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x234bf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c00: 0x3e00008  jr          $ra
    ctx->pc = 0x234C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C00u;
        // 0x234c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234C08u;
label_234c08:
    // 0x234c08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234c0c: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x234C0Cu;
    ctx->pc = 0x234C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C0Cu;
    // 0x234c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x234C14u;
}
