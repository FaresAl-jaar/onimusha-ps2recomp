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

// Function: sub_0029CC20
// Address: 0x29cc20 - 0x29ccbc
void sub_0029CC20_0x29cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC20_0x29cc20");
#endif

    switch (ctx->pc) {
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc74u: goto label_29cc74;
        default: break;
    }

    ctx->pc = 0x29cc20u;

    // 0x29cc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29cc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29cc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29cc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29cc30: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29cc34: 0x9091000a  lbu         $s1, 0xA($a0)
    ctx->pc = 0x29cc34u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cc38: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29CC38u;
    {
        const bool branch_taken_0x29cc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC38u;
        // 0x29cc3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc38) {
            ctx->pc = 0x29CC80u;
            goto label_29cc80;
        }
    }
    ctx->pc = 0x29CC40u;
    // 0x29cc40: 0xc0a72d8  jal         func_29CB60
    ctx->pc = 0x29CC40u;
    SET_GPR_U32(ctx, 31, 0x29CC48u);
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x29CC40u, 0x29CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC48u;
label_29cc48:
    // 0x29cc48: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x29cc48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29cc4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc50: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CC50u;
    {
        const bool branch_taken_0x29cc50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC50u;
        // 0x29cc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc50) {
            ctx->pc = 0x29CC60u;
            goto label_29cc60;
        }
    }
    ctx->pc = 0x29CC58u;
    // 0x29cc58: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x29CC58u;
    SET_GPR_U32(ctx, 31, 0x29CC60u);
    ctx->pc = 0x29CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CAA0u, 0x29CC58u, 0x29CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC60u;
label_29cc60:
    // 0x29cc60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cc64: 0x16230010  bne         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29CC64u;
    {
        const bool branch_taken_0x29cc64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC64u;
        // 0x29cc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc64) {
            ctx->pc = 0x29CCA8u;
            goto label_29cca8;
        }
    }
    ctx->pc = 0x29CC6Cu;
    // 0x29cc6c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x29CC6Cu;
    SET_GPR_U32(ctx, 31, 0x29CC74u);
    ctx->pc = 0x29CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA30u, 0x29CC6Cu, 0x29CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC74u;
label_29cc74:
    // 0x29cc74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29CC74u;
    {
        const bool branch_taken_0x29cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc74) {
            ctx->pc = 0x29CCA8u;
            goto label_29cca8;
        }
    }
    ctx->pc = 0x29CC7Cu;
    // 0x29cc7c: 0x0  nop
    ctx->pc = 0x29cc7cu;
    // NOP
label_29cc80:
    // 0x29cc80: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29cc84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cc88: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CC88u;
    {
        const bool branch_taken_0x29cc88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC88u;
        // 0x29cc8c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc88) {
            ctx->pc = 0x29CC98u;
            goto label_29cc98;
        }
    }
    ctx->pc = 0x29CC90u;
    // 0x29cc90: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x29cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x29cc94: 0x0  nop
    ctx->pc = 0x29cc94u;
    // NOP
label_29cc98:
    // 0x29cc98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cc9c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CC9Cu;
    {
        const bool branch_taken_0x29cc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC9Cu;
        // 0x29cca0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc9c) {
            ctx->pc = 0x29CCA8u;
            goto label_29cca8;
        }
    }
    ctx->pc = 0x29CCA4u;
    // 0x29cca4: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x29cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_29cca8:
    // 0x29cca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29cca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ccac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ccacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ccb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ccb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ccb4: 0x3e00008  jr          $ra
    ctx->pc = 0x29CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB4u;
        // 0x29ccb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CCBCu;
}
