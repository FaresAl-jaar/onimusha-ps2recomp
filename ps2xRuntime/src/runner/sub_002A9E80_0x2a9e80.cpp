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

// Function: sub_002A9E80
// Address: 0x2a9e80 - 0x2a9ed0
void sub_002A9E80_0x2a9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9E80_0x2a9e80");
#endif

    switch (ctx->pc) {
        case 0x2a9ec4u: goto label_2a9ec4;
        default: break;
    }

    ctx->pc = 0x2a9e80u;

    // 0x2a9e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9e84: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a9e84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a9e8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9e90: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2a9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2a9e94: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a9e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e98: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a9e9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a9ea0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2a9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2a9ea4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ea8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9eb0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2a9eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eb8: 0x3445b33c  ori         $a1, $v0, 0xB33C
    ctx->pc = 0x2a9eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45884);
    // 0x2a9ebc: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A9EBCu;
    SET_GPR_U32(ctx, 31, 0x2A9EC4u);
    ctx->pc = 0x2A9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EBCu;
    // 0x2a9ec0: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A9EBCu, 0x2A9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EC4u;
label_2a9ec4:
    // 0x2a9ec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EC8u;
        // 0x2a9ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9ED0u;
}
