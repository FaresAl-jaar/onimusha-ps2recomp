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

// Function: sub_0032FB40
// Address: 0x32fb40 - 0x32fb8c
void sub_0032FB40_0x32fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FB40_0x32fb40");
#endif

    switch (ctx->pc) {
        case 0x32fb68u: goto label_32fb68;
        case 0x32fb7cu: goto label_32fb7c;
        default: break;
    }

    ctx->pc = 0x32fb40u;

    // 0x32fb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32fb4c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x32fb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x32fb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb54: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32fb54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32fb58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32fb5c: 0x26041c88  addiu       $a0, $s0, 0x1C88
    ctx->pc = 0x32fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7304));
    // 0x32fb60: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x32FB60u;
    SET_GPR_U32(ctx, 31, 0x32FB68u);
    ctx->pc = 0x32FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB60u;
    // 0x32fb64: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x32FB60u, 0x32FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB68u;
label_32fb68:
    // 0x32fb68: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x32fb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32fb6c: 0x26041c98  addiu       $a0, $s0, 0x1C98
    ctx->pc = 0x32fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7320));
    // 0x32fb70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32fb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32fb74: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x32FB74u;
    SET_GPR_U32(ctx, 31, 0x32FB7Cu);
    ctx->pc = 0x32FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB74u;
    // 0x32fb78: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x32FB74u, 0x32FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB7Cu;
label_32fb7c:
    // 0x32fb7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fb80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fb84: 0x3e00008  jr          $ra
    ctx->pc = 0x32FB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB84u;
        // 0x32fb88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FB8Cu;
}
