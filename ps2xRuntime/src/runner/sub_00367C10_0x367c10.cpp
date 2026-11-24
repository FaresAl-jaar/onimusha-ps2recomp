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

// Function: sub_00367C10
// Address: 0x367c10 - 0x367ca4
void sub_00367C10_0x367c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367C10_0x367c10");
#endif

    switch (ctx->pc) {
        case 0x367c38u: goto label_367c38;
        case 0x367c6cu: goto label_367c6c;
        default: break;
    }

    ctx->pc = 0x367c10u;

    // 0x367c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x367c14: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x367c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x367c1c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x367c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x367c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x367c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x367c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c30: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x367C30u;
    SET_GPR_U32(ctx, 31, 0x367C38u);
    ctx->pc = 0x367C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C30u;
    // 0x367c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x367C30u, 0x367C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C38u;
label_367c38:
    // 0x367c38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x367C38u;
    {
        const bool branch_taken_0x367c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c38) {
            ctx->pc = 0x367C78u;
            goto label_367c78;
        }
    }
    ctx->pc = 0x367C40u;
    // 0x367c40: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x367c40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x367c44: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367c48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x367c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x367c4c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x367c4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x367c50: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x367c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x367c54: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x367c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x367c58: 0xa223000c  sb          $v1, 0xC($s1)
    ctx->pc = 0x367c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x367c5c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367c5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367c60: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x367c60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x367c64: 0xc0bd138  jal         func_2F44E0
    ctx->pc = 0x367C64u;
    SET_GPR_U32(ctx, 31, 0x367C6Cu);
    ctx->pc = 0x367C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C64u;
    // 0x367c68: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44E0u, 0x367C64u, 0x367C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C6Cu;
label_367c6c:
    // 0x367c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x367C6Cu;
    {
        const bool branch_taken_0x367c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C6Cu;
        // 0x367c70: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c6c) {
            ctx->pc = 0x367C90u;
            goto label_367c90;
        }
    }
    ctx->pc = 0x367C74u;
    // 0x367c74: 0x0  nop
    ctx->pc = 0x367c74u;
    // NOP
label_367c78:
    // 0x367c78: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x367c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x367c7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x367c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x367c80: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x367c80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x367c84: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x367c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x367c88: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x367c88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x367c8c: 0x0  nop
    ctx->pc = 0x367c8cu;
    // NOP
label_367c90:
    // 0x367c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x367c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x367C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C9Cu;
        // 0x367ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367CA4u;
}
