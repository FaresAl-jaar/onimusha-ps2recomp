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

// Function: sub_00206F30
// Address: 0x206f30 - 0x206f68
void sub_00206F30_0x206f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F30_0x206f30");
#endif

    switch (ctx->pc) {
        case 0x206f44u: goto label_206f44;
        case 0x206f54u: goto label_206f54;
        default: break;
    }

    ctx->pc = 0x206f30u;

    // 0x206f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206f38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x206f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x206f3c: 0xc0410a6  jal         func_104298
    ctx->pc = 0x206F3Cu;
    SET_GPR_U32(ctx, 31, 0x206F44u);
    ctx->pc = 0x206F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F3Cu;
    // 0x206f40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x206F3Cu, 0x206F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F44u;
label_206f44:
    // 0x206f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206f4c: 0xc04121a  jal         func_104868
    ctx->pc = 0x206F4Cu;
    SET_GPR_U32(ctx, 31, 0x206F54u);
    ctx->pc = 0x206F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F4Cu;
    // 0x206f50: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x206F4Cu, 0x206F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F54u;
label_206f54:
    // 0x206f54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x206f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x206f58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f60: 0x3e00008  jr          $ra
    ctx->pc = 0x206F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F60u;
        // 0x206f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206F68u;
}
