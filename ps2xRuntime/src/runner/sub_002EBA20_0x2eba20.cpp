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

// Function: sub_002EBA20
// Address: 0x2eba20 - 0x2ebac4
void sub_002EBA20_0x2eba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBA20_0x2eba20");
#endif

    switch (ctx->pc) {
        case 0x2eba90u: goto label_2eba90;
        default: break;
    }

    ctx->pc = 0x2eba20u;

    // 0x2eba20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eba24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eba28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eba2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eba30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eba34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eba34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba38: 0x80830298  lb          $v1, 0x298($a0)
    ctx->pc = 0x2eba38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x2eba3c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EBA3Cu;
    {
        const bool branch_taken_0x2eba3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA3Cu;
        // 0x2eba40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba3c) {
            ctx->pc = 0x2EBA80u;
            goto label_2eba80;
        }
    }
    ctx->pc = 0x2EBA44u;
    // 0x2eba44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2eba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eba48: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBA48u;
    {
        const bool branch_taken_0x2eba48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eba48) {
            ctx->pc = 0x2EBA70u;
            goto label_2eba70;
        }
    }
    ctx->pc = 0x2EBA50u;
    // 0x2eba50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eba54: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBA54u;
    {
        const bool branch_taken_0x2eba54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eba54) {
            ctx->pc = 0x2EBA70u;
            goto label_2eba70;
        }
    }
    ctx->pc = 0x2EBA5Cu;
    // 0x2eba5c: 0x0  nop
    ctx->pc = 0x2eba5cu;
    // NOP
    // 0x2eba60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eba64: 0xa2220298  sb          $v0, 0x298($s1)
    ctx->pc = 0x2eba64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 664), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eba68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBA68u;
    {
        const bool branch_taken_0x2eba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA68u;
        // 0x2eba6c: 0xa220029c  sb          $zero, 0x29C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba68) {
            ctx->pc = 0x2EBA80u;
            goto label_2eba80;
        }
    }
    ctx->pc = 0x2EBA70u;
label_2eba70:
    // 0x2eba70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eba74: 0xa2220298  sb          $v0, 0x298($s1)
    ctx->pc = 0x2eba74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 664), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eba78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2eba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eba7c: 0xa222029c  sb          $v0, 0x29C($s1)
    ctx->pc = 0x2eba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 668), (uint8_t)GPR_U32(ctx, 2));
label_2eba80:
    // 0x2eba80: 0xa220029d  sb          $zero, 0x29D($s1)
    ctx->pc = 0x2eba80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 669), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eba84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba88: 0xc0bb0b8  jal         func_2EC2E0
    ctx->pc = 0x2EBA88u;
    SET_GPR_U32(ctx, 31, 0x2EBA90u);
    ctx->pc = 0x2EBA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA88u;
    // 0x2eba8c: 0xa220029e  sb          $zero, 0x29E($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 670), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC2E0u, 0x2EBA88u, 0x2EBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA90u;
label_2eba90:
    // 0x2eba90: 0xa2220299  sb          $v0, 0x299($s1)
    ctx->pc = 0x2eba90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 665), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eba94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2eba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2eba98: 0xae2302a4  sw          $v1, 0x2A4($s1)
    ctx->pc = 0x2eba98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 3));
    // 0x2eba9c: 0xae3002a8  sw          $s0, 0x2A8($s1)
    ctx->pc = 0x2eba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 16));
    // 0x2ebaa0: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x2ebaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
    // 0x2ebaa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ebaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ebaa8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2ebaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2ebaac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ebaacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2ebab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBABCu;
        // 0x2ebac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBAC4u;
}
