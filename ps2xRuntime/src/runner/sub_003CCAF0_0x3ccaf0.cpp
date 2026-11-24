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

// Function: sub_003CCAF0
// Address: 0x3ccaf0 - 0x3ccb60
void sub_003CCAF0_0x3ccaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCAF0_0x3ccaf0");
#endif

    switch (ctx->pc) {
        case 0x3ccb24u: goto label_3ccb24;
        case 0x3ccb2cu: goto label_3ccb2c;
        default: break;
    }

    ctx->pc = 0x3ccaf0u;

    // 0x3ccaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ccaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ccaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ccaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ccaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ccaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ccafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ccafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccb00: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CCB00u;
    {
        const bool branch_taken_0x3ccb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB00u;
        // 0x3ccb04: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb00) {
            ctx->pc = 0x3CCB50u;
            goto label_3ccb50;
        }
    }
    ctx->pc = 0x3CCB08u;
    // 0x3ccb08: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ccb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ccb0c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3ccb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3ccb10: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3ccb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3ccb14: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ccb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ccb18: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3ccb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3ccb1c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3CCB1Cu;
    SET_GPR_U32(ctx, 31, 0x3CCB24u);
    ctx->pc = 0x3CCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB1Cu;
    // 0x3ccb20: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3CCB1Cu, 0x3CCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB24u;
label_3ccb24:
    // 0x3ccb24: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3CCB24u;
    SET_GPR_U32(ctx, 31, 0x3CCB2Cu);
    ctx->pc = 0x3CCB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB24u;
    // 0x3ccb28: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3CCB24u, 0x3CCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB2Cu;
label_3ccb2c:
    // 0x3ccb2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ccb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ccb30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ccb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ccb34: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3ccb38: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ccb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ccb3c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3ccb40: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3ccb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ccb44: 0x2463a820  addiu       $v1, $v1, -0x57E0
    ctx->pc = 0x3ccb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944800));
    // 0x3ccb48: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ccb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ccb4c: 0x0  nop
    ctx->pc = 0x3ccb4cu;
    // NOP
label_3ccb50:
    // 0x3ccb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ccb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccb58: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB58u;
        // 0x3ccb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCB60u;
}
