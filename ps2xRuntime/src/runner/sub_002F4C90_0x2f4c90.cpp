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

// Function: sub_002F4C90
// Address: 0x2f4c90 - 0x2f4cf4
void sub_002F4C90_0x2f4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4C90_0x2f4c90");
#endif

    switch (ctx->pc) {
        case 0x2f4ca8u: goto label_2f4ca8;
        case 0x2f4cc4u: goto label_2f4cc4;
        case 0x2f4cccu: goto label_2f4ccc;
        case 0x2f4cdcu: goto label_2f4cdc;
        default: break;
    }

    ctx->pc = 0x2f4c90u;

    // 0x2f4c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4c94: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f4c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4ca0: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4CA0u;
    SET_GPR_U32(ctx, 31, 0x2F4CA8u);
    ctx->pc = 0x2F4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CA0u;
    // 0x2f4ca4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4CA0u, 0x2F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CA8u;
label_2f4ca8:
    // 0x2f4ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4CA8u;
    {
        const bool branch_taken_0x2f4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ca8) {
            ctx->pc = 0x2F4CB8u;
            goto label_2f4cb8;
        }
    }
    ctx->pc = 0x2F4CB0u;
    // 0x2f4cb0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2f4cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f4cb4: 0x0  nop
    ctx->pc = 0x2f4cb4u;
    // NOP
label_2f4cb8:
    // 0x2f4cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cbc: 0xc0bd2d8  jal         func_2F4B60
    ctx->pc = 0x2F4CBCu;
    SET_GPR_U32(ctx, 31, 0x2F4CC4u);
    ctx->pc = 0x2F4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CBCu;
    // 0x2f4cc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B60u, 0x2F4CBCu, 0x2F4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CC4u;
label_2f4cc4:
    // 0x2f4cc4: 0xc0e5d4c  jal         func_397530
    ctx->pc = 0x2F4CC4u;
    SET_GPR_U32(ctx, 31, 0x2F4CCCu);
    ctx->pc = 0x2F4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CC4u;
    // 0x2f4cc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397530u, 0x2F4CC4u, 0x2F4CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CCCu;
label_2f4ccc:
    // 0x2f4ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4CCCu;
    {
        const bool branch_taken_0x2f4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CCCu;
        // 0x2f4cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ccc) {
            ctx->pc = 0x2F4CE0u;
            goto label_2f4ce0;
        }
    }
    ctx->pc = 0x2F4CD4u;
    // 0x2f4cd4: 0xc0bd2d8  jal         func_2F4B60
    ctx->pc = 0x2F4CD4u;
    SET_GPR_U32(ctx, 31, 0x2F4CDCu);
    ctx->pc = 0x2F4CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CD4u;
    // 0x2f4cd8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B60u, 0x2F4CD4u, 0x2F4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CDCu;
label_2f4cdc:
    // 0x2f4cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ce0:
    // 0x2f4ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CECu;
        // 0x2f4cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4CF4u;
}
