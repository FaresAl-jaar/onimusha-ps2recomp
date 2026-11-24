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

// Function: sub_00270E60
// Address: 0x270e60 - 0x270ea4
void sub_00270E60_0x270e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270E60_0x270e60");
#endif

    switch (ctx->pc) {
        case 0x270e8cu: goto label_270e8c;
        default: break;
    }

    ctx->pc = 0x270e60u;

    // 0x270e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e70: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270E70u;
    {
        const bool branch_taken_0x270e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E70u;
        // 0x270e74: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e70) {
            ctx->pc = 0x270E90u;
            goto label_270e90;
        }
    }
    ctx->pc = 0x270E78u;
    // 0x270e78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x270e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x270e7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270E7Cu;
    {
        const bool branch_taken_0x270e7c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x270e7c) {
            ctx->pc = 0x270E90u;
            goto label_270e90;
        }
    }
    ctx->pc = 0x270E84u;
    // 0x270e84: 0xc040148  jal         func_100520
    ctx->pc = 0x270E84u;
    SET_GPR_U32(ctx, 31, 0x270E8Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x270E84u, 0x270E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E8Cu;
label_270e8c:
    // 0x270e8c: 0x0  nop
    ctx->pc = 0x270e8cu;
    // NOP
label_270e90:
    // 0x270e90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x270e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x270E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E9Cu;
        // 0x270ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270EA4u;
}
