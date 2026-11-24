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

// Function: sub_00206EE8
// Address: 0x206ee8 - 0x206f2c
void sub_00206EE8_0x206ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206EE8_0x206ee8");
#endif

    switch (ctx->pc) {
        case 0x206efcu: goto label_206efc;
        case 0x206f08u: goto label_206f08;
        case 0x206f14u: goto label_206f14;
        default: break;
    }

    ctx->pc = 0x206ee8u;

    // 0x206ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x206ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x206ef4: 0xc0410a6  jal         func_104298
    ctx->pc = 0x206EF4u;
    SET_GPR_U32(ctx, 31, 0x206EFCu);
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x206EF4u, 0x206EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EFCu;
label_206efc:
    // 0x206efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f04: 0x0  nop
    ctx->pc = 0x206f04u;
    // NOP
label_206f08:
    // 0x206f08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206f0c: 0xc04121a  jal         func_104868
    ctx->pc = 0x206F0Cu;
    SET_GPR_U32(ctx, 31, 0x206F14u);
    ctx->pc = 0x206F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F0Cu;
    // 0x206f10: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x206F0Cu, 0x206F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F14u;
label_206f14:
    // 0x206f14: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x206F14u;
    {
        const bool branch_taken_0x206f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F14u;
        // 0x206f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f14) {
            ctx->pc = 0x206F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f08;
        }
    }
    ctx->pc = 0x206F1Cu;
    // 0x206f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206f24: 0x3e00008  jr          $ra
    ctx->pc = 0x206F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F24u;
        // 0x206f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206F2Cu;
}
