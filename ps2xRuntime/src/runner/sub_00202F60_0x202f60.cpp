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

// Function: sub_00202F60
// Address: 0x202f60 - 0x202f98
void sub_00202F60_0x202f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202F60_0x202f60");
#endif

    switch (ctx->pc) {
        case 0x202f90u: goto label_202f90;
        default: break;
    }

    ctx->pc = 0x202f60u;

    // 0x202f60: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x202f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x202f64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x202F64u;
    {
        const bool branch_taken_0x202f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f64) {
            ctx->pc = 0x202F90u;
            goto label_202f90;
        }
    }
    ctx->pc = 0x202F6Cu;
    // 0x202f6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x202f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x202f70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x202f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202f78: 0x8c636640  lw          $v1, 0x6640($v1)
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26176)));
    // 0x202f7c: 0x600008  jr          $v1
    ctx->pc = 0x202F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202F88u: goto label_202f88;
            case 0x202F90u: goto label_202f90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x202F84u;
    // 0x202f84: 0x0  nop
    ctx->pc = 0x202f84u;
    // NOP
label_202f88:
    // 0x202f88: 0x3e00008  jr          $ra
    ctx->pc = 0x202F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F88u;
        // 0x202f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202F90u;
label_202f90:
    // 0x202f90: 0x3e00008  jr          $ra
    ctx->pc = 0x202F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F90u;
        // 0x202f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202F98u;
}
