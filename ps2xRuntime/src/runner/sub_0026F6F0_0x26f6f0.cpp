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

// Function: sub_0026F6F0
// Address: 0x26f6f0 - 0x26f74c
void sub_0026F6F0_0x26f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F6F0_0x26f6f0");
#endif

    switch (ctx->pc) {
        case 0x26f70cu: goto label_26f70c;
        case 0x26f720u: goto label_26f720;
        case 0x26f740u: goto label_26f740;
        default: break;
    }

    ctx->pc = 0x26f6f0u;

    // 0x26f6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f6fc: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x26f6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f700: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f704: 0xc0951c0  jal         func_254700
    ctx->pc = 0x26F704u;
    SET_GPR_U32(ctx, 31, 0x26F70Cu);
    ctx->pc = 0x26F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F704u;
    // 0x26f708: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x26F704u, 0x26F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F70Cu;
label_26f70c:
    // 0x26f70c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f714: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26f718: 0xc095130  jal         func_2544C0
    ctx->pc = 0x26F718u;
    SET_GPR_U32(ctx, 31, 0x26F720u);
    ctx->pc = 0x26F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F718u;
    // 0x26f71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x26F718u, 0x26F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F720u;
label_26f720:
    // 0x26f720: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f724: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x26f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x26f728: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26f72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f738: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26F738u;
    SET_GPR_U32(ctx, 31, 0x26F740u);
    ctx->pc = 0x26F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F738u;
    // 0x26f73c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26F738u, 0x26F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F740u;
label_26f740:
    // 0x26f740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f744: 0x3e00008  jr          $ra
    ctx->pc = 0x26F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F744u;
        // 0x26f748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F74Cu;
}
