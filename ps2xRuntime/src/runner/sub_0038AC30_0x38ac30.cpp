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

// Function: sub_0038AC30
// Address: 0x38ac30 - 0x38aca8
void sub_0038AC30_0x38ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AC30_0x38ac30");
#endif

    switch (ctx->pc) {
        case 0x38ac4cu: goto label_38ac4c;
        case 0x38ac70u: goto label_38ac70;
        case 0x38ac7cu: goto label_38ac7c;
        default: break;
    }

    ctx->pc = 0x38ac30u;

    // 0x38ac30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38ac34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38ac38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38ac3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ac40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ac40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac44: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38AC44u;
    SET_GPR_U32(ctx, 31, 0x38AC4Cu);
    ctx->pc = 0x38AC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC44u;
    // 0x38ac48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38AC44u, 0x38AC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC4Cu;
label_38ac4c:
    // 0x38ac4c: 0xa6302ace  sh          $s0, 0x2ACE($s1)
    ctx->pc = 0x38ac4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10958), (uint16_t)GPR_U32(ctx, 16));
    // 0x38ac50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x38ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38ac54: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x38ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x38ac58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac5c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x38ac60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x38ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38ac64: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x38ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x38ac68: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38AC68u;
    SET_GPR_U32(ctx, 31, 0x38AC70u);
    ctx->pc = 0x38AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC68u;
    // 0x38ac6c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38AC68u, 0x38AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC70u;
label_38ac70:
    // 0x38ac70: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x38ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x38ac74: 0xc0d168c  jal         func_345A30
    ctx->pc = 0x38AC74u;
    SET_GPR_U32(ctx, 31, 0x38AC7Cu);
    ctx->pc = 0x38AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC74u;
    // 0x38ac78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x38AC74u, 0x38AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC7Cu;
label_38ac7c:
    // 0x38ac7c: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x38ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x38ac80: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x38ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x38ac84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38ac84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38ac88: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x38ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38ac8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38ac90: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x38ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x38ac94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ac98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ac98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ac9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ac9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x38ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACA0u;
        // 0x38aca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38ACA8u;
}
