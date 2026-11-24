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

// Function: sub_00208C58
// Address: 0x208c58 - 0x208cc4
void sub_00208C58_0x208c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208C58_0x208c58");
#endif

    switch (ctx->pc) {
        case 0x208cb0u: goto label_208cb0;
        default: break;
    }

    ctx->pc = 0x208c58u;

    // 0x208c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208c64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x208c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208c6c: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x208c70: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208C70u;
    {
        const bool branch_taken_0x208c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C70u;
        // 0x208c74: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c70) {
            ctx->pc = 0x208CA0u;
            goto label_208ca0;
        }
    }
    ctx->pc = 0x208C78u;
    // 0x208c78: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C78u;
    {
        const bool branch_taken_0x208c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c78) {
            ctx->pc = 0x208C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C78u;
            // 0x208c7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C90u;
            goto label_208c90;
        }
    }
    ctx->pc = 0x208C80u;
    // 0x208c80: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x208C80u;
    {
        const bool branch_taken_0x208c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x208C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C80u;
        // 0x208c84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c80) {
            ctx->pc = 0x208CB4u;
            goto label_208cb4;
        }
    }
    ctx->pc = 0x208C88u;
    // 0x208c88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208CA8u;
            goto label_208ca8;
        }
    }
    ctx->pc = 0x208C90u;
label_208c90:
    // 0x208c90: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208C90u;
    {
        const bool branch_taken_0x208c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x208c90) {
            ctx->pc = 0x208C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C90u;
            // 0x208c94: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208CB0u;
            goto label_208cb0;
        }
    }
    ctx->pc = 0x208C98u;
    // 0x208c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208C98u;
    {
        const bool branch_taken_0x208c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C98u;
        // 0x208c9c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c98) {
            ctx->pc = 0x208CA8u;
            goto label_208ca8;
        }
    }
    ctx->pc = 0x208CA0u;
label_208ca0:
    // 0x208ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208CA0u;
    {
        const bool branch_taken_0x208ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CA0u;
        // 0x208ca4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ca0) {
            ctx->pc = 0x208CB0u;
            goto label_208cb0;
        }
    }
    ctx->pc = 0x208CA8u;
label_208ca8:
    // 0x208ca8: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208CA8u;
    SET_GPR_U32(ctx, 31, 0x208CB0u);
    ctx->pc = 0x208CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CA8u;
    // 0x208cac: 0x24847c50  addiu       $a0, $a0, 0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208CA8u, 0x208CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CB0u;
label_208cb0:
    // 0x208cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208cb4:
    // 0x208cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x208CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CBCu;
        // 0x208cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208CC4u;
}
