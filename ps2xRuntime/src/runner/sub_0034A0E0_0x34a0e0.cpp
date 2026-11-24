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

// Function: sub_0034A0E0
// Address: 0x34a0e0 - 0x34a148
void sub_0034A0E0_0x34a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A0E0_0x34a0e0");
#endif

    switch (ctx->pc) {
        case 0x34a0f4u: goto label_34a0f4;
        case 0x34a100u: goto label_34a100;
        case 0x34a108u: goto label_34a108;
        default: break;
    }

    ctx->pc = 0x34a0e0u;

    // 0x34a0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34a0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a0ec: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x34A0ECu;
    SET_GPR_U32(ctx, 31, 0x34A0F4u);
    ctx->pc = 0x34A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A0ECu;
    // 0x34a0f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x34A0ECu, 0x34A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0F4u;
label_34a0f4:
    // 0x34a0f4: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x34a0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34a0f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34a0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a0fc: 0x0  nop
    ctx->pc = 0x34a0fcu;
    // NOP
label_34a100:
    // 0x34a100: 0xc0d9044  jal         func_364110
    ctx->pc = 0x34A100u;
    SET_GPR_U32(ctx, 31, 0x34A108u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x34A100u, 0x34A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A108u;
label_34a108:
    // 0x34a108: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34a108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a110: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A110u;
    {
        const bool branch_taken_0x34a110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a110) {
            ctx->pc = 0x34A120u;
            goto label_34a120;
        }
    }
    ctx->pc = 0x34A118u;
    // 0x34a118: 0xa220003a  sb          $zero, 0x3A($s1)
    ctx->pc = 0x34a118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a11c: 0x0  nop
    ctx->pc = 0x34a11cu;
    // NOP
label_34a120:
    // 0x34a120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34a120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34a124: 0xa2200043  sb          $zero, 0x43($s1)
    ctx->pc = 0x34a124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a128: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x34a128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34a12c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x34A12Cu;
    {
        const bool branch_taken_0x34a12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A12Cu;
        // 0x34a130: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a12c) {
            ctx->pc = 0x34A100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a100;
        }
    }
    ctx->pc = 0x34A134u;
    // 0x34a134: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a140: 0x3e00008  jr          $ra
    ctx->pc = 0x34A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A140u;
        // 0x34a144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A148u;
}
