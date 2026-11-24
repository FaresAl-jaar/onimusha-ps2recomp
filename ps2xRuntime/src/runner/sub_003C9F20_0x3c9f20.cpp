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

// Function: sub_003C9F20
// Address: 0x3c9f20 - 0x3c9fb4
void sub_003C9F20_0x3c9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9F20_0x3c9f20");
#endif

    switch (ctx->pc) {
        case 0x3c9f68u: goto label_3c9f68;
        case 0x3c9f88u: goto label_3c9f88;
        case 0x3c9fa0u: goto label_3c9fa0;
        default: break;
    }

    ctx->pc = 0x3c9f20u;

    // 0x3c9f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c9f24: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3c9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3c9f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c9f2c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3c9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3c9f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c9f34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9f38: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3c9f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3c9f3c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3c9f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3c9f40: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3c9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3c9f44: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3c9f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3c9f48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9F48u;
    {
        const bool branch_taken_0x3c9f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F48u;
        // 0x3c9f4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f48) {
            ctx->pc = 0x3C9F58u;
            goto label_3c9f58;
        }
    }
    ctx->pc = 0x3C9F50u;
    // 0x3c9f50: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3c9f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9f54: 0x0  nop
    ctx->pc = 0x3c9f54u;
    // NOP
label_3c9f58:
    // 0x3c9f58: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3c9f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3c9f5c: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x3c9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x3c9f60: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C9F60u;
    {
        const bool branch_taken_0x3c9f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F60u;
        // 0x3c9f64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f60) {
            ctx->pc = 0x3C9F98u;
            goto label_3c9f98;
        }
    }
    ctx->pc = 0x3C9F68u;
label_3c9f68:
    // 0x3c9f68: 0x92032b24  lbu         $v1, 0x2B24($s0)
    ctx->pc = 0x3c9f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3c9f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9f70: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3c9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3c9f74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c9f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9F78u;
    {
        const bool branch_taken_0x3c9f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F78u;
        // 0x3c9f7c: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f78) {
            ctx->pc = 0x3C9F88u;
            goto label_3c9f88;
        }
    }
    ctx->pc = 0x3C9F80u;
    // 0x3c9f80: 0xc0f2880  jal         func_3CA200
    ctx->pc = 0x3C9F80u;
    SET_GPR_U32(ctx, 31, 0x3C9F88u);
    ctx->pc = 0x3C9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9F80u;
    // 0x3c9f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA200u, 0x3C9F80u, 0x3C9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9F88u;
label_3c9f88:
    // 0x3c9f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c9f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c9f8c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x3c9f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c9f90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3C9F90u;
    {
        const bool branch_taken_0x3c9f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9f90) {
            ctx->pc = 0x3C9F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9f68;
        }
    }
    ctx->pc = 0x3C9F98u;
label_3c9f98:
    // 0x3c9f98: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3C9F98u;
    SET_GPR_U32(ctx, 31, 0x3C9FA0u);
    ctx->pc = 0x3C9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9F98u;
    // 0x3c9f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3C9F98u, 0x3C9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FA0u;
label_3c9fa0:
    // 0x3c9fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c9fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c9fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FACu;
        // 0x3c9fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9FB4u;
}
