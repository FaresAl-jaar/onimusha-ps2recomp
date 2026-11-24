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

// Function: sub_00234B38
// Address: 0x234b38 - 0x234b98
void sub_00234B38_0x234b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234B38_0x234b38");
#endif

    switch (ctx->pc) {
        case 0x234b8cu: goto label_234b8c;
        default: break;
    }

    ctx->pc = 0x234b38u;

    // 0x234b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234b3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x234b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x234B40u;
    {
        const bool branch_taken_0x234b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B40u;
        // 0x234b44: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b40) {
            ctx->pc = 0x234B80u;
            goto label_234b80;
        }
    }
    ctx->pc = 0x234B48u;
    // 0x234b48: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x234b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x234b4c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x234b50: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x234b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x234b54: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x234b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234b5c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x234b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x234b60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x234b64: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x234b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x234b68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x234b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x234b6c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x234b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x234b70: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x234b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x234b74: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x234b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x234b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234B78u;
    {
        const bool branch_taken_0x234b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B78u;
        // 0x234b7c: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b78) {
            ctx->pc = 0x234B84u;
            goto label_234b84;
        }
    }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234b84:
    // 0x234b84: 0xc08d008  jal         func_234020
    ctx->pc = 0x234B84u;
    SET_GPR_U32(ctx, 31, 0x234B8Cu);
    ctx->pc = 0x234B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B84u;
    // 0x234b88: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234020u, 0x234B84u, 0x234B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B8Cu;
label_234b8c:
    // 0x234b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234b90: 0x3e00008  jr          $ra
    ctx->pc = 0x234B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B90u;
        // 0x234b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234B98u;
}
