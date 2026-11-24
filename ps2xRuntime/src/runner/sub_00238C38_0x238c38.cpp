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

// Function: sub_00238C38
// Address: 0x238c38 - 0x238c94
void sub_00238C38_0x238c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C38_0x238c38");
#endif

    switch (ctx->pc) {
        case 0x238c64u: goto label_238c64;
        case 0x238c80u: goto label_238c80;
        default: break;
    }

    ctx->pc = 0x238c38u;

    // 0x238c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238c3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238c44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x238c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238C48u;
    {
        const bool branch_taken_0x238c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C48u;
        // 0x238c4c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c48) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238C50u;
    // 0x238c50: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x238c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x238c54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238c58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x238c5c: 0xc0924a2  jal         func_249288
    ctx->pc = 0x238C5Cu;
    SET_GPR_U32(ctx, 31, 0x238C64u);
    ctx->pc = 0x238C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C5Cu;
    // 0x238c60: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x238C5Cu, 0x238C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C64u;
label_238c64:
    // 0x238c64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238C64u;
    {
        const bool branch_taken_0x238c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C64u;
        // 0x238c68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c64) {
            ctx->pc = 0x238C80u;
            goto label_238c80;
        }
    }
    ctx->pc = 0x238C6Cu;
    // 0x238c6c: 0x0  nop
    ctx->pc = 0x238c6cu;
    // NOP
label_238c70:
    // 0x238c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c78: 0xc0924a2  jal         func_249288
    ctx->pc = 0x238C78u;
    SET_GPR_U32(ctx, 31, 0x238C80u);
    ctx->pc = 0x238C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C78u;
    // 0x238c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x238C78u, 0x238C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C80u;
label_238c80:
    // 0x238c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x238C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C8Cu;
        // 0x238c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C94u;
}
