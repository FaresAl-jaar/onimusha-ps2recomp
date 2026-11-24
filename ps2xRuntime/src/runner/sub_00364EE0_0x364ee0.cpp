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

// Function: sub_00364EE0
// Address: 0x364ee0 - 0x364f1c
void sub_00364EE0_0x364ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364EE0_0x364ee0");
#endif

    switch (ctx->pc) {
        case 0x364f04u: goto label_364f04;
        case 0x364f10u: goto label_364f10;
        default: break;
    }

    ctx->pc = 0x364ee0u;

    // 0x364ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364ee4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x364ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364eec: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x364eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x364ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364efc: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x364EFCu;
    SET_GPR_U32(ctx, 31, 0x364F04u);
    ctx->pc = 0x364F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EFCu;
    // 0x364f00: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x364EFCu, 0x364F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F04u;
label_364f04:
    // 0x364f04: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x364f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x364f08: 0xc0d93cc  jal         func_364F30
    ctx->pc = 0x364F08u;
    SET_GPR_U32(ctx, 31, 0x364F10u);
    ctx->pc = 0x364F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F08u;
    // 0x364f0c: 0x2484e6b0  addiu       $a0, $a0, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F30u, 0x364F08u, 0x364F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F10u;
label_364f10:
    // 0x364f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364f14: 0x3e00008  jr          $ra
    ctx->pc = 0x364F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F14u;
        // 0x364f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364F1Cu;
}
