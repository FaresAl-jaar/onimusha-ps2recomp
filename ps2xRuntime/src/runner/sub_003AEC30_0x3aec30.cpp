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

// Function: sub_003AEC30
// Address: 0x3aec30 - 0x3aec84
void sub_003AEC30_0x3aec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEC30_0x3aec30");
#endif

    switch (ctx->pc) {
        case 0x3aec54u: goto label_3aec54;
        case 0x3aec68u: goto label_3aec68;
        default: break;
    }

    ctx->pc = 0x3aec30u;

    // 0x3aec30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aec34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3aec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3aec38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aec3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aec40: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3aec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3aec44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aec44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3aec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aec4c: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x3AEC54u);
    ctx->pc = 0x3AEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC4Cu;
    // 0x3aec50: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3AEC4Cu, 0x3AEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC54u;
label_3aec54:
    // 0x3aec54: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x3aec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x3aec58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aec5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aec60: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x3AEC60u;
    SET_GPR_U32(ctx, 31, 0x3AEC68u);
    ctx->pc = 0x3AEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEC60u;
    // 0x3aec64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x3AEC60u, 0x3AEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEC68u;
label_3aec68:
    // 0x3aec68: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x3aec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3aec6c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3aec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3aec70: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3aec70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x3aec74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aec78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aec78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aec7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC7Cu;
        // 0x3aec80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC84u;
}
