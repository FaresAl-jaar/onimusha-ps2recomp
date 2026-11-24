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

// Function: sub_002A5AC0
// Address: 0x2a5ac0 - 0x2a5b08
void sub_002A5AC0_0x2a5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5AC0_0x2a5ac0");
#endif

    switch (ctx->pc) {
        case 0x2a5afcu: goto label_2a5afc;
        default: break;
    }

    ctx->pc = 0x2a5ac0u;

    // 0x2a5ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5ac4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a5ac4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5acc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a5ad0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a5ad4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ad8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a5adc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a5adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ae0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ae4: 0x24056918  addiu       $a1, $zero, 0x6918
    ctx->pc = 0x2a5ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26904));
    // 0x2a5ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5aec: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x2a5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2a5af0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5af4: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A5AF4u;
    SET_GPR_U32(ctx, 31, 0x2A5AFCu);
    ctx->pc = 0x2A5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AF4u;
    // 0x2a5af8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A5AF4u, 0x2A5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AFCu;
label_2a5afc:
    // 0x2a5afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B00u;
        // 0x2a5b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5B08u;
}
