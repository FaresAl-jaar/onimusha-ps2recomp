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

// Function: sub_00121838
// Address: 0x121838 - 0x1218a8
void sub_00121838_0x121838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121838_0x121838");
#endif

    switch (ctx->pc) {
        case 0x12187cu: goto label_12187c;
        case 0x12188cu: goto label_12188c;
        default: break;
    }

    ctx->pc = 0x121838u;

    // 0x121838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12183c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x121840: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121844: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x121844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x121848: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x12184c: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x121850: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121854: 0x24844440  addiu       $a0, $a0, 0x4440
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    // 0x121858: 0x24e744c0  addiu       $a3, $a3, 0x44C0
    ctx->pc = 0x121858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17600));
    // 0x12185c: 0x256b0dc8  addiu       $t3, $t3, 0xDC8
    ctx->pc = 0x12185cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3528));
    // 0x121860: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121864: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x121864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x121868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12186c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x121870: 0x26095a00  addiu       $t1, $s0, 0x5A00
    ctx->pc = 0x121870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    // 0x121874: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x121874u;
    SET_GPR_U32(ctx, 31, 0x12187Cu);
    ctx->pc = 0x121878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121874u;
    // 0x121878: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x121874u, 0x12187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12187Cu;
label_12187c:
    // 0x12187c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12187Cu;
    {
        const bool branch_taken_0x12187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12187Cu;
        // 0x121880: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12187c) {
            ctx->pc = 0x121894u;
            goto label_121894;
        }
    }
    ctx->pc = 0x121884u;
    // 0x121884: 0xc044332  jal         func_110CC8
    ctx->pc = 0x121884u;
    SET_GPR_U32(ctx, 31, 0x12188Cu);
    ctx->pc = 0x121888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121884u;
    // 0x121888: 0x248439f0  addiu       $a0, $a0, 0x39F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x121884u, 0x12188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12188Cu;
label_12188c:
    // 0x12188c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12188Cu;
    {
        const bool branch_taken_0x12188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12188Cu;
        // 0x121890: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12188c) {
            ctx->pc = 0x121898u;
            goto label_121898;
        }
    }
    ctx->pc = 0x121894u;
label_121894:
    // 0x121894: 0x8e025a00  lw          $v0, 0x5A00($s0)
    ctx->pc = 0x121894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23040)));
label_121898:
    // 0x121898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12189c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1218a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1218A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1218A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218A0u;
        // 0x1218a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1218A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1218A8u;
}
