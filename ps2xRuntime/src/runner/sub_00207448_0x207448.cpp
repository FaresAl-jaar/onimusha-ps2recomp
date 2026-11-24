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

// Function: sub_00207448
// Address: 0x207448 - 0x20749c
void sub_00207448_0x207448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207448_0x207448");
#endif

    switch (ctx->pc) {
        case 0x20745cu: goto label_20745c;
        case 0x207478u: goto label_207478;
        case 0x207488u: goto label_207488;
        default: break;
    }

    ctx->pc = 0x207448u;

    // 0x207448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20744c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x207450: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x207450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x207454: 0xc081d84  jal         func_207610
    ctx->pc = 0x207454u;
    SET_GPR_U32(ctx, 31, 0x20745Cu);
    ctx->pc = 0x207458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207454u;
    // 0x207458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207454u, 0x20745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20745Cu;
label_20745c:
    // 0x20745c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207460: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207464: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207464u;
    {
        const bool branch_taken_0x207464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207464u;
        // 0x207468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207464) {
            ctx->pc = 0x207480u;
            goto label_207480;
        }
    }
    ctx->pc = 0x20746Cu;
    // 0x20746c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20746cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207470: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207470u;
    SET_GPR_U32(ctx, 31, 0x207478u);
    ctx->pc = 0x207474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207470u;
    // 0x207474: 0x24847778  addiu       $a0, $a0, 0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207470u, 0x207478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207478u;
label_207478:
    // 0x207478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207478u;
    {
        const bool branch_taken_0x207478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207478u;
        // 0x20747c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207478) {
            ctx->pc = 0x20748Cu;
            goto label_20748c;
        }
    }
    ctx->pc = 0x207480u;
label_207480:
    // 0x207480: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x207480u;
    SET_GPR_U32(ctx, 31, 0x207488u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x207480u, 0x207488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207488u;
label_207488:
    // 0x207488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x207488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_20748c:
    // 0x20748c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x20748cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207490: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x207490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x207494: 0x3e00008  jr          $ra
    ctx->pc = 0x207494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207494u;
        // 0x207498: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20749Cu;
}
