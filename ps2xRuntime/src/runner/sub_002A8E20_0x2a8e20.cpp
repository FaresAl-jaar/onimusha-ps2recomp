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

// Function: sub_002A8E20
// Address: 0x2a8e20 - 0x2a8e64
void sub_002A8E20_0x2a8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8E20_0x2a8e20");
#endif

    switch (ctx->pc) {
        case 0x2a8e58u: goto label_2a8e58;
        default: break;
    }

    ctx->pc = 0x2a8e20u;

    // 0x2a8e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8e24: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8e24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8e2c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e30: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a8e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a8e34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8e38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e3c: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x2a8e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2a8e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e44: 0x34454d40  ori         $a1, $v0, 0x4D40
    ctx->pc = 0x2a8e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19776);
    // 0x2a8e48: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8e4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8e4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e50: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2A8E50u;
    SET_GPR_U32(ctx, 31, 0x2A8E58u);
    ctx->pc = 0x2A8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E50u;
    // 0x2a8e54: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2A8E50u, 0x2A8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E58u;
label_2a8e58:
    // 0x2a8e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E5Cu;
        // 0x2a8e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8E64u;
}
