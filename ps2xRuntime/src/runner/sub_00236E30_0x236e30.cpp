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

// Function: sub_00236E30
// Address: 0x236e30 - 0x236e88
void sub_00236E30_0x236e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236E30_0x236e30");
#endif

    switch (ctx->pc) {
        case 0x236e48u: goto label_236e48;
        default: break;
    }

    ctx->pc = 0x236e30u;

    // 0x236e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236e40: 0xc08af30  jal         func_22BCC0
    ctx->pc = 0x236E40u;
    SET_GPR_U32(ctx, 31, 0x236E48u);
    ctx->pc = 0x236E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E40u;
    // 0x236e44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCC0u, 0x236E40u, 0x236E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E48u;
label_236e48:
    // 0x236e48: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236E48u;
    {
        const bool branch_taken_0x236e48 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x236e48) {
            ctx->pc = 0x236E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E48u;
            // 0x236e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E78u;
            goto label_236e78;
        }
    }
    ctx->pc = 0x236E50u;
    // 0x236e50: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x236e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x236e54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x236e58: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x236e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x236e5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236E5Cu;
    {
        const bool branch_taken_0x236e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236e5c) {
            ctx->pc = 0x236E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E5Cu;
            // 0x236e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E78u;
            goto label_236e78;
        }
    }
    ctx->pc = 0x236E64u;
    // 0x236e64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x236e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236e70: 0x808af38  j           func_22BCE0
    ctx->pc = 0x236E70u;
    ctx->pc = 0x236E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E70u;
    // 0x236e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    sub_0022BCE0_0x22bce0(rdram, ctx, runtime); return;
    ctx->pc = 0x236E78u;
label_236e78:
    // 0x236e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236e80: 0x3e00008  jr          $ra
    ctx->pc = 0x236E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E80u;
        // 0x236e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E88u;
}
