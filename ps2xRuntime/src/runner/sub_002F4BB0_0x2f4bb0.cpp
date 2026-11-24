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

// Function: sub_002F4BB0
// Address: 0x2f4bb0 - 0x2f4c30
void sub_002F4BB0_0x2f4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4BB0_0x2f4bb0");
#endif

    switch (ctx->pc) {
        case 0x2f4bd0u: goto label_2f4bd0;
        case 0x2f4bf0u: goto label_2f4bf0;
        case 0x2f4c00u: goto label_2f4c00;
        case 0x2f4c10u: goto label_2f4c10;
        default: break;
    }

    ctx->pc = 0x2f4bb0u;

    // 0x2f4bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4bb4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f4bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4bb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f4bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4bc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f4bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bc8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4BC8u;
    SET_GPR_U32(ctx, 31, 0x2F4BD0u);
    ctx->pc = 0x2F4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BC8u;
    // 0x2f4bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4BC8u, 0x2F4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BD0u;
label_2f4bd0:
    // 0x2f4bd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4BD0u;
    {
        const bool branch_taken_0x2f4bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4bd0) {
            ctx->pc = 0x2F4BE0u;
            goto label_2f4be0;
        }
    }
    ctx->pc = 0x2F4BD8u;
    // 0x2f4bd8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f4bdc: 0x0  nop
    ctx->pc = 0x2f4bdcu;
    // NOP
label_2f4be0:
    // 0x2f4be0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4BE0u;
    {
        const bool branch_taken_0x2f4be0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BE0u;
        // 0x2f4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4be0) {
            ctx->pc = 0x2F4BF8u;
            goto label_2f4bf8;
        }
    }
    ctx->pc = 0x2F4BE8u;
    // 0x2f4be8: 0xc0bd2d8  jal         func_2F4B60
    ctx->pc = 0x2F4BE8u;
    SET_GPR_U32(ctx, 31, 0x2F4BF0u);
    ctx->pc = 0x2F4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BE8u;
    // 0x2f4bec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B60u, 0x2F4BE8u, 0x2F4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BF0u;
label_2f4bf0:
    // 0x2f4bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bf4: 0x0  nop
    ctx->pc = 0x2f4bf4u;
    // NOP
label_2f4bf8:
    // 0x2f4bf8: 0xc0e5d4c  jal         func_397530
    ctx->pc = 0x2F4BF8u;
    SET_GPR_U32(ctx, 31, 0x2F4C00u);
    ctx->pc = 0x397530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397530u, 0x2F4BF8u, 0x2F4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C00u;
label_2f4c00:
    // 0x2f4c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C00u;
    {
        const bool branch_taken_0x2f4c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C00u;
        // 0x2f4c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c00) {
            ctx->pc = 0x2F4C18u;
            goto label_2f4c18;
        }
    }
    ctx->pc = 0x2F4C08u;
    // 0x2f4c08: 0xc0bd2d8  jal         func_2F4B60
    ctx->pc = 0x2F4C08u;
    SET_GPR_U32(ctx, 31, 0x2F4C10u);
    ctx->pc = 0x2F4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C08u;
    // 0x2f4c0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B60u, 0x2F4C08u, 0x2F4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C10u;
label_2f4c10:
    // 0x2f4c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c14: 0x0  nop
    ctx->pc = 0x2f4c14u;
    // NOP
label_2f4c18:
    // 0x2f4c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4c28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C28u;
        // 0x2f4c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C30u;
}
