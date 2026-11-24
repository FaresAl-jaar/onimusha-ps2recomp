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

// Function: sub_00259F00
// Address: 0x259f00 - 0x259f30
void sub_00259F00_0x259f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F00_0x259f00");
#endif

    switch (ctx->pc) {
        case 0x259f1cu: goto label_259f1c;
        case 0x259f24u: goto label_259f24;
        default: break;
    }

    ctx->pc = 0x259f00u;

    // 0x259f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259f04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x259f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x259f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259f10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x259f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259f14: 0xc0414d0  jal         func_105340
    ctx->pc = 0x259F14u;
    SET_GPR_U32(ctx, 31, 0x259F1Cu);
    ctx->pc = 0x259F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F14u;
    // 0x259f18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x259F14u, 0x259F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F1Cu;
label_259f1c:
    // 0x259f1c: 0xc0967ac  jal         func_259EB0
    ctx->pc = 0x259F1Cu;
    SET_GPR_U32(ctx, 31, 0x259F24u);
    ctx->pc = 0x259F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F1Cu;
    // 0x259f20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EB0u, 0x259F1Cu, 0x259F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F24u;
label_259f24:
    // 0x259f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f28: 0x3e00008  jr          $ra
    ctx->pc = 0x259F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F28u;
        // 0x259f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259F30u;
}
