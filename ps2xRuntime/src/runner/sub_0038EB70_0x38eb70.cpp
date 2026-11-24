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

// Function: sub_0038EB70
// Address: 0x38eb70 - 0x38ebac
void sub_0038EB70_0x38eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EB70_0x38eb70");
#endif

    switch (ctx->pc) {
        case 0x38eb84u: goto label_38eb84;
        case 0x38eb94u: goto label_38eb94;
        default: break;
    }

    ctx->pc = 0x38eb70u;

    // 0x38eb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38eb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38eb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38eb7c: 0xc0e37c0  jal         func_38DF00
    ctx->pc = 0x38EB7Cu;
    SET_GPR_U32(ctx, 31, 0x38EB84u);
    ctx->pc = 0x38EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB7Cu;
    // 0x38eb80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DF00u, 0x38EB7Cu, 0x38EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB84u;
label_38eb84:
    // 0x38eb84: 0xa6022b34  sh          $v0, 0x2B34($s0)
    ctx->pc = 0x38eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11060), (uint16_t)GPR_U32(ctx, 2));
    // 0x38eb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb8c: 0xc0e37e0  jal         func_38DF80
    ctx->pc = 0x38EB8Cu;
    SET_GPR_U32(ctx, 31, 0x38EB94u);
    ctx->pc = 0x38EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB8Cu;
    // 0x38eb90: 0xa6002b36  sh          $zero, 0x2B36($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11062), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DF80u, 0x38EB8Cu, 0x38EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB94u;
label_38eb94:
    // 0x38eb94: 0xa2022b38  sb          $v0, 0x2B38($s0)
    ctx->pc = 0x38eb94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11064), (uint8_t)GPR_U32(ctx, 2));
    // 0x38eb98: 0xa2002b39  sb          $zero, 0x2B39($s0)
    ctx->pc = 0x38eb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11065), (uint8_t)GPR_U32(ctx, 0));
    // 0x38eb9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38eba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38eba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eba4: 0x3e00008  jr          $ra
    ctx->pc = 0x38EBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBA4u;
        // 0x38eba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EBACu;
}
