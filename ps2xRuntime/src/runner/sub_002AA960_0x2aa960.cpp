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

// Function: sub_002AA960
// Address: 0x2aa960 - 0x2aa9a0
void sub_002AA960_0x2aa960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA960_0x2aa960");
#endif

    switch (ctx->pc) {
        case 0x2aa994u: goto label_2aa994;
        default: break;
    }

    ctx->pc = 0x2aa960u;

    // 0x2aa960: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2aa960u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa964: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa968: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2aa968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa96c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aa96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa974: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aa974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa978: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aa978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aa97c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aa97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa980: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2aa980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2aa984: 0x3445e4ac  ori         $a1, $v0, 0xE4AC
    ctx->pc = 0x2aa984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58540);
    // 0x2aa988: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa98c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AA98Cu;
    SET_GPR_U32(ctx, 31, 0x2AA994u);
    ctx->pc = 0x2AA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA98Cu;
    // 0x2aa990: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AA98Cu, 0x2AA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA994u;
label_2aa994:
    // 0x2aa994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa998: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA998u;
        // 0x2aa99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA9A0u;
}
