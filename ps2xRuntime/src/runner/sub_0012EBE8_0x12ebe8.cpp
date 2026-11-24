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

// Function: sub_0012EBE8
// Address: 0x12ebe8 - 0x12ec3c
void sub_0012EBE8_0x12ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EBE8_0x12ebe8");
#endif

    switch (ctx->pc) {
        case 0x12ec08u: goto label_12ec08;
        case 0x12ec18u: goto label_12ec18;
        case 0x12ec24u: goto label_12ec24;
        case 0x12ec2cu: goto label_12ec2c;
        default: break;
    }

    ctx->pc = 0x12ebe8u;

    // 0x12ebe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12ebec: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x12ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x12ebf0: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x12ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x12ebf4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12ebf8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ebfc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x12ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12ec00: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12EC00u;
    SET_GPR_U32(ctx, 31, 0x12EC08u);
    ctx->pc = 0x12EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC00u;
    // 0x12ec04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12EC00u, 0x12EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC08u;
label_12ec08:
    // 0x12ec08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12ec08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ec0c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x12ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x12ec10: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12EC10u;
    SET_GPR_U32(ctx, 31, 0x12EC18u);
    ctx->pc = 0x12EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC10u;
    // 0x12ec14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12EC10u, 0x12EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC18u;
label_12ec18:
    // 0x12ec18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec1c: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12EC1Cu;
    SET_GPR_U32(ctx, 31, 0x12EC24u);
    ctx->pc = 0x12EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC1Cu;
    // 0x12ec20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12EC1Cu, 0x12EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC24u;
label_12ec24:
    // 0x12ec24: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12EC24u;
    SET_GPR_U32(ctx, 31, 0x12EC2Cu);
    ctx->pc = 0x12EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC24u;
    // 0x12ec28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12EC24u, 0x12EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC2Cu;
label_12ec2c:
    // 0x12ec2c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12ec2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ec30: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12ec34: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC34u;
        // 0x12ec38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC3Cu;
}
