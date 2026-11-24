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

// Function: sub_00203710
// Address: 0x203710 - 0x203760
void sub_00203710_0x203710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203710_0x203710");
#endif

    switch (ctx->pc) {
        case 0x203724u: goto label_203724;
        default: break;
    }

    ctx->pc = 0x203710u;

    // 0x203710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203718: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x203718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20371c: 0xc081544  jal         func_205510
    ctx->pc = 0x20371Cu;
    SET_GPR_U32(ctx, 31, 0x203724u);
    ctx->pc = 0x203720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20371Cu;
    // 0x203720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20371Cu, 0x203724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203728: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x203728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20372c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203730: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203730u;
    {
        const bool branch_taken_0x203730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203730u;
        // 0x203734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203730) {
            ctx->pc = 0x20374Cu;
            goto label_20374c;
        }
    }
    ctx->pc = 0x203738u;
    // 0x203738: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x203738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x20373c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203740: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x203744: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x203744u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x203748: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x203748u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_20374c:
    // 0x20374c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203754: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203758: 0x3e00008  jr          $ra
    ctx->pc = 0x203758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203758u;
        // 0x20375c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203760u;
}
