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

// Function: sub_001D0BF0
// Address: 0x1d0bf0 - 0x1d0c84
void sub_001D0BF0_0x1d0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BF0_0x1d0bf0");
#endif

    switch (ctx->pc) {
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c58u: goto label_1d0c58;
        default: break;
    }

    ctx->pc = 0x1d0bf0u;

    // 0x1d0bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0bf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d0bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d0c00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0c04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d0c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0c0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d0c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0c14: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d0c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c1c: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x1d0c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1d0c20: 0x9384855c  lbu         $a0, -0x7AA4($gp)
    ctx->pc = 0x1d0c20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935900)));
    // 0x1d0c24: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x1d0c24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d0c28: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x1d0c28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d0c2c: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x1D0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C34u);
    ctx->pc = 0x1D0C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C2Cu;
    // 0x1d0c30: 0x2406009c  addiu       $a2, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x1D0C2Cu, 0x1D0C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C34u;
label_1d0c34:
    // 0x1d0c34: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1d0c38: 0x1663000b  bne         $s3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0C38u;
    {
        const bool branch_taken_0x1d0c38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C38u;
        // 0x1d0c3c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c38) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C40u;
    // 0x1d0c40: 0x16230009  bne         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0C40u;
    {
        const bool branch_taken_0x1d0c40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C40u;
        // 0x1d0c44: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c40) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C48u;
    // 0x1d0c48: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x1d0c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1d0c4c: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x1d0c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d0c50: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x1D0C50u;
    SET_GPR_U32(ctx, 31, 0x1D0C58u);
    ctx->pc = 0x1D0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C50u;
    // 0x1d0c54: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x1D0C50u, 0x1D0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C58u;
label_1d0c58:
    // 0x1d0c58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d0c5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d0c60: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1d0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1d0c64: 0x0  nop
    ctx->pc = 0x1d0c64u;
    // NOP
label_1d0c68:
    // 0x1d0c68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C7Cu;
        // 0x1d0c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C84u;
}
