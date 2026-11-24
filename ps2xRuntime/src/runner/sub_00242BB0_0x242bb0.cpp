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

// Function: sub_00242BB0
// Address: 0x242bb0 - 0x242c04
void sub_00242BB0_0x242bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242BB0_0x242bb0");
#endif

    switch (ctx->pc) {
        case 0x242be8u: goto label_242be8;
        default: break;
    }

    ctx->pc = 0x242bb0u;

    // 0x242bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242bb4: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x242bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242bbc: 0x2470d748  addiu       $s0, $v1, -0x28B8
    ctx->pc = 0x242bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956872));
    // 0x242bc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242bc4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x242bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x242bc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4CD748u));
    // 0x242bcc: 0x2442d74c  addiu       $v0, $v0, -0x28B4
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956876));
    // 0x242bd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CD74Cu));
    // 0x242bd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4CD74Cu));
    // 0x242bd8: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x242BD8u;
    {
        const bool branch_taken_0x242bd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x242bd8) {
            ctx->pc = 0x242BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242BD8u;
            // 0x242bdc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242BF0u;
            goto label_242bf0;
        }
    }
    ctx->pc = 0x242BE0u;
    // 0x242be0: 0xc08fc3c  jal         func_23F0F0
    ctx->pc = 0x242BE0u;
    SET_GPR_U32(ctx, 31, 0x242BE8u);
    ctx->pc = 0x23F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F0F0u, 0x242BE0u, 0x242BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BE8u;
label_242be8:
    // 0x242be8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x242be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242bec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x242becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_242bf0:
    // 0x242bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242bf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x242bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x242BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BFCu;
        // 0x242c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242C04u;
}
