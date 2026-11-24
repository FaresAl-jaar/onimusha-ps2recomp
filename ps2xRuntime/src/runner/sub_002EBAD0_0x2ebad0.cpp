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

// Function: sub_002EBAD0
// Address: 0x2ebad0 - 0x2ebb74
void sub_002EBAD0_0x2ebad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBAD0_0x2ebad0");
#endif

    switch (ctx->pc) {
        case 0x2ebb40u: goto label_2ebb40;
        default: break;
    }

    ctx->pc = 0x2ebad0u;

    // 0x2ebad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ebad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ebadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ebae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebae8: 0x808302e8  lb          $v1, 0x2E8($a0)
    ctx->pc = 0x2ebae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x2ebaec: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EBAECu;
    {
        const bool branch_taken_0x2ebaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBAECu;
        // 0x2ebaf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebaec) {
            ctx->pc = 0x2EBB30u;
            goto label_2ebb30;
        }
    }
    ctx->pc = 0x2EBAF4u;
    // 0x2ebaf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebaf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBAF8u;
    {
        const bool branch_taken_0x2ebaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebaf8) {
            ctx->pc = 0x2EBB20u;
            goto label_2ebb20;
        }
    }
    ctx->pc = 0x2EBB00u;
    // 0x2ebb00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebb04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB04u;
    {
        const bool branch_taken_0x2ebb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebb04) {
            ctx->pc = 0x2EBB20u;
            goto label_2ebb20;
        }
    }
    ctx->pc = 0x2EBB0Cu;
    // 0x2ebb0c: 0x0  nop
    ctx->pc = 0x2ebb0cu;
    // NOP
    // 0x2ebb10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebb14: 0xa22202e8  sb          $v0, 0x2E8($s1)
    ctx->pc = 0x2ebb14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 744), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebb18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBB18u;
    {
        const bool branch_taken_0x2ebb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB18u;
        // 0x2ebb1c: 0xa22002ec  sb          $zero, 0x2EC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 748), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb18) {
            ctx->pc = 0x2EBB30u;
            goto label_2ebb30;
        }
    }
    ctx->pc = 0x2EBB20u;
label_2ebb20:
    // 0x2ebb20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ebb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebb24: 0xa22202e8  sb          $v0, 0x2E8($s1)
    ctx->pc = 0x2ebb24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 744), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebb28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ebb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ebb2c: 0xa22202ec  sb          $v0, 0x2EC($s1)
    ctx->pc = 0x2ebb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 748), (uint8_t)GPR_U32(ctx, 2));
label_2ebb30:
    // 0x2ebb30: 0xa22002ed  sb          $zero, 0x2ED($s1)
    ctx->pc = 0x2ebb30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 749), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb38: 0xc0bb0b8  jal         func_2EC2E0
    ctx->pc = 0x2EBB38u;
    SET_GPR_U32(ctx, 31, 0x2EBB40u);
    ctx->pc = 0x2EBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB38u;
    // 0x2ebb3c: 0xa22002ee  sb          $zero, 0x2EE($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 750), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC2E0u, 0x2EBB38u, 0x2EBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB40u;
label_2ebb40:
    // 0x2ebb40: 0xa22202e9  sb          $v0, 0x2E9($s1)
    ctx->pc = 0x2ebb40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 745), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebb44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ebb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ebb48: 0xae2302f4  sw          $v1, 0x2F4($s1)
    ctx->pc = 0x2ebb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 756), GPR_U32(ctx, 3));
    // 0x2ebb4c: 0xae3002f8  sw          $s0, 0x2F8($s1)
    ctx->pc = 0x2ebb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 16));
    // 0x2ebb50: 0xae2002fc  sw          $zero, 0x2FC($s1)
    ctx->pc = 0x2ebb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 0));
    // 0x2ebb54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ebb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ebb58: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ebb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ebb5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ebb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2ebb60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebb68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB6Cu;
        // 0x2ebb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBB74u;
}
