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

// Function: sub_0020EA30
// Address: 0x20ea30 - 0x20ea70
void sub_0020EA30_0x20ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EA30_0x20ea30");
#endif

    switch (ctx->pc) {
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea5cu: goto label_20ea5c;
        default: break;
    }

    ctx->pc = 0x20ea30u;

    // 0x20ea30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ea34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20ea38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ea3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20ea40: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20EA40u;
    SET_GPR_U32(ctx, 31, 0x20EA48u);
    ctx->pc = 0x20EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA40u;
    // 0x20ea44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20EA40u, 0x20EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA48u;
label_20ea48:
    // 0x20ea48: 0x2603365c  addiu       $v1, $s0, 0x365C
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13916));
    // 0x20ea4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EA4Cu;
    {
        const bool branch_taken_0x20ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA4Cu;
        // 0x20ea50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea4c) {
            ctx->pc = 0x20EA60u;
            goto label_20ea60;
        }
    }
    ctx->pc = 0x20EA54u;
    // 0x20ea54: 0xc083a9c  jal         func_20EA70
    ctx->pc = 0x20EA54u;
    SET_GPR_U32(ctx, 31, 0x20EA5Cu);
    ctx->pc = 0x20EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA54u;
    // 0x20ea58: 0xae032114  sw          $v1, 0x2114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8468), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EA70u, 0x20EA54u, 0x20EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA5Cu;
label_20ea5c:
    // 0x20ea5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ea5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ea60:
    // 0x20ea60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ea60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ea68: 0x3e00008  jr          $ra
    ctx->pc = 0x20EA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA68u;
        // 0x20ea6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EA70u;
}
