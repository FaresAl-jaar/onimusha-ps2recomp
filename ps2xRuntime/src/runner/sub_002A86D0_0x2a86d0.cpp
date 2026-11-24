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

// Function: sub_002A86D0
// Address: 0x2a86d0 - 0x2a8714
void sub_002A86D0_0x2a86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A86D0_0x2a86d0");
#endif

    switch (ctx->pc) {
        case 0x2a8708u: goto label_2a8708;
        default: break;
    }

    ctx->pc = 0x2a86d0u;

    // 0x2a86d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a86d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a86d4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a86d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a86dc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a86dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86e0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a86e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a86e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a86e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86ec: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2a86ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a86f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86f4: 0x34452524  ori         $a1, $v0, 0x2524
    ctx->pc = 0x2a86f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9508);
    // 0x2a86f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a86f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a86fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a86fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8700: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2A8700u;
    SET_GPR_U32(ctx, 31, 0x2A8708u);
    ctx->pc = 0x2A8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8700u;
    // 0x2a8704: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2A8700u, 0x2A8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8708u;
label_2a8708:
    // 0x2a8708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a870c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A870Cu;
        // 0x2a8710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8714u;
}
