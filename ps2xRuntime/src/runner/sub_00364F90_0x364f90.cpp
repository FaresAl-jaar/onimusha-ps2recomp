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

// Function: sub_00364F90
// Address: 0x364f90 - 0x365018
void sub_00364F90_0x364f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364F90_0x364f90");
#endif

    switch (ctx->pc) {
        case 0x364fd0u: goto label_364fd0;
        case 0x364fe0u: goto label_364fe0;
        case 0x364ff0u: goto label_364ff0;
        case 0x364ff8u: goto label_364ff8;
        default: break;
    }

    ctx->pc = 0x364f90u;

    // 0x364f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x364f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x364f94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x364f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x364f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x364f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x364fa0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x364fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x364fa4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x364FA4u;
    {
        const bool branch_taken_0x364fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x364FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FA4u;
        // 0x364fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fa4) {
            ctx->pc = 0x364FE8u;
            goto label_364fe8;
        }
    }
    ctx->pc = 0x364FACu;
    // 0x364fac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364fb0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x364FB0u;
    {
        const bool branch_taken_0x364fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x364FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FB0u;
        // 0x364fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fb0) {
            ctx->pc = 0x364FD8u;
            goto label_364fd8;
        }
    }
    ctx->pc = 0x364FB8u;
    // 0x364fb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364FB8u;
    {
        const bool branch_taken_0x364fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x364fb8) {
            ctx->pc = 0x364FC8u;
            goto label_364fc8;
        }
    }
    ctx->pc = 0x364FC0u;
    // 0x364fc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x364FC0u;
    {
        const bool branch_taken_0x364fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364fc0) {
            ctx->pc = 0x364FF8u;
            goto label_364ff8;
        }
    }
    ctx->pc = 0x364FC8u;
label_364fc8:
    // 0x364fc8: 0xc0d940c  jal         func_365030
    ctx->pc = 0x364FC8u;
    SET_GPR_U32(ctx, 31, 0x364FD0u);
    ctx->pc = 0x365030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365030u, 0x364FC8u, 0x364FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FD0u;
label_364fd0:
    // 0x364fd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x364FD0u;
    {
        const bool branch_taken_0x364fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364fd0) {
            ctx->pc = 0x364FF8u;
            goto label_364ff8;
        }
    }
    ctx->pc = 0x364FD8u;
label_364fd8:
    // 0x364fd8: 0xc0d9478  jal         func_3651E0
    ctx->pc = 0x364FD8u;
    SET_GPR_U32(ctx, 31, 0x364FE0u);
    ctx->pc = 0x3651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3651E0u, 0x364FD8u, 0x364FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FE0u;
label_364fe0:
    // 0x364fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x364FE0u;
    {
        const bool branch_taken_0x364fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364fe0) {
            ctx->pc = 0x364FF8u;
            goto label_364ff8;
        }
    }
    ctx->pc = 0x364FE8u;
label_364fe8:
    // 0x364fe8: 0xc0d9094  jal         func_364250
    ctx->pc = 0x364FE8u;
    SET_GPR_U32(ctx, 31, 0x364FF0u);
    ctx->pc = 0x364250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364250u, 0x364FE8u, 0x364FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FF0u;
label_364ff0:
    // 0x364ff0: 0xc0d91ec  jal         func_3647B0
    ctx->pc = 0x364FF0u;
    SET_GPR_U32(ctx, 31, 0x364FF8u);
    ctx->pc = 0x364FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FF0u;
    // 0x364ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3647B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3647B0u, 0x364FF0u, 0x364FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FF8u;
label_364ff8:
    // 0x364ff8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x364ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x364ffc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x364FFCu;
    {
        const bool branch_taken_0x364ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FFCu;
        // 0x365000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ffc) {
            ctx->pc = 0x365008u;
            goto label_365008;
        }
    }
    ctx->pc = 0x365004u;
    // 0x365004: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x365004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_365008:
    // 0x365008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36500c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36500cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365010: 0x3e00008  jr          $ra
    ctx->pc = 0x365010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365010u;
        // 0x365014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365018u;
}
