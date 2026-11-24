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

// Function: sub_0032FBD0
// Address: 0x32fbd0 - 0x32fc54
void sub_0032FBD0_0x32fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FBD0_0x32fbd0");
#endif

    switch (ctx->pc) {
        case 0x32fc08u: goto label_32fc08;
        case 0x32fc24u: goto label_32fc24;
        case 0x32fc34u: goto label_32fc34;
        case 0x32fc40u: goto label_32fc40;
        default: break;
    }

    ctx->pc = 0x32fbd0u;

    // 0x32fbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32fbd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32fbd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32fbdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32fbe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32fbe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32fbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbe8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x32fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x32fbec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32FBECu;
    {
        const bool branch_taken_0x32fbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBECu;
        // 0x32fbf0: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbec) {
            ctx->pc = 0x32FC28u;
            goto label_32fc28;
        }
    }
    ctx->pc = 0x32FBF4u;
    // 0x32fbf4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fbf8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x32FBF8u;
    {
        const bool branch_taken_0x32fbf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBF8u;
        // 0x32fbfc: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbf8) {
            ctx->pc = 0x32FC28u;
            goto label_32fc28;
        }
    }
    ctx->pc = 0x32FC00u;
    // 0x32fc00: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x32FC00u;
    SET_GPR_U32(ctx, 31, 0x32FC08u);
    ctx->pc = 0x32FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC00u;
    // 0x32fc04: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x32FC00u, 0x32FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC08u;
label_32fc08:
    // 0x32fc08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32FC08u;
    {
        const bool branch_taken_0x32fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fc08) {
            ctx->pc = 0x32FC28u;
            goto label_32fc28;
        }
    }
    ctx->pc = 0x32FC10u;
    // 0x32fc10: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x32fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x32fc14: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x32fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x32fc18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32fc1c: 0xc0bce48  jal         func_2F3920
    ctx->pc = 0x32FC1Cu;
    SET_GPR_U32(ctx, 31, 0x32FC24u);
    ctx->pc = 0x32FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC1Cu;
    // 0x32fc20: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3920u, 0x32FC1Cu, 0x32FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC24u;
label_32fc24:
    // 0x32fc24: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x32fc24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_32fc28:
    // 0x32fc28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc2c: 0xc0cbf1c  jal         func_32FC70
    ctx->pc = 0x32FC2Cu;
    SET_GPR_U32(ctx, 31, 0x32FC34u);
    ctx->pc = 0x32FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC2Cu;
    // 0x32fc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC70u, 0x32FC2Cu, 0x32FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC34u;
label_32fc34:
    // 0x32fc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc38: 0xc0cbfd8  jal         func_32FF60
    ctx->pc = 0x32FC38u;
    SET_GPR_U32(ctx, 31, 0x32FC40u);
    ctx->pc = 0x32FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC38u;
    // 0x32fc3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF60u, 0x32FC38u, 0x32FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC40u;
label_32fc40:
    // 0x32fc40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32fc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fc44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x32FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC4Cu;
        // 0x32fc50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FC54u;
}
