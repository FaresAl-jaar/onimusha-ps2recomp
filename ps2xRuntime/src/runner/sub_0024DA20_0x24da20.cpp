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

// Function: sub_0024DA20
// Address: 0x24da20 - 0x24da90
void sub_0024DA20_0x24da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DA20_0x24da20");
#endif

    switch (ctx->pc) {
        case 0x24da4cu: goto label_24da4c;
        case 0x24da54u: goto label_24da54;
        case 0x24da5cu: goto label_24da5c;
        case 0x24da68u: goto label_24da68;
        default: break;
    }

    ctx->pc = 0x24da20u;

    // 0x24da20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24da24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24da28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24da2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24da30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24da34: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x24da34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24da38: 0x8e3000e8  lw          $s0, 0xE8($s1)
    ctx->pc = 0x24da38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x24da3c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x24DA3Cu;
    {
        const bool branch_taken_0x24da3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da3c) {
            ctx->pc = 0x24DA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA3Cu;
            // 0x24da40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA80u;
            goto label_24da80;
        }
    }
    ctx->pc = 0x24DA44u;
    // 0x24da44: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x24DA44u;
    SET_GPR_U32(ctx, 31, 0x24DA4Cu);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x24DA44u, 0x24DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA4Cu;
label_24da4c:
    // 0x24da4c: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x24DA4Cu;
    SET_GPR_U32(ctx, 31, 0x24DA54u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x24DA4Cu, 0x24DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA54u;
label_24da54:
    // 0x24da54: 0xc093470  jal         func_24D1C0
    ctx->pc = 0x24DA54u;
    SET_GPR_U32(ctx, 31, 0x24DA5Cu);
    ctx->pc = 0x24DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA54u;
    // 0x24da58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D1C0u, 0x24DA54u, 0x24DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA5Cu;
label_24da5c:
    // 0x24da5c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x24da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x24da60: 0xc09340c  jal         func_24D030
    ctx->pc = 0x24DA60u;
    SET_GPR_U32(ctx, 31, 0x24DA68u);
    ctx->pc = 0x24DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA60u;
    // 0x24da64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D030u, 0x24DA60u, 0x24DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA68u;
label_24da68:
    // 0x24da68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24da68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24da6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24da6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24da70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da74: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x24DA74u;
    ctx->pc = 0x24DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA74u;
    // 0x24da78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x24DA7Cu;
    // 0x24da7c: 0x0  nop
    ctx->pc = 0x24da7cu;
    // NOP
label_24da80:
    // 0x24da80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24da80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24da84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24da84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da88: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA88u;
        // 0x24da8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA90u;
}
