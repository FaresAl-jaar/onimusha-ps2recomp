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

// Function: sub_002A7570
// Address: 0x2a7570 - 0x2a75ac
void sub_002A7570_0x2a7570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7570_0x2a7570");
#endif

    switch (ctx->pc) {
        case 0x2a75a0u: goto label_2a75a0;
        default: break;
    }

    ctx->pc = 0x2a7570u;

    // 0x2a7570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7574: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7578: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a757c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a757cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7588: 0x3405d6bc  ori         $a1, $zero, 0xD6BC
    ctx->pc = 0x2a7588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54972);
    // 0x2a758c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2a758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2a7590: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7594: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7598: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7598u;
    SET_GPR_U32(ctx, 31, 0x2A75A0u);
    ctx->pc = 0x2A759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7598u;
    // 0x2a759c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7598u, 0x2A75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75A0u;
label_2a75a0:
    // 0x2a75a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a75a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a75a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75A4u;
        // 0x2a75a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A75A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A75ACu;
}
