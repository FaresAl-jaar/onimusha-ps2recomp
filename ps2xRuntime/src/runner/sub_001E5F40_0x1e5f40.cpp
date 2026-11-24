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

// Function: sub_001E5F40
// Address: 0x1e5f40 - 0x1e5f98
void sub_001E5F40_0x1e5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5F40_0x1e5f40");
#endif

    switch (ctx->pc) {
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f6cu: goto label_1e5f6c;
        default: break;
    }

    ctx->pc = 0x1e5f40u;

    // 0x1e5f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f54: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E5F54u;
    SET_GPR_U32(ctx, 31, 0x1E5F5Cu);
    ctx->pc = 0x1E5F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F54u;
    // 0x1e5f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E5F54u, 0x1E5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F5Cu;
label_1e5f5c:
    // 0x1e5f5c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e5f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f64: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E5F64u;
    SET_GPR_U32(ctx, 31, 0x1E5F6Cu);
    ctx->pc = 0x1E5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F64u;
    // 0x1e5f68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E5F64u, 0x1E5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F6Cu;
label_1e5f6c:
    // 0x1e5f6c: 0x7a230080  lq          $v1, 0x80($s1)
    ctx->pc = 0x1e5f6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1e5f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5f74: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1e5f74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1e5f78: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1e5f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e5f7c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1e5f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5f80: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e5f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F90u;
        // 0x1e5f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5F98u;
}
