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

// Function: sub_002EC880
// Address: 0x2ec880 - 0x2ec8c8
void sub_002EC880_0x2ec880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC880_0x2ec880");
#endif

    switch (ctx->pc) {
        case 0x2ec894u: goto label_2ec894;
        case 0x2ec8b8u: goto label_2ec8b8;
        default: break;
    }

    ctx->pc = 0x2ec880u;

    // 0x2ec880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec88c: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x2EC88Cu;
    SET_GPR_U32(ctx, 31, 0x2EC894u);
    ctx->pc = 0x2EC890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC88Cu;
    // 0x2ec890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2EC88Cu, 0x2EC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC894u;
label_2ec894:
    // 0x2ec894: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x2ec894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2ec898: 0x240300c2  addiu       $v1, $zero, 0xC2
    ctx->pc = 0x2ec898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x2ec89c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC89Cu;
    {
        const bool branch_taken_0x2ec89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec89c) {
            ctx->pc = 0x2EC8B0u;
            goto label_2ec8b0;
        }
    }
    ctx->pc = 0x2EC8A4u;
    // 0x2ec8a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC8A4u;
    {
        const bool branch_taken_0x2ec8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8a4) {
            ctx->pc = 0x2EC8B8u;
            goto label_2ec8b8;
        }
    }
    ctx->pc = 0x2EC8ACu;
    // 0x2ec8ac: 0x0  nop
    ctx->pc = 0x2ec8acu;
    // NOP
label_2ec8b0:
    // 0x2ec8b0: 0xc0bb1c8  jal         func_2EC720
    ctx->pc = 0x2EC8B0u;
    SET_GPR_U32(ctx, 31, 0x2EC8B8u);
    ctx->pc = 0x2EC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8B0u;
    // 0x2ec8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC720u, 0x2EC8B0u, 0x2EC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8B8u;
label_2ec8b8:
    // 0x2ec8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C0u;
        // 0x2ec8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC8C8u;
}
