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

// Function: sub_0022F6F8
// Address: 0x22f6f8 - 0x22f748
void sub_0022F6F8_0x22f6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F6F8_0x22f6f8");
#endif

    switch (ctx->pc) {
        case 0x22f73cu: goto label_22f73c;
        default: break;
    }

    ctx->pc = 0x22f6f8u;

    // 0x22f6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f6fc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x22f6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f700: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22f700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f708: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x22f708u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x22f70c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f710: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x22f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x22f714: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x22f714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f718: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22f718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f720: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22f720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22f724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f72c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x22f72cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x22f730: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f734: 0xc08be04  jal         func_22F810
    ctx->pc = 0x22F734u;
    SET_GPR_U32(ctx, 31, 0x22F73Cu);
    ctx->pc = 0x22F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F734u;
    // 0x22f738: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F810u, 0x22F734u, 0x22F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F73Cu;
label_22f73c:
    // 0x22f73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f740: 0x3e00008  jr          $ra
    ctx->pc = 0x22F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F740u;
        // 0x22f744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F748u;
}
