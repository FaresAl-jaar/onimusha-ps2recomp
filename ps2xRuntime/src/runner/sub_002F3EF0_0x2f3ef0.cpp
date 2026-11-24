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

// Function: sub_002F3EF0
// Address: 0x2f3ef0 - 0x2f3fc4
void sub_002F3EF0_0x2f3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3EF0_0x2f3ef0");
#endif

    switch (ctx->pc) {
        case 0x2f3f0cu: goto label_2f3f0c;
        case 0x2f3fa8u: goto label_2f3fa8;
        default: break;
    }

    ctx->pc = 0x2f3ef0u;

    // 0x2f3ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f3ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f3ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3f00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f3f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f04: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F3F04u;
    SET_GPR_U32(ctx, 31, 0x2F3F0Cu);
    ctx->pc = 0x2F3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F04u;
    // 0x2f3f08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F3F04u, 0x2F3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F0Cu;
label_2f3f0c:
    // 0x2f3f0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F0Cu;
    {
        const bool branch_taken_0x2f3f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f0c) {
            ctx->pc = 0x2F3F20u;
            goto label_2f3f20;
        }
    }
    ctx->pc = 0x2F3F14u;
    // 0x2f3f14: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2F3F14u;
    {
        const bool branch_taken_0x2f3f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F14u;
        // 0x2f3f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f14) {
            ctx->pc = 0x2F3FB0u;
            goto label_2f3fb0;
        }
    }
    ctx->pc = 0x2F3F1Cu;
    // 0x2f3f1c: 0x0  nop
    ctx->pc = 0x2f3f1cu;
    // NOP
label_2f3f20:
    // 0x2f3f20: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2f3f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3f24: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2f3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f3f28: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2f3f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2f3f2c: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x2f3f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x2f3f30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3F30u;
    {
        const bool branch_taken_0x2f3f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F30u;
        // 0x2f3f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f30) {
            ctx->pc = 0x2F3F40u;
            goto label_2f3f40;
        }
    }
    ctx->pc = 0x2F3F38u;
    // 0x2f3f38: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3F38u;
    {
        const bool branch_taken_0x2f3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f38) {
            ctx->pc = 0x2F3FB0u;
            goto label_2f3fb0;
        }
    }
    ctx->pc = 0x2F3F40u;
label_2f3f40:
    // 0x2f3f40: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2f3f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f3f44: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3F44u;
    {
        const bool branch_taken_0x2f3f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f44) {
            ctx->pc = 0x2F3F68u;
            goto label_2f3f68;
        }
    }
    ctx->pc = 0x2F3F4Cu;
    // 0x2f3f4c: 0x3003007f  andi        $v1, $zero, 0x7F
    ctx->pc = 0x2f3f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)127);
    // 0x2f3f50: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x2f3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3f54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f3f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f3f58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f3f5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3f60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3F60u;
    {
        const bool branch_taken_0x2f3f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F60u;
        // 0x2f3f64: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f60) {
            ctx->pc = 0x2F3F88u;
            goto label_2f3f88;
        }
    }
    ctx->pc = 0x2F3F68u;
label_2f3f68:
    // 0x2f3f68: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2f3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2f3f6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2f3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3f70: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x2f3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3f74: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2f3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2f3f78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f3f7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f3f80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3f84: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2f3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f3f88:
    // 0x2f3f88: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f3f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3f8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f3f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f3f90: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x2f3f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x2f3f94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F94u;
    {
        const bool branch_taken_0x2f3f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F94u;
        // 0x2f3f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f94) {
            ctx->pc = 0x2F3FA8u;
            goto label_2f3fa8;
        }
    }
    ctx->pc = 0x2F3F9Cu;
    // 0x2f3f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fa0: 0xc049590  jal         func_125640
    ctx->pc = 0x2F3FA0u;
    SET_GPR_U32(ctx, 31, 0x2F3FA8u);
    ctx->pc = 0x2F3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FA0u;
    // 0x2f3fa4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F3FA0u, 0x2F3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FA8u;
label_2f3fa8:
    // 0x2f3fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3fac: 0x0  nop
    ctx->pc = 0x2f3facu;
    // NOP
label_2f3fb0:
    // 0x2f3fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FBCu;
        // 0x2f3fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3FC4u;
}
