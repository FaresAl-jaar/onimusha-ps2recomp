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

// Function: sub_00203F18
// Address: 0x203f18 - 0x203f4c
void sub_00203F18_0x203f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F18_0x203f18");
#endif

    switch (ctx->pc) {
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        default: break;
    }

    ctx->pc = 0x203f18u;

label_203f18:
    // 0x203f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203f1c:
    // 0x203f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_203f20:
    // 0x203f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x203f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_203f24:
    // 0x203f24: 0xc081544  jal         func_205510
label_203f28:
    if (ctx->pc == 0x203F28u) {
        ctx->pc = 0x203F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F24u;
        // 0x203f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F2Cu;
        goto label_203f2c;
    }
    ctx->pc = 0x203F24u;
    SET_GPR_U32(ctx, 31, 0x203F2Cu);
    ctx->pc = 0x203F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F24u;
    // 0x203f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x203F24u, 0x203F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F2Cu;
label_203f2c:
    // 0x203f2c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_203f30:
    // 0x203f30: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x203f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_203f34:
    // 0x203f34: 0x40f809  jalr        $v0
label_203f38:
    if (ctx->pc == 0x203F38u) {
        ctx->pc = 0x203F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F34u;
        // 0x203f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F3Cu;
        goto label_203f3c;
    }
    ctx->pc = 0x203F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203F3Cu);
        ctx->pc = 0x203F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F34u;
        // 0x203f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F34u, 0x203F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203F3Cu;
label_203f3c:
    // 0x203f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203f40:
    // 0x203f40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_203f44:
    // 0x203f44: 0x3e00008  jr          $ra
label_203f48:
    if (ctx->pc == 0x203F48u) {
        ctx->pc = 0x203F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F44u;
        // 0x203f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F4Cu;
        goto label_fallthrough_0x203f44;
    }
    ctx->pc = 0x203F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F44u;
        // 0x203f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203f44:
    ctx->pc = 0x203F4Cu;
}
