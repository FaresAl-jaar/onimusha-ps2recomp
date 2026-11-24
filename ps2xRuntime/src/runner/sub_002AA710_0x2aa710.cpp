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

// Function: sub_002AA710
// Address: 0x2aa710 - 0x2aa754
void sub_002AA710_0x2aa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA710_0x2aa710");
#endif

    switch (ctx->pc) {
        case 0x2aa748u: goto label_2aa748;
        default: break;
    }

    ctx->pc = 0x2aa710u;

    // 0x2aa710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa714: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2aa714u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa71c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aa71cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa720: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2aa720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2aa724: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aa724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aa728: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aa728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa72c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2aa72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2aa730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aa730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa734: 0x3445d670  ori         $a1, $v0, 0xD670
    ctx->pc = 0x2aa734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54896);
    // 0x2aa738: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa73c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aa73cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa740: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2AA740u;
    SET_GPR_U32(ctx, 31, 0x2AA748u);
    ctx->pc = 0x2AA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA740u;
    // 0x2aa744: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2AA740u, 0x2AA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA748u;
label_2aa748:
    // 0x2aa748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa74c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA74Cu;
        // 0x2aa750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA754u;
}
