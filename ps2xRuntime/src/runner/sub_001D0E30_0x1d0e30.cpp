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

// Function: sub_001D0E30
// Address: 0x1d0e30 - 0x1d0eb4
void sub_001D0E30_0x1d0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E30_0x1d0e30");
#endif

    switch (ctx->pc) {
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e70u: goto label_1d0e70;
        default: break;
    }

    ctx->pc = 0x1d0e30u;

    // 0x1d0e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0e3c: 0xc074364  jal         func_1D0D90
    ctx->pc = 0x1D0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E44u);
    ctx->pc = 0x1D0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3Cu;
    // 0x1d0e40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D0E3Cu, 0x1D0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E44u;
label_1d0e44:
    // 0x1d0e44: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1d0e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d0e48: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1d0e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d0e4c: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1d0e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1d0e50: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1d0e50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d0e54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d0e54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d0e58: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1d0e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d0e5c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d0e60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d0e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d0e64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0E64u;
    {
        const bool branch_taken_0x1d0e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e64) {
            ctx->pc = 0x1D0EA0u;
            goto label_1d0ea0;
        }
    }
    ctx->pc = 0x1D0E6Cu;
    // 0x1d0e6c: 0x0  nop
    ctx->pc = 0x1d0e6cu;
    // NOP
label_1d0e70:
    // 0x1d0e70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d0e74: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1d0e74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d0e78: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1d0e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d0e7c: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1d0e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1d0e80: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1d0e80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d0e84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d0e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d0e88: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x1d0e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d0e8c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d0e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d0e90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d0e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d0e94: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0E94u;
    {
        const bool branch_taken_0x1d0e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E94u;
        // 0x1d0e98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e94) {
            ctx->pc = 0x1D0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e70;
        }
    }
    ctx->pc = 0x1D0E9Cu;
    // 0x1d0e9c: 0x0  nop
    ctx->pc = 0x1d0e9cu;
    // NOP
label_1d0ea0:
    // 0x1d0ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EACu;
        // 0x1d0eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EB4u;
}
